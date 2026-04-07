/*
 * XREFs of ?_GetCapturedItemRootVisual@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAPEAVCVisualProxy@@PEAPEAVCapturedWindowSWRVisual@@@Z @ 0x180091824
 * Callers:
 *     ?StartWindowCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x18008F330 (-StartWindowCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 *     ?UpdateProxyWindowForCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@00@Z @ 0x180090AD0 (-UpdateProxyWindowForCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@00@Z.c)
 *     ?UpdateWindowCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@AEBUDWM_CAPTURE_TOKEN@@@Z @ 0x180090C80 (-UpdateWindowCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@AEBUDWM_CAPTURE_TOKEN@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ @ 0x1800062A0 (-InternalRelease@-$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180012D2C (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800809C4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Create@CapturedWindowSWRVisual@@SAJPEAUHWND__@@PEAPEAV1@@Z @ 0x18008DDE8 (-Create@CapturedWindowSWRVisual@@SAJPEAUHWND__@@PEAPEAV1@@Z.c)
 *     ?_GetWindowRootVisual@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAPEAVCVisualProxy@@@Z @ 0x180091A58 (-_GetWindowRootVisual@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAPEAVCVisualProxy@@@Z.c)
 */

__int64 __fastcall CProjectionBorderManager::_GetCapturedItemRootVisual(
        CProjectionBorderManager *this,
        HWND a2,
        struct CVisualProxy **a3,
        struct CapturedWindowSWRVisual **a4)
{
  unsigned int WindowRootVisual; // ebx
  int v8; // eax
  struct CapturedWindowSWRVisual *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct CapturedWindowSWRVisual *v14; // [rsp+40h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v15; // [rsp+50h] [rbp+18h] BYREF

  v14 = this;
  v15 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  WindowRootVisual = 0;
  *a3 = 0LL;
  *a4 = 0LL;
  v14 = 0LL;
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v14);
  v8 = CapturedWindowSWRVisual::Create(a2, &v14);
  if ( v8 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      804LL,
      (__int64)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
      (const char *)(unsigned int)v8);
  v9 = v14;
  if ( v14 )
  {
    v10 = *((_QWORD *)v14 + 3);
    v11 = v10 ? *(_QWORD *)(v10 + 48) : 0LL;
    if ( v11 )
      *a3 = *(struct CVisualProxy **)(v11 + 16);
  }
  if ( *a3 )
  {
    v14 = 0LL;
    *a4 = v9;
  }
  else
  {
    WindowRootVisual = CProjectionBorderManager::_GetWindowRootVisual(v9, a2, a3);
  }
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v14);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v15);
  return WindowRootVisual;
}
