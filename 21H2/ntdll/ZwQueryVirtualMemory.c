/*
 * XREFs of ZwQueryVirtualMemory @ 0x18009DAA0
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
 *     LdrIsEnclaveAddress @ 0x1800CCF20 (LdrIsEnclaveAddress.c)
 *     LdrpIsExecutableRelocatedImage @ 0x1800CDC08 (LdrpIsExecutableRelocatedImage.c)
 *     LdrpCaptureCriticalThunks @ 0x1800D4A94 (LdrpCaptureCriticalThunks.c)
 *     RtlResetStackOverflow @ 0x1800DE804 (RtlResetStackOverflow.c)
 *     RtlUnlockHeapManagerForCloning @ 0x1800F3218 (RtlUnlockHeapManagerForCloning.c)
 *     RtlFlushSecureMemoryCache @ 0x1800F7C70 (RtlFlushSecureMemoryCache.c)
 *     RtlpScanProcessVirtualMemory @ 0x1800F86F0 (RtlpScanProcessVirtualMemory.c)
 *     RtlDebugCreateHeap @ 0x1800F8EF0 (RtlDebugCreateHeap.c)
 *     RtlGetNonVolatileToken @ 0x1800FC510 (RtlGetNonVolatileToken.c)
 *     RtlpUnsuppressForwardReferencingCallTarget @ 0x1800FD9B4 (RtlpUnsuppressForwardReferencingCallTarget.c)
 *     RtlpHpHeapProtect @ 0x18010E444 (RtlpHpHeapProtect.c)
 *     RtlpHpLargeAllocationProtect @ 0x18010E900 (RtlpHpLargeAllocationProtect.c)
 *     RtlpHpSegProtect @ 0x18010F5C4 (RtlpHpSegProtect.c)
 *     PsspCaptureAuxiliaryPages @ 0x18011508C (PsspCaptureAuxiliaryPages.c)
 *     PsspQueryVmBulkMode @ 0x180115A20 (PsspQueryVmBulkMode.c)
 * Callees:
 *     <none>
 */

__int64 ZwQueryVirtualMemory()
{
  __int64 result; // rax

  result = 35LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
