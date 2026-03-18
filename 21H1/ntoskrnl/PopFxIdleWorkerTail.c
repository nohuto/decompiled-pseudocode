/*
 * XREFs of PopFxIdleWorkerTail @ 0x140236E70
 * Callers:
 *     PopFxIdleWorker @ 0x140236D54 (PopFxIdleWorker.c)
 *     PoFxCompleteIdleCondition @ 0x1403149E0 (PoFxCompleteIdleCondition.c)
 * Callees:
 *     PopFxProcessWork @ 0x1402367FC (PopFxProcessWork.c)
 *     PopDiagTraceFxComponentLogicalCondition @ 0x140237034 (PopDiagTraceFxComponentLogicalCondition.c)
 *     PopFxCompleteComponentActivation @ 0x1402370B4 (PopFxCompleteComponentActivation.c)
 *     PoFxIdleComponent @ 0x140237150 (PoFxIdleComponent.c)
 *     PpmInterlockedUpdateTimeNoFence @ 0x140237320 (PpmInterlockedUpdateTimeNoFence.c)
 *     PopFxUpdateAccountingActiveTime @ 0x140237354 (PopFxUpdateAccountingActiveTime.c)
 *     PopFxActivateComponentWorker @ 0x140237664 (PopFxActivateComponentWorker.c)
 *     PopFxAddRefDevice @ 0x140237700 (PopFxAddRefDevice.c)
 *     PopPluginComponentActive @ 0x14023BC58 (PopPluginComponentActive.c)
 *     KxReleaseSpinLock @ 0x140277410 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402E4740 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PopFxIdleWorkerTail(_QWORD *BugCheckParameter2, unsigned int a2, int *a3)
{
  __int64 v6; // rbx
  __int64 v7; // r12
  unsigned __int64 v8; // rbp
  char v9; // r9
  __int64 v10; // r8
  signed __int32 v11; // eax
  signed __int32 v12; // ett
  __int64 v13; // r8
  unsigned int i; // edi
  __int64 result; // rax
  unsigned __int64 v16; // rbp
  _DWORD *v17; // r8
  void (__fastcall *v18)(_QWORD, _QWORD); // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v22; // eax
  bool v23; // zf
  unsigned __int8 v24; // al
  struct _KPRCB *v25; // r9
  int v26; // eax

  v6 = *(_QWORD *)(BugCheckParameter2[104] + 8LL * a2);
  v7 = MEMORY[0xFFFFF78000000008];
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 200));
  if ( *(int *)(v6 + 216) > 0 )
  {
    PopFxUpdateAccountingActiveTime(v6 + 200, v7, 0LL, 0LL);
    *(_BYTE *)(v6 + 208) = v9;
  }
  KxReleaseSpinLock((PKSPIN_LOCK)(v6 + 200));
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v8 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v22 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
        v23 = (v22 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v22;
        if ( v23 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v8);
  PopDiagTraceFxComponentLogicalCondition(BugCheckParameter2[6], a2, 0LL);
  PpmInterlockedUpdateTimeNoFence(BugCheckParameter2 + 63, v7, 0LL);
  _m_prefetchw((const void *)(v6 + 88));
  v11 = *(_DWORD *)(v6 + 88);
  do
  {
    v12 = v11;
    v11 = _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 88), v11, v11);
  }
  while ( v12 != v11 );
  if ( v11 == 0x40000000 )
  {
    if ( (unsigned __int8)PopPluginComponentActive(BugCheckParameter2, a2, v10, a3) == 1 )
      PopFxProcessWork(0LL, a3, v13);
    for ( i = 0; i < *(_DWORD *)(v6 + 172); ++i )
      PoFxIdleComponent((ULONG_PTR)BugCheckParameter2, *(unsigned int *)(*(_QWORD *)(v6 + 176) + 8LL * i));
    result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(v6 + 88), 0, 0x40000000);
    if ( (_DWORD)result != 0x40000000 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 88));
      _InterlockedAnd((volatile signed __int32 *)(v6 + 88), 0xBFFFFFFF);
      return PopFxActivateComponentWorker(BugCheckParameter2, v6, 0LL, 0LL);
    }
  }
  else
  {
    PopFxAddRefDevice((ULONG_PTR)BugCheckParameter2);
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 88));
    _InterlockedAnd((volatile signed __int32 *)(v6 + 88), 0xBFFFFFFF);
    v16 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 200));
    if ( *(int *)(v6 + 216) > 0 )
    {
      *(_QWORD *)(v6 + 224) = v7;
      *(_BYTE *)(v6 + 208) = 1;
    }
    KxReleaseSpinLock((PKSPIN_LOCK)(v6 + 200));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v24 = KeGetCurrentIrql();
        if ( v24 <= 0xFu && (unsigned __int8)v16 <= 0xFu && v24 >= 2u )
        {
          v25 = KeGetCurrentPrcb();
          v26 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v16 + 1));
          v17 = v25->SchedulerAssist;
          v23 = (v26 & v17[5]) == 0;
          v17[5] &= v26;
          if ( v23 )
            KiRemoveSystemWorkPriorityKick(v25);
        }
      }
    }
    __writecr8(v16);
    LOBYTE(v17) = 1;
    PopDiagTraceFxComponentLogicalCondition(BugCheckParameter2[6], a2, v17);
    v18 = (void (__fastcall *)(_QWORD, _QWORD))BugCheckParameter2[14];
    if ( v18 )
      v18(BugCheckParameter2[24], a2);
    return PopFxCompleteComponentActivation((ULONG_PTR)BugCheckParameter2);
  }
  return result;
}
