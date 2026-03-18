/*
 * XREFs of DereferenceW32Process @ 0x1C000A720
 * Callers:
 *     <none>
 * Callees:
 *     DereferenceW32ProcessEx @ 0x1C000CE2C (DereferenceW32ProcessEx.c)
 */

__int64 __fastcall DereferenceW32Process(__int64 a1)
{
  return DereferenceW32ProcessEx(a1, 1LL);
}
