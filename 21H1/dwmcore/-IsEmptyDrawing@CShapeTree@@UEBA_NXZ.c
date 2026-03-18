/*
 * XREFs of ?IsEmptyDrawing@CShapeTree@@UEBA_NXZ @ 0x18020E490
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CShapeTree::IsEmptyDrawing(CShapeTree *this)
{
  return *((_BYTE *)this + 89) == 0;
}
