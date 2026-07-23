/*
 * XREFs of KdpReadRemoteFile @ 0x1409B7DFC
 * Callers:
 *     KdPullRemoteFileEx @ 0x1409B7780 (KdPullRemoteFileEx.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     KdEnterDebugger @ 0x1409B8028 (KdEnterDebugger.c)
 *     KdExitDebugger @ 0x1409B8190 (KdExitDebugger.c)
 */

__int64 __fastcall KdpReadRemoteFile(int a1, __int64 a2, __int64 a3, unsigned int a4, _DWORD *a5)
{
  __int64 v5; // rbx
  int v9; // esi
  __int64 v11; // rcx
  char v12; // r12
  __int64 v13; // rax
  unsigned int v14; // [rsp+30h] [rbp-71h] BYREF
  _DWORD v15[2]; // [rsp+38h] [rbp-69h] BYREF
  _QWORD *v16; // [rsp+40h] [rbp-61h]
  __int128 v17; // [rsp+48h] [rbp-59h] BYREF
  _QWORD v18[8]; // [rsp+60h] [rbp-41h] BYREF

  v5 = (unsigned int)(a1 - 1);
  memset(v18, 0, sizeof(v18));
  v9 = 0;
  if ( (unsigned int)v5 >= 0x10 )
    return 3221225485LL;
  v12 = KdEnterDebugger(0LL, 0LL);
  if ( KdpRemoteFiles[v5] )
  {
    if ( a4 )
    {
      while ( 1 )
      {
        v13 = KdpRemoteFiles[v5];
        v15[1] = 0;
        v14 = 0;
        v18[1] = v13;
        v17 = 0LL;
        v18[0] = 13361LL;
        v18[2] = a2;
        LODWORD(v18[3]) = a4 <= (unsigned __int64)(unsigned int)KdTransportMaxPacketSize - 64
                        ? a4
                        : KdTransportMaxPacketSize - 64;
        v15[0] = 4194368;
        v16 = v18;
        KdSendPacket(11LL, v15, 0LL, &KdpContext);
        if ( (_BYTE)KdDebuggerNotPresent )
          break;
        WORD1(v17) = v18[3];
        *((_QWORD *)&v17 + 1) = a3;
        if ( !(unsigned int)KdReceivePacket(11LL, v15, &v17, &v14, &KdpContext) )
        {
          if ( v18[0] < 0 )
            goto LABEL_16;
          v11 = v14;
          v9 += v14;
          a3 += v14;
          a2 += v14;
          a4 -= v14;
        }
        if ( !a4 )
          goto LABEL_16;
      }
      HIDWORD(v18[0]) = -1073740972;
    }
LABEL_16:
    *a5 = v9;
  }
  else
  {
    HIDWORD(v18[0]) = -1073741811;
  }
  LOBYTE(v11) = v12;
  KdExitDebugger(v11);
  return HIDWORD(v18[0]);
}
