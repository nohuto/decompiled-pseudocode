/*
 * XREFs of ?InternalRelease@?$ComPtr@VCDrawGeometryInstruction@@@WRL@Microsoft@@IEAAKXZ @ 0x18003F820
 * Callers:
 *     ?_ValidateDCompVisual@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180005854 (-_ValidateDCompVisual@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?UpdateBackgroundWithClip@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800059A0 (-UpdateBackgroundWithClip@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ @ 0x18001D930 (-UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ.c)
 *     ?_UpdateInstructions@CLivePreview@@AEAAJXZ @ 0x1800844C0 (-_UpdateInstructions@CLivePreview@@AEAAJXZ.c)
 *     ?UpdateBackgroundInstructionsAndSize@CScreenRotation@@AEAAJPEBUtagSIZE@@_N@Z @ 0x1800AD5B8 (-UpdateBackgroundInstructionsAndSize@CScreenRotation@@AEAAJPEBUtagSIZE@@_N@Z.c)
 *     ?SetVisual@CDesktopThumbnailCVIVisual@@QEAAJPEAVCDesktopThumbnailCVI@@AEBUtagRECT@@@Z @ 0x1800B6D18 (-SetVisual@CDesktopThumbnailCVIVisual@@QEAAJPEAVCDesktopThumbnailCVI@@AEBUtagRECT@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CDrawGeometryInstruction>::InternalRelease(CBaseObject **a1)
{
  CBaseObject *v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return CBaseObject::Release(v1);
  }
  return result;
}
