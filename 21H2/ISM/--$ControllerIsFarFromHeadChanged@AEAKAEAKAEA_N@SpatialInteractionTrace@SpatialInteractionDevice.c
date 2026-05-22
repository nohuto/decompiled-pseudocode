/*
 * XREFs of ??$ControllerIsFarFromHeadChanged@AEAKAEAKAEA_N@SpatialInteractionTrace@SpatialInteractionDevices@@SAXAEAK0AEA_N@Z @ 0x180168588
 * Callers:
 *     ?ComputeControllerPoses@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AEAAXAEBUSPATIAL_GRAPH_DYNAMIC_NODE_POSE@@0AEBUMatrix4x4@Numerics@Foundation@4@1@Z @ 0x18016B0C0 (-ComputeControllerPoses@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@.c)
 * Callees:
 *     ?IsEnabled@SpatialInteractionTrace@SpatialInteractionDevices@@SA_NE_K@Z @ 0x1800C65E8 (-IsEnabled@SpatialInteractionTrace@SpatialInteractionDevices@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpatialInteractionTrace@SpatialInteractionDevices@@P6AXXZ@Z @ 0x1800C7254 (-get@-$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpa.c)
 *     ?ControllerIsFarFromHeadChanged_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXKK_N@Z @ 0x18016B9FC (-ControllerIsFarFromHeadChanged_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXKK_N@Z.c)
 */

void __fastcall SpatialInteractionDevices::SpatialInteractionTrace::ControllerIsFarFromHeadChanged<unsigned long &,unsigned long &,bool &>(
        unsigned int *a1,
        unsigned int *a2,
        bool *a3)
{
  __int64 v6; // rcx
  SpatialInteractionDevices::SpatialInteractionTrace *v7; // rcx

  if ( SpatialInteractionDevices::SpatialInteractionTrace::IsEnabled((__int64)a1) )
  {
    wil::details::static_lazy<SpatialInteractionDevices::SpatialInteractionTrace>::get(
      v6,
      _lambda_169e34f0547c812b04d058e5b6da2245_::_lambda_invoker_cdecl_);
    SpatialInteractionDevices::SpatialInteractionTrace::ControllerIsFarFromHeadChanged_(v7, *a1, *a2, *a3);
  }
}
