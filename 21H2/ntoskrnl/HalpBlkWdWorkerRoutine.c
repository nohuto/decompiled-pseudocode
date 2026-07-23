/*
 * XREFs of HalpBlkWdWorkerRoutine @ 0x1404DF510
 * Callers:
 *     <none>
 * Callees:
 *     HalpBlkWdFatalExceptionCheck @ 0x1404DF480 (HalpBlkWdFatalExceptionCheck.c)
 */

ULONG_PTR HalpBlkWdWorkerRoutine()
{
  unsigned int i; // edi
  ULONG_PTR result; // rax

  for ( i = 0; i < (unsigned int)HalpBlkNumberProcessors; ++i )
    result = HalpBlkWdFatalExceptionCheck(i);
  _InterlockedExchange(&HalpBlkWdPollingInProgress, 0);
  return result;
}
