/*
 * XREFs of ??$ResetReportDueToFirmwareUpdate@AEAKAEAK@SpatialInteractionTrace@SpatialInteractionDevices@@SAXAEAK0@Z @ 0x180168668
 * Callers:
 *     ?Parse@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJPEADKPEAUISpatialGraphNodeReference@Holographic@34@_JAEBUMatrix4x4@Numerics@Foundation@4@3PEA_NPEAW4MPCAugmentedInputGestureType@@44@Z @ 0x18016D620 (-Parse@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJPEADKPEAUIS.c)
 * Callees:
 *     ?IsEnabled@SpatialInteractionTrace@SpatialInteractionDevices@@SA_NE_K@Z @ 0x1800C6218 (-IsEnabled@SpatialInteractionTrace@SpatialInteractionDevices@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpatialInteractionTrace@SpatialInteractionDevices@@P6AXXZ@Z @ 0x1800C6E84 (-get@-$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpa.c)
 *     ?ResetReportDueToFirmwareUpdate_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXKK@Z @ 0x18016E5B0 (-ResetReportDueToFirmwareUpdate_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXKK@Z.c)
 */

void __fastcall SpatialInteractionDevices::SpatialInteractionTrace::ResetReportDueToFirmwareUpdate<unsigned long &,unsigned long &>(
        unsigned int *a1,
        unsigned int *a2)
{
  __int64 v4; // rcx
  SpatialInteractionDevices::SpatialInteractionTrace *v5; // rcx

  if ( SpatialInteractionDevices::SpatialInteractionTrace::IsEnabled((__int64)a1) )
  {
    wil::details::static_lazy<SpatialInteractionDevices::SpatialInteractionTrace>::get(
      v4,
      _lambda_169e34f0547c812b04d058e5b6da2245_::_lambda_invoker_cdecl_);
    SpatialInteractionDevices::SpatialInteractionTrace::ResetReportDueToFirmwareUpdate_(v5, *a1, *a2);
  }
}
