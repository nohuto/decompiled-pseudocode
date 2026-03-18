/*
 * XREFs of ?GetDisplayId@CBitmapRealization@@$4PPPPPPPM@FI@EBA?AVDisplayId@@XZ @ 0x1800F30C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_DWORD *__fastcall CBitmapRealization::GetDisplayId(__int64 a1, _DWORD *a2)
{
  return CBitmapRealization::GetDisplayId(a1 - *(int *)(a1 - 4) - 88, a2);
}
