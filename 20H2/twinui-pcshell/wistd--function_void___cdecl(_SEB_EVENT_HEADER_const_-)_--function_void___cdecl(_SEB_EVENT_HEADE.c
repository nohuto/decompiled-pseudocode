/*
 * XREFs of wistd::function_void___cdecl(_SEB_EVENT_HEADER_const_&)_::function_void___cdecl(_SEB_EVENT_HEADER_const_&)___lambda_37f27d7232610e21b40ee608124aee94__void_ @ 0x18013F33C
 * Callers:
 *     ?RegisterForEnergySaverStateChange@AcrylicPolicyManager@@AEAAJXZ @ 0x180140EDC (-RegisterForEnergySaverStateChange@AcrylicPolicyManager@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall wistd::function_void___cdecl__SEB_EVENT_HEADER_const____::function_void___cdecl__SEB_EVENT_HEADER_const______lambda_37f27d7232610e21b40ee608124aee94__void_(
        __int64 a1,
        __int64 *a2)
{
  _QWORD *v3; // rcx

  *(_QWORD *)(a1 + 112) = 0LL;
  v3 = (_QWORD *)(a1 + 8);
  *v3 = &off_1804905D0;
  v3[1] = 0LL;
  if ( v3 + 1 != a2 )
  {
    v3[1] = *a2;
    *a2 = 0LL;
  }
  *(_QWORD *)(a1 + 112) = v3;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a2);
  return a1;
}
