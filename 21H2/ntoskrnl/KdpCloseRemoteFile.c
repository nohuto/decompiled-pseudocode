/*
 * XREFs of KdpCloseRemoteFile @ 0x1409B7970
 * Callers:
 *     KdPullRemoteFileEx @ 0x1409B7780 (KdPullRemoteFileEx.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     KdEnterDebugger @ 0x1409B8028 (KdEnterDebugger.c)
 *     KdExitDebugger @ 0x1409B8190 (KdExitDebugger.c)
 */

__int64 __fastcall KdpCloseRemoteFile(int a1)
{
  __int64 v1; // rbx
  char v3; // di
  __int64 v4; // rcx
  __int64 v5; // rax
  int v6; // eax
  int v7; // [rsp+38h] [rbp-39h] BYREF
  _DWORD v8[2]; // [rsp+40h] [rbp-31h] BYREF
  _QWORD *v9; // [rsp+48h] [rbp-29h]
  __int128 v10; // [rsp+50h] [rbp-21h] BYREF
  _QWORD v11[8]; // [rsp+68h] [rbp-9h] BYREF

  v1 = (unsigned int)(a1 - 1);
  memset(v11, 0, sizeof(v11));
  if ( (unsigned int)v1 >= 0x10 )
    return 3221225485LL;
  v3 = KdEnterDebugger(0LL, 0LL);
  v4 = KdpRemoteFiles[v1];
  if ( v4 )
  {
    for ( v11[1] = KdpRemoteFiles[v1]; ; v11[1] = v5 )
    {
      v8[1] = 0;
      v7 = 0;
      LODWORD(v11[0]) = 13363;
      v8[0] = 4194368;
      v9 = v11;
      v10 = 0LL;
      KdSendPacket(11LL, v8, 0LL, &KdpContext);
      if ( (_BYTE)KdDebuggerNotPresent )
      {
        v6 = -1073740972;
        HIDWORD(v11[0]) = -1073740972;
        goto LABEL_10;
      }
      WORD1(v10) = 4096;
      *((_QWORD *)&v10 + 1) = &KdpMessageBuffer;
      if ( !(unsigned int)KdReceivePacket(11LL, v8, &v10, &v7, &KdpContext) )
        break;
      v5 = KdpRemoteFiles[v1];
      HIDWORD(v11[0]) = 0;
    }
    v6 = HIDWORD(v11[0]);
LABEL_10:
    if ( v6 >= 0 )
      KdpRemoteFiles[v1] = 0LL;
  }
  else
  {
    HIDWORD(v11[0]) = -1073741811;
  }
  LOBYTE(v4) = v3;
  KdExitDebugger(v4);
  return HIDWORD(v11[0]);
}
