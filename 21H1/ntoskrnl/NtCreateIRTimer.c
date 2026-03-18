/*
 * XREFs of NtCreateIRTimer @ 0x14077A4F0
 * Callers:
 *     <none>
 * Callees:
 *     NtCreateTimer2 @ 0x140643D60 (NtCreateTimer2.c)
 */

__int64 __fastcall NtCreateIRTimer(__int64 *a1, __int64 a2, ACCESS_MASK a3)
{
  return NtCreateTimer2(a1, a2, 0LL, 2, a3);
}
