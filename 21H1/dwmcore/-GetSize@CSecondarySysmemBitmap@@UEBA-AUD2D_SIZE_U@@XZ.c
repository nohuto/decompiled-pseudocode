/*
 * XREFs of ?GetSize@CSecondarySysmemBitmap@@UEBA?AUD2D_SIZE_U@@XZ @ 0x1800DCCC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct D2D_SIZE_U __fastcall CSecondarySysmemBitmap::GetSize(CSecondarySysmemBitmap *this, _QWORD *a2)
{
  *a2 = *((_QWORD *)this + 14);
  return (struct D2D_SIZE_U)a2;
}
