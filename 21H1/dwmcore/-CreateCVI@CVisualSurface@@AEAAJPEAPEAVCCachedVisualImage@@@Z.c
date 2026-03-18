/*
 * XREFs of ?CreateCVI@CVisualSurface@@AEAAJPEAPEAVCCachedVisualImage@@@Z @ 0x1801F5F7C
 * Callers:
 *     ?GetCVIForRealizationSize@CVisualSurface@@QEAAJPEBVCDrawingContext@@AEBUD2D_VECTOR_2F@@PEAU3@PEAPEAVCCachedVisualImage@@@Z @ 0x1801F6068 (-GetCVIForRealizationSize@CVisualSurface@@QEAAJPEBVCDrawingContext@@AEBUD2D_VECTOR_2F@@PEAU3@PEA.c)
 *     ?ProcessSetRealizationSize@CVisualSurface@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUALSURFACE_SETREALIZATIONSIZE@@@Z @ 0x1801F63F4 (-ProcessSetRealizationSize@CVisualSurface@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUALSURFACE_.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800392D0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18007CC28 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??0CCachedVisualImage@@IEAA@PEAVCComposition@@@Z @ 0x18008EA08 (--0CCachedVisualImage@@IEAA@PEAVCComposition@@@Z.c)
 *     ?ChoosePixelFormat@CCachedVisualImage@@IEAAXXZ @ 0x18008EFCC (-ChoosePixelFormat@CCachedVisualImage@@IEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180151814 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$com_ptr_t@VCDxHandleYUVBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDxHandleYUVBitmapRealization@@@Z @ 0x18017879C (--4-$com_ptr_t@VCDxHandleYUVBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAV.c)
 *     ?reset@?$com_ptr_t@VCDDisplaySwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18018930C (-reset@-$com_ptr_t@VCDDisplaySwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 */

__int64 __fastcall CVisualSurface::CreateCVI(CVisualSurface *this, struct CCachedVisualImage **a2)
{
  unsigned int v3; // edi
  struct CComposition *v5; // rbx
  CCachedVisualImage *v6; // rax
  CMILCOMBase *v7; // rax
  __int64 v8; // rcx
  CCachedVisualImage *v9; // rbx
  CCachedVisualImage *v10; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  CCachedVisualImage *v13; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  v13 = 0LL;
  wil::com_ptr_t<CDDisplaySwapChain,wil::err_returncode_policy>::reset(&v13);
  v5 = (struct CComposition *)*((_QWORD *)this + 2);
  v13 = 0LL;
  v6 = (CCachedVisualImage *)DefaultHeap::AllocClear(0x750uLL);
  if ( v6 )
    v7 = CCachedVisualImage::CCachedVisualImage(v6, v5);
  else
    v7 = 0LL;
  wil::com_ptr_t<CDxHandleYUVBitmapRealization,wil::err_returncode_policy>::operator=(&v13, v7);
  v9 = v13;
  if ( v13 )
  {
    v10 = v13;
    *((_DWORD *)v13 + 36) = 0;
    *((_DWORD *)v9 + 37) = 28;
    *((_DWORD *)v9 + 39) = 1;
    CCachedVisualImage::ChoosePixelFormat(v10);
    CResource::NotifyOnChanged((__int64)v9, 0, 0LL);
    *a2 = v9;
  }
  else
  {
    v3 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2147024882, 0x6Fu, 0LL);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x17B,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\visualsurface.cpp",
      (const char *)0x8007000ELL);
  }
  return v3;
}
