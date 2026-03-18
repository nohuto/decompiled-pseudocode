/*
 * XREFs of PopLockGetDoDevicePowerState @ 0x14056A0AC
 * Callers:
 *     PiControlGetDevicePowerData @ 0x1408B0394 (PiControlGetDevicePowerData.c)
 *     NtGetDevicePowerState @ 0x1408ECF60 (NtGetDevicePowerState.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021E3C0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402D79F0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PopLockGetDoDevicePowerState(__int64 a1)
{
  KIRQL v2; // al
  unsigned int v3; // ebx
  unsigned __int64 v4; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rax
  _DWORD *SchedulerAssist; // r9
  int v8; // edx
  bool v9; // zf

  v2 = KeAcquireSpinLockRaiseToDpc(&PopIrpSerialLock);
  v3 = (*(_DWORD *)(a1 + 16) >> 4) & 0xF;
  v4 = v2;
  KxReleaseSpinLock(&PopIrpSerialLock);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v4 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v8 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
        v9 = (v8 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v8;
        if ( v9 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v4);
  return v3;
}
