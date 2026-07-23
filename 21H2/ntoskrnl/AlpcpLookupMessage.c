/*
 * XREFs of AlpcpLookupMessage @ 0x1406D5FD0
 * Callers:
 *     NtAlpcQueryInformationMessage @ 0x1405E31B0 (NtAlpcQueryInformationMessage.c)
 *     AlpcpReceiveDirectMessagePort @ 0x1405F30D0 (AlpcpReceiveDirectMessagePort.c)
 *     NtAlpcOpenSenderThread @ 0x14060B130 (NtAlpcOpenSenderThread.c)
 *     NtAlpcCancelMessage @ 0x140620390 (NtAlpcCancelMessage.c)
 *     NtAlpcOpenSenderProcess @ 0x1406CF700 (NtAlpcOpenSenderProcess.c)
 *     AlpcpAcceptConnectPort @ 0x1406D079C (AlpcpAcceptConnectPort.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x1406D133C (AlpcpReplyLegacySynchronousRequest.c)
 *     AlpcpSendMessage @ 0x1406D3F60 (AlpcpSendMessage.c)
 *     NtAlpcImpersonateClientOfPort @ 0x1406D9170 (NtAlpcImpersonateClientOfPort.c)
 *     LpcpCopyRequestData @ 0x1408C1DAC (LpcpCopyRequestData.c)
 *     NtAlpcImpersonateClientContainerOfPort @ 0x1408C2690 (NtAlpcImpersonateClientContainerOfPort.c)
 * Callees:
 *     ExHandleLogBadReference @ 0x1402011C8 (ExHandleLogBadReference.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExfUnblockPushLock @ 0x1403F96E0 (ExfUnblockPushLock.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     ExpBlockOnLockedHandleEntry @ 0x1405E2998 (ExpBlockOnLockedHandleEntry.c)
 *     AlpcReferenceBlobByHandle @ 0x140655760 (AlpcReferenceBlobByHandle.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x1406D0224 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpUnlockMessage @ 0x1406D962C (AlpcpUnlockMessage.c)
 *     AlpcpDereferenceBlobEx @ 0x1406D9720 (AlpcpDereferenceBlobEx.c)
 *     ExpLookupHandleTableEntry @ 0x1407085D0 (ExpLookupHandleTableEntry.c)
 */

