/*
 * XREFs of PopDirectedDripsStartDisengageTimer @ 0x14056707C
 * Callers:
 *     PopRequestCompletion @ 0x14037A700 (PopRequestCompletion.c)
 *     PoFxNotifySurprisePowerOn @ 0x14038B3C0 (PoFxNotifySurprisePowerOn.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x14021E5F0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x14021E780 (KxReleaseSpinLock.c)
 *     KeSetTimer2 @ 0x1402E0AF0 (KeSetTimer2.c)
 *     KeCancelTimer2 @ 0x14033C240 (KeCancelTimer2.c)
 *     PopDirectedDripsSetDisengageReason @ 0x14037A344 (PopDirectedDripsSetDisengageReason.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PopDirectedDripsStartDisengageTimer(int a1)
{
  KSPIN_LOCK *v1; // rbx
  unsigned __int64 v2; // rdi
  __int64 v3; // r8
  _DWORD *v4; // r9
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  bool v8; // zf
  _QWORD v9[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = (KSPIN_LOCK *)((char *)&unk_140C24BB0 + 160 * a1);
  v9[0] = 0LL;
  v2 = KeAcquireSpinLockRaiseToDpc(v1 + 1);
  v9[1] = -1LL;
  if ( !KeCancelTimer2((__int64)(v1 + 3), 0LL, v3, v4) && ++*((_DWORD *)v1 + 5) == 1 )
    PopDirectedDripsSetDisengageReason(*(_DWORD *)v1);
  KeSetTimer2((__int64)(v1 + 3), -10000000LL * *((unsigned int *)v1 + 1), 0LL, (__int64)v9);
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
        v8 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v8 )
          result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v2);
  return result;
}
