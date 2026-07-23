/*
 * XREFs of HalpMcUpdateUnlock @ 0x140384230
 * Callers:
 *     HalpPowerStateCallback @ 0x1403A7040 (HalpPowerStateCallback.c)
 *     HalpLoadMicrocode @ 0x140866180 (HalpLoadMicrocode.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     MmUnlockPreChargedPagedPool @ 0x1407773A0 (MmUnlockPreChargedPagedPool.c)
 */

__int64 HalpMcUpdateUnlock()
{
  unsigned int v0; // ebx

  v0 = 0;
  if ( HalpMcUpdateData && HalpMcUpdateDataCharged )
    MmUnlockPreChargedPagedPool(HalpMcUpdateData, (unsigned int)HalpMcUpdateDataSize);
  if ( HalpMcUpdateUnlockFunc )
    return (unsigned int)HalpMcUpdateUnlockFunc();
  return v0;
}
