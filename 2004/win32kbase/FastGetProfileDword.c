/*
 * XREFs of FastGetProfileDword @ 0x1C002D720
 * Callers:
 *     <none>
 * Callees:
 *     FastGetProfileDwordEx @ 0x1C002D750 (FastGetProfileDwordEx.c)
 */

__int64 __fastcall FastGetProfileDword(__int64 a1, __int64 a2, __int64 a3)
{
  return FastGetProfileDwordEx(a1, a2, a3);
}
