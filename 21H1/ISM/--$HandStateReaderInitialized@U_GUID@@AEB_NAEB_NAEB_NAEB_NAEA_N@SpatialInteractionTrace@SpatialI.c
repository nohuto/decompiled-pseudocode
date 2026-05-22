/*
 * XREFs of ??$HandStateReaderInitialized@U_GUID@@AEB_NAEB_NAEB_NAEB_NAEA_N@SpatialInteractionTrace@SpatialInteractionDevices@@SAX$$QEAU_GUID@@AEB_N111AEA_N@Z @ 0x1800DDAF0
 * Callers:
 *     ?InitializeStreamReaderHelpers@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@MEAAJXZ @ 0x1800E0360 (-InitializeStreamReaderHelpers@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows.c)
 * Callees:
 *     ?IsEnabled@SpatialInteractionTrace@SpatialInteractionDevices@@SA_NE_K@Z @ 0x1800C66D8 (-IsEnabled@SpatialInteractionTrace@SpatialInteractionDevices@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpatialInteractionTrace@SpatialInteractionDevices@@P6AXXZ@Z @ 0x1800C7344 (-get@-$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpa.c)
 *     ?HandStateReaderInitialized_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXAEBU_GUID@@_N1111@Z @ 0x1800E00A8 (-HandStateReaderInitialized_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXAEBU_GUID@@.c)
 */

void __fastcall SpatialInteractionDevices::SpatialInteractionTrace::HandStateReaderInitialized<_GUID,bool const &,bool const &,bool const &,bool const &,bool &>(
        struct _GUID *a1,
        bool *a2,
        bool *a3,
        bool *a4,
        bool *a5,
        bool *a6)
{
  __int64 v10; // rcx
  SpatialInteractionDevices::SpatialInteractionTrace *v11; // rcx

  if ( SpatialInteractionDevices::SpatialInteractionTrace::IsEnabled((__int64)a1) )
  {
    wil::details::static_lazy<SpatialInteractionDevices::SpatialInteractionTrace>::get(
      v10,
      _lambda_169e34f0547c812b04d058e5b6da2245_::_lambda_invoker_cdecl_);
    SpatialInteractionDevices::SpatialInteractionTrace::HandStateReaderInitialized_(v11, a1, *a2, *a3, *a4, *a5, *a6);
  }
}
