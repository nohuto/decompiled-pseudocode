/*
 * XREFs of NtGdiCreateCompatibleDC @ 0x1C008B0C0
 * Callers:
 *     <none>
 * Callees:
 *     GreCreateCompatibleDC @ 0x1C008AFD0 (GreCreateCompatibleDC.c)
 */

HDC __fastcall NtGdiCreateCompatibleDC(HDC a1)
{
  return GreCreateCompatibleDC(a1);
}
