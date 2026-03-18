/*
 * XREFs of ExtEnvCriticalFailure @ 0x1404D042C
 * Callers:
 *     HalpVpptInitializePhysicalTimer @ 0x1404BBBB4 (HalpVpptInitializePhysicalTimer.c)
 *     HalpVpptUpdatePhysicalTimer @ 0x1404BBF64 (HalpVpptUpdatePhysicalTimer.c)
 *     HsaFreeRemappingTableEntry @ 0x1404DE510 (HsaFreeRemappingTableEntry.c)
 *     HsaGetDeviceAperture @ 0x1404DE708 (HsaGetDeviceAperture.c)
 *     HsaUpdateRemappingTableEntry @ 0x1404DF800 (HsaUpdateRemappingTableEntry.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
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
