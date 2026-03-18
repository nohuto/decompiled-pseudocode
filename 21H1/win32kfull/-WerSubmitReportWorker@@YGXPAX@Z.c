/*
 * XREFs of ?WerSubmitReportWorker@@YGXPAX@Z @ 0x19FA64
 * Callers:
 *     <none>
 * Callees:
 *     _WerKernelSubmitReportForHungProcess@12 @ 0x1B9A56 (_WerKernelSubmitReportForHungProcess@12.c)
 */

void __stdcall WerSubmitReportWorker(_DWORD *StartContext)
{
  WerKernelSubmitReportForHungProcess(StartContext[2]);
  Win32FreePool(StartContext);
}
