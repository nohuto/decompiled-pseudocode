/*
 * XREFs of DxgkOpenAdapterFromLuid @ 0x1C0136A50
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkOpenAdapterFromLuidImpl@@YAJPEAU_D3DKMT_OPENADAPTERFROMLUID@@E@Z @ 0x1C0136A68 (-DxgkOpenAdapterFromLuidImpl@@YAJPEAU_D3DKMT_OPENADAPTERFROMLUID@@E@Z.c)
 */

__int64 __fastcall DxgkOpenAdapterFromLuid(struct _D3DKMT_OPENADAPTERFROMLUID *a1)
{
  return DxgkOpenAdapterFromLuidImpl(a1, 1u);
}
