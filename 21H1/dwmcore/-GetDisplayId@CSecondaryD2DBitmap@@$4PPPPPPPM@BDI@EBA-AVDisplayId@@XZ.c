/*
 * XREFs of ?GetDisplayId@CSecondaryD2DBitmap@@$4PPPPPPPM@BDI@EBA?AVDisplayId@@XZ @ 0x1800ED780
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_DWORD *__fastcall CSecondaryD2DBitmap::GetDisplayId(__int64 a1, _DWORD *a2)
{
  return CColorKeyBitmapRealization::GetDisplayId(a1 - *(int *)(a1 - 4) - 312, a2);
}
