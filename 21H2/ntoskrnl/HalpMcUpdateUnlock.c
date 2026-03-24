/*
 * XREFs of HalpMcUpdateUnlock @ 0x1403840E0
 * Callers:
 *     HalpPowerStateCallback @ 0x1403A6EF0 (HalpPowerStateCallback.c)
 *     HalpLoadMicrocode @ 0x140866020 (HalpLoadMicrocode.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     MmUnlockPreChargedPagedPool @ 0x1407771E0 (MmUnlockPreChargedPagedPool.c)
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
