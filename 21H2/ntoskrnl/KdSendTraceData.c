/*
 * XREFs of KdSendTraceData @ 0x1409B82D0
 * Callers:
 *     EtwpSendTraceEvent @ 0x1405AAD98 (EtwpSendTraceEvent.c)
 *     EtwpSendBufferToDebugger @ 0x14093CE04 (EtwpSendBufferToDebugger.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     KdEnterDebugger @ 0x1409B8028 (KdEnterDebugger.c)
 *     KdExitDebugger @ 0x1409B8190 (KdExitDebugger.c)
 */

__int64 __fastcall KdSendTraceData(__int64 a1, unsigned int a2)
{
  __int64 v2; // rsi
  unsigned int v4; // edi
  _DWORD *v5; // rax
  __int64 v6; // rcx
  __int64 result; // rax
  char v8; // r15
  char *v9; // r14
  const void **v10; // rbx
  __int64 v11; // rax
  __int128 v12; // [rsp+28h] [rbp-39h] BYREF
  __int128 v13; // [rsp+38h] [rbp-29h] BYREF
  _DWORD v14[16]; // [rsp+48h] [rbp-19h] BYREF

  v2 = a2;
  v12 = 0LL;
  v13 = 0LL;
  memset(v14, 0, sizeof(v14));
  v4 = 0;
  if ( (_DWORD)v2 )
  {
    v5 = (_DWORD *)(a1 + 8);
    v6 = (unsigned int)v2;
    do
    {
      v4 += *v5;
      v5 += 4;
      --v6;
    }
    while ( v6 );
  }
  result = (unsigned int)(KdTransportMaxPacketSize - 64);
  if ( v4 <= (unsigned int)result )
  {
    v8 = KdEnterDebugger(0LL);
    v9 = (char *)&KdpMessageBuffer;
    if ( (_DWORD)v2 )
    {
      v10 = (const void **)(a1 + 8);
      do
      {
        memmove(v9, *(v10 - 1), *(unsigned int *)v10);
        v11 = *(unsigned int *)v10;
        v10 += 2;
        v9 += v11;
        --v2;
      }
      while ( v2 );
    }
    LOWORD(v14[1]) = KeProcessorLevel;
    v14[0] = 13104;
    HIWORD(v14[1]) = KeGetPcr()->Prcb.Number;
    *((_QWORD *)&v13 + 1) = v14;
    v14[2] = v4;
    LOWORD(v13) = 64;
    LOWORD(v12) = v4;
    *((_QWORD *)&v12 + 1) = &KdpMessageBuffer;
    KdSendPacket(9LL, &v13, &v12, &KdpContext);
    return KdExitDebugger(v8);
  }
  return result;
}
