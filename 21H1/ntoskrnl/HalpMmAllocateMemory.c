/*
 * XREFs of HalpMmAllocateMemory @ 0x1403B6F20
 * Callers:
 *     HalpIommuInitializeAll @ 0x140996A44 (HalpIommuInitializeAll.c)
 *     EmonInitializeProfiling @ 0x14099B600 (EmonInitializeProfiling.c)
 *     Amd64InitializeProfiling @ 0x1409A5AA0 (Amd64InitializeProfiling.c)
 *     HalpKdEnumerateDebuggingDevices @ 0x1409B3230 (HalpKdEnumerateDebuggingDevices.c)
 *     HalpRegisterDeviceInUse @ 0x1409B356C (HalpRegisterDeviceInUse.c)
 * Callees:
 *     HalpMmAllocateMemoryInternal @ 0x1403B6FE8 (HalpMmAllocateMemoryInternal.c)
 */

__int64 __fastcall HalpMmAllocateMemory(__int64 a1)
{
  return HalpMmAllocateMemoryInternal(a1, 1LL);
}
