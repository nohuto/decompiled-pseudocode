/*
 * XREFs of RtlpHpLargeAllocSetExtraPresent @ 0x14058FE38
 * Callers:
 *     RtlpHpExtrasSetPresent @ 0x14058F4F0 (RtlpHpExtrasSetPresent.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140207EC0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140224640 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExfReleasePushLockShared @ 0x1402748E0 (ExfReleasePushLockShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     RtlpHpLargeLockAcquireShared @ 0x1405901CC (RtlpHpLargeLockAcquireShared.c)
 */

unsigned __int64 __fastcall RtlpHpLargeAllocSetExtraPresent(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  char v4; // r14
  unsigned __int64 result; // rax
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v11; // zf

  v4 = a3;
  result = RtlpHpLargeLockAcquireShared(a1, a3);
  v7 = (unsigned __int8)result;
  v8 = *(_QWORD *)(a1 + 72);
  if ( (*(_BYTE *)(a1 + 80) & 1) != 0 )
  {
    if ( v8 )
      v8 ^= a1 + 72;
    else
      v8 = 0LL;
  }
  while ( v8 )
  {
    result = *(_QWORD *)(v8 + 24) & 0xFFFFFFFFFFFF0000uLL;
    if ( a2 < result )
    {
      result = *(_QWORD *)v8;
    }
    else
    {
      if ( a2 <= result )
        goto LABEL_16;
      result = *(_QWORD *)(v8 + 8);
    }
    if ( (*(_BYTE *)(a1 + 80) & 1) != 0 && result )
      v8 ^= result;
    else
      v8 = result;
  }
  v8 = 0LL;
LABEL_16:
  if ( (v4 & 1) == 0 )
  {
    if ( (*(_DWORD *)a1 & 1) != 0 )
    {
      ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
      result = (unsigned int)KiIrqlFlags;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          result = KeGetCurrentIrql();
          if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v7 <= 0xFu && (unsigned __int8)result >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
            v11 = ((unsigned int)result & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= result;
            if ( v11 )
              result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(v7);
    }
    else
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 64), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(a1 + 64));
      KeAbPostRelease(a1 + 64);
      result = KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    }
  }
  *(_QWORD *)(v8 + 32) |= 1uLL;
  return result;
}
