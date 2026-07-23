/*
 * XREFs of ZwContinue @ 0x1403F89D0
 * Callers:
 *     RtlRestoreContext @ 0x140405690 (RtlRestoreContext.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwContinue(PCONTEXT ContextRecord, BOOLEAN TestAlert)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ContextRecord);
}
