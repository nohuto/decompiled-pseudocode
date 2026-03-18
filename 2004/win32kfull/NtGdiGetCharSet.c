/*
 * XREFs of NtGdiGetCharSet @ 0x1C00A1F20
 * Callers:
 *     <none>
 * Callees:
 *     GreGetCharSet @ 0x1C00A1BE0 (GreGetCharSet.c)
 */

__int64 __fastcall NtGdiGetCharSet(HDC a1)
{
  return GreGetCharSet(a1);
}