__int64 __fastcall AlpcpLookupMessage(__int64 a1, int a2, int a3, __int64 a4, ULONG_PTR *a5)
{
  ULONG_PTR v8; // r14
  ULONG_PTR v9; // rbx
  char PreviousMode; // r12
  __int64 *v11; // rdi
  __int64 v12; // r8
  ULONG_PTR v13; // rbx
  __int64 BugCheckParameter4; // rax
  bool v15; // zf
  __int64 v16; // rdx
  signed __int64 v17; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  ULONG_PTR v21; // rax
  ULONG_PTR v22; // rdi
  signed __int32 v23; // eax
  signed __int32 v24[8]; // [rsp+0h] [rbp-48h] BYREF

  if ( a2 < 0 )
  {
    if ( a1 )
    {
      v20 = *(_QWORD *)(a1 + 16);
      if ( !v20 )
        return 3221226224LL;
      v21 = AlpcReferenceBlobByHandle((_QWORD *)(v20 + 40), a2 & 0x7FFFFFFF, AlpcReserveType);
      v22 = v21;
      if ( !v21 )
        return 3221226224LL;
      v13 = *(_QWORD *)(v21 + 24);
      AlpcpLockForCachedReferenceBlob(v13);
      if ( !_InterlockedCompareExchange((volatile signed __int32 *)(v22 + 40), 1, 0) )
      {
        *(_DWORD *)(v13 + 264) &= ~0x80000000;
        do
          v23 = _InterlockedIncrement(&AlpcpNextCallbackId);
        while ( !v23 );
        *(_DWORD *)(v13 + 272) = v23;
        goto LABEL_25;
      }
      AlpcpUnlockMessage(v13);
      AlpcpDereferenceBlobEx(v22);
      return 3221227272LL;
    }
    return 3221227266LL;
  }
  if ( (a2 & 0xFC000000) != 0 )
  {
    if ( !AlpcpSecondaryMessageTables )
      return 3221227266LL;
    v8 = *(_QWORD *)(AlpcpSecondaryMessageTables + 8 * ((unsigned __int64)(unsigned int)a2 >> 26));
  }
  else
  {
    v8 = AlpcMessageTable;
  }
  if ( !v8 )
    return 3221227266LL;
  v9 = a2 & 0x3FFFFFF;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( (a2 & 0x3FC) == 0 || (v11 = (__int64 *)ExpLookupHandleTableEntry(v8, (unsigned int)v9)) == 0LL )
  {
LABEL_31:
    ExHandleLogBadReference(v8, v9, PreviousMode);
    return 3221227266LL;
  }
  do
  {
    while ( 1 )
    {
      _m_prefetchw(v11);
      v12 = *v11;
      if ( (*v11 & 1) != 0 )
        break;
      if ( !v12 )
        goto LABEL_31;
      ExpBlockOnLockedHandleEntry(v8, v11, v12);
    }
  }
  while ( v12 != _InterlockedCompareExchange64(v11, v12 - 1, v12) );
  v13 = (*v11 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
  if ( *(_DWORD *)(v13 + 0x108) != a2 || a3 && *(_DWORD *)(((*v11 >> 16) & 0xFFFFFFFFFFFFFFF0uLL) + 0x110) != a3 )
    goto LABEL_40;
  _m_prefetchw((const void *)(v13 - 24));
  BugCheckParameter4 = *(_QWORD *)(v13 - 24);
  v15 = BugCheckParameter4 == 0;
  if ( BugCheckParameter4 <= 0 )
  {
LABEL_50:
    if ( !v15 )
      KeBugCheckEx(0x18u, 0LL, v13, 0x20uLL, BugCheckParameter4);
LABEL_40:
    _InterlockedExchangeAdd64(v11, 1uLL);
    _InterlockedOr(v24, 0);
    if ( *(_QWORD *)(v8 + 48) )
      ExfUnblockPushLock((volatile __int64 *)(v8 + 48), 0LL);
    return 3221227266LL;
  }
  while ( 1 )
  {
    v16 = BugCheckParameter4;
    BugCheckParameter4 = _InterlockedCompareExchange64(
                           (volatile signed __int64 *)(v13 - 24),
                           BugCheckParameter4 + 1,
                           BugCheckParameter4);
    if ( BugCheckParameter4 == v16 )
      break;
    if ( BugCheckParameter4 <= 0 )
    {
      v15 = BugCheckParameter4 == 0;
      goto LABEL_50;
    }
  }
  if ( BugCheckParameter4 == -1 )
    goto LABEL_40;
  ExAcquirePushLockExclusiveEx(v13 - 16, 0LL);
  *(_BYTE *)(v13 - 32) |= 1u;
  v17 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v13 - 24), 0x10000uLL) + 0x10000;
  if ( v17 <= 0 )
    KeBugCheckEx(0x18u, 0LL, v13, 0x26uLL, v17);
  --*(_WORD *)(v13 - 30);
  _InterlockedExchangeAdd64(v11, 1uLL);
  _InterlockedOr(v24, 0);
  if ( *(_QWORD *)(v8 + 48) )
    ExfUnblockPushLock((volatile __int64 *)(v8 + 48), 0LL);
  if ( *(_DWORD *)(v13 + 264) != a2
    || a3 && *(_DWORD *)(v13 + 272) != a3
    || !*(_QWORD *)(v13 + 24) && !*(_QWORD *)(v13 + 16) )
  {
    AlpcpUnlockMessage(v13);
    return 3221227266LL;
  }
  if ( a1 )
  {
    if ( *(_QWORD *)(v13 + 184) == *(_QWORD *)(a1 + 16) || *(_QWORD *)(v13 + 192) == a1 )
    {
LABEL_25:
      *a5 = v13;
      return 0LL;
    }
  }
  else
  {
    v19 = *(_QWORD *)(v13 + 16);
    if ( v19 && *(_KPROCESS **)(v19 + 24) == KeGetCurrentThread()->ApcState.Process )
      goto LABEL_25;
  }
  AlpcpUnlockMessage(v13);
  return 3221225506LL;
}
