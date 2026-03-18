/*
 * XREFs of PpmIdleCsVetoAccountingDeviceUpdate @ 0x140564CD4
 * Callers:
 *     PopFxPlatformStateAvailable @ 0x14056A07C (PopFxPlatformStateAvailable.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x14021E5F0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x14021E780 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     PpmIdleCsVetoAccountingUpdateBlock @ 0x140564E8C (PpmIdleCsVetoAccountingUpdateBlock.c)
 */

__int64 __fastcall PpmIdleCsVetoAccountingDeviceUpdate(unsigned int a1, char a2)
{
  __int64 result; // rax
  __int64 v4; // rsi
  unsigned __int64 v5; // rbx
  __int64 v6; // r8
  __int64 v7; // rdx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v10; // zf

  result = PpmPlatformStates;
  v4 = a1;
  if ( *(_DWORD *)(PpmPlatformStates + 4) )
  {
    v5 = KeAcquireSpinLockRaiseToDpc(&PpmIdleVetoLock);
    LOBYTE(v6) = a2;
    LOBYTE(v7) = 1;
    PpmIdleCsVetoAccountingUpdateBlock(384 * v4 + PpmPlatformStates + 80, v7, v6);
    KxReleaseSpinLock(&PpmIdleVetoLock);
    result = (unsigned int)KiIrqlFlags;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        result = KeGetCurrentIrql();
        if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v5 <= 0xFu && (unsigned __int8)result >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
          v10 = ((unsigned int)result & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= result;
          if ( v10 )
            result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v5);
  }
  return result;
}
