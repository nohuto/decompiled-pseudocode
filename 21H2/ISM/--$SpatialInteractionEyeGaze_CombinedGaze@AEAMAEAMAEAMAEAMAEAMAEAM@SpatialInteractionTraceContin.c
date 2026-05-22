/*
 * XREFs of ??$SpatialInteractionEyeGaze_CombinedGaze@AEAMAEAMAEAMAEAMAEAMAEAM@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@SAXAEAM00000@Z @ 0x1800DB394
 * Callers:
 *     ?Parse@SpatialInteractionEyeGazeSourceObject@SpatialInteractions@Internal@Windows@@UEAAJPEADKPEAUISpatialGraphNodeReference@Holographic@34@_JAEBUMatrix4x4@Numerics@Foundation@4@3PEA_NPEAW4MPCAugmentedInputGestureType@@44@Z @ 0x1800DC190 (-Parse@SpatialInteractionEyeGazeSourceObject@SpatialInteractions@Internal@Windows@@UEAAJPEADKPEA.c)
 * Callees:
 *     ?IsEnabled@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@SA_NE_K@Z @ 0x1800D05B0 (-IsEnabled@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VSpatialInteractionTraceContinuous@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpatialInteractionTraceContinuous@SpatialInteractionDevices@@P6AXXZ@Z @ 0x1800D45BC (-get@-$static_lazy@VSpatialInteractionTraceContinuous@SpatialInteractionDevices@@@details@wil@@Q.c)
 *     ?SpatialInteractionEyeGaze_CombinedGaze_@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@QEAAXMMMMMM@Z @ 0x1800DC90C (-SpatialInteractionEyeGaze_CombinedGaze_@SpatialInteractionTraceContinuous@SpatialInteractionDev.c)
 */

void __fastcall SpatialInteractionDevices::SpatialInteractionTraceContinuous::SpatialInteractionEyeGaze_CombinedGaze<float &,float &,float &,float &,float &,float &>(
        float *a1,
        float *a2,
        float *a3,
        float *a4,
        float *a5,
        float *a6)
{
  __int64 v10; // rcx
  SpatialInteractionDevices::SpatialInteractionTraceContinuous *v11; // rcx

  if ( SpatialInteractionDevices::SpatialInteractionTraceContinuous::IsEnabled((__int64)a1) )
  {
    wil::details::static_lazy<SpatialInteractionDevices::SpatialInteractionTraceContinuous>::get(
      v10,
      _lambda_0bcba54505780f78856f588866e18ac8_::_lambda_invoker_cdecl_);
    SpatialInteractionDevices::SpatialInteractionTraceContinuous::SpatialInteractionEyeGaze_CombinedGaze_(
      v11,
      *a1,
      *a2,
      *a3,
      *a4,
      *a5,
      *a6);
  }
}
