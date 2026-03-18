/*
 * XREFs of RtlpHpLfhContextCompact @ 0x1402384CC
 * Callers:
 *     RtlpHpHeapCompact @ 0x14035DBEC (RtlpHpHeapCompact.c)
 * Callees:
 *     RtlpHpLfhOwnerCompact @ 0x1402385B4 (RtlpHpLfhOwnerCompact.c)
 *     RtlpHpAcquireLockShared @ 0x140238714 (RtlpHpAcquireLockShared.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14027D690 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExfReleasePushLockShared @ 0x14035A580 (ExfReleasePushLockShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall RtlpHpLfhContextCompact(__int64 a1, int a2, __int64 a3)
{
  int v5; // ebp
  unsigned __int8 v6; // si
  __int64 *v7; // rbx
  __int64 v8; // r14
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v13; // eax
  bool v14; // zf

  v5 = a2 & 1;
  if ( (a2 & 1) != 0 )
    v6 = -1;
  else
    v6 = RtlpHpAcquireLockShared(a1 + 72, *(unsigned __int8 *)(a1 + 57), a3);
  v7 = (__int64 *)(a1 + 128);
  v8 = 129LL;
  do
  {
    result = *v7;
    if ( (*v7 & 1) == 0 )
      result = RtlpHpLfhOwnerCompact(a1, *v7, a2 | 1u);
    ++v7;
    --v8;
  }
  while ( v8 );
  if ( !v5 )
  {
    if ( *(_BYTE *)(a1 + 57) )
    {
      ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && v6 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v13 = ~(unsigned __int16)(-1LL << (v6 + 1));
            v14 = (v13 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v13;
            if ( v14 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      result = v6;
      __writecr8(v6);
    }
    else
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 72), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(a1 + 72);
      KeAbPostRelease(a1 + 72);
      return KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
    }
  }
  return result;
}
