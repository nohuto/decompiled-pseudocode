/*
 * XREFs of KdpCreateRemoteFile @ 0x140A6F444
 * Callers:
 *     KdPullRemoteFileEx @ 0x140A6F360 (KdPullRemoteFileEx.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     KdpCopyMemoryChunks @ 0x140A6F124 (KdpCopyMemoryChunks.c)
 *     KdEnterDebugger @ 0x140A6F7A0 (KdEnterDebugger.c)
 *     KdExitDebugger @ 0x140A6F900 (KdExitDebugger.c)
 */

__int64 __fastcall KdpCreateRemoteFile(__int64 *a1, __int64 *a2, unsigned __int16 *a3)
{
  char v6; // si
  __int64 v7; // rcx
  unsigned int v8; // ebx
  unsigned int v9; // r8d
  char *v10; // rcx
  int v11; // eax
  int v12; // eax
  __int64 v14; // rax
  __int64 v15; // [rsp+20h] [rbp-89h]
  __int64 v16; // [rsp+28h] [rbp-81h]
  int v17; // [rsp+30h] [rbp-79h] BYREF
  __int128 v18; // [rsp+38h] [rbp-71h] BYREF
  _QWORD v19[3]; // [rsp+48h] [rbp-61h] BYREF
  _QWORD v20[8]; // [rsp+60h] [rbp-49h] BYREF

  memset(v20, 0, sizeof(v20));
  if ( *a3 > (unsigned __int64)(unsigned int)KdTransportMaxPacketSize - 64 )
    return 3221225485LL;
  if ( (_BYTE)KdDebuggerNotPresent )
    return 3221226324LL;
  v6 = KdEnterDebugger(0LL, 0LL);
  v7 = (__int64)KdpRemoteFiles;
  v8 = 0;
  while ( *(_QWORD *)v7 )
  {
    ++v8;
    v7 += 8LL;
    if ( v8 >= 0x10 )
    {
      HIDWORD(v20[0]) = -1073741801;
      goto LABEL_9;
    }
  }
  while ( 1 )
  {
    v9 = *a3;
    v19[1] = v20;
    v19[0] = 4194368LL;
    v10 = (char *)*((_QWORD *)a3 + 1);
    v18 = 0LL;
    v17 = 0;
    v20[0] = 13360LL;
    v20[1] = 0x8000120089LL;
    LODWORD(v20[2]) = 1;
    *(_QWORD *)((char *)&v20[2] + 4) = 1LL;
    KdpCopyMemoryChunks(v10, (__int64)&KdpMessageBuffer, v9, 0, 4, &v17);
    LOWORD(v18) = v17 + 2;
    *((_QWORD *)&v18 + 1) = &KdpMessageBuffer;
    *(_WORD *)((char *)&KdpMessageBuffer + (unsigned __int16)(v17 + 2) - 2) = 0;
    KdSendPacket(11LL, v19, &v18, &KdpContext, v15, v16);
    if ( (_BYTE)KdDebuggerNotPresent )
      break;
    WORD1(v18) = 12288;
    *((_QWORD *)&v18 + 1) = &KdpMessageBuffer;
    v11 = KdReceivePacket(11LL, v19, &v18, &v17, &KdpContext);
    v7 = (__int64)&KdpMessageBuffer;
    if ( !v11 )
    {
      v12 = HIDWORD(v20[0]);
      goto LABEL_8;
    }
  }
  v12 = -1073740972;
  HIDWORD(v20[0]) = -1073740972;
LABEL_8:
  if ( v12 >= 0 )
  {
    KdpRemoteFiles[v8] = v20[4];
    v7 = v8 + 1;
    *a1 = v7;
    if ( a2 )
    {
      v14 = v20[5];
      v7 = 4096LL;
      if ( v20[5] >= 0x10000000uLL )
        v14 = 4096LL;
      *a2 = v14;
    }
  }
LABEL_9:
  LOBYTE(v7) = v6;
  KdExitDebugger(v7);
  return HIDWORD(v20[0]);
}
