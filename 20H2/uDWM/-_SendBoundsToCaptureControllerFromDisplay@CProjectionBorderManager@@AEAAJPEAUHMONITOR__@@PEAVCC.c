/*
 * XREFs of ?_SendBoundsToCaptureControllerFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@@Z @ 0x180091DD0
 * Callers:
 *     ?UpdateCaptureControllerPropertiesFromDisplays@CProjectionBorderManager@@UEAAJXZ @ 0x1800425B0 (-UpdateCaptureControllerPropertiesFromDisplays@CProjectionBorderManager@@UEAAJXZ.c)
 *     ?_AddDisplayCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@AEBUDWM_CAPTURE_TOKEN@@_N@Z @ 0x180090E5C (-_AddDisplayCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerPr.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006658 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180053530 (__security_check_cookie.c)
 *     ?GetDisplayRect@CDesktopManager@@QEAAJPEAUHMONITOR__@@AEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@@Z @ 0x18008627C (-GetDisplayRect@CDesktopManager@@QEAAJPEAUHMONITOR__@@AEAV-$TMilRect_@HUtagRECT@@UMilPointAndSiz.c)
 *     ?SetContentSize@CCaptureControllerProxy@@QEAAJNN@Z @ 0x1800BDA64 (-SetContentSize@CCaptureControllerProxy@@QEAAJNN@Z.c)
 */

__int64 __fastcall CProjectionBorderManager::_SendBoundsToCaptureControllerFromDisplay(
        CProjectionBorderManager *this,
        HMONITOR a2,
        struct CCaptureControllerProxy *a3)
{
  int DisplayRect; // ebx
  __int64 v5; // rdx
  _DWORD v7[4]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  DisplayRect = CDesktopManager::GetDisplayRect((__int64)CDesktopManager::s_pDesktopManagerInstance, a2, v7);
  if ( DisplayRect < 0 )
  {
    v5 = 1050LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
      (const char *)(unsigned int)DisplayRect);
    return (unsigned int)DisplayRect;
  }
  DisplayRect = CCaptureControllerProxy::SetContentSize(a3, (double)(v7[2] - v7[0]), (double)(v7[3] - v7[1]));
  if ( DisplayRect < 0 )
  {
    v5 = 1055LL;
    goto LABEL_3;
  }
  return 0LL;
}
