/*
 * XREFs of ??$HandReportIgnored@U_GUID@@AEA_JIIAEAEAEA_N@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@SAX$$QEAU_GUID@@AEA_J$$QEAI2AEAEAEA_N@Z @ 0x1800DD500
 * Callers:
 *     ?AddReport@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@IEAAJ_J0PEAUISpatialGraphNodeReference@Holographic@34@AEBUMatrix4x4@Numerics@Foundation@4@2_NW4HandState@1234@@Z @ 0x1800DE7CC (-AddReport@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@IEAAJ_J0PEAUISpati.c)
 * Callees:
 *     ?IsEnabled@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@SA_NE_K@Z @ 0x1800D0150 (-IsEnabled@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VSpatialInteractionTraceContinuous@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpatialInteractionTraceContinuous@SpatialInteractionDevices@@P6AXXZ@Z @ 0x1800D415C (-get@-$static_lazy@VSpatialInteractionTraceContinuous@SpatialInteractionDevices@@@details@wil@@Q.c)
 *     ?HandReportIgnored_@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@QEAAXU_GUID@@_JHH_N2@Z @ 0x1800DF960 (-HandReportIgnored_@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@QEAAXU_GUID@@_J.c)
 */

void __fastcall SpatialInteractionDevices::SpatialInteractionTraceContinuous::HandReportIgnored<_GUID,__int64 &,unsigned int,unsigned int,unsigned char &,bool &>(
        struct _GUID *a1,
        __int64 *a2,
        int *a3,
        int *a4,
        char *a5,
        bool *a6)
{
  __int64 v10; // rcx
  char v11; // bl
  SpatialInteractionDevices::SpatialInteractionTraceContinuous *v12; // rcx
  struct _GUID v13; // [rsp+40h] [rbp-18h] BYREF

  if ( SpatialInteractionDevices::SpatialInteractionTraceContinuous::IsEnabled((__int64)a1) )
  {
    v11 = *a5;
    v13 = *a1;
    wil::details::static_lazy<SpatialInteractionDevices::SpatialInteractionTraceContinuous>::get(
      v10,
      _lambda_0bcba54505780f78856f588866e18ac8_::_lambda_invoker_cdecl_);
    LOBYTE(v12) = *a6;
    SpatialInteractionDevices::SpatialInteractionTraceContinuous::HandReportIgnored_(
      v12,
      &v13,
      *a2,
      *a3,
      *a4,
      v11 != 0,
      *a6);
  }
}
