/*
 * XREFs of HalpMmAllocateMemory @ 0x1403B7D50
 * Callers:
 *     HalpIommuInitializeAll @ 0x140997E14 (HalpIommuInitializeAll.c)
 *     EmonInitializeProfiling @ 0x14099CDA0 (EmonInitializeProfiling.c)
 *     Amd64InitializeProfiling @ 0x1409A68E0 (Amd64InitializeProfiling.c)
 *     HalpKdEnumerateDebuggingDevices @ 0x1409B3230 (HalpKdEnumerateDebuggingDevices.c)
 *     HalpRegisterDeviceInUse @ 0x1409B356C (HalpRegisterDeviceInUse.c)
 * Callees:
 *     HalpMmAllocateMemoryInternal @ 0x1403B7E18 (HalpMmAllocateMemoryInternal.c)
 */

__int64 __fastcall HalpMmAllocateMemory(__int64 a1)
{
  return HalpMmAllocateMemoryInternal(a1, 1LL);
}
