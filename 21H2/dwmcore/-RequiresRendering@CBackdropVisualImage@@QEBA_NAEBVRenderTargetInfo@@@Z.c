/*
 * XREFs of ?RequiresRendering@CBackdropVisualImage@@QEBA_NAEBVRenderTargetInfo@@@Z @ 0x180086BB4
 * Callers:
 *     ?UpdateCVIRenderTargets@CDesktopTree@@QEBAXAEBVRenderTargetInfo@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180089680 (-UpdateCVIRenderTargets@CDesktopTree@@QEBAXAEBVRenderTargetInfo@@AEBV-$TMilRect_@MUMilRectF@@UMi.c)
 *     ?HasValidRenderingRealization@CBackdropVisualImage@@QEBA_NAEBVRenderTargetInfo@@@Z @ 0x1800DCD94 (-HasValidRenderingRealization@CBackdropVisualImage@@QEBA_NAEBVRenderTargetInfo@@@Z.c)
 * Callees:
 *     ?IsValid@CBackdropVisualImage@@QEBA_NXZ @ 0x180086C90 (-IsValid@CBackdropVisualImage@@QEBA_NXZ.c)
 *     ?CanRenderToTargetFromSource@@YA_NAEBVRenderTargetInfo@@0@Z @ 0x180086D24 (-CanRenderToTargetFromSource@@YA_NAEBVRenderTargetInfo@@0@Z.c)
 *     ?IsValid@CCachedTarget@CCachedVisualImage@@QEBA_NXZ @ 0x180086D94 (-IsValid@CCachedTarget@CCachedVisualImage@@QEBA_NXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall CBackdropVisualImage::RequiresRendering(CBackdropVisualImage *this, const struct RenderTargetInfo *a2)
{
  __int64 v3; // rcx
  char v4; // bl
  CCachedVisualImage::CCachedTarget **v5; // rdi
  CCachedVisualImage::CCachedTarget **v6; // rsi
  void (__fastcall ***v7)(_QWORD, _BYTE *); // rax
  CCachedVisualImage::CCachedTarget *v8; // rdi
  _BYTE v10[40]; // [rsp+20h] [rbp-28h] BYREF

  v4 = 0;
  if ( !CBackdropVisualImage::IsValid(this) )
    return 0;
  v5 = *(CCachedVisualImage::CCachedTarget ***)(v3 + 192);
  v6 = *(CCachedVisualImage::CCachedTarget ***)(v3 + 200);
  while ( 1 )
  {
    if ( v5 == v6 )
      return 1;
    v7 = (void (__fastcall ***)(_QWORD, _BYTE *))(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)*v5 + 1) + 64LL))(*((_QWORD *)*v5 + 1));
    (**v7)(v7, v10);
    if ( CanRenderToTargetFromSource(a2, (const struct RenderTargetInfo *)v10) )
      break;
    ++v5;
  }
  v8 = *v5;
  if ( !v8 )
    return 1;
  if ( !CCachedVisualImage::CCachedTarget::IsValid(v8) || *((_BYTE *)v8 + 57) )
    return 1;
  return v4;
}
