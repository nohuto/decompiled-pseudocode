/*
 * XREFs of KdpRestoreBreakPointEx @ 0x1409B8F08
 * Callers:
 *     KdpSendWaitContinue @ 0x1409B94F4 (KdpSendWaitContinue.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KdpCopyMemoryChunks @ 0x1409BAB9C (KdpCopyMemoryChunks.c)
 *     KdpDeleteBreakpoint @ 0x1409BB248 (KdpDeleteBreakpoint.c)
 */

__int64 __fastcall KdpRestoreBreakPointEx(__int64 a1, PVOID *a2)
{
  unsigned int v3; // edx
  char *v5; // rsi
  unsigned int i; // edi
  __int64 v8; // [rsp+30h] [rbp-C8h] BYREF
  _QWORD v9[3]; // [rsp+38h] [rbp-C0h] BYREF
  char v10; // [rsp+50h] [rbp-A8h] BYREF

  LODWORD(v8) = 0;
  v3 = *(_DWORD *)(a1 + 16);
  v9[0] = 56LL;
  v9[1] = a1;
  if ( *(unsigned __int16 *)a2 == 4LL * v3
    && (KdpCopyMemoryChunks(a2[1], 4, (__int64)&v8), (unsigned int)v8 == 4LL * *(unsigned int *)(a1 + 16)) )
  {
    *(_DWORD *)(a1 + 8) = 0;
    v5 = &v10;
    for ( i = 0; i < *(_DWORD *)(a1 + 16); v5 += 4 )
    {
      if ( !(unsigned __int8)KdpDeleteBreakpoint(*(unsigned int *)v5) )
        *(_DWORD *)(a1 + 8) = -1073741823;
      ++i;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 8) = -1073741823;
  }
  return KdSendPacket(2LL, v9, a2, &KdpContext);
}
