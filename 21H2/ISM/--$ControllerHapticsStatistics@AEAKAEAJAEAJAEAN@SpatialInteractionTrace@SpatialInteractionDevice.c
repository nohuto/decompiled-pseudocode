/*
 * XREFs of ??$ControllerHapticsStatistics@AEAKAEAJAEAJAEAN@SpatialInteractionTrace@SpatialInteractionDevices@@SAXAEAKAEAJ1AEAN@Z @ 0x18016851C
 * Callers:
 *     ??1SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@QEAA@XZ @ 0x18016A010 (--1SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@QEAA@XZ.c)
 * Callees:
 *     ?IsEnabled@SpatialInteractionTrace@SpatialInteractionDevices@@SA_NE_K@Z @ 0x1800C65E8 (-IsEnabled@SpatialInteractionTrace@SpatialInteractionDevices@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpatialInteractionTrace@SpatialInteractionDevices@@P6AXXZ@Z @ 0x1800C7254 (-get@-$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpa.c)
 *     ?ControllerHapticsStatistics_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXKJJN@Z @ 0x18016B8FC (-ControllerHapticsStatistics_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXKJJN@Z.c)
 */

void __fastcall SpatialInteractionDevices::SpatialInteractionTrace::ControllerHapticsStatistics<unsigned long &,long &,long &,double &>(
        unsigned int *a1,
        int *a2,
        int *a3,
        double *a4)
{
  __int64 v8; // rcx
  SpatialInteractionDevices::SpatialInteractionTrace *v9; // rcx

  if ( SpatialInteractionDevices::SpatialInteractionTrace::IsEnabled((__int64)a1) )
  {
    wil::details::static_lazy<SpatialInteractionDevices::SpatialInteractionTrace>::get(
      v8,
      _lambda_169e34f0547c812b04d058e5b6da2245_::_lambda_invoker_cdecl_);
    SpatialInteractionDevices::SpatialInteractionTrace::ControllerHapticsStatistics_(v9, *a1, *a2, *a3, *a4);
  }
}
