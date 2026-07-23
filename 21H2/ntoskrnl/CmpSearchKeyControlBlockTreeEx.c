/*
 * XREFs of CmpSearchKeyControlBlockTreeEx @ 0x14086F334
 * Callers:
 *     CmpSearchKeyControlBlockTree @ 0x14086F314 (CmpSearchKeyControlBlockTree.c)
 *     CmpCommitDiscardReplacePost @ 0x140876180 (CmpCommitDiscardReplacePost.c)
 *     CmpLightWeightCommitRenameKeyUoW @ 0x14087F024 (CmpLightWeightCommitRenameKeyUoW.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1402AB900 (KiUnstackDetachProcess.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     CmpFreeKeyControlBlock @ 0x1405E0C60 (CmpFreeKeyControlBlock.c)
 *     CmpRemoveFromDelayedClose @ 0x1405E0D30 (CmpRemoveFromDelayedClose.c)
 *     CmpReferenceHive @ 0x1406DBA08 (CmpReferenceHive.c)
 *     CmpLockKcbExclusive @ 0x1406DBABC (CmpLockKcbExclusive.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x1406DDFD4 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpAttachToRegistryProcess @ 0x1406E5AF0 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockKcb @ 0x140709F20 (CmpUnlockKcb.c)
 *     CmpUnlockHashEntryByIndex @ 0x140875D1C (CmpUnlockHashEntryByIndex.c)
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
    KiUnstackDetachProcess((__int64)v25, 0LL);
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
