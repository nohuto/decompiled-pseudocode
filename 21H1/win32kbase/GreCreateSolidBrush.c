/*
 * XREFs of GreCreateSolidBrush @ 0x1C00A8560
 * Callers:
 *     <none>
 * Callees:
 *     hCreateSolidBrushInternal @ 0x1C00A92D0 (hCreateSolidBrushInternal.c)
 */

__int64 __fastcall GreCreateSolidBrush(unsigned int a1)
{
  return hCreateSolidBrushInternal(a1, 0, 0LL, 0);
}
