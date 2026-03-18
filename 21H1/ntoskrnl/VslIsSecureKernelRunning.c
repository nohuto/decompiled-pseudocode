/*
 * XREFs of VslIsSecureKernelRunning @ 0x14032339C
 * Callers:
 *     ExpQuerySystemInformation @ 0x1405E5DF0 (ExpQuerySystemInformation.c)
 *     IopLiveDumpAllocAndInitResources @ 0x14089261C (IopLiveDumpAllocAndInitResources.c)
 *     IopLiveDumpFreeDumpBuffers @ 0x140893A80 (IopLiveDumpFreeDumpBuffers.c)
 *     IopLiveDumpCaptureMemoryPages @ 0x1409A7C94 (IopLiveDumpCaptureMemoryPages.c)
 * Callees:
 *     <none>
 */

char VslIsSecureKernelRunning()
{
  return VslVsmEnabled;
}
