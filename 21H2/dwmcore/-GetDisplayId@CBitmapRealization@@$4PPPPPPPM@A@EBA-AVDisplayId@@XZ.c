/*
 * XREFs of ?GetDisplayId@CBitmapRealization@@$4PPPPPPPM@A@EBA?AVDisplayId@@XZ @ 0x1800F86C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_DWORD *__fastcall CBitmapRealization::GetDisplayId(__int64 a1, _DWORD *a2)
{
  return CBitmapRealization::GetDisplayId(a1 - *(int *)(a1 - 4), a2);
}
