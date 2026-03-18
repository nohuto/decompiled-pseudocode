/*
 * XREFs of ?CreateCVI@CSnapshot@@AEAAJPEAVCVisual@@@Z @ 0x1801F5ED0
 * Callers:
 *     ?ProcessUpdate@CSnapshot@@UEAAJPEBVCResourceTable@@PEBUtagMILCMD_SNAPSHOT@@@Z @ 0x1801F60F0 (-ProcessUpdate@CSnapshot@@UEAAJPEBVCResourceTable@@PEBUtagMILCMD_SNAPSHOT@@@Z.c)
 * Callees:
 *     ??0CCachedVisualImage@@IEAA@PEAVCComposition@@@Z @ 0x180036398 (--0CCachedVisualImage@@IEAA@PEAVCComposition@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CRenderTargetBitmap@@UEAAKXZ @ 0x18003CAF0 (-Release@CRenderTargetBitmap@@UEAAKXZ.c)
 *     ??2CCachedVisualImage@@KAPEAX_K@Z @ 0x1800D8F8C (--2CCachedVisualImage@@KAPEAX_K@Z.c)
 *     ?RegisterSnapshotToPerform@CComposition@@QEAAJPEAVCCachedVisualImage@@@Z @ 0x180157540 (-RegisterSnapshotToPerform@CComposition@@QEAAJPEAVCCachedVisualImage@@@Z.c)
 *     ??4?$com_ptr_t@VCDxHandleYUVBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDxHandleYUVBitmapRealization@@@Z @ 0x180175C0C (--4-$com_ptr_t@VCDxHandleYUVBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAV.c)
 *     ?SetForDCompSnapshot@CCachedVisualImage@@IEAAJPEAVCVisual@@AEBUD2D_SIZE_U@@_N@Z @ 0x1801AD0D4 (-SetForDCompSnapshot@CCachedVisualImage@@IEAAJPEAVCVisual@@AEBUD2D_SIZE_U@@_N@Z.c)
 */

__int64 __fastcall CSnapshot::CreateCVI(CSnapshot *this, struct CVisual *a2)
{
  CCachedVisualImage *v4; // rax
  __int64 v5; // rcx
  CRenderTargetBitmap *v6; // rsi
  unsigned int v7; // ebx
  int v8; // eax
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  CRenderTargetBitmap *v12; // rcx
  CRenderTargetBitmap *v14; // [rsp+50h] [rbp+18h] BYREF

  v14 = 0LL;
  v4 = (CCachedVisualImage *)CCachedVisualImage::operator new();
  if ( v4 )
    v4 = CCachedVisualImage::CCachedVisualImage(v4, *((struct CComposition **)this + 2));
  wil::com_ptr_t<CDxHandleYUVBitmapRealization,wil::err_returncode_policy>::operator=(&v14, v4);
  v6 = v14;
  if ( v14 )
  {
    if ( *((_DWORD *)this + 18)
      && *((_DWORD *)this + 19)
      && (v8 = CCachedVisualImage::SetForDCompSnapshot(
                 v14,
                 a2,
                 (const struct D2D_SIZE_U *)this + 9,
                 *((_BYTE *)this + 80)),
          v7 = v8,
          v8 < 0) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x21u, 0LL);
    }
    else
    {
      v10 = CComposition::RegisterSnapshotToPerform(*((CComposition **)this + 2), v6);
      v7 = v10;
      if ( v10 >= 0 )
      {
        v12 = (CRenderTargetBitmap *)*((_QWORD *)this + 8);
        *((_QWORD *)this + 8) = v6;
        if ( !v12 )
          return v7;
LABEL_14:
        CRenderTargetBitmap::Release(v12);
        return v7;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x25u, 0LL);
    }
    v12 = v6;
    goto LABEL_14;
  }
  v7 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, -2147024882, 0x17u, 0LL);
  return v7;
}
