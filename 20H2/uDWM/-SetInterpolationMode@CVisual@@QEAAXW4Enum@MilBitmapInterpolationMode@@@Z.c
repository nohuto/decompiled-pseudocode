/*
 * XREFs of ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x18000BDD4
 * Callers:
 *     ?UpdateAccentBlurBehind@CAccentBlurBehind@@QEAAJAEBUtagRECT@@_KPEAUHWND__@@@Z @ 0x1800021F0 (-UpdateAccentBlurBehind@CAccentBlurBehind@@QEAAJAEBUtagRECT@@_KPEAUHWND__@@@Z.c)
 *     ?EnsureCVIResource@CAccentBlurBehind@@AEAAJPEBUtagRECT@@@Z @ 0x1800026A8 (-EnsureCVIResource@CAccentBlurBehind@@AEAAJPEBUtagRECT@@@Z.c)
 *     ?EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ @ 0x1800087B0 (-EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ.c)
 *     ?_EnsureCVIResource@CTransitionWindowSnapshot@@AEAAJPEBUtagRECT@@@Z @ 0x18000B0B4 (-_EnsureCVIResource@CTransitionWindowSnapshot@@AEAAJPEBUtagRECT@@@Z.c)
 *     ?ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z @ 0x18000B8D0 (-ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?ValidateVisual@CThumbnailVisual@@UEAAJXZ @ 0x180010F00 (-ValidateVisual@CThumbnailVisual@@UEAAJXZ.c)
 *     ?UpdateWindowScale@CTopLevelWindow@@AEAAXXZ @ 0x180021BDC (-UpdateWindowScale@CTopLevelWindow@@AEAAXXZ.c)
 *     ?UpdateSettings@CFullScreenMagnifier@@AEAAJNNN@Z @ 0x1800514EC (-UpdateSettings@CFullScreenMagnifier@@AEAAJNNN@Z.c)
 *     ?Initialize@CTextTetherVisual@@MEAAJXZ @ 0x1800A1CD0 (-Initialize@CTextTetherVisual@@MEAAJXZ.c)
 *     ?CreateDesktopSnapshotComponent@CTransitionVisualController@@QEAAJW4DWMTRANSITION_TARGET@@AEBUtagRECT@@PEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x1800AA28C (-CreateDesktopSnapshotComponent@CTransitionVisualController@@QEAAJW4DWMTRANSITION_TARGET@@AEBUta.c)
 *     ?Capture@CScreenRotation@@QEAAJXZ @ 0x1800ABAE8 (-Capture@CScreenRotation@@QEAAJXZ.c)
 *     ?CreateLiveDesktopVisual@CScreenRotation@@AEAAJXZ @ 0x1800ABF84 (-CreateLiveDesktopVisual@CScreenRotation@@AEAAJXZ.c)
 *     ?SetVisual@CDesktopThumbnailCVIVisual@@QEAAJPEAVCDesktopThumbnailCVI@@AEBUtagRECT@@@Z @ 0x1800B6638 (-SetVisual@CDesktopThumbnailCVIVisual@@QEAAJPEAVCDesktopThumbnailCVI@@AEBUtagRECT@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180056410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::SetInterpolationMode(unsigned int *a1, unsigned int a2)
{
  __int64 result; // rax

  result = a1[49];
  if ( (result & 2) == 0 || a1[50] != a2 )
  {
    a1[50] = a2;
    a1[49] = result | 2;
    return (*(__int64 (__fastcall **)(unsigned int *, __int64))(*(_QWORD *)a1 + 24LL))(a1, 64LL);
  }
  return result;
}
