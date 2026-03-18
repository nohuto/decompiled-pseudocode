/*
 * XREFs of GreSelectBrush @ 0x1C0140500
 * Callers:
 *     <none>
 * Callees:
 *     GreSelectBrushInternal @ 0x1C00CF090 (GreSelectBrushInternal.c)
 */

__int64 __fastcall GreSelectBrush(HDC a1, __int64 a2)
{
  return GreSelectBrushInternal(a1, a2, 1);
}
