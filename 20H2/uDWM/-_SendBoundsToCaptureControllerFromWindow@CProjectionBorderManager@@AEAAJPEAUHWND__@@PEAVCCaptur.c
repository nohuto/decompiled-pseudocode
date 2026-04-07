/*
 * XREFs of ?_SendBoundsToCaptureControllerFromWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCCaptureControllerProxy@@@Z @ 0x180091E80
 * Callers:
 *     ?UpdateProxyWindowForCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@00@Z @ 0x180090AD0 (-UpdateProxyWindowForCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@00@Z.c)
 *     ?UpdateWindowCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@AEBUDWM_CAPTURE_TOKEN@@@Z @ 0x180090C80 (-UpdateWindowCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@AEBUDWM_CAPTURE_TOKEN@@@Z.c)
 *     ?_AddTabGroupCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCapturedWindowSWRVisual@@PEAVCCaptureControllerProxy@@AEBUDWM_CAPTURE_TOKEN@@@Z @ 0x18009131C (-_AddTabGroupCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCapturedWindowSWRVisual.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006658 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180012D2C (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x180017B74 (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?GetOutsideMargins@CTopLevelWindow@@QEAAXPEAU_MARGINS@@@Z @ 0x18003C0E4 (-GetOutsideMargins@CTopLevelWindow@@QEAAXPEAU_MARGINS@@@Z.c)
 *     ?_PauseOrResumeWindowCapture@CProjectionBorderManager@@AEAAJPEAVCCaptureControllerProxy@@_N@Z @ 0x180091B24 (-_PauseOrResumeWindowCapture@CProjectionBorderManager@@AEAAJPEAVCCaptureControllerProxy@@_N@Z.c)
 *     ?SetContentSize@CCaptureControllerProxy@@QEAAJNN@Z @ 0x1800BDA64 (-SetContentSize@CCaptureControllerProxy@@QEAAJNN@Z.c)
 */

__int64 __fastcall CProjectionBorderManager::_SendBoundsToCaptureControllerFromWindow(
        CProjectionBorderManager *this,
        HWND a2,
        struct CCaptureControllerProxy *a3)
{
  int SyncedWindowDataByHwnd; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __m128i *v8; // rdi
  struct _RTL_CRITICAL_SECTION *v9; // rcx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // xmm0_8
  int v12; // edx
  bool v13; // sf
  int v14; // ecx
  int v15; // eax
  double v16; // xmm2_8
  int v17; // eax
  struct _MARGINS v19; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct CWindowData *v21; // [rsp+50h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v22; // [rsp+58h] [rbp+20h] BYREF

  if ( a3 )
  {
    v22 = &CDesktopManager::s_csDwmInstance;
    EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
    v21 = 0LL;
    SyncedWindowDataByHwnd = CWindowList::GetSyncedWindowDataByHwnd(
                               *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                               a2,
                               &v21);
    v6 = SyncedWindowDataByHwnd;
    if ( SyncedWindowDataByHwnd < 0 )
    {
      v7 = 916LL;
LABEL_16:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (__int64)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
        (const char *)(unsigned int)SyncedWindowDataByHwnd);
      CGuard<CDwmCS>::~CGuard<CDwmCS>(&v22);
      return v6;
    }
    v8 = (__m128i *)v21;
    if ( v21 )
    {
      v9 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)v21 + 48);
      if ( v9 )
      {
        if ( (*((_DWORD *)v21 + 25) & 0x20000000) != 0 )
        {
          SyncedWindowDataByHwnd = CProjectionBorderManager::_PauseOrResumeWindowCapture(v9, a3, 0);
          v6 = SyncedWindowDataByHwnd;
          if ( SyncedWindowDataByHwnd < 0 )
          {
            v7 = 921LL;
            goto LABEL_16;
          }
          v9 = (struct _RTL_CRITICAL_SECTION *)v8[24].m128i_i64[0];
        }
        CTopLevelWindow::GetOutsideMargins((CTopLevelWindow *)v9, &v19);
        v10 = v8[3].m128i_u64[0];
        v11 = _mm_srli_si128(v8[3], 8).m128i_u64[0];
        v12 = v11 - v10;
        v10 >>= 32;
        v13 = HIDWORD(v11) - (int)v10 < 0;
        v14 = HIDWORD(v11) - v10;
        v15 = 0;
        if ( !v13 )
          v15 = v14;
        v16 = (double)(v15 - v19.cyTopHeight - v19.cyBottomHeight);
        v17 = 0;
        if ( v12 >= 0 )
          v17 = v12;
        SyncedWindowDataByHwnd = CCaptureControllerProxy::SetContentSize(
                                   a3,
                                   (double)(v17 - v19.cxRightWidth - v19.cxLeftWidth),
                                   v16);
        v6 = SyncedWindowDataByHwnd;
        if ( SyncedWindowDataByHwnd < 0 )
        {
          v7 = 931LL;
          goto LABEL_16;
        }
      }
    }
    CGuard<CDwmCS>::~CGuard<CDwmCS>(&v22);
  }
  return 0LL;
}
