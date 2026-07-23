/*
 * XREFs of EmpRuleUpdateWorkerThread @ 0x1403C3350
 * Callers:
 *     <none>
 * Callees:
 *     MiGetSystemRegionType @ 0x140207A80 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140207E30 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140207F90 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x140272F70 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x140273D40 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     EmpUpdateRuleState @ 0x1402DCC8C (EmpUpdateRuleState.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

char EmpRuleUpdateWorkerThread()
{
  __int64 *v0; // r14
  unsigned int i; // r12d
  char v2; // al
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int SessionId; // r8d
  unsigned __int8 v5; // r15
  unsigned int v6; // edx
  bool v7; // zf
  __int64 v8; // rcx
  __int64 v9; // rdi
  int v10; // eax
  unsigned int v11; // ecx
  __int64 v12; // rdx
  __int64 v13; // rcx
  char v14; // al
  struct _KTHREAD *v15; // rbx
  unsigned int v16; // edx
  unsigned __int8 v17; // r15
  unsigned int v18; // r8d
  __int64 v19; // rcx
  __int64 v20; // rdi
  int v21; // eax
  unsigned int v22; // ecx
  __int64 v23; // rdx
  __int64 v24; // rcx
  char v25; // al
  struct _KTHREAD *v26; // rbx
  unsigned __int8 v27; // r14
  unsigned int v28; // edx
  __int64 v29; // rcx
  __int64 v30; // rdi
  int v31; // ecx
  unsigned int v32; // edx
  __int64 v33; // rdx
  $C774EFD68449142D8271B1EC1EB7FB26 *v34; // rax
  __int64 v35; // rcx
  _DWORD v37[2]; // [rsp+30h] [rbp-10h] BYREF
  int v38; // [rsp+38h] [rbp-8h] BYREF
  int v39; // [rsp+90h] [rbp+50h] BYREF
  int v40; // [rsp+98h] [rbp+58h]

  ExAcquirePushLockExclusiveEx((ULONG_PTR)&EmpEvaluationQueueLock, 0LL);
  v0 = (__int64 *)EmpRuleUpdateQueue;
  for ( i = -1; EmpRuleUpdateQueue; v0 = (__int64 *)EmpRuleUpdateQueue )
  {
    if ( v0 )
      EmpRuleUpdateQueue = *v0;
    v2 = _InterlockedExchangeAdd64((volatile signed __int64 *)&EmpEvaluationQueueLock, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v2 & 2) != 0 && (v2 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)&EmpEvaluationQueueLock);
    CurrentThread = KeGetCurrentThread();
    v39 = 0;
    if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&EmpEvaluationQueueLock) == 1 )
      SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
    else
      SessionId = -1;
    --CurrentThread->SpecialApcDisable;
    v5 = ++CurrentThread->AbAllocationRegionCount;
    v6 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
    v7 = !_BitScanReverse((unsigned int *)&v8, v6);
    if ( v7 )
      goto LABEL_63;
    while ( 1 )
    {
      v9 = (__int64)&CurrentThread->LockEntries[v8];
      v6 &= ~(1 << v8);
      if ( (*(_BYTE *)(v9 + 26) & 1) != 0
        && (*(_DWORD *)(v9 + 32) & 1) == 0
        && (*(_QWORD *)(v9 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&EmpEvaluationQueueLock & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v9 + 40) == SessionId )
      {
        *(_BYTE *)(v9 + 26) &= ~1u;
        if ( *(_QWORD *)(v9 + 32) )
          break;
      }
      v7 = !_BitScanReverse((unsigned int *)&v8, v6);
      if ( v7 )
        goto LABEL_63;
    }
    if ( !v9 )
    {
LABEL_63:
      if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, (ULONG_PTR)&EmpEvaluationQueueLock, SessionId, 0LL);
    }
    else
    {
      *(_BYTE *)(v9 + 32) |= 2u;
      if ( *(__int64 *)(v9 + 32) < 0 )
        KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v9);
      v10 = *(_DWORD *)(v9 + 88) & 0x1FFFF;
      v11 = *(_DWORD *)(v9 + 88) & 0xFFFE0000;
      *(_BYTE *)(v9 + 25) &= ~1u;
      v39 = v10;
      *(_DWORD *)(v9 + 88) = v11;
      *(_QWORD *)(v9 + 32) = 0LL;
      v12 = (signed __int64)(v9 - (unsigned __int64)CurrentThread->LockEntries) / 96;
      if ( v5 == 1 )
        CurrentThread->AbEntrySummary |= 1 << v12;
      else
        _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v12);
    }
    --CurrentThread->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, (__int64)&EmpEvaluationQueueLock, &v39);
    v7 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v7 && ($C774EFD68449142D8271B1EC1EB7FB26 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v13);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&EmpDatabaseLock, 0LL);
    EmpUpdateRuleState(*(v0 - 1), v0[1]);
    v14 = _InterlockedExchangeAdd64((volatile signed __int64 *)&EmpDatabaseLock, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v14 & 2) != 0 && (v14 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)&EmpDatabaseLock);
    v15 = KeGetCurrentThread();
    v37[0] = 0;
    if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&EmpDatabaseLock) == 1 )
      v16 = MmGetSessionIdEx((__int64)v15->ApcState.Process);
    else
      v16 = -1;
    --v15->SpecialApcDisable;
    v17 = ++v15->AbAllocationRegionCount;
    v18 = ((char)v15->AbEntrySummary | (char)v15->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v7 = !_BitScanReverse((unsigned int *)&v19, v18);
      v40 = v19;
      if ( v7 )
        break;
      v20 = (__int64)&v15->LockEntries[v19];
      v18 &= ~(1 << v19);
      if ( (*(_BYTE *)(v20 + 26) & 1) != 0
        && (*(_DWORD *)(v20 + 32) & 1) == 0
        && (*(_QWORD *)(v20 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&EmpDatabaseLock & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v20 + 40) == v16 )
      {
        *(_BYTE *)(v20 + 26) &= ~1u;
        if ( *(_QWORD *)(v20 + 32) )
        {
          if ( v20 )
          {
            *(_BYTE *)(v20 + 32) |= 2u;
            if ( *(__int64 *)(v20 + 32) < 0 )
              KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v20);
            v21 = *(_DWORD *)(v20 + 88) & 0x1FFFF;
            v22 = *(_DWORD *)(v20 + 88) & 0xFFFE0000;
            *(_BYTE *)(v20 + 25) &= ~1u;
            v37[0] = v21;
            *(_DWORD *)(v20 + 88) = v22;
            *(_QWORD *)(v20 + 32) = 0LL;
            v23 = (signed __int64)(v20 - (unsigned __int64)v15->LockEntries) / 96;
            if ( v17 == 1 )
              v15->AbEntrySummary |= 1 << v23;
            else
              _InterlockedOr8((volatile signed __int8 *)&v15->AbOrphanedEntrySummary, 1 << v23);
            goto LABEL_36;
          }
          break;
        }
      }
    }
    if ( (*((_DWORD *)&v15->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v15, (ULONG_PTR)&EmpDatabaseLock, v16, 0LL);
LABEL_36:
    --v15->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v15, (__int64)&EmpDatabaseLock, v37);
    v7 = v15->SpecialApcDisable++ == -1;
    if ( v7 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v15->ApcState.ApcListHead[0].Flink != &v15->152 )
      KiCheckForKernelApcDelivery(v24);
    ExFreePoolWithTag(v0 - 1, 0x75714D45u);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&EmpEvaluationQueueLock, 0LL);
  }
  v25 = _InterlockedExchangeAdd64((volatile signed __int64 *)&EmpEvaluationQueueLock, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v25 & 2) != 0 && (v25 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&EmpEvaluationQueueLock);
  v26 = KeGetCurrentThread();
  v38 = 0;
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&EmpEvaluationQueueLock) == 1 )
    i = MmGetSessionIdEx((__int64)v26->ApcState.Process);
  --v26->SpecialApcDisable;
  v27 = ++v26->AbAllocationRegionCount;
  v28 = ((char)v26->AbEntrySummary | (char)v26->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v7 = !_BitScanReverse((unsigned int *)&v29, v28);
    v37[1] = v29;
    if ( v7 )
      break;
    v30 = (__int64)&v26->LockEntries[v29];
    v28 &= ~(1 << v29);
    if ( (*(_BYTE *)(v30 + 26) & 1) != 0
      && (*(_DWORD *)(v30 + 32) & 1) == 0
      && (*(_QWORD *)(v30 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&EmpEvaluationQueueLock & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v30 + 40) == i )
    {
      *(_BYTE *)(v30 + 26) &= ~1u;
      if ( *(_QWORD *)(v30 + 32) )
      {
        if ( v30 )
        {
          *(_BYTE *)(v30 + 32) |= 2u;
          if ( *(__int64 *)(v30 + 32) < 0 )
            KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v30);
          v31 = *(_DWORD *)(v30 + 88) & 0x1FFFF;
          v32 = *(_DWORD *)(v30 + 88) & 0xFFFE0000;
          *(_BYTE *)(v30 + 25) &= ~1u;
          v38 = v31;
          *(_DWORD *)(v30 + 88) = v32;
          *(_QWORD *)(v30 + 32) = 0LL;
          v33 = (signed __int64)(v30 - (unsigned __int64)v26->LockEntries) / 96;
          if ( v27 == 1 )
            v26->AbEntrySummary |= 1 << v33;
          else
            _InterlockedOr8((volatile signed __int8 *)&v26->AbOrphanedEntrySummary, 1 << v33);
          goto LABEL_55;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&v26->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v26, (ULONG_PTR)&EmpEvaluationQueueLock, i, 0LL);
LABEL_55:
  --v26->AbAllocationRegionCount;
  LOBYTE(v34) = KiAbThreadRemoveBoosts((ULONG_PTR)v26, (__int64)&EmpEvaluationQueueLock, &v38);
  v7 = v26->SpecialApcDisable++ == -1;
  if ( v7 )
  {
    v34 = &v26->152;
    if ( ($C774EFD68449142D8271B1EC1EB7FB26 *)v34->ApcState.ApcListHead[0].Flink != v34 )
      LOBYTE(v34) = KiCheckForKernelApcDelivery(v35);
  }
  _InterlockedExchange(&EmpWorkerBusy, 0);
  return (char)v34;
}
