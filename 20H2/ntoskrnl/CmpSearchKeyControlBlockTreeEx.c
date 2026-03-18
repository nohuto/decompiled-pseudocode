/*
 * XREFs of CmpSearchKeyControlBlockTreeEx @ 0x1408719A4
 * Callers:
 *     CmpDoParseKey @ 0x140619BF0 (CmpDoParseKey.c)
 *     CmKeyBodyReplicateToVirtual @ 0x1406C4A0C (CmKeyBodyReplicateToVirtual.c)
 *     CmpCommitDiscardReplacePost @ 0x1408786E0 (CmpCommitDiscardReplacePost.c)
 *     CmpRefreshHive @ 0x14087FA64 (CmpRefreshHive.c)
 *     CmpCommitRenameKeyUoW @ 0x140881108 (CmpCommitRenameKeyUoW.c)
 *     CmpLightWeightCommitRenameKeyUoW @ 0x1408819A4 (CmpLightWeightCommitRenameKeyUoW.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     KiUnstackDetachProcess @ 0x140268320 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     CmpUnlockKcb @ 0x140613840 (CmpUnlockKcb.c)
 *     CmpReferenceHive @ 0x140670AB8 (CmpReferenceHive.c)
 *     CmpLockKcbExclusive @ 0x140670B6C (CmpLockKcbExclusive.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x140672204 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpAttachToRegistryProcess @ 0x1406790E0 (CmpAttachToRegistryProcess.c)
 *     CmpFreeKeyControlBlock @ 0x1406A38E0 (CmpFreeKeyControlBlock.c)
 *     CmpRemoveFromDelayedClose @ 0x1406A39B0 (CmpRemoveFromDelayedClose.c)
 *     CmpUnlockHashEntryByIndex @ 0x1408782D0 (CmpUnlockHashEntryByIndex.c)
 */

char __fastcall CmpSearchKeyControlBlockTreeEx(
        __int64 (__fastcall *a1)(ULONG_PTR, ULONG_PTR, __int64, __int64),
        ULONG_PTR a2,
        __int64 a3,
        __int64 a4,
        char a5)
{
  __int64 v5; // r12
  unsigned int v6; // r13d
  char v8; // di
  unsigned int v9; // ebp
  __int64 v10; // r14
  ULONG_PTR v11; // rbx
  _QWORD *v12; // r12
  __int64 *v13; // r14
  __int64 v14; // rax
  ULONG_PTR v15; // rbx
  __int64 v16; // r13
  int v17; // eax
  unsigned int v19; // [rsp+30h] [rbp-B8h]
  _QWORD *v20; // [rsp+38h] [rbp-B0h]
  __int64 v24; // [rsp+58h] [rbp-90h]
  _OWORD v25[3]; // [rsp+60h] [rbp-88h] BYREF

  v5 = *(_QWORD *)(a2 + 1640);
  v6 = *(_DWORD *)(a2 + 1648);
  v24 = v5;
  memset(v25, 0, sizeof(v25));
  v19 = v6;
  CmpAttachToRegistryProcess((__int64)v25);
  v8 = 0;
  v9 = 0;
  if ( !v6 )
  {
LABEL_35:
    KiUnstackDetachProcess((__int64)v25, 0);
    return 1;
  }
  while ( 1 )
  {
    v10 = 24LL * v9;
    if ( a5 )
    {
      v11 = v10 + *(_QWORD *)(a2 + 1640);
      ExAcquirePushLockExclusiveEx(v11, 0LL);
      *(_QWORD *)(v11 + 8) = KeGetCurrentThread();
      if ( !CmpReferenceHive(a2) )
        KeBugCheckEx(0x51u, 0x17uLL, a2, 0xBuLL, v9);
    }
    v12 = (_QWORD *)(v10 + 16 + v5);
    v20 = v12;
    v13 = v12;
    v14 = *v12;
    if ( *v12 )
      break;
LABEL_24:
    if ( a5 )
      CmpUnlockHashEntryByIndex((PVOID)a2);
    if ( ++v9 >= v6 )
      goto LABEL_35;
    v5 = v24;
  }
  while ( 1 )
  {
    v15 = v14 - 16;
    if ( a5 )
      CmpLockKcbExclusive(v14 - 16);
    if ( !*(_QWORD *)v15 )
    {
      CmpRemoveFromDelayedClose(v15);
      CmpCleanUpKcbCacheWithLock(v15, a3);
      if ( a5 )
      {
        CmpUnlockKcb(v15);
      }
      else if ( (*(_DWORD *)(v15 + 8) & 0x80000) != 0 )
      {
        CmpFreeKeyControlBlock(v15);
      }
      v13 = v12;
      goto LABEL_22;
    }
    v16 = *(_QWORD *)(v15 + 24);
    v17 = a1(v15, a2, a3, a4);
    if ( v17 == 1 )
      break;
    if ( v17 == 3 )
    {
      if ( a5 )
        CmpUnlockKcb(v15);
      goto LABEL_34;
    }
    if ( v17 == 2 )
    {
      if ( a5 )
        CmpUnlockKcb(v15);
      *v13 = v16;
    }
    else
    {
      v13 = (__int64 *)(v15 + 24);
      if ( a5 )
        CmpUnlockKcb(v15);
    }
    v12 = v20;
LABEL_22:
    v14 = *v13;
    if ( !*v13 )
    {
      v6 = v19;
      goto LABEL_24;
    }
  }
  if ( a5 )
    CmpUnlockKcb(v15);
  v8 = 1;
LABEL_34:
  CmpUnlockHashEntryByIndex((PVOID)a2);
  return v8;
}
