/*
 * XREFs of ?StopHapticsFeedback@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJXZ @ 0x18016FA10
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035710 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsEnabled@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@SA_NE_K@Z @ 0x1800D06A0 (-IsEnabled@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VSpatialInteractionTraceContinuous@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpatialInteractionTraceContinuous@SpatialInteractionDevices@@P6AXXZ@Z @ 0x1800D46AC (-get@-$static_lazy@VSpatialInteractionTraceContinuous@SpatialInteractionDevices@@@details@wil@@Q.c)
 *     ?StopFeedback@HapticsEngine@SpatialInteractions@Internal@Windows@@QEAAJXZ @ 0x18016F934 (-StopFeedback@HapticsEngine@SpatialInteractions@Internal@Windows@@QEAAJXZ.c)
 *     ?StopHapticsFeedback_@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@QEAAXKK@Z @ 0x18016FAD8 (-StopHapticsFeedback_@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@QEAAXKK@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::StopHapticsFeedback(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceController *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  __int64 v3; // rcx
  unsigned int v4; // ebx
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // rcx
  SpatialInteractionDevices::SpatialInteractionTraceContinuous *v8; // rcx
  Windows::Internal::SpatialInteractions::HapticsEngine *v9; // rcx
  int v10; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 752);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 752));
  if ( !*((_BYTE *)this + 106) )
  {
    v4 = -2147020579;
    v5 = 2147946717LL;
    v6 = 1476LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ctrllib\\spatialinteractionsourcecontroller.cpp",
      (const char *)v5);
    goto LABEL_10;
  }
  if ( SpatialInteractionDevices::SpatialInteractionTraceContinuous::IsEnabled(v3) )
  {
    wil::details::static_lazy<SpatialInteractionDevices::SpatialInteractionTraceContinuous>::get(
      v7,
      _lambda_0bcba54505780f78856f588866e18ac8_::_lambda_invoker_cdecl_);
    SpatialInteractionDevices::SpatialInteractionTraceContinuous::StopHapticsFeedback_(
      v8,
      *((_DWORD *)this + 2),
      *((_DWORD *)this + 3));
  }
  v9 = (Windows::Internal::SpatialInteractions::HapticsEngine *)*((_QWORD *)this + 99);
  if ( v9 )
  {
    v10 = Windows::Internal::SpatialInteractions::HapticsEngine::StopFeedback(v9);
    v4 = v10;
    if ( v10 < 0 )
    {
      v5 = (unsigned int)v10;
      v6 = 1480LL;
      goto LABEL_8;
    }
  }
  v4 = 0;
LABEL_10:
  if ( v2 )
    LeaveCriticalSection(v2);
  return v4;
}
