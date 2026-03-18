/*
 * XREFs of ?GetDisplayId@CSectionBitmapRealization@@$4PPPPPPPM@KI@EBA?AVDisplayId@@XZ @ 0x1800EFD00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_DWORD *__fastcall CSectionBitmapRealization::GetDisplayId(__int64 a1, _DWORD *a2)
{
  return CColorKeyBitmapRealization::GetDisplayId(a1 - *(int *)(a1 - 4) - 168, a2);
}
