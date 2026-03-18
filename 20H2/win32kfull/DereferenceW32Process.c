/*
 * XREFs of DereferenceW32Process @ 0x1C012DD20
 * Callers:
 *     <none>
 * Callees:
 *     DereferenceW32ProcessEx @ 0x1C008D2CC (DereferenceW32ProcessEx.c)
 */

LONG_PTR __fastcall DereferenceW32Process(__int64 a1)
{
  return DereferenceW32ProcessEx(a1, 1);
}
