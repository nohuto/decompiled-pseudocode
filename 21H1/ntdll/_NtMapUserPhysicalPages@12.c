/*
 * XREFs of _NtMapUserPhysicalPages@12 @ 0x4B2F3AB0
 * Callers:
 *     <none>
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl NtMapUserPhysicalPages(PVOID VirtualAddress, ULONG_PTR NumberOfPages, PULONG_PTR UserPfnArray)
{
  return Wow64SystemServiceCall();
}
