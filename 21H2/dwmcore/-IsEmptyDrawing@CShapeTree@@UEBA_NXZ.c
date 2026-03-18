/*
 * XREFs of ?IsEmptyDrawing@CShapeTree@@UEBA_NXZ @ 0x1800DC9E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CShapeTree::IsEmptyDrawing(CShapeTree *this)
{
  return !*((_BYTE *)this + 96) && *((_BYTE *)this + 97) == 0;
}
