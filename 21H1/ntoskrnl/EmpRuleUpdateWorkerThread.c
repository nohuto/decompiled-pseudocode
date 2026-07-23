/*
 * XREFs of EmpRuleUpdateWorkerThread @ 0x1403C2490
 * Callers:
 *     <none>
 * Callees:
 *     MiGetSystemRegionType @ 0x1402609A0 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140260D50 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140260EB0 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x1403410E0 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x1403599E0 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     EmpUpdateRuleState @ 0x14035D4F4 (EmpUpdateRuleState.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
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
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  _DWORD *v16; // r9
  char v17; // al
  struct _KTHREAD *v18; // rbx
  unsigned int v19; // edx
  unsigned __int8 v20; // r15
  unsigned int v21; // r8d
  __int64 v22; // rcx
  __int64 v23; // rdi
  int v24; // eax
  unsigned int v25; // ecx
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  _DWORD *v30; // r9
  char v31; // al
  struct _KTHREAD *v32; // rbx
  unsigned __int8 v33; // r14
  unsigned int v34; // edx
  __int64 v35; // rcx
  __int64 v36; // rdi
  int v37; // ecx
  unsigned int v38; // edx
  __int64 v39; // rdx
  $C774EFD68449142D8271B1EC1EB7FB26 *v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  _DWORD *v44; // r9
  _DWORD v46[2]; // [rsp+30h] [rbp-10h] BYREF
  int v47; // [rsp+38h] [rbp-8h] BYREF
  int v48; // [rsp+90h] [rbp+50h] BYREF
  int v49; // [rsp+98h] [rbp+58h]

  ExAcquirePushLockExclusiveEx((ULONG_PTR)&EmpEvaluationQueueLock, 0LL);
  v0 = (__int64 *)EmpRuleUpdateQueue;
  for ( i = -1; EmpRuleUpdateQueue; v0 = (__int64 *)EmpRuleUpdateQueue )
  {
    if ( v0 )
      EmpRuleUpdateQueue = *v0;
    v2 = _InterlockedExchangeAdd64((volatile signed __int64 *)&EmpEvaluationQueueLock, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v2 & 2) != 0 && (v2 & 4) == 0 )
      ExfTryToWakePushLock(&EmpEvaluationQueueLock);
    CurrentThread = KeGetCurrentThread();
    v48 = 0;
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
      v48 = v10;
      *(_DWORD *)(v9 + 88) = v11;
      *(_QWORD *)(v9 + 32) = 0LL;
      v12 = (signed __int64)(v9 - (unsigned __int64)CurrentThread->LockEntries) / 96;
      if ( v5 == 1 )
        CurrentThread->AbEntrySummary |= 1 << v12;
      else
        _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v12);
    }
    --CurrentThread->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, (__int64)&EmpEvaluationQueueLock, &v48);
    v7 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v7 && ($C774EFD68449142D8271B1EC1EB7FB26 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v14, v13, v15, v16);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&EmpDatabaseLock, 0LL);
    EmpUpdateRuleState(*(v0 - 1), v0[1]);
    v17 = _InterlockedExchangeAdd64((volatile signed __int64 *)&EmpDatabaseLock, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v17 & 2) != 0 && (v17 & 4) == 0 )
      ExfTryToWakePushLock(&EmpDatabaseLock);
    v18 = KeGetCurrentThread();
    v46[0] = 0;
    if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&EmpDatabaseLock) == 1 )
      v19 = MmGetSessionIdEx((__int64)v18->ApcState.Process);
    else
      v19 = -1;
    --v18->SpecialApcDisable;
    v20 = ++v18->AbAllocationRegionCount;
    v21 = ((char)v18->AbEntrySummary | (char)v18->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v7 = !_BitScanReverse((unsigned int *)&v22, v21);
      v49 = v22;
      if ( v7 )
        break;
      v23 = (__int64)&v18->LockEntries[v22];
      v21 &= ~(1 << v22);
      if ( (*(_BYTE *)(v23 + 26) & 1) != 0
        && (*(_DWORD *)(v23 + 32) & 1) == 0
        && (*(_QWORD *)(v23 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&EmpDatabaseLock & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v23 + 40) == v19 )
      {
        *(_BYTE *)(v23 + 26) &= ~1u;
        if ( *(_QWORD *)(v23 + 32) )
        {
          if ( v23 )
          {
            *(_BYTE *)(v23 + 32) |= 2u;
            if ( *(__int64 *)(v23 + 32) < 0 )
              KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v23);
            v24 = *(_DWORD *)(v23 + 88) & 0x1FFFF;
            v25 = *(_DWORD *)(v23 + 88) & 0xFFFE0000;
            *(_BYTE *)(v23 + 25) &= ~1u;
            v46[0] = v24;
            *(_DWORD *)(v23 + 88) = v25;
            *(_QWORD *)(v23 + 32) = 0LL;
            v26 = (signed __int64)(v23 - (unsigned __int64)v18->LockEntries) / 96;
            if ( v20 == 1 )
              v18->AbEntrySummary |= 1 << v26;
            else
              _InterlockedOr8((volatile signed __int8 *)&v18->AbOrphanedEntrySummary, 1 << v26);
            goto LABEL_36;
          }
          break;
        }
      }
    }
    if ( (*((_DWORD *)&v18->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v18, (ULONG_PTR)&EmpDatabaseLock, v19, 0LL);
LABEL_36:
    --v18->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v18, (__int64)&EmpDatabaseLock, v46);
    v7 = v18->SpecialApcDisable++ == -1;
    if ( v7 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v18->ApcState.ApcListHead[0].Flink != &v18->152 )
      KiCheckForKernelApcDelivery(v28, v27, v29, v30);
    ExFreePoolWithTag(v0 - 1, 0x75714D45u);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&EmpEvaluationQueueLock, 0LL);
  }
  v31 = _InterlockedExchangeAdd64((volatile signed __int64 *)&EmpEvaluationQueueLock, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v31 & 2) != 0 && (v31 & 4) == 0 )
    ExfTryToWakePushLock(&EmpEvaluationQueueLock);
  v32 = KeGetCurrentThread();
  v47 = 0;
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&EmpEvaluationQueueLock) == 1 )
    i = MmGetSessionIdEx((__int64)v32->ApcState.Process);
  --v32->SpecialApcDisable;
  v33 = ++v32->AbAllocationRegionCount;
  v34 = ((char)v32->AbEntrySummary | (char)v32->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v7 = !_BitScanReverse((unsigned int *)&v35, v34);
    v46[1] = v35;
    if ( v7 )
      break;
    v36 = (__int64)&v32->LockEntries[v35];
    v34 &= ~(1 << v35);
    if ( (*(_BYTE *)(v36 + 26) & 1) != 0
      && (*(_DWORD *)(v36 + 32) & 1) == 0
      && (*(_QWORD *)(v36 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&EmpEvaluationQueueLock & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v36 + 40) == i )
    {
      *(_BYTE *)(v36 + 26) &= ~1u;
      if ( *(_QWORD *)(v36 + 32) )
      {
        if ( v36 )
        {
          *(_BYTE *)(v36 + 32) |= 2u;
          if ( *(__int64 *)(v36 + 32) < 0 )
            KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v36);
          v37 = *(_DWORD *)(v36 + 88) & 0x1FFFF;
          v38 = *(_DWORD *)(v36 + 88) & 0xFFFE0000;
          *(_BYTE *)(v36 + 25) &= ~1u;
          v47 = v37;
          *(_DWORD *)(v36 + 88) = v38;
          *(_QWORD *)(v36 + 32) = 0LL;
          v39 = (signed __int64)(v36 - (unsigned __int64)v32->LockEntries) / 96;
          if ( v33 == 1 )
            v32->AbEntrySummary |= 1 << v39;
          else
            _InterlockedOr8((volatile signed __int8 *)&v32->AbOrphanedEntrySummary, 1 << v39);
          goto LABEL_55;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&v32->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v32, (ULONG_PTR)&EmpEvaluationQueueLock, i, 0LL);
LABEL_55:
  --v32->AbAllocationRegionCount;
  LOBYTE(v40) = KiAbThreadRemoveBoosts((ULONG_PTR)v32, (__int64)&EmpEvaluationQueueLock, &v47);
  v7 = v32->SpecialApcDisable++ == -1;
  if ( v7 )
  {
    v40 = &v32->152;
    if ( ($C774EFD68449142D8271B1EC1EB7FB26 *)v40->ApcState.ApcListHead[0].Flink != v40 )
      LOBYTE(v40) = KiCheckForKernelApcDelivery(v42, v41, v43, v44);
  }
  _InterlockedExchange(&EmpWorkerBusy, 0);
  return (char)v40;
}
