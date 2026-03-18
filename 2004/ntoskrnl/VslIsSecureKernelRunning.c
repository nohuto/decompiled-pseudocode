/*
 * XREFs of VslIsSecureKernelRunning @ 0x140360E6C
 * Callers:
 *     ExpQuerySystemInformation @ 0x14068F290 (ExpQuerySystemInformation.c)
 *     IopLiveDumpAllocAndInitResources @ 0x14089393C (IopLiveDumpAllocAndInitResources.c)
 *     IopLiveDumpFreeDumpBuffers @ 0x140894DA0 (IopLiveDumpFreeDumpBuffers.c)
 *     IopLiveDumpCaptureMemoryPages @ 0x1409A8AF4 (IopLiveDumpCaptureMemoryPages.c)
 * Callees:
 *     <none>
 */

char VslIsSecureKernelRunning()
{
  return VslVsmEnabled;
}
