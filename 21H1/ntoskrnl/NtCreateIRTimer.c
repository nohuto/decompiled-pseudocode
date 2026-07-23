/*
 * XREFs of NtCreateIRTimer @ 0x14077A4F0
 * Callers:
 *     <none>
 * Callees:
 *     NtCreateTimer2 @ 0x140643D60 (NtCreateTimer2.c)
 */

NTSTATUS __cdecl NtCreateIRTimer(PHANDLE TimerHandle, PVOID Reserved, ACCESS_MASK DesiredAccess)
{
  return NtCreateTimer2(TimerHandle, Reserved, 0LL, 2u, DesiredAccess);
}
