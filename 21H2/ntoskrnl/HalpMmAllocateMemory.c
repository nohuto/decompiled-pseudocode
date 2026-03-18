/*
 * XREFs of HalpMmAllocateMemory @ 0x1403BECF8
 * Callers:
 *     HalpIommuInitializeAll @ 0x140A543D8 (HalpIommuInitializeAll.c)
 *     EmonInitializeProfiling @ 0x140A557A0 (EmonInitializeProfiling.c)
 *     Amd64InitializeProfiling @ 0x140A63680 (Amd64InitializeProfiling.c)
 *     HalpRegisterDeviceInUse @ 0x140A70DE0 (HalpRegisterDeviceInUse.c)
 *     HalpKdEnumerateDebuggingDevices @ 0x140A71180 (HalpKdEnumerateDebuggingDevices.c)
 * Callees:
 *     HalpMmAllocateMemoryInternal @ 0x1403BF104 (HalpMmAllocateMemoryInternal.c)
 */

__int64 __fastcall HalpMmAllocateMemory(__int64 a1)
{
  return HalpMmAllocateMemoryInternal(a1, 1LL);
}
