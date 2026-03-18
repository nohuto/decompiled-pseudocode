/*
 * XREFs of ?IsOfType@CNineGridDrawListBrush@@UEBA_NW4DrawListBrushType@@@Z @ 0x180019B20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CNineGridDrawListBrush::IsOfType(__int64 a1, int a2)
{
  return ((a2 - 3) & 0xFFFFFFFD) == 0;
}
