/*
 * XREFs of ?get@?$static_lazy@VRawInputProvidersContinuousTracing@@@details@wil@@QEAAPEAVRawInputProvidersContinuousTracing@@P6AXXZ@Z @ 0x180096958
 * Callers:
 *     ?HandInputReportProcessed_@RawInputProvidersContinuousTracing@@QEAAXKW4MPCGestureType@@PEAUInputInfo@@@Z @ 0x180093618 (-HandInputReportProcessed_@RawInputProvidersContinuousTracing@@QEAAXKW4MPCGestureType@@PEAUInput.c)
 *     ?InputReportIgnored_@RawInputProvidersContinuousTracing@@QEAAXKPEBG@Z @ 0x180093934 (-InputReportIgnored_@RawInputProvidersContinuousTracing@@QEAAXKPEBG@Z.c)
 *     ?InputReportProcessed_@RawInputProvidersContinuousTracing@@QEAAXKJPEAUInputInfo@@@Z @ 0x1800939B0 (-InputReportProcessed_@RawInputProvidersContinuousTracing@@QEAAXKJPEAUInputInfo@@@Z.c)
 *     ?InputReportReceived_@RawInputProvidersContinuousTracing@@QEAAXKK@Z @ 0x180093BE0 (-InputReportReceived_@RawInputProvidersContinuousTracing@@QEAAXKK@Z.c)
 *     ?IsEnabled@RawInputProvidersContinuousTracing@@SA_NE_K@Z @ 0x180093C80 (-IsEnabled@RawInputProvidersContinuousTracing@@SA_NE_K@Z.c)
 *     ?OnInputReport@SpatialRimDeviceCollection@@MEAAJKPEAXK@Z @ 0x180094DD0 (-OnInputReport@SpatialRimDeviceCollection@@MEAAJKPEAXK@Z.c)
 *     ?SendInputReport@SpatialRimDeviceCollection@@UEAAJW4MPCAugmentedInputGestureType@@KK_NAEBUSpatialControllerPoseMsg@Internal@Spatial@Input@UI@Windows@@AEBUSpatialControllerStateMsg@45678@@Z @ 0x1800953E0 (-SendInputReport@SpatialRimDeviceCollection@@UEAAJW4MPCAugmentedInputGestureType@@KK_NAEBUSpatia.c)
 *     ?SendInputReport@SpatialRimDeviceCollection@@UEAAJW4MPCAugmentedInputGestureType@@W4MPCGestureType@@KAEBUHandStateMsg@Internal@Spatial@Input@UI@Windows@@UMatrix4x4@Numerics@Foundation@9@@Z @ 0x180095510 (-SendInputReport@SpatialRimDeviceCollection@@UEAAJW4MPCAugmentedInputGestureType@@W4MPCGestureTy.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800371C4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x18003BF5C (atexit.c)
 */

_QWORD *__fastcall wil::details::static_lazy<RawInputProvidersContinuousTracing>::get(__int64 a1, void (__cdecl *a2)())
{
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF
  _QWORD *v5; // [rsp+40h] [rbp+18h] BYREF

  v4 = a1;
  v5 = 0LL;
  if ( InitOnceBeginInitialize(
         &`RawInputProvidersContinuousTracing::Instance'::`2'::wrapper,
         0,
         (PBOOL)&v4,
         (LPVOID *)&v5)
    && (_DWORD)v4 )
  {
    v5 = qword_1802088F0;
    qword_1802088F0[0] = &RawInputProvidersContinuousTracing::`vftable';
    qword_180208908 = (struct _tlgProvider_t *)&`RawInputProvidersContinuousTracing::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1802088F0, qword_180208908, 0LL);
    InitOnceComplete(&`RawInputProvidersContinuousTracing::Instance'::`2'::wrapper, 0, qword_1802088F0);
  }
  return v5;
}
