/*
 * XREFs of NtCreateIRTimer @ 0x14078EE90
 * Callers:
 *     <none>
 * Callees:
 *     NtCreateTimer2 @ 0x1406ABC10 (NtCreateTimer2.c)
 */

NTSTATUS __cdecl NtCreateIRTimer(PHANDLE TimerHandle, PVOID Reserved, ACCESS_MASK DesiredAccess)
{
  return NtCreateTimer2(TimerHandle, Reserved, 0LL, 2u, DesiredAccess);
}
