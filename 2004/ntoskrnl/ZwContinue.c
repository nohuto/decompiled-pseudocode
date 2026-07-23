/*
 * XREFs of ZwContinue @ 0x1403F3E20
 * Callers:
 *     RtlRestoreContext @ 0x1403FF3C0 (RtlRestoreContext.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwContinue(PCONTEXT ContextRecord, BOOLEAN TestAlert)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ContextRecord);
}
