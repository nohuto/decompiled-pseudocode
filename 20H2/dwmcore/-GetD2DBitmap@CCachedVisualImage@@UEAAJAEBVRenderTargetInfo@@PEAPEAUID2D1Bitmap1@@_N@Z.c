/*
 * XREFs of ?GetD2DBitmap@CCachedVisualImage@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x1801AB090
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800319E8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnsureRenderTargetBitmap@CCachedVisualImage@@AEAAJAEBVRenderTargetInfo@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18006B0EC (-EnsureRenderTargetBitmap@CCachedVisualImage@@AEAAJAEBVRenderTargetInfo@@PEAPEAVIRenderTargetBit.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCachedVisualImage::GetD2DBitmap(
        CCachedVisualImage *this,
        const struct RenderTargetInfo *a2,
        struct ID2D1Bitmap1 **a3,
        char a4)
{
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // r9
  unsigned int v10; // ebx
  char *v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  struct IRenderTargetBitmap *v15; // [rsp+40h] [rbp+8h] BYREF

  *a3 = 0LL;
  v15 = 0LL;
  v7 = CCachedVisualImage::EnsureRenderTargetBitmap((CCachedVisualImage *)((char *)this - 64), a2, &v15);
  v10 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x168u, 0LL);
  }
  else
  {
    LOBYTE(v9) = a4;
    v11 = (char *)v15 + *(int *)(*((_QWORD *)v15 + 1) + 16LL) + 8;
    v12 = (*(__int64 (__fastcall **)(char *, const struct RenderTargetInfo *, struct ID2D1Bitmap1 **, __int64))(*(_QWORD *)v11 + 56LL))(
            v11,
            a2,
            a3,
            v9);
    v10 = v12;
    if ( v12 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x16Cu, 0LL);
  }
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v15);
  return v10;
}
