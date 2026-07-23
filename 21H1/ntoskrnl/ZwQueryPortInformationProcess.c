/*
 * XREFs of ZwQueryPortInformationProcess @ 0x1403F4E30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS ZwQueryPortInformationProcess(void)
{
  __int64 v0; // rcx

  _disable();
  __readeflags();
  return KiServiceInternal(v0);
}
