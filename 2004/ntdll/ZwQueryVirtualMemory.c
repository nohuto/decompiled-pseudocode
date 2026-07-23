/*
 * XREFs of ZwQueryVirtualMemory @ 0x18009D270
 * Callers:
 *     RtlCreateHeap @ 0x18000A8B0 (RtlCreateHeap.c)
 *     RtlpProtectHeap @ 0x18000E1C0 (RtlpProtectHeap.c)
 *     RtlpHpHeapValidateProtection @ 0x18000EE64 (RtlpHpHeapValidateProtection.c)
 *     RtlpGetImageBaseViaQueryVirtualMemory @ 0x180033544 (RtlpGetImageBaseViaQueryVirtualMemory.c)
 *     LdrpGetImageSize @ 0x18003376C (LdrpGetImageSize.c)
 *     RtlpGetTargetRvaFlag @ 0x18004767C (RtlpGetTargetRvaFlag.c)
 *     LdrResSearchResource @ 0x180048B30 (LdrResSearchResource.c)
 *     LdrpResGetMappingSize @ 0x18004ABF0 (LdrpResGetMappingSize.c)
 *     RtlpWalkFrameChain @ 0x180051660 (RtlpWalkFrameChain.c)
 *     LdrpProtectAndRelocateImage @ 0x180082DCC (LdrpProtectAndRelocateImage.c)
 *     LdrpTouchThreadStack @ 0x18008335C (LdrpTouchThreadStack.c)
 *     RtlLockCurrentThread @ 0x180083490 (RtlLockCurrentThread.c)
 *     LdrpGetModuleInfoFromVirtualMemory @ 0x180084144 (LdrpGetModuleInfoFromVirtualMemory.c)
 *     RtlUnlockCurrentThread @ 0x180086BC0 (RtlUnlockCurrentThread.c)
 *     LdrpCheckPagesForTampering @ 0x1800898CC (LdrpCheckPagesForTampering.c)
 *     LdrIsEnclaveAddress @ 0x1800CCD80 (LdrIsEnclaveAddress.c)
 *     LdrpIsExecutableRelocatedImage @ 0x1800CDA68 (LdrpIsExecutableRelocatedImage.c)
 *     LdrpCaptureCriticalThunks @ 0x1800D4944 (LdrpCaptureCriticalThunks.c)
 *     RtlResetStackOverflow @ 0x1800DE6B4 (RtlResetStackOverflow.c)
 *     RtlUnlockHeapManagerForCloning @ 0x1800F2E78 (RtlUnlockHeapManagerForCloning.c)
 *     RtlFlushSecureMemoryCache @ 0x1800F78D0 (RtlFlushSecureMemoryCache.c)
 *     RtlpScanProcessVirtualMemory @ 0x1800F8350 (RtlpScanProcessVirtualMemory.c)
 *     RtlDebugCreateHeap @ 0x1800F8B50 (RtlDebugCreateHeap.c)
 *     RtlGetNonVolatileToken @ 0x1800FC160 (RtlGetNonVolatileToken.c)
 *     RtlpUnsuppressForwardReferencingCallTarget @ 0x1800FD604 (RtlpUnsuppressForwardReferencingCallTarget.c)
 *     RtlpHpHeapProtect @ 0x18010E094 (RtlpHpHeapProtect.c)
 *     RtlpHpLargeAllocationProtect @ 0x18010E550 (RtlpHpLargeAllocationProtect.c)
 *     RtlpHpSegProtect @ 0x18010F214 (RtlpHpSegProtect.c)
 *     PsspCaptureAuxiliaryPages @ 0x180114CDC (PsspCaptureAuxiliaryPages.c)
 *     PsspQueryVmBulkMode @ 0x180115670 (PsspQueryVmBulkMode.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryVirtualMemory(
        HANDLE ProcessHandle,
        PVOID BaseAddress,
        MEMORY_INFORMATION_CLASS MemoryInformationClass,
        PVOID MemoryInformation,
        SIZE_T MemoryInformationLength,
        PSIZE_T ReturnLength)
{
  NTSTATUS result; // eax

  result = 35;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
