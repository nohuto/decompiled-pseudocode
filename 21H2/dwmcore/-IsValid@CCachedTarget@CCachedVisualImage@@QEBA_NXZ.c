/*
 * XREFs of ?IsValid@CCachedTarget@CCachedVisualImage@@QEBA_NXZ @ 0x180086D94
 * Callers:
 *     ?TranslateRenderTargetInfo@CBackdropVisualImage@@QEBA_NPEAVRenderTargetInfo@@@Z @ 0x180058C84 (-TranslateRenderTargetInfo@CBackdropVisualImage@@QEBA_NPEAVRenderTargetInfo@@@Z.c)
 *     ?MarkAllTargetsDirty@CCachedVisualImage@@QEAAXXZ @ 0x18005C3D4 (-MarkAllTargetsDirty@CCachedVisualImage@@QEAAXXZ.c)
 *     ?RemoveInvalidTargets@CCachedVisualImage@@IEAA_NUD2D_SIZE_U@@@Z @ 0x18005D3E4 (-RemoveInvalidTargets@CCachedVisualImage@@IEAA_NUD2D_SIZE_U@@@Z.c)
 *     ?ValidateRootAndSourceRectangle@CBackdropVisualImage@@QEAAJPEAVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEA_N@Z @ 0x18008685C (-ValidateRootAndSourceRectangle@CBackdropVisualImage@@QEAAJPEAVCVisual@@AEBV-$TMilRect_@MUMilRec.c)
 *     ?RequiresRendering@CBackdropVisualImage@@QEBA_NAEBVRenderTargetInfo@@@Z @ 0x180086BB4 (-RequiresRendering@CBackdropVisualImage@@QEBA_NAEBVRenderTargetInfo@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

bool __fastcall CCachedVisualImage::CCachedTarget::IsValid(CCachedVisualImage::CCachedTarget *this)
{
  int (__fastcall ***v1)(_QWORD); // rcx

  v1 = (int (__fastcall ***)(_QWORD))(*((_QWORD *)this + 1)
                                    + 8LL
                                    + *(int *)(*(_QWORD *)(*((_QWORD *)this + 1) + 8LL) + 8LL));
  return (**v1)(v1) >= 0;
}
