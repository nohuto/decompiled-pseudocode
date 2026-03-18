/*
 * XREFs of DxgkOpenAdapterFromLuidInternal @ 0x1C01505A0
 * Callers:
 *     ?Initialize@CAdapter@@IEAAJAEBUCSM_TOKEN_ADAPTER_INFO@@@Z @ 0x1C00129FC (-Initialize@CAdapter@@IEAAJAEBUCSM_TOKEN_ADAPTER_INFO@@@Z.c)
 * Callees:
 *     ?DxgkOpenAdapterFromLuidImpl@@YAJPEAU_D3DKMT_OPENADAPTERFROMLUID@@E@Z @ 0x1C01358B8 (-DxgkOpenAdapterFromLuidImpl@@YAJPEAU_D3DKMT_OPENADAPTERFROMLUID@@E@Z.c)
 */

__int64 __fastcall DxgkOpenAdapterFromLuidInternal(struct _D3DKMT_OPENADAPTERFROMLUID *a1, __int64 a2, __int64 a3)
{
  return DxgkOpenAdapterFromLuidImpl(a1, 0, a3);
}
