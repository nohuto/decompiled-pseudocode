/*
 * XREFs of HalpMcUpdateUnlock @ 0x14038B3D8
 * Callers:
 *     HalpPowerStateCallback @ 0x1403A4210 (HalpPowerStateCallback.c)
 *     HalpLoadMicrocode @ 0x1408629F0 (HalpLoadMicrocode.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     MmUnlockPreChargedPagedPool @ 0x140767CA0 (MmUnlockPreChargedPagedPool.c)
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
