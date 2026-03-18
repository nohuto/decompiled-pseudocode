/*
 * XREFs of ?GetDeviceTexture@CCachedVisualImage@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x180034140
 * Callers:
 *     ?UpdateCVIRenderTargets@CDesktopTree@@QEAAXPEBVCOcclusionContext@@AEBVRenderTargetInfo@@@Z @ 0x18006CF60 (-UpdateCVIRenderTargets@CDesktopTree@@QEAAXPEBVCOcclusionContext@@AEBVRenderTargetInfo@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800269B4 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnsureRenderTargetBitmap@CCachedVisualImage@@AEAAJAEBVRenderTargetInfo@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800341CC (-EnsureRenderTargetBitmap@CCachedVisualImage@@AEAAJAEBVRenderTargetInfo@@PEAPEAVIRenderTargetBit.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCachedVisualImage::GetDeviceTexture(
        CCachedVisualImage *this,
        const struct RenderTargetInfo *a2,
        struct IDeviceTexture **a3)
{
  int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  char *v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  struct IRenderTargetBitmap *v12; // [rsp+40h] [rbp+8h] BYREF

  *a3 = 0LL;
  v12 = 0LL;
  v5 = CCachedVisualImage::EnsureRenderTargetBitmap((CCachedVisualImage *)((char *)this - 64), a2, &v12);
  v7 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x154u, 0LL);
  }
  else
  {
    v8 = (char *)v12 + *(int *)(*((_QWORD *)v12 + 1) + 16LL) + 8;
    v9 = (*(__int64 (__fastcall **)(char *, const struct RenderTargetInfo *, struct IDeviceTexture **))(*(_QWORD *)v8 + 48LL))(
           v8,
           a2,
           a3);
    v7 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x157u, 0LL);
  }
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v12);
  return v7;
}
