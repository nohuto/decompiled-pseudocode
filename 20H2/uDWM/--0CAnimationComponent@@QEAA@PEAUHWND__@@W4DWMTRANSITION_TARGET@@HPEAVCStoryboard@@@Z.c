/*
 * XREFs of ??0CAnimationComponent@@QEAA@PEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@@Z @ 0x18000C13C
 * Callers:
 *     ?CreateBlurBehindAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HPEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x180003F0C (-CreateBlurBehindAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HPEAVCSto.c)
 *     ?CreateNullAnimationComponentWithWindow@CTransitionVisualController@@QEAAJPEAVCWindowData@@HPEAVCStoryboard@@_NPEAPEAVCAnimationComponent@@@Z @ 0x180007ED0 (-CreateNullAnimationComponentWithWindow@CTransitionVisualController@@QEAAJPEAVCWindowData@@HPEAV.c)
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x180032BFC (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 *     ?CreateBitmapAnimationComponent@CTransitionVisualController@@QEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x1800A9A98 (-CreateBitmapAnimationComponent@CTransitionVisualController@@QEAAJPEAUHWND__@@W4DWMTRANSITION_TA.c)
 *     ?CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT@@_N2PEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x1800A9C6C (-CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT.c)
 *     ?CreateDesktopSnapshotComponent@CTransitionVisualController@@QEAAJW4DWMTRANSITION_TARGET@@AEBUtagRECT@@PEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x1800AA28C (-CreateDesktopSnapshotComponent@CTransitionVisualController@@QEAAJW4DWMTRANSITION_TARGET@@AEBUta.c)
 *     ?_CreateSingleGutterAnimationComponent@CTransitionVisualController@@IEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@PEBUFakeGutterInfo@1@PEAPEAVCAnimationComponent@@@Z @ 0x1800AAEE4 (-_CreateSingleGutterAnimationComponent@CTransitionVisualController@@IEAAJPEAUHWND__@@W4DWMTRANSI.c)
 *     ?_CreateMonitorSnapshot@CVirtualDesktopSwitch@@AEAAJPEAVCWindowData@@UtagRECT@@_NPEAPEAVCAnimationComponent@@@Z @ 0x1800B0DAC (-_CreateMonitorSnapshot@CVirtualDesktopSwitch@@AEAAJPEAVCWindowData@@UtagRECT@@_NPEAPEAVCAnimati.c)
 * Callees:
 *     ?_LogEvent@CAnimationComponent@@IEAAXW4AnimationComponentEvent@1@@Z @ 0x18000C254 (-_LogEvent@CAnimationComponent@@IEAAXW4AnimationComponentEvent@1@@Z.c)
 *     ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z @ 0x180025E70 (-GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z.c)
 */

__int64 __fastcall CAnimationComponent::CAnimationComponent(__int64 a1, __int64 a2, int a3, int a4, __int64 a5)
{
  __int64 v5; // rsi
  __int64 Theme; // rax
  int v10; // [rsp+60h] [rbp+18h] BYREF
  int v11; // [rsp+68h] [rbp+20h] BYREF

  v5 = a5;
  *(_DWORD *)(a1 + 8) = 1;
  *(_WORD *)(a1 + 66) = 0;
  *(_DWORD *)(a1 + 68) = 0;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)a1 = &CAnimationComponent::`vftable';
  *(_QWORD *)(a1 + 16) = a2;
  *(_DWORD *)(a1 + 24) = a3;
  *(_DWORD *)(a1 + 28) = a4;
  *(_DWORD *)(a1 + 60) = 0x80000000;
  *(_WORD *)(a1 + 72) = 256;
  *(_BYTE *)(a1 + 120) = 0;
  *(_QWORD *)(a1 + 128) = v5;
  if ( a2 && (unsigned int)GetWindowBand(a2, &v11) )
    *(_BYTE *)(a1 + 120) = v11 == 1;
  *(_DWORD *)(a1 + 56) = 0;
  if ( a4 >= 0 )
  {
    v10 = 0;
    Theme = CDesktopManager::GetTheme(3LL);
    if ( (int)GetThemeAnimationProperty(Theme, *(unsigned int *)(v5 + 72), (unsigned int)a4, 5LL, &v10, 4, &a5) >= 0 )
      *(_DWORD *)(a1 + 56) = v10;
  }
  CAnimationComponent::_LogEvent(a1, 0LL);
  return a1;
}
