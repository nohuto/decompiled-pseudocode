/*
 * XREFs of PopDirectedDripsStartDisengageTimer @ 0x140568D8C
 * Callers:
 *     PopRequestCompletion @ 0x14037A450 (PopRequestCompletion.c)
 *     PoFxNotifySurprisePowerOn @ 0x14038BC60 (PoFxNotifySurprisePowerOn.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     KeCancelTimer2 @ 0x14026DD80 (KeCancelTimer2.c)
 *     KeSetTimer2 @ 0x1402D0DD0 (KeSetTimer2.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140362F80 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopDirectedDripsSetDisengageReason @ 0x14037A094 (PopDirectedDripsSetDisengageReason.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PopDirectedDripsStartDisengageTimer(int a1)
{
  KSPIN_LOCK *v1; // rbx
  unsigned __int64 v2; // rdi
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  bool v6; // zf
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = (KSPIN_LOCK *)((char *)&unk_140C24D50 + 160 * a1);
  v7[0] = 0LL;
  v2 = KeAcquireSpinLockRaiseToDpc(v1 + 1);
  v7[1] = -1LL;
  if ( !KeCancelTimer2((__int64)(v1 + 3)) && ++*((_DWORD *)v1 + 5) == 1 )
    PopDirectedDripsSetDisengageReason(*(_DWORD *)v1);
  KeSetTimer2((__int64)(v1 + 3), -10000000LL * *((unsigned int *)v1 + 1), 0LL, (__int64)v7);
  ++*((_DWORD *)v1 + 4);
  KxReleaseSpinLock(v1 + 1);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v2 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v6 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v6 )
          result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v2);
  return result;
}
