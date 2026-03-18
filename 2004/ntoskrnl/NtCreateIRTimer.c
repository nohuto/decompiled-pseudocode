/*
 * XREFs of NtCreateIRTimer @ 0x14077C900
 * Callers:
 *     <none>
 * Callees:
 *     NtCreateTimer2 @ 0x14060EB30 (NtCreateTimer2.c)
 */

__int64 __fastcall NtCreateIRTimer(__int64 *a1, __int64 a2)
{
  return NtCreateTimer2(a1, a2, 0LL, 2);
}
