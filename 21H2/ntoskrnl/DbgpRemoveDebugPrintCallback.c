/*
 * XREFs of DbgpRemoveDebugPrintCallback @ 0x1405859CC
 * Callers:
 *     DbgSetDebugPrintCallback @ 0x140585810 (DbgSetDebugPrintCallback.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x140267780 (ExWaitForRundownProtectionRelease.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031FAE0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140327550 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140327620 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall DbgpRemoveDebugPrintCallback(void *a1)
{
  unsigned __int8 CurrentIrql; // bl
  unsigned int v3; // edi
  _DWORD *SchedulerAssist; // r9
  _UNKNOWN **i; // rdx
  struct _EX_RUNDOWN_REF *v6; // rsi
  unsigned __int8 v7; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v9; // r8
  int v10; // eax
  bool v11; // zf
  unsigned __int64 Count; // rdx
  struct _EX_RUNDOWN_REF **v14; // rax
  unsigned __int8 v15; // al
  struct _KPRCB *v16; // r9
  _DWORD *v17; // r8
  int v18; // eax

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  v3 = 0;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 0x1FFC;
  }
  ExAcquireSpinLockSharedAtDpcLevel(&RtlpDebugPrintCallbackLock);
  for ( i = (_UNKNOWN **)RtlpDebugPrintCallbackList; ; i = (_UNKNOWN **)*i )
  {
    if ( i == &RtlpDebugPrintCallbackList )
    {
      ExReleaseSpinLockSharedFromDpcLevel(&RtlpDebugPrintCallbackLock);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v7 = KeGetCurrentIrql();
          if ( v7 <= 0xFu && CurrentIrql <= 0xFu && v7 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v9 = CurrentPrcb->SchedulerAssist;
            v10 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v11 = (v10 & v9[5]) == 0;
            v9[5] &= v10;
            if ( v11 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(CurrentIrql);
      return (unsigned int)-1073741275;
    }
    v6 = (struct _EX_RUNDOWN_REF *)(i - 3);
    if ( *(i - 1) == a1 )
    {
      _m_prefetchw(v6);
      if ( (_InterlockedOr((volatile signed __int32 *)v6, 1u) & 1) == 0 )
        break;
    }
  }
  ExReleaseSpinLockSharedFromDpcLevel(&RtlpDebugPrintCallbackLock);
  ExWaitForRundownProtectionRelease(v6 + 1);
  ExAcquireSpinLockExclusiveAtDpcLevel(&RtlpDebugPrintCallbackLock);
  Count = v6[3].Count;
  v14 = (struct _EX_RUNDOWN_REF **)v6[4].Count;
  if ( *(struct _EX_RUNDOWN_REF **)(Count + 8) != &v6[3] || *v14 != &v6[3] )
    __fastfail(3u);
  *v14 = (struct _EX_RUNDOWN_REF *)Count;
  *(_QWORD *)(Count + 8) = v14;
  if ( v14 == (struct _EX_RUNDOWN_REF **)Count )
    RtlpDebugPrintCallbacksActive = 0;
  ExReleaseSpinLockExclusiveFromDpcLevel(&RtlpDebugPrintCallbackLock);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v15 = KeGetCurrentIrql();
      if ( v15 <= 0xFu && CurrentIrql <= 0xFu && v15 >= 2u )
      {
        v16 = KeGetCurrentPrcb();
        v17 = v16->SchedulerAssist;
        v18 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v11 = (v18 & v17[5]) == 0;
        v17[5] &= v18;
        if ( v11 )
          KiRemoveSystemWorkPriorityKick((__int64)v16);
      }
    }
  }
  __writecr8(CurrentIrql);
  ExFreePoolWithTag(v6, 0);
  return v3;
}
