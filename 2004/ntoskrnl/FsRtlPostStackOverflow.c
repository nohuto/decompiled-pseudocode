/*
 * XREFs of FsRtlPostStackOverflow @ 0x1404EC210
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlpPostStackOverflow @ 0x1404EC2A4 (FsRtlpPostStackOverflow.c)
 */

void __stdcall FsRtlPostStackOverflow(PVOID Context, PKEVENT Event, PFSRTL_STACK_OVERFLOW_ROUTINE StackOverflowRoutine)
{
  FsRtlpPostStackOverflow(Context, Event, StackOverflowRoutine, 0LL);
}
