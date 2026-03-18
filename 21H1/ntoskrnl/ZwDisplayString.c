/*
 * XREFs of ZwDisplayString @ 0x1403F3E90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwDisplayString(PUNICODE_STRING String)
{
  __int64 v1; // rdx

  _disable();
  __readeflags();
  return KiServiceInternal(String, v1);
}
