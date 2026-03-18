/*
 * XREFs of NtGdiCreateCompatibleDC @ 0x1C0091F70
 * Callers:
 *     <none>
 * Callees:
 *     GreCreateCompatibleDC @ 0x1C0091E80 (GreCreateCompatibleDC.c)
 */

HDC __fastcall NtGdiCreateCompatibleDC(HDC a1)
{
  return GreCreateCompatibleDC(a1);
}
