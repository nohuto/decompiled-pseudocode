/*
 * XREFs of ?Create@?$consume_Windows_Internal_Tiles_ITileStoreFactory@UITileStoreFactory@Tiles@Internal@Windows@winrt@@@impl@winrt@@QEBA?AUTileStore@Tiles@Internal@Windows@3@AEBUUser@System@73@@Z @ 0x1800B5634
 * Callers:
 *     ??$call@AEAV_lambda_31f126833dad2da04de7641ee9fe3453_@@@?$factory_cache_entry@UTileStore@Tiles@Internal@Windows@winrt@@UITileStoreFactory@2345@@impl@winrt@@QEAA?AUTileStore@Tiles@Internal@Windows@2@AEAV_lambda_31f126833dad2da04de7641ee9fe3453_@@@Z @ 0x1800B2B50 (--$call@AEAV_lambda_31f126833dad2da04de7641ee9fe3453_@@@-$factory_cache_entry@UTileStore@Tiles@I.c)
 * Callees:
 *     ?check_hresult@winrt@@YAXUhresult@1@@Z @ 0x180094AE0 (-check_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_Internal_Tiles_ITileStoreFactory<winrt::Windows::Internal::Tiles::ITileStoreFactory>::Create(
        __int64 *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  __int64 v3; // rcx
  unsigned int v5; // eax
  _QWORD *v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = a2;
  v3 = *a1;
  v7 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD **))(*(_QWORD *)v3 + 48LL))(v3, *a3, &v7);
  winrt::check_hresult(v5);
  *a2 = v7;
  return a2;
}
