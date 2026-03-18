/*
 * XREFs of FsRtlPostStackOverflow @ 0x140542F30
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlpPostStackOverflow @ 0x140542FC4 (FsRtlpPostStackOverflow.c)
 */

void __stdcall FsRtlPostStackOverflow(PVOID Context, PKEVENT Event, PFSRTL_STACK_OVERFLOW_ROUTINE StackOverflowRoutine)
{
  FsRtlpPostStackOverflow(Context, Event, StackOverflowRoutine, 0LL);
}
