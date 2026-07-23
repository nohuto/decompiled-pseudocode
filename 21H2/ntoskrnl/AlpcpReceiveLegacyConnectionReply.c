/*
 * XREFs of AlpcpReceiveLegacyConnectionReply @ 0x1406CD2C0
 * Callers:
 *     NtSecureConnectPort @ 0x1406CD3F0 (NtSecureConnectPort.c)
 * Callees:
 *     AlpcpQueryRemoteView @ 0x1406CD184 (AlpcpQueryRemoteView.c)
 *     AlpcpGetDataFromUserVaSafe @ 0x1406D31BC (AlpcpGetDataFromUserVaSafe.c)
 *     AlpcpReceiveSynchronousReply @ 0x1406D6CC0 (AlpcpReceiveSynchronousReply.c)
 *     AlpcpReadMessageData @ 0x1406D6F60 (AlpcpReadMessageData.c)
 *     AlpcpUnlockMessage @ 0x1406D962C (AlpcpUnlockMessage.c)
 */

__int64 __fastcall AlpcpReceiveLegacyConnectionReply(
        __int64 *a1,
        __int64 a2,
        _WORD *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v8; // r15
  __int64 v9; // rbx
  int v10; // eax
  int RemoteView; // esi
  ULONG_PTR v12; // rbx
  __int64 v13; // rcx
  __int16 v14; // r14
  unsigned int v15; // eax
  ULONG_PTR v16; // rcx
  ULONG_PTR BugCheckParameter2; // [rsp+30h] [rbp-38h] BYREF
  _BYTE v19[16]; // [rsp+38h] [rbp-30h] BYREF
  __int64 v20; // [rsp+48h] [rbp-20h]

  v8 = a2;
  LOBYTE(a2) = KeGetCurrentThread()->PreviousMode;
  BugCheckParameter2 = 0LL;
  v9 = *a1;
  v10 = AlpcpReceiveSynchronousReply((int)a1, a2, (int)&BugCheckParameter2, 0, 0LL);
  RemoteView = v10;
  if ( !v10 )
  {
    if ( a4 )
    {
      v20 = 0LL;
      RemoteView = AlpcpQueryRemoteView(v9, a4, (__int64)v19);
      if ( RemoteView < 0 )
      {
        v16 = BugCheckParameter2;
LABEL_17:
        AlpcpUnlockMessage(v16);
        return (unsigned int)RemoteView;
      }
      *(_QWORD *)(a5 + 40) = v20;
    }
    v12 = BugCheckParameter2;
    if ( a6 )
    {
      v13 = *(_QWORD *)(BugCheckParameter2 + 144);
      if ( v13 )
      {
        *(_DWORD *)a6 = 24;
        *(_QWORD *)(a6 + 16) = *(_QWORD *)(v13 + 40);
        *(_QWORD *)(a6 + 8) = *(_QWORD *)(*(_QWORD *)(v13 + 16) + 40LL);
      }
    }
    if ( v8 )
    {
      v14 = 0;
      v15 = *(unsigned __int16 *)(v12 + 240);
      if ( *(_DWORD *)a3 < v15 )
      {
        v14 = *(_WORD *)(v12 + 240);
        *(_WORD *)(v12 + 240) = *a3;
      }
      else
      {
        *(_DWORD *)a3 = v15;
      }
      if ( *(_QWORD *)(v12 + 176) )
        AlpcpGetDataFromUserVaSafe(v12, v8);
      else
        AlpcpReadMessageData(v12, v8);
      if ( v14 )
        *(_WORD *)(v12 + 240) = v14;
    }
    v16 = v12;
    goto LABEL_17;
  }
  if ( (*(_DWORD *)(v9 + 416) & 0x10) != 0 || v10 == -1073740031 )
    return (unsigned int)-1073741759;
  return (unsigned int)RemoteView;
}
