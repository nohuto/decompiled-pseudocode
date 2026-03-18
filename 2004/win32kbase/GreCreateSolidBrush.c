/*
 * XREFs of GreCreateSolidBrush @ 0x1C00144B0
 * Callers:
 *     <none>
 * Callees:
 *     hCreateSolidBrushInternal @ 0x1C00146E0 (hCreateSolidBrushInternal.c)
 */

__int64 __fastcall GreCreateSolidBrush(unsigned int a1)
{
  return hCreateSolidBrushInternal(a1, 0, 0LL, 0);
}
