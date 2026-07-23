/*
 * XREFs of ExpWaitForSpinLockSharedAndAcquire @ 0x140213930
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x1402ACB50 (MiTrimOrAgeWorkingSet.c)
 *     MiProbeAndLockPrepare @ 0x1402AEBF0 (MiProbeAndLockPrepare.c)
 *     MiUserFault @ 0x1402B2070 (MiUserFault.c)
 *     MiLockWorkingSetShared @ 0x1402BE5B0 (MiLockWorkingSetShared.c)
 *     MiMakeHyperRangeAccessible @ 0x1402BFDE0 (MiMakeHyperRangeAccessible.c)
 *     ExAcquireSpinLockShared @ 0x1402C1680 (ExAcquireSpinLockShared.c)
 *     MiSynchronizeSystemVa @ 0x14031C990 (MiSynchronizeSystemVa.c)
 *     MiMoveDirtyBitsToPfns @ 0x1403221E0 (MiMoveDirtyBitsToPfns.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140327620 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiMakeSystemCacheRangeValid @ 0x1403298E0 (MiMakeSystemCacheRangeValid.c)
 *     MiOffsetToProtos @ 0x14032B8A0 (MiOffsetToProtos.c)
 *     MiSetProtectionOnSection @ 0x14033D9C0 (MiSetProtectionOnSection.c)
 *     ExpAddTagForBigPages @ 0x140346B10 (ExpAddTagForBigPages.c)
 *     ExFreeHeapPool @ 0x14034C810 (ExFreeHeapPool.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1405B5E94 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x140390290 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140391070 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall ExpWaitForSpinLockSharedAndAcquire(volatile signed __int32 *a1, unsigned __int8 a2)
{
  unsigned int v2; // esi
  signed __int32 v5; // edi
  struct _KPRCB *v6; // rbp
  _DWORD *v7; // rcx
  bool v9; // zf
  signed __int32 v10; // eax
  _DWORD *v11; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v15; // eax
  _DWORD *v16; // r9
  int v17; // eax
  int v18; // eax

  v2 = 0;
  while ( 1 )
  {
    v5 = *a1;
    while ( v5 < 0 )
    {
      if ( (v5 & 0x40000000) == 0 )
      {
        v10 = _InterlockedCompareExchange(a1, v5 | 0x40000000, v5);
        v9 = v5 == v10;
        v5 = v10;
        if ( !v9 )
          continue;
      }
      if ( a2 != 0xFF )
      {
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && a2 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v15 = ~(unsigned __int16)(-1LL << (a2 + 1));
              v9 = (v15 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v15;
              if ( v9 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        __writecr8(a2);
      }
      if ( (++v2 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v2);
      }
      else
      {
        _mm_pause();
      }
      if ( a2 != 0xFF )
      {
        a2 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 && a2 <= 0xFu )
          {
            v16 = KeGetCurrentPrcb()->SchedulerAssist;
            v16[5] |= (-1 << (a2 + 1)) & 4;
          }
        }
      }
      v5 = *a1;
    }
    v6 = KeGetCurrentPrcb();
    v7 = v6->SchedulerAssist;
    if ( v7 )
    {
      if ( v6->NestingLevel <= 1u )
      {
        v17 = v7[6];
        v7[6] = v17 + 1;
        if ( v17 == -1 )
          KiRemoveSystemWorkPriorityKick(v6);
      }
    }
    if ( v5 == _InterlockedCompareExchange(a1, (v5 + 1) & 0xBFFFFFFF, v5) )
      break;
    v11 = v6->SchedulerAssist;
    if ( v11 )
    {
      if ( v6->NestingLevel <= 1u )
      {
        v18 = v11[6] - 1;
        v11[6] = v18;
        if ( !v18 )
          KiRemoveSystemWorkPriorityKick(v6);
      }
    }
  }
  return v2;
}
