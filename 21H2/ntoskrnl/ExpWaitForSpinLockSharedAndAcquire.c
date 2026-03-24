/*
 * XREFs of ExpWaitForSpinLockSharedAndAcquire @ 0x14029BF60
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x140208250 (MiTrimOrAgeWorkingSet.c)
 *     MiProbeAndLockPrepare @ 0x14020A2F0 (MiProbeAndLockPrepare.c)
 *     MiUserFault @ 0x14020D770 (MiUserFault.c)
 *     MiLockWorkingSetShared @ 0x140219CB0 (MiLockWorkingSetShared.c)
 *     MiMakeHyperRangeAccessible @ 0x14021B4E0 (MiMakeHyperRangeAccessible.c)
 *     ExAcquireSpinLockShared @ 0x14021CD80 (ExAcquireSpinLockShared.c)
 *     MiSynchronizeSystemVa @ 0x140311C40 (MiSynchronizeSystemVa.c)
 *     MiMoveDirtyBitsToPfns @ 0x140317490 (MiMoveDirtyBitsToPfns.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14031C8D0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiMakeSystemCacheRangeValid @ 0x14031EB90 (MiMakeSystemCacheRangeValid.c)
 *     MiOffsetToProtos @ 0x140320B50 (MiOffsetToProtos.c)
 *     MiSetProtectionOnSection @ 0x140332C70 (MiSetProtectionOnSection.c)
 *     ExpAddTagForBigPages @ 0x14033BDC0 (ExpAddTagForBigPages.c)
 *     ExFreeHeapPool @ 0x140341AC0 (ExFreeHeapPool.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1405B5C64 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x140390140 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140390F20 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall ExpWaitForSpinLockSharedAndAcquire(
        unsigned __int64 a1,
        __int64 a2,
        __int64 a3,
        _DWORD *SchedulerAssist)
{
  unsigned int v4; // esi
  unsigned __int8 v5; // bl
  volatile signed __int32 *v6; // r14
  signed __int32 v7; // edi
  struct _KPRCB *v8; // rbp
  _DWORD *v9; // rcx
  bool v11; // zf
  signed __int32 v12; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v15; // eax
  int v16; // eax
  int v17; // eax

  v4 = 0;
  v5 = a2;
  v6 = (volatile signed __int32 *)a1;
  while ( 1 )
  {
    v7 = *v6;
    while ( v7 < 0 )
    {
      if ( (v7 & 0x40000000) == 0 )
      {
        a1 = (unsigned int)v7;
        LODWORD(a1) = v7 | 0x40000000;
        v12 = _InterlockedCompareExchange(v6, v7 | 0x40000000, v7);
        v11 = v7 == v12;
        v7 = v12;
        if ( !v11 )
          continue;
      }
      if ( v5 != 0xFF )
      {
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && v5 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              a1 = (unsigned int)v5 + 1;
              a2 = -1LL << (v5 + 1);
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v15 = ~(unsigned __int16)a2;
              v11 = (v15 & SchedulerAssist[5]) == 0;
              a3 = (unsigned int)v15 & SchedulerAssist[5];
              SchedulerAssist[5] = a3;
              if ( v11 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        __writecr8(v5);
      }
      if ( (++v4 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1, a2, a3, SchedulerAssist) )
      {
        HvlNotifyLongSpinWait(v4);
      }
      else
      {
        _mm_pause();
      }
      if ( v5 != 0xFF )
      {
        v5 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 && v5 <= 0xFu )
          {
            a1 = (unsigned int)v5 + 1;
            SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
            a2 = (-1LL << (v5 + 1)) & 4;
            a3 = (unsigned int)a2 | SchedulerAssist[5];
            SchedulerAssist[5] = a3;
          }
        }
      }
      v7 = *v6;
    }
    v8 = KeGetCurrentPrcb();
    v9 = v8->SchedulerAssist;
    if ( v9 )
    {
      if ( v8->NestingLevel <= 1u )
      {
        v16 = v9[6];
        v9[6] = v16 + 1;
        if ( v16 == -1 )
          KiRemoveSystemWorkPriorityKick(v8);
      }
    }
    if ( v7 == _InterlockedCompareExchange(v6, (v7 + 1) & 0xBFFFFFFF, v7) )
      break;
    a1 = (unsigned __int64)v8->SchedulerAssist;
    if ( a1 )
    {
      if ( v8->NestingLevel <= 1u )
      {
        v17 = *(_DWORD *)(a1 + 24) - 1;
        *(_DWORD *)(a1 + 24) = v17;
        if ( !v17 )
          KiRemoveSystemWorkPriorityKick(v8);
      }
    }
  }
  return v4;
}
