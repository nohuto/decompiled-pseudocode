/*
 * XREFs of HalpMmAllocateMemory @ 0x1403BA7F0
 * Callers:
 *     HalpIommuInitializeAll @ 0x14099DE54 (HalpIommuInitializeAll.c)
 *     EmonInitializeProfiling @ 0x1409A2EA0 (EmonInitializeProfiling.c)
 *     Amd64InitializeProfiling @ 0x1409AC850 (Amd64InitializeProfiling.c)
 *     HalpKdEnumerateDebuggingDevices @ 0x1409B9230 (HalpKdEnumerateDebuggingDevices.c)
 *     HalpRegisterDeviceInUse @ 0x1409B956C (HalpRegisterDeviceInUse.c)
 * Callees:
 *     HalpMmAllocateMemoryInternal @ 0x1403BA8B8 (HalpMmAllocateMemoryInternal.c)
 */

__int64 __fastcall HalpMmAllocateMemory(__int64 a1)
{
  return HalpMmAllocateMemoryInternal(a1, 1LL);
}
