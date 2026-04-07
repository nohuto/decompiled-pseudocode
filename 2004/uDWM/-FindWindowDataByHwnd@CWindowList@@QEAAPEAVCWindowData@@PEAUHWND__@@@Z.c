/*
 * XREFs of ?FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z @ 0x1800103D0
 * Callers:
 *     ?_WindowEnumCallback@CSlideOut@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180003F20 (-_WindowEnumCallback@CSlideOut@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 *     ?OnProxyWindowUpdate@CWindowList@@AEAAJPEAUHWND__@@0@Z @ 0x180006588 (-OnProxyWindowUpdate@CWindowList@@AEAAJPEAUHWND__@@0@Z.c)
 *     ?GetWindowZOrder@CAnimationComponent@@QEAAHXZ @ 0x18000B9A0 (-GetWindowZOrder@CAnimationComponent@@QEAAHXZ.c)
 *     ?GetUnmetTabRequirements@CWindowList@@QEAAJPEAUHWND__@@PEAW4DWM_TAB_WINDOW_REQUIREMENTS@@@Z @ 0x1800107E0 (-GetUnmetTabRequirements@CWindowList@@QEAAJPEAUHWND__@@PEAW4DWM_TAB_WINDOW_REQUIREMENTS@@@Z.c)
 *     ?AdjustDesktopWindowSize@CDesktopManager@@SA_NPEAUHWND__@@PEAUtagRECT@@@Z @ 0x18001C378 (-AdjustDesktopWindowSize@CDesktopManager@@SA_NPEAUHWND__@@PEAUtagRECT@@@Z.c)
 *     ?RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z @ 0x1800269B4 (-RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z.c)
 *     ?_Cleanup@CStoryboard@@IEAAXXZ @ 0x180032048 (-_Cleanup@CStoryboard@@IEAAXXZ.c)
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x180034528 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 *     ?IsRTL@CStoryboard@@SA_NXZ @ 0x18003509C (-IsRTL@CStoryboard@@SA_NXZ.c)
 *     ?_StopAnimations@CTransitionVisualController@@IEAAXPEAVCWindowData@@@Z @ 0x180035618 (-_StopAnimations@CTransitionVisualController@@IEAAXPEAVCWindowData@@@Z.c)
 *     ?RecordWindowRect@CAnimationComponent@@QEAAXXZ @ 0x1800356A8 (-RecordWindowRect@CAnimationComponent@@QEAAXXZ.c)
 *     ??1CAnimationComponent@@UEAA@XZ @ 0x180035738 (--1CAnimationComponent@@UEAA@XZ.c)
 *     ?_StopTrackingWindowByIndex@CWindowPropertyTracker@@AEAAXH@Z @ 0x18003811C (-_StopTrackingWindowByIndex@CWindowPropertyTracker@@AEAAXH@Z.c)
 *     ?Activate@CLivePreview@@QEAAJ_NPEAUHWND__@@1W4LIVEPREVIEW_TRIGGER@@I0PEAUtagRECT@@@Z @ 0x18003F9DC (-Activate@CLivePreview@@QEAAJ_NPEAUHWND__@@1W4LIVEPREVIEW_TRIGGER@@I0PEAUtagRECT@@@Z.c)
 *     ?UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z @ 0x180043CD8 (-UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z.c)
 *     ?GetMDIOwner@CWindowData@@QEAAPEAV1@XZ @ 0x180097D04 (-GetMDIOwner@CWindowData@@QEAAPEAV1@XZ.c)
 *     ?OnWindowArrangementStart@CWindowArrangementTransition@@QEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z @ 0x18009C720 (-OnWindowArrangementStart@CWindowArrangementTransition@@QEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOT.c)
 * Callees:
 *     <none>
 */

struct CWindowData *__fastcall CWindowList::FindWindowDataByHwnd(CWindowList *this, HWND a2)
{
  char *v2; // rbx
  struct _RTL_GENERIC_TABLE *v4; // rsi
  _QWORD *v5; // rax
  char *v6; // rcx
  char *i; // rax
  PVOID RestartKey; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0LL;
  RestartKey = 0LL;
  if ( a2 )
  {
    v4 = (struct _RTL_GENERIC_TABLE *)((char *)this + 8);
LABEL_3:
    while ( 1 )
    {
      v5 = RtlEnumerateGenericTableWithoutSplaying(v4, &RestartKey);
      if ( !v5 || v2 )
        break;
      v6 = (char *)(v5 + 10);
      for ( i = (char *)v5[10]; i != v6; i = *(char **)i )
      {
        if ( *((HWND *)i + 5) == a2 )
        {
          v2 = i;
          goto LABEL_3;
        }
      }
    }
  }
  return (struct CWindowData *)v2;
}
