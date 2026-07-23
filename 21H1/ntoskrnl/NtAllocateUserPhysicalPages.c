/*
 * XREFs of NtAllocateUserPhysicalPages @ 0x1408D1E70
 * Callers:
 *     <none>
 * Callees:
 *     MiAllocateUserPhysicalPages @ 0x1408D0398 (MiAllocateUserPhysicalPages.c)
 */

NTSTATUS __cdecl NtAllocateUserPhysicalPages(HANDLE ProcessHandle, PULONG_PTR NumberOfPages, PULONG_PTR UserPfnArray)
{
  return MiAllocateUserPhysicalPages(ProcessHandle, NumberOfPages, UserPfnArray, 0LL, 0);
}
