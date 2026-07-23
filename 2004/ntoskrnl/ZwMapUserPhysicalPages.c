/*
 * XREFs of ZwMapUserPhysicalPages @ 0x1403F5820
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwMapUserPhysicalPages(PVOID VirtualAddress, ULONG_PTR NumberOfPages, PULONG_PTR UserPfnArray)
{
  _disable();
  __readeflags();
  return KiServiceInternal(VirtualAddress);
}
