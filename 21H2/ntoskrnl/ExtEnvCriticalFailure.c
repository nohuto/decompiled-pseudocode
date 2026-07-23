/*
 * XREFs of ExtEnvCriticalFailure @ 0x1404D55DC
 * Callers:
 *     HalpVpptInitializePhysicalTimer @ 0x1404C0CE4 (HalpVpptInitializePhysicalTimer.c)
 *     HalpVpptUpdatePhysicalTimer @ 0x1404C1094 (HalpVpptUpdatePhysicalTimer.c)
 *     HsaFreeRemappingTableEntry @ 0x1404E37D0 (HsaFreeRemappingTableEntry.c)
 *     HsaGetDeviceAperture @ 0x1404E39C4 (HsaGetDeviceAperture.c)
 *     HsaUpdateRemappingTableEntry @ 0x1404E4B00 (HsaUpdateRemappingTableEntry.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 */

void __fastcall __noreturn ExtEnvCriticalFailure(
        __int64 a1,
        ULONG_PTR a2,
        ULONG_PTR a3,
        ULONG_PTR a4,
        ULONG_PTR BugCheckParameter4)
{
  KeBugCheckEx(0x5Cu, a2, a3, a4, BugCheckParameter4);
}
