/*
 * XREFs of EmpRuleUpdateWorkerThread @ 0x1403C64B0
 * Callers:
 *     <none>
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14024A6E0 (KiCheckForKernelApcDelivery.c)
 *     EmpUpdateRuleState @ 0x140281BC4 (EmpUpdateRuleState.c)
 *     KiAbEntryRemoveFromTree @ 0x14028F490 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x1402F1570 (ExfTryToWakePushLock.c)
 *     MiGetSystemRegionType @ 0x14034A950 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14034AD00 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14034AE60 (MmGetSessionIdEx.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

char EmpRuleUpdateWorkerThread()
{
  __int64 *v0; // r14
  unsigned int i; // r12d
  char v2; // al
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v4; // r9
  unsigned int SessionId; // r8d
  unsigned __int8 v6; // r15
  unsigned int v7; // edx
  bool v8; // zf
  __int64 v9; // rcx
  __int64 v10; // rdi
  int v11; // eax
  unsigned int v12; // ecx
  __int64 v13; // rdx
  __int64 v14; // rcx
  char v15; // al
  struct _KTHREAD *v16; // rbx
  unsigned int v17; // edx
  unsigned __int8 v18; // r15
  _DWORD *v19; // r9
  unsigned int v20; // r8d
  __int64 v21; // rcx
  __int64 v22; // rdi
  int v23; // eax
  unsigned int v24; // ecx
  __int64 v25; // rdx
  __int64 v26; // rcx
  char v27; // al
  struct _KTHREAD *v28; // rbx
  _DWORD *v29; // r9
  unsigned __int8 v30; // r14
  unsigned int v31; // edx
  __int64 v32; // rcx
  __int64 v33; // rdi
  int v34; // ecx
  unsigned int v35; // edx
  __int64 v36; // rdx
  $C459BD0D405E8E46662177FB3D0A143F *v37; // rax
  __int64 v38; // rcx
  _DWORD v40[2]; // [rsp+30h] [rbp-10h] BYREF
  int v41; // [rsp+38h] [rbp-8h] BYREF
  int v42; // [rsp+90h] [rbp+50h] BYREF
  int v43; // [rsp+98h] [rbp+58h]

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
    v42 = 0;
    if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&EmpEvaluationQueueLock) == 1 )
      SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
    else
      SessionId = -1;
    --CurrentThread->SpecialApcDisable;
    v6 = ++CurrentThread->AbAllocationRegionCount;
    v7 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
    v8 = !_BitScanReverse((unsigned int *)&v9, v7);
    if ( v8 )
      goto LABEL_64;
    v4 = 0x7FFFFFFFFFFFFFFCLL;
    while ( 1 )
    {
      v10 = (__int64)&CurrentThread->LockEntries[v9];
      v7 &= ~(1 << v9);
      if ( (*(_BYTE *)(v10 + 26) & 1) != 0
        && (*(_DWORD *)(v10 + 32) & 1) == 0
        && (*(_QWORD *)(v10 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&EmpEvaluationQueueLock & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v10 + 40) == SessionId )
      {
        *(_BYTE *)(v10 + 26) &= ~1u;
        if ( *(_QWORD *)(v10 + 32) )
          break;
      }
      v8 = !_BitScanReverse((unsigned int *)&v9, v7);
      if ( v8 )
        goto LABEL_64;
    }
    if ( !v10 )
    {
LABEL_64:
      if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, (ULONG_PTR)&EmpEvaluationQueueLock, SessionId, 0LL);
    }
    else
    {
      *(_BYTE *)(v10 + 32) |= 2u;
      if ( *(__int64 *)(v10 + 32) < 0 )
        KiAbEntryRemoveFromTree(v10);
      v11 = *(_DWORD *)(v10 + 88) & 0x1FFFF;
      v12 = *(_DWORD *)(v10 + 88) & 0xFFFE0000;
      *(_BYTE *)(v10 + 25) &= ~1u;
      v42 = v11;
      *(_DWORD *)(v10 + 88) = v12;
      *(_QWORD *)(v10 + 32) = 0LL;
      v13 = (signed __int64)(v10 - (unsigned __int64)CurrentThread->LockEntries) / 96;
      if ( v6 == 1 )
        CurrentThread->AbEntrySummary |= 1 << v13;
      else
        _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v13);
    }
    --CurrentThread->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, (__int64)&EmpEvaluationQueueLock, (__int64)&v42, (_DWORD *)v4);
    v8 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v8 && ($C459BD0D405E8E46662177FB3D0A143F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v14);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&EmpDatabaseLock, 0LL);
    EmpUpdateRuleState(*(v0 - 1), v0[1]);
    v15 = _InterlockedExchangeAdd64((volatile signed __int64 *)&EmpDatabaseLock, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v15 & 2) != 0 && (v15 & 4) == 0 )
      ExfTryToWakePushLock(&EmpDatabaseLock);
    v16 = KeGetCurrentThread();
    v40[0] = 0;
    if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&EmpDatabaseLock) == 1 )
      v17 = MmGetSessionIdEx((__int64)v16->ApcState.Process);
    else
      v17 = -1;
    --v16->SpecialApcDisable;
    v18 = ++v16->AbAllocationRegionCount;
    v19 = (_DWORD *)((unsigned __int64)&EmpDatabaseLock & 0x7FFFFFFFFFFFFFFCLL);
    v20 = ((char)v16->AbEntrySummary | (char)v16->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v8 = !_BitScanReverse((unsigned int *)&v21, v20);
      v43 = v21;
      if ( v8 )
        break;
      v22 = (__int64)&v16->LockEntries[v21];
      v20 &= ~(1 << v21);
      if ( (*(_BYTE *)(v22 + 26) & 1) != 0
        && (*(_DWORD *)(v22 + 32) & 1) == 0
        && (_DWORD *)(*(_QWORD *)(v22 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v19
        && *(_DWORD *)(v22 + 40) == v17 )
      {
        *(_BYTE *)(v22 + 26) &= ~1u;
        if ( *(_QWORD *)(v22 + 32) )
        {
          if ( v22 )
          {
            *(_BYTE *)(v22 + 32) |= 2u;
            if ( *(__int64 *)(v22 + 32) < 0 )
              KiAbEntryRemoveFromTree(v22);
            v23 = *(_DWORD *)(v22 + 88) & 0x1FFFF;
            v24 = *(_DWORD *)(v22 + 88) & 0xFFFE0000;
            *(_BYTE *)(v22 + 25) &= ~1u;
            v40[0] = v23;
            *(_DWORD *)(v22 + 88) = v24;
            *(_QWORD *)(v22 + 32) = 0LL;
            v25 = (signed __int64)(v22 - (unsigned __int64)v16->LockEntries) / 96;
            if ( v18 == 1 )
              v16->AbEntrySummary |= 1 << v25;
            else
              _InterlockedOr8((volatile signed __int8 *)&v16->AbOrphanedEntrySummary, 1 << v25);
            goto LABEL_37;
          }
          break;
        }
      }
    }
    if ( (*((_DWORD *)&v16->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v16, (ULONG_PTR)&EmpDatabaseLock, v17, 0LL);
LABEL_37:
    --v16->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v16, (__int64)&EmpDatabaseLock, (__int64)v40, v19);
    v8 = v16->SpecialApcDisable++ == -1;
    if ( v8 && ($C459BD0D405E8E46662177FB3D0A143F *)v16->ApcState.ApcListHead[0].Flink != &v16->152 )
      KiCheckForKernelApcDelivery(v26);
    ExFreePoolWithTag(v0 - 1, 0x75714D45u);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&EmpEvaluationQueueLock, 0LL);
  }
  v27 = _InterlockedExchangeAdd64((volatile signed __int64 *)&EmpEvaluationQueueLock, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v27 & 2) != 0 && (v27 & 4) == 0 )
    ExfTryToWakePushLock(&EmpEvaluationQueueLock);
  v28 = KeGetCurrentThread();
  v41 = 0;
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&EmpEvaluationQueueLock) == 1 )
    i = MmGetSessionIdEx((__int64)v28->ApcState.Process);
  --v28->SpecialApcDisable;
  v30 = ++v28->AbAllocationRegionCount;
  v31 = ((char)v28->AbEntrySummary | (char)v28->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v8 = !_BitScanReverse((unsigned int *)&v32, v31);
    v40[1] = v32;
    if ( v8 )
      break;
    v33 = (__int64)&v28->LockEntries[v32];
    v31 &= ~(1 << v32);
    if ( (*(_BYTE *)(v33 + 26) & 1) != 0
      && (*(_DWORD *)(v33 + 32) & 1) == 0
      && (*(_QWORD *)(v33 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&EmpEvaluationQueueLock & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v33 + 40) == i )
    {
      *(_BYTE *)(v33 + 26) &= ~1u;
      if ( *(_QWORD *)(v33 + 32) )
      {
        if ( v33 )
        {
          *(_BYTE *)(v33 + 32) |= 2u;
          if ( *(__int64 *)(v33 + 32) < 0 )
            KiAbEntryRemoveFromTree(v33);
          v34 = *(_DWORD *)(v33 + 88) & 0x1FFFF;
          v35 = *(_DWORD *)(v33 + 88) & 0xFFFE0000;
          *(_BYTE *)(v33 + 25) &= ~1u;
          v41 = v34;
          *(_DWORD *)(v33 + 88) = v35;
          *(_QWORD *)(v33 + 32) = 0LL;
          v36 = (signed __int64)(v33 - (unsigned __int64)v28->LockEntries) / 96;
          if ( v30 == 1 )
            v28->AbEntrySummary |= 1 << v36;
          else
            _InterlockedOr8((volatile signed __int8 *)&v28->AbOrphanedEntrySummary, 1 << v36);
          goto LABEL_56;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&v28->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v28, (ULONG_PTR)&EmpEvaluationQueueLock, i, 0LL);
LABEL_56:
  --v28->AbAllocationRegionCount;
  LOBYTE(v37) = KiAbThreadRemoveBoosts((ULONG_PTR)v28, (__int64)&EmpEvaluationQueueLock, (__int64)&v41, v29);
  v8 = v28->SpecialApcDisable++ == -1;
  if ( v8 )
  {
    v37 = &v28->152;
    if ( ($C459BD0D405E8E46662177FB3D0A143F *)v37->ApcState.ApcListHead[0].Flink != v37 )
      LOBYTE(v37) = KiCheckForKernelApcDelivery(v38);
  }
  _InterlockedExchange(&EmpWorkerBusy, 0);
  return (char)v37;
}
