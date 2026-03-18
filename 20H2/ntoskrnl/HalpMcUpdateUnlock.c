/*
 * XREFs of HalpMcUpdateUnlock @ 0x14038661C
 * Callers:
 *     HalpPowerStateCallback @ 0x1403A6630 (HalpPowerStateCallback.c)
 *     HalpLoadMicrocode @ 0x140868410 (HalpLoadMicrocode.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     MmUnlockPreChargedPagedPool @ 0x140773370 (MmUnlockPreChargedPagedPool.c)
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
