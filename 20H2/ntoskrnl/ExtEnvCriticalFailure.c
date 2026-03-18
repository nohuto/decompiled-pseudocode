/*
 * XREFs of ExtEnvCriticalFailure @ 0x1404D39CC
 * Callers:
 *     HalpVpptInitializePhysicalTimer @ 0x1404BF0D4 (HalpVpptInitializePhysicalTimer.c)
 *     HalpVpptUpdatePhysicalTimer @ 0x1404BF484 (HalpVpptUpdatePhysicalTimer.c)
 *     HsaFreeRemappingTableEntry @ 0x1404E1AA0 (HsaFreeRemappingTableEntry.c)
 *     HsaGetDeviceAperture @ 0x1404E1C98 (HsaGetDeviceAperture.c)
 *     HsaUpdateRemappingTableEntry @ 0x1404E2D90 (HsaUpdateRemappingTableEntry.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
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
