/*
 * XREFs of HalpMcUpdateLock @ 0x140388034
 * Callers:
 *     HalpPowerStateCallback @ 0x1403A7040 (HalpPowerStateCallback.c)
 *     HalStartDynamicProcessor @ 0x1404BC520 (HalStartDynamicProcessor.c)
 *     HalpLoadMicrocode @ 0x140866180 (HalpLoadMicrocode.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     MmLockPreChargedPagedPool @ 0x140777900 (MmLockPreChargedPagedPool.c)
 */

__int64 __fastcall HalpMcUpdateLock(__int64 a1, __int64 a2)
{
  PVOID v2; // rcx
  unsigned int v3; // ebx

  v2 = HalpMcUpdateData;
  v3 = 0;
  if ( HalpMcUpdateData && HalpMcUpdateDataCharged )
    MmLockPreChargedPagedPool(HalpMcUpdateData, (unsigned int)HalpMcUpdateDataSize);
  if ( HalpMcUpdateLockFunc )
  {
    LOBYTE(v2) = 1;
    LOBYTE(a2) = HalpMcUpdateData == 0LL;
    return (unsigned int)HalpMcUpdateLockFunc(v2, a2);
  }
  return v3;
}
