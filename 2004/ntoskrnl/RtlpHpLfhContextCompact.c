/*
 * XREFs of RtlpHpLfhContextCompact @ 0x1402CB2FC
 * Callers:
 *     RtlpHpHeapCompact @ 0x1402DB5C4 (RtlpHpHeapCompact.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140207EC0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140224640 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExfReleasePushLockShared @ 0x1402748E0 (ExfReleasePushLockShared.c)
 *     RtlpHpLfhOwnerCompact @ 0x1402CB3E4 (RtlpHpLfhOwnerCompact.c)
 *     RtlpHpAcquireLockShared @ 0x1402CB544 (RtlpHpAcquireLockShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall RtlpHpLfhContextCompact(__int64 a1, int a2)
{
  int v4; // ebp
  unsigned __int8 v5; // si
  __int64 *v6; // rbx
  __int64 v7; // r14
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v12; // eax
  bool v13; // zf

  v4 = a2 & 1;
  if ( (a2 & 1) != 0 )
    v5 = -1;
  else
    v5 = RtlpHpAcquireLockShared(a1 + 72, *(unsigned __int8 *)(a1 + 57));
  v6 = (__int64 *)(a1 + 128);
  v7 = 129LL;
  do
  {
    result = *v6;
    if ( (*v6 & 1) == 0 )
      result = RtlpHpLfhOwnerCompact(a1, *v6, a2 | 1u);
    ++v6;
    --v7;
  }
  while ( v7 );
  if ( !v4 )
  {
    if ( *(_BYTE *)(a1 + 57) )
    {
      ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && v5 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v12 = ~(unsigned __int16)(-1LL << (v5 + 1));
            v13 = (v12 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v12;
            if ( v13 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      result = v5;
      __writecr8(v5);
    }
    else
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 72), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(a1 + 72));
      KeAbPostRelease(a1 + 72);
      return KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    }
  }
  return result;
}
