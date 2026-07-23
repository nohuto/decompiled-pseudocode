/*
 * XREFs of ZwQueryVirtualMemory @ 0x18009D510
 * Callers:
 *     RtlCreateHeap @ 0x18000A8B0 (RtlCreateHeap.c)
 *     RtlpProtectHeap @ 0x18000E1C0 (RtlpProtectHeap.c)
 *     RtlpHpHeapValidateProtection @ 0x18000EE64 (RtlpHpHeapValidateProtection.c)
 *     RtlpGetImageBaseViaQueryVirtualMemory @ 0x180033544 (RtlpGetImageBaseViaQueryVirtualMemory.c)
 *     LdrpGetImageSize @ 0x18003376C (LdrpGetImageSize.c)
 *     RtlpGetTargetRvaFlag @ 0x1800476CC (RtlpGetTargetRvaFlag.c)
 *     LdrResSearchResource @ 0x180048B80 (LdrResSearchResource.c)
 *     LdrpResGetMappingSize @ 0x18004AC40 (LdrpResGetMappingSize.c)
 *     RtlpWalkFrameChain @ 0x1800516B0 (RtlpWalkFrameChain.c)
 *     LdrpProtectAndRelocateImage @ 0x180082ECC (LdrpProtectAndRelocateImage.c)
 *     LdrpTouchThreadStack @ 0x18008345C (LdrpTouchThreadStack.c)
 *     RtlLockCurrentThread @ 0x180083590 (RtlLockCurrentThread.c)
 *     LdrpGetModuleInfoFromVirtualMemory @ 0x180084244 (LdrpGetModuleInfoFromVirtualMemory.c)
 *     RtlUnlockCurrentThread @ 0x180086CC0 (RtlUnlockCurrentThread.c)
 *     LdrpCheckPagesForTampering @ 0x1800899CC (LdrpCheckPagesForTampering.c)
 *     LdrIsEnclaveAddress @ 0x1800CCF60 (LdrIsEnclaveAddress.c)
 *     LdrpIsExecutableRelocatedImage @ 0x1800CDC48 (LdrpIsExecutableRelocatedImage.c)
 *     LdrpCaptureCriticalThunks @ 0x1800D4CE4 (LdrpCaptureCriticalThunks.c)
 *     RtlResetStackOverflow @ 0x1800DEA54 (RtlResetStackOverflow.c)
 *     RtlUnlockHeapManagerForCloning @ 0x1800F3388 (RtlUnlockHeapManagerForCloning.c)
 *     RtlFlushSecureMemoryCache @ 0x1800F7DE0 (RtlFlushSecureMemoryCache.c)
 *     RtlpScanProcessVirtualMemory @ 0x1800F8860 (RtlpScanProcessVirtualMemory.c)
 *     RtlDebugCreateHeap @ 0x1800F9060 (RtlDebugCreateHeap.c)
 *     RtlGetNonVolatileToken @ 0x1800FC670 (RtlGetNonVolatileToken.c)
 *     RtlpUnsuppressForwardReferencingCallTarget @ 0x1800FDB14 (RtlpUnsuppressForwardReferencingCallTarget.c)
 *     RtlpHpHeapProtect @ 0x18010E5A4 (RtlpHpHeapProtect.c)
 *     RtlpHpLargeAllocationProtect @ 0x18010EA60 (RtlpHpLargeAllocationProtect.c)
 *     RtlpHpSegProtect @ 0x18010F724 (RtlpHpSegProtect.c)
 *     PsspCaptureAuxiliaryPages @ 0x1801151EC (PsspCaptureAuxiliaryPages.c)
 *     PsspQueryVmBulkMode @ 0x180115B80 (PsspQueryVmBulkMode.c)
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
