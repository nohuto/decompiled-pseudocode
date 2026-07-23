/*
 * XREFs of NtCreateIRTimer @ 0x14077C900
 * Callers:
 *     <none>
 * Callees:
 *     NtCreateTimer2 @ 0x14060EB30 (NtCreateTimer2.c)
 */

NTSTATUS __cdecl NtCreateIRTimer(PHANDLE TimerHandle, PVOID Reserved, ACCESS_MASK DesiredAccess)
{
  return NtCreateTimer2(TimerHandle, Reserved, 0LL, 2u, DesiredAccess);
}
