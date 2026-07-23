/*
 * XREFs of ZwDeletePrivateNamespace @ 0x1403F9C30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwDeletePrivateNamespace(HANDLE NamespaceHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(NamespaceHandle);
}
