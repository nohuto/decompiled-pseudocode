/*
 * XREFs of HalpPCIAcquireConfigSpaceLock @ 0x14022FFA4
 * Callers:
 *     HalpPCIConfig @ 0x14022FCD0 (HalpPCIConfig.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x1402CDEB0 (KxAcquireSpinLock.c)
 */

void __fastcall HalpPCIAcquireConfigSpaceLock(unsigned __int8 *a1)
{
  unsigned __int8 CurrentIrql; // r10
  _DWORD *SchedulerAssist; // r9

  if ( HalpDoingCrashDump )
  {
    *a1 = 15;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= ~((unsigned __int16)(1LL << (CurrentIrql + 1)) - 1) & 0xFFFC;
    }
    *a1 = CurrentIrql;
    KxAcquireSpinLock(&HalpPCIConfigLock);
  }
}
