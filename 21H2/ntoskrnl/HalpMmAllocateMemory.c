/*
 * XREFs of HalpMmAllocateMemory @ 0x1403BB360
 * Callers:
 *     HalpIommuInitializeAll @ 0x14099C3D4 (HalpIommuInitializeAll.c)
 *     EmonInitializeProfiling @ 0x1409A15F0 (EmonInitializeProfiling.c)
 *     Amd64InitializeProfiling @ 0x1409AA650 (Amd64InitializeProfiling.c)
 *     HalpKdEnumerateDebuggingDevices @ 0x1409B7230 (HalpKdEnumerateDebuggingDevices.c)
 *     HalpRegisterDeviceInUse @ 0x1409B756C (HalpRegisterDeviceInUse.c)
 * Callees:
 *     HalpMmAllocateMemoryInternal @ 0x1403BB428 (HalpMmAllocateMemoryInternal.c)
 */

__int64 __fastcall HalpMmAllocateMemory(__int64 a1)
{
  return HalpMmAllocateMemoryInternal(a1, 1LL);
}
