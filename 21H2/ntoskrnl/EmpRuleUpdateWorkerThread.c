/*
 * XREFs of EmpRuleUpdateWorkerThread @ 0x1403C6650
 * Callers:
 *     <none>
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x14020C630 (KiAbEntryRemoveFromTree.c)
 *     EmpUpdateRuleState @ 0x14026FE04 (EmpUpdateRuleState.c)
 *     KiCheckForKernelApcDelivery @ 0x1402EEF30 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140355A50 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140355BB0 (MmGetSessionIdEx.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
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
  char v13; // al
  struct _KTHREAD *v14; // rbx
  unsigned int v15; // edx
  unsigned __int8 v16; // r15
  unsigned int v17; // r8d
  __int64 v18; // rcx
  __int64 v19; // rdi
  int v20; // eax
  unsigned int v21; // ecx
  __int64 v22; // rdx
  char v23; // al
  struct _KTHREAD *v24; // rbx
  unsigned __int8 v25; // r14
  unsigned int v26; // edx
  __int64 v27; // rcx
  __int64 v28; // rdi
  int v29; // ecx
  unsigned int v30; // edx
  __int64 v31; // rdx
  $C459BD0D405E8E46662177FB3D0A143F *v32; // rax
  unsigned int v34[2]; // [rsp+30h] [rbp-10h] BYREF
  int v35; // [rsp+38h] [rbp-8h] BYREF
  int v36; // [rsp+90h] [rbp+50h] BYREF
  int v37; // [rsp+98h] [rbp+58h]

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
    v36 = 0;
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
      v36 = v10;
      *(_DWORD *)(v9 + 88) = v11;
      *(_QWORD *)(v9 + 32) = 0LL;
      v12 = (signed __int64)(v9 - (unsigned __int64)CurrentThread->LockEntries) / 96;
      if ( v5 == 1 )
        CurrentThread->AbEntrySummary |= 1 << v12;
      else
        _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v12);
    }
    --CurrentThread->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, (__int64)&EmpEvaluationQueueLock, (unsigned int *)&v36);
    v7 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v7 && ($C459BD0D405E8E46662177FB3D0A143F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&EmpDatabaseLock, 0LL);
    EmpUpdateRuleState(*(v0 - 1), v0[1]);
    v13 = _InterlockedExchangeAdd64((volatile signed __int64 *)&EmpDatabaseLock, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v13 & 2) != 0 && (v13 & 4) == 0 )
      ExfTryToWakePushLock(&EmpDatabaseLock);
    v14 = KeGetCurrentThread();
    v34[0] = 0;
    if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&EmpDatabaseLock) == 1 )
      v15 = MmGetSessionIdEx((__int64)v14->ApcState.Process);
    else
      v15 = -1;
    --v14->SpecialApcDisable;
    v16 = ++v14->AbAllocationRegionCount;
    v17 = ((char)v14->AbEntrySummary | (char)v14->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v7 = !_BitScanReverse((unsigned int *)&v18, v17);
      v37 = v18;
      if ( v7 )
        break;
      v19 = (__int64)&v14->LockEntries[v18];
      v17 &= ~(1 << v18);
      if ( (*(_BYTE *)(v19 + 26) & 1) != 0
        && (*(_DWORD *)(v19 + 32) & 1) == 0
        && (*(_QWORD *)(v19 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&EmpDatabaseLock & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v19 + 40) == v15 )
      {
        *(_BYTE *)(v19 + 26) &= ~1u;
        if ( *(_QWORD *)(v19 + 32) )
        {
          if ( v19 )
          {
            *(_BYTE *)(v19 + 32) |= 2u;
            if ( *(__int64 *)(v19 + 32) < 0 )
              KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v19);
            v20 = *(_DWORD *)(v19 + 88) & 0x1FFFF;
            v21 = *(_DWORD *)(v19 + 88) & 0xFFFE0000;
            *(_BYTE *)(v19 + 25) &= ~1u;
            v34[0] = v20;
            *(_DWORD *)(v19 + 88) = v21;
            *(_QWORD *)(v19 + 32) = 0LL;
            v22 = (signed __int64)(v19 - (unsigned __int64)v14->LockEntries) / 96;
            if ( v16 == 1 )
              v14->AbEntrySummary |= 1 << v22;
            else
              _InterlockedOr8((volatile signed __int8 *)&v14->AbOrphanedEntrySummary, 1 << v22);
            goto LABEL_36;
          }
          break;
        }
      }
    }
    if ( (*((_DWORD *)&v14->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v14, (ULONG_PTR)&EmpDatabaseLock, v15, 0LL);
LABEL_36:
    --v14->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v14, (__int64)&EmpDatabaseLock, v34);
    v7 = v14->SpecialApcDisable++ == -1;
    if ( v7 && ($C459BD0D405E8E46662177FB3D0A143F *)v14->ApcState.ApcListHead[0].Flink != &v14->152 )
      KiCheckForKernelApcDelivery();
    ExFreePoolWithTag(v0 - 1, 0x75714D45u);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&EmpEvaluationQueueLock, 0LL);
  }
  v23 = _InterlockedExchangeAdd64((volatile signed __int64 *)&EmpEvaluationQueueLock, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v23 & 2) != 0 && (v23 & 4) == 0 )
    ExfTryToWakePushLock(&EmpEvaluationQueueLock);
  v24 = KeGetCurrentThread();
  v35 = 0;
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&EmpEvaluationQueueLock) == 1 )
    i = MmGetSessionIdEx((__int64)v24->ApcState.Process);
  --v24->SpecialApcDisable;
  v25 = ++v24->AbAllocationRegionCount;
  v26 = ((char)v24->AbEntrySummary | (char)v24->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v7 = !_BitScanReverse((unsigned int *)&v27, v26);
    v34[1] = v27;
    if ( v7 )
      break;
    v28 = (__int64)&v24->LockEntries[v27];
    v26 &= ~(1 << v27);
    if ( (*(_BYTE *)(v28 + 26) & 1) != 0
      && (*(_DWORD *)(v28 + 32) & 1) == 0
      && (*(_QWORD *)(v28 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&EmpEvaluationQueueLock & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v28 + 40) == i )
    {
      *(_BYTE *)(v28 + 26) &= ~1u;
      if ( *(_QWORD *)(v28 + 32) )
      {
        if ( v28 )
        {
          *(_BYTE *)(v28 + 32) |= 2u;
          if ( *(__int64 *)(v28 + 32) < 0 )
            KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v28);
          v29 = *(_DWORD *)(v28 + 88) & 0x1FFFF;
          v30 = *(_DWORD *)(v28 + 88) & 0xFFFE0000;
          *(_BYTE *)(v28 + 25) &= ~1u;
          v35 = v29;
          *(_DWORD *)(v28 + 88) = v30;
          *(_QWORD *)(v28 + 32) = 0LL;
          v31 = (signed __int64)(v28 - (unsigned __int64)v24->LockEntries) / 96;
          if ( v25 == 1 )
            v24->AbEntrySummary |= 1 << v31;
          else
            _InterlockedOr8((volatile signed __int8 *)&v24->AbOrphanedEntrySummary, 1 << v31);
          goto LABEL_55;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&v24->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v24, (ULONG_PTR)&EmpEvaluationQueueLock, i, 0LL);
LABEL_55:
  --v24->AbAllocationRegionCount;
  LOBYTE(v32) = KiAbThreadRemoveBoosts((ULONG_PTR)v24, (__int64)&EmpEvaluationQueueLock, (unsigned int *)&v35);
  v7 = v24->SpecialApcDisable++ == -1;
  if ( v7 )
  {
    v32 = &v24->152;
    if ( ($C459BD0D405E8E46662177FB3D0A143F *)v32->ApcState.ApcListHead[0].Flink != v32 )
      LOBYTE(v32) = KiCheckForKernelApcDelivery();
  }
  _InterlockedExchange(&EmpWorkerBusy, 0);
  return (char)v32;
}
