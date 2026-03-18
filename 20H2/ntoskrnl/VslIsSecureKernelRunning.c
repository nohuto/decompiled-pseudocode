/*
 * XREFs of VslIsSecureKernelRunning @ 0x140331C6C
 * Callers:
 *     ExpQuerySystemInformation @ 0x140608060 (ExpQuerySystemInformation.c)
 *     IopLiveDumpAllocAndInitResources @ 0x1408995EC (IopLiveDumpAllocAndInitResources.c)
 *     IopLiveDumpFreeDumpBuffers @ 0x14089AA50 (IopLiveDumpFreeDumpBuffers.c)
 *     IopLiveDumpCaptureMemoryPages @ 0x1409AEA64 (IopLiveDumpCaptureMemoryPages.c)
 * Callees:
 *     <none>
 */

char VslIsSecureKernelRunning()
{
  return VslVsmEnabled;
}
