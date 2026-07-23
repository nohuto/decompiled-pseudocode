/*
 * XREFs of ZwContinue @ 0x1403F2B90
 * Callers:
 *     RtlRestoreContext @ 0x1403FE130 (RtlRestoreContext.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwContinue(PCONTEXT ContextRecord, BOOLEAN TestAlert)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ContextRecord);
}
