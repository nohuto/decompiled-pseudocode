/*
 * XREFs of ExtEnvCriticalFailure @ 0x14052266C
 * Callers:
 *     HalpVpptInitializePhysicalTimer @ 0x14050D564 (HalpVpptInitializePhysicalTimer.c)
 *     HalpVpptUpdatePhysicalTimer @ 0x14050D91C (HalpVpptUpdatePhysicalTimer.c)
 *     HsaFreeRemappingTableEntry @ 0x140532200 (HsaFreeRemappingTableEntry.c)
 *     HsaGetDeviceAperture @ 0x140532404 (HsaGetDeviceAperture.c)
 *     HsaUpdateRemappingTableEntry @ 0x140533520 (HsaUpdateRemappingTableEntry.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
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
