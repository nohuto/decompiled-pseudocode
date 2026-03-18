/*
 * XREFs of NtGdiGetCharSet @ 0x1C010D810
 * Callers:
 *     <none>
 * Callees:
 *     GreGetCharSet @ 0x1C009ED18 (GreGetCharSet.c)
 */

__int64 __fastcall NtGdiGetCharSet(HDC a1)
{
  return GreGetCharSet(a1);
}
