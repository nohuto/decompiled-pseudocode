/*
 * XREFs of _NtDeletePrivateNamespace@4 @ 0x4B2F36D0
 * Callers:
 *     <none>
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl NtDeletePrivateNamespace(HANDLE NamespaceHandle)
{
  return Wow64SystemServiceCall();
}
