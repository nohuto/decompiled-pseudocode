/*
 * XREFs of std::_Func_impl_no_alloc__lambda_538a60f2dfb0de3d5e0ccb23ebc37905__void_::_Do_call @ 0x1800D3970
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003FB28 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnTrackingTimeoutExpired@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJK@Z @ 0x1800D17A8 (-OnTrackingTimeoutExpired@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_538a60f2dfb0de3d5e0ccb23ebc37905__void_::_Do_call(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::OnTrackingTimeoutExpired(
         *(Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection **)(a1 + 8),
         *(_DWORD *)(a1 + 16),
         a3);
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      165LL,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
      (const char *)(unsigned int)v3);
}
