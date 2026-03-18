/*
 * XREFs of HalpMcUpdateUnlock @ 0x14037FB70
 * Callers:
 *     HalpPowerStateCallback @ 0x1403A3AB0 (HalpPowerStateCallback.c)
 *     HalpLoadMicrocode @ 0x1408616D0 (HalpLoadMicrocode.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     MmUnlockPreChargedPagedPool @ 0x14075FBA0 (MmUnlockPreChargedPagedPool.c)
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
