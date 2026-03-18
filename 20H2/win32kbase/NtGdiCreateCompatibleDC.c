/*
 * XREFs of NtGdiCreateCompatibleDC @ 0x1C004DB70
 * Callers:
 *     <none>
 * Callees:
 *     GreCreateCompatibleDC @ 0x1C004DB90 (GreCreateCompatibleDC.c)
 */

__int64 __fastcall NtGdiCreateCompatibleDC(HDC a1)
{
  return GreCreateCompatibleDC(a1);
}
