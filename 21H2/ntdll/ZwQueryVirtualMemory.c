/*
 * XREFs of ZwQueryVirtualMemory @ 0x18009DA60
 * Callers:
 *     RtlCreateHeap @ 0x18000A8B0 (RtlCreateHeap.c)
 *     RtlpProtectHeap @ 0x18000E1C0 (RtlpProtectHeap.c)
 *     RtlpHpHeapValidateProtection @ 0x18000EE64 (RtlpHpHeapValidateProtection.c)
 *     RtlpGetImageBaseViaQueryVirtualMemory @ 0x180033544 (RtlpGetImageBaseViaQueryVirtualMemory.c)
 *     LdrpGetImageSize @ 0x18003376C (LdrpGetImageSize.c)
 *     RtlpWalkFrameChain @ 0x180052760 (RtlpWalkFrameChain.c)
 *     RtlpGetTargetRvaFlag @ 0x180053FF8 (RtlpGetTargetRvaFlag.c)
 *     LdrResSearchResource @ 0x1800554B0 (LdrResSearchResource.c)
 *     LdrpResGetMappingSize @ 0x1800578D0 (LdrpResGetMappingSize.c)
 *     LdrpProtectAndRelocateImage @ 0x1800835DC (LdrpProtectAndRelocateImage.c)
 *     LdrpTouchThreadStack @ 0x180083B6C (LdrpTouchThreadStack.c)
 *     RtlLockCurrentThread @ 0x180083CA0 (RtlLockCurrentThread.c)
 *     LdrpGetModuleInfoFromVirtualMemory @ 0x180084644 (LdrpGetModuleInfoFromVirtualMemory.c)
 *     RtlUnlockCurrentThread @ 0x1800872C0 (RtlUnlockCurrentThread.c)
 *     LdrpCheckPagesForTampering @ 0x180089FCC (LdrpCheckPagesForTampering.c)
 *     LdrIsEnclaveAddress @ 0x1800CCEE0 (LdrIsEnclaveAddress.c)
 *     LdrpIsExecutableRelocatedImage @ 0x1800CDBC8 (LdrpIsExecutableRelocatedImage.c)
 *     LdrpCaptureCriticalThunks @ 0x1800D4A54 (LdrpCaptureCriticalThunks.c)
 *     RtlResetStackOverflow @ 0x1800DE7C4 (RtlResetStackOverflow.c)
 *     RtlUnlockHeapManagerForCloning @ 0x1800F31D8 (RtlUnlockHeapManagerForCloning.c)
 *     RtlFlushSecureMemoryCache @ 0x1800F7C30 (RtlFlushSecureMemoryCache.c)
 *     RtlpScanProcessVirtualMemory @ 0x1800F86B0 (RtlpScanProcessVirtualMemory.c)
 *     RtlDebugCreateHeap @ 0x1800F8EB0 (RtlDebugCreateHeap.c)
 *     RtlGetNonVolatileToken @ 0x1800FC4D0 (RtlGetNonVolatileToken.c)
 *     RtlpUnsuppressForwardReferencingCallTarget @ 0x1800FD974 (RtlpUnsuppressForwardReferencingCallTarget.c)
 *     RtlpHpHeapProtect @ 0x18010E404 (RtlpHpHeapProtect.c)
 *     RtlpHpLargeAllocationProtect @ 0x18010E8C0 (RtlpHpLargeAllocationProtect.c)
 *     RtlpHpSegProtect @ 0x18010F584 (RtlpHpSegProtect.c)
 *     PsspCaptureAuxiliaryPages @ 0x18011504C (PsspCaptureAuxiliaryPages.c)
 *     PsspQueryVmBulkMode @ 0x1801159E0 (PsspQueryVmBulkMode.c)
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
