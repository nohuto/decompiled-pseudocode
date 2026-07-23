/*
 * XREFs of ZwProtectVirtualMemory @ 0x18009D810
 * Callers:
 *     RtlpLowFragHeapFlushCaches @ 0x180003888 (RtlpLowFragHeapFlushCaches.c)
 *     RtlpFreeUserBlockToHeap @ 0x180004484 (RtlpFreeUserBlockToHeap.c)
 *     RtlpProtectHeap @ 0x18000E1C0 (RtlpProtectHeap.c)
 *     LdrpCfgProcessLoadConfig @ 0x18000FDB4 (LdrpCfgProcessLoadConfig.c)
 *     LdrInitSecurityCookie @ 0x180010628 (LdrInitSecurityCookie.c)
 *     LdrpChangeMrdataProtection @ 0x1800134FC (LdrpChangeMrdataProtection.c)
 *     LdrpPrepareImportAddressTableForSnap @ 0x180014F84 (LdrpPrepareImportAddressTableForSnap.c)
 *     RtlpAllocateUserBlockFromHeap @ 0x18001F3EC (RtlpAllocateUserBlockFromHeap.c)
 *     RtlpFreeHeapInternal @ 0x180025710 (RtlpFreeHeapInternal.c)
 *     LdrpWriteBackProtectedDelayLoad @ 0x1800477A0 (LdrpWriteBackProtectedDelayLoad.c)
 *     LdrpDoPostSnapWork @ 0x180047B60 (LdrpDoPostSnapWork.c)
 *     LdrpSetProtection @ 0x180082EA8 (LdrpSetProtection.c)
 *     LdrpCorFixupImage @ 0x1800CE698 (LdrpCorFixupImage.c)
 *     AVrfpSnapDllImports @ 0x1800DB2C0 (AVrfpSnapDllImports.c)
 *     AvrfMiniLoadDll @ 0x1800DB580 (AvrfMiniLoadDll.c)
 *     RtlResetStackOverflow @ 0x1800DE6B4 (RtlResetStackOverflow.c)
 *     RtlpSubSegmentDebugInitialize @ 0x18010B79C (RtlpSubSegmentDebugInitialize.c)
 *     RtlpHpHeapProtect @ 0x18010E094 (RtlpHpHeapProtect.c)
 *     RtlpHpLargeAllocationProtect @ 0x18010E550 (RtlpHpLargeAllocationProtect.c)
 *     RtlpHpSegProtect @ 0x18010F214 (RtlpHpSegProtect.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwProtectVirtualMemory(
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        PSIZE_T RegionSize,
        ULONG NewProtect,
        PULONG OldProtect)
{
  NTSTATUS result; // eax

  result = 80;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
