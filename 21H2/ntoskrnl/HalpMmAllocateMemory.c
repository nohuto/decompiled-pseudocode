/*
 * XREFs of HalpMmAllocateMemory @ 0x1403BB1F0
 * Callers:
 *     HalpIommuInitializeAll @ 0x14099B3D4 (HalpIommuInitializeAll.c)
 *     EmonInitializeProfiling @ 0x1409A06C0 (EmonInitializeProfiling.c)
 *     Amd64InitializeProfiling @ 0x1409A9720 (Amd64InitializeProfiling.c)
 *     HalpKdEnumerateDebuggingDevices @ 0x1409B6230 (HalpKdEnumerateDebuggingDevices.c)
 *     HalpRegisterDeviceInUse @ 0x1409B656C (HalpRegisterDeviceInUse.c)
 * Callees:
 *     HalpMmAllocateMemoryInternal @ 0x1403BB2B8 (HalpMmAllocateMemoryInternal.c)
 */

__int64 __fastcall HalpMmAllocateMemory(__int64 a1)
{
  return HalpMmAllocateMemoryInternal(a1, 1LL);
}
