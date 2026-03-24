/*
 * XREFs of ExtEnvCriticalFailure @ 0x1404D539C
 * Callers:
 *     HalpVpptInitializePhysicalTimer @ 0x1404C0AA4 (HalpVpptInitializePhysicalTimer.c)
 *     HalpVpptUpdatePhysicalTimer @ 0x1404C0E54 (HalpVpptUpdatePhysicalTimer.c)
 *     HsaFreeRemappingTableEntry @ 0x1404E3590 (HsaFreeRemappingTableEntry.c)
 *     HsaGetDeviceAperture @ 0x1404E3784 (HsaGetDeviceAperture.c)
 *     HsaUpdateRemappingTableEntry @ 0x1404E48C0 (HsaUpdateRemappingTableEntry.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
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
