/*
 * XREFs of ??$TrackingRequestedHeartbeat@PEB_WAEAKKI_NAEA_NPEB_WAEAU_GUID@@AEAW4SPATIAL_TRACKING_CAPABILITY_FLAGS@@AEAY02MAEAY03MAEAY02MAEAY03M@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@SAX$$QEAPEB_WAEAK$$QEAK$$QEAI$$QEA_NAEA_N0AEAU_GUID@@AEAW4SPATIAL_TRACKING_CAPABILITY_FLAGS@@AEAY02MAEAY03M89@Z @ 0x1800CC960
 * Callers:
 *     ?OnTrackingRequestedHeartbeat@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAAJKPEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800D15A0 (-OnTrackingRequestedHeartbeat@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Inter.c)
 * Callees:
 *     ?IsEnabled@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@SA_NE_K@Z @ 0x1800D01E0 (-IsEnabled@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@SA_NE_K@Z.c)
 *     ?TrackingRequestedHeartbeat_@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@QEAAXPEB_WKKI_N10AEBU_GUID@@IAEAY02$$CBMAEAY03$$CBM34@Z @ 0x1800D3198 (-TrackingRequestedHeartbeat_@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@QEAAXP.c)
 *     ?get@?$static_lazy@VSpatialInteractionTraceContinuous@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpatialInteractionTraceContinuous@SpatialInteractionDevices@@P6AXXZ@Z @ 0x1800D41EC (-get@-$static_lazy@VSpatialInteractionTraceContinuous@SpatialInteractionDevices@@@details@wil@@Q.c)
 */

void __fastcall SpatialInteractionDevices::SpatialInteractionTraceContinuous::TrackingRequestedHeartbeat<wchar_t const *,unsigned long &,unsigned long,unsigned int,bool,bool &,wchar_t const *,_GUID &,enum SPATIAL_TRACKING_CAPABILITY_FLAGS &,float (&)[3],float (&)[4],float (&)[3],float (&)[4]>(
        const wchar_t **a1,
        unsigned int *a2,
        unsigned int *a3,
        unsigned int *a4,
        bool *a5,
        bool *a6,
        const wchar_t **a7,
        struct _GUID *a8,
        unsigned int *a9,
        float (*a10)[3],
        float (*a11)[4],
        float (*a12)[3],
        float (*a13)[4])
{
  __int64 v17; // rcx
  wchar_t *v18; // rcx

  if ( SpatialInteractionDevices::SpatialInteractionTraceContinuous::IsEnabled(
         (unsigned __int8)a1,
         (unsigned __int64)a2) )
  {
    wil::details::static_lazy<SpatialInteractionDevices::SpatialInteractionTraceContinuous>::get(
      v17,
      _lambda_0bcba54505780f78856f588866e18ac8_::_lambda_invoker_cdecl_);
    v18 = (wchar_t *)*a7;
    LOBYTE(v18) = *a5;
    SpatialInteractionDevices::SpatialInteractionTraceContinuous::TrackingRequestedHeartbeat_(
      (SpatialInteractionDevices::SpatialInteractionTraceContinuous *)v18,
      *a1,
      *a2,
      *a3,
      *a4,
      *a5,
      *a6,
      *a7,
      a8,
      *a9,
      a10,
      a11,
      a12,
      a13);
  }
}
