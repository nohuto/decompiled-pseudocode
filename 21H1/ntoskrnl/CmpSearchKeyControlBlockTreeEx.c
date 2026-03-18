/*
 * XREFs of CmpSearchKeyControlBlockTreeEx @ 0x14086ABD4
 * Callers:
 *     CmpDoParseKey @ 0x140624810 (CmpDoParseKey.c)
 *     CmKeyBodyReplicateToVirtual @ 0x1406D0150 (CmKeyBodyReplicateToVirtual.c)
 *     CmpCommitDiscardReplacePost @ 0x1408718A0 (CmpCommitDiscardReplacePost.c)
 *     CmpRefreshHive @ 0x140878C04 (CmpRefreshHive.c)
 *     CmpCommitRenameKeyUoW @ 0x14087A2A8 (CmpCommitRenameKeyUoW.c)
 *     CmpLightWeightCommitRenameKeyUoW @ 0x14087AB10 (CmpLightWeightCommitRenameKeyUoW.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x14061C14C (CmpCleanUpKcbCacheWithLock.c)
 *     CmpAttachToRegistryProcess @ 0x14061FF00 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockKcb @ 0x140626230 (CmpUnlockKcb.c)
 *     CmpFreeKeyControlBlock @ 0x140659940 (CmpFreeKeyControlBlock.c)
 *     CmpRemoveFromDelayedClose @ 0x140659A10 (CmpRemoveFromDelayedClose.c)
 *     CmpLockKcbExclusive @ 0x140695D18 (CmpLockKcbExclusive.c)
 *     CmpReferenceHive @ 0x140695E40 (CmpReferenceHive.c)
 *     CmpUnlockHashEntryByIndex @ 0x14087148C (CmpUnlockHashEntryByIndex.c)
 */

char __fastcall CmpSearchKeyControlBlockTreeEx(
        __int64 (__fastcall *a1)(ULONG_PTR, ULONG_PTR, __int64, _DWORD *),
        ULONG_PTR a2,
        __int64 a3,
        _DWORD *a4,
        char a5)
{
  __int64 v5; // r12
  unsigned int v6; // r13d
  __int64 v8; // r8
  _DWORD *v9; // r9
  char v10; // di
  unsigned int v11; // ebp
  __int64 v12; // r14
  ULONG_PTR v13; // rbx
  _QWORD *v14; // r12
  __int64 *v15; // r14
  __int64 v16; // rax
  ULONG_PTR v17; // rbx
  __int64 v18; // r13
  int v19; // eax
  unsigned int v21; // [rsp+30h] [rbp-B8h]
  _QWORD *v22; // [rsp+38h] [rbp-B0h]
  __int64 v26; // [rsp+58h] [rbp-90h]
  _OWORD v27[3]; // [rsp+60h] [rbp-88h] BYREF

  v5 = *(_QWORD *)(a2 + 1640);
  v6 = *(_DWORD *)(a2 + 1648);
  v26 = v5;
  memset(v27, 0, sizeof(v27));
  v21 = v6;
  CmpAttachToRegistryProcess((__int64)v27, a2, a3, a4);
  v10 = 0;
  v11 = 0;
  if ( !v6 )
  {
LABEL_35:
    KiUnstackDetachProcess((__int64)v27, 0LL, v8, v9);
    return 1;
  }
  while ( 1 )
  {
    v12 = 24LL * v11;
    if ( a5 )
    {
      v13 = v12 + *(_QWORD *)(a2 + 1640);
      ExAcquirePushLockExclusiveEx(v13, 0LL);
      *(_QWORD *)(v13 + 8) = KeGetCurrentThread();
      if ( !CmpReferenceHive(a2) )
        KeBugCheckEx(0x51u, 0x17uLL, a2, 0xBuLL, v11);
    }
    v14 = (_QWORD *)(v12 + 16 + v5);
    v22 = v14;
    v15 = v14;
    v16 = *v14;
    if ( *v14 )
      break;
LABEL_24:
    if ( a5 )
      CmpUnlockHashEntryByIndex((PVOID)a2);
    if ( ++v11 >= v6 )
      goto LABEL_35;
    v5 = v26;
  }
  while ( 1 )
  {
    v17 = v16 - 16;
    if ( a5 )
      CmpLockKcbExclusive(v16 - 16);
    if ( !*(_QWORD *)v17 )
    {
      CmpRemoveFromDelayedClose(v17);
      CmpCleanUpKcbCacheWithLock(v17, a3);
      if ( a5 )
      {
        CmpUnlockKcb(v17);
      }
      else if ( (*(_DWORD *)(v17 + 8) & 0x80000) != 0 )
      {
        CmpFreeKeyControlBlock(v17);
      }
      v15 = v14;
      goto LABEL_22;
    }
    v18 = *(_QWORD *)(v17 + 24);
    v19 = a1(v17, a2, a3, a4);
    if ( v19 == 1 )
      break;
    if ( v19 == 3 )
    {
      if ( a5 )
        CmpUnlockKcb(v17);
      goto LABEL_34;
    }
    if ( v19 == 2 )
    {
      if ( a5 )
        CmpUnlockKcb(v17);
      *v15 = v18;
    }
    else
    {
      v15 = (__int64 *)(v17 + 24);
      if ( a5 )
        CmpUnlockKcb(v17);
    }
    v14 = v22;
LABEL_22:
    v16 = *v15;
    if ( !*v15 )
    {
      v6 = v21;
      goto LABEL_24;
    }
  }
  if ( a5 )
    CmpUnlockKcb(v17);
  v10 = 1;
LABEL_34:
  CmpUnlockHashEntryByIndex((PVOID)a2);
  return v10;
}
