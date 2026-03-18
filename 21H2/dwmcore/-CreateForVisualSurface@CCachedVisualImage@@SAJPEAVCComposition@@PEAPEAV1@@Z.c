/*
 * XREFs of ?CreateForVisualSurface@CCachedVisualImage@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x18005DD10
 * Callers:
 *     ?GetOrCreateCVIForRealizationSize@CVisualSurface@@AEAAJAEBUD2D_VECTOR_2F@@PEAPEAVCCachedVisualImage@@@Z @ 0x18005D7D0 (-GetOrCreateCVIForRealizationSize@CVisualSurface@@AEAAJAEBUD2D_VECTOR_2F@@PEAPEAVCCachedVisualIm.c)
 *     ?ProcessSetRealizationSize@CVisualSurface@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUALSURFACE_SETREALIZATIONSIZE@@@Z @ 0x1800E3F6C (-ProcessSetRealizationSize@CVisualSurface@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUALSURFACE_.c)
 * Callees:
 *     ??1?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EBC0 (--1-$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18004F61C (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?ChoosePixelFormat@CCachedVisualImage@@IEAAXXZ @ 0x180060B4C (-ChoosePixelFormat@CCachedVisualImage@@IEAAXXZ.c)
 *     ??0CCachedVisualImage@@IEAA@PEAVCComposition@@_N@Z @ 0x180063908 (--0CCachedVisualImage@@IEAA@PEAVCComposition@@_N@Z.c)
 *     ??0?$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCCachedVisualImage@@@Z @ 0x1800F44D0 (--0-$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCCachedVisualImag.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CCachedVisualImage::CreateForVisualSurface(struct CComposition *a1, struct CCachedVisualImage **a2)
{
  CCachedVisualImage *v4; // rax
  CCachedVisualImage *v5; // rbx
  int v6; // eax
  unsigned int v7; // edi
  __int64 v9; // rdx
  __int64 v10; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  CCachedVisualImage *v12; // [rsp+40h] [rbp+18h] BYREF

  v4 = (CCachedVisualImage *)DefaultHeap::AllocClear(0x738uLL);
  if ( v4 )
    v4 = CCachedVisualImage::CCachedVisualImage(v4, a1, 1);
  wil::com_ptr_t<CCachedVisualImage,wil::err_returncode_policy>::com_ptr_t<CCachedVisualImage,wil::err_returncode_policy>(
    &v12,
    v4);
  v5 = v12;
  if ( !v12 )
  {
    v7 = -2147024882;
    v9 = 129LL;
    v10 = 2147942414LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\cachedvisualimage.cpp",
      (const char *)v10);
    goto LABEL_6;
  }
  v6 = (*(__int64 (__fastcall **)(CCachedVisualImage *))(*(_QWORD *)v12 + 48LL))(v12);
  v7 = v6;
  if ( v6 < 0 )
  {
    v10 = (unsigned int)v6;
    v9 = 131LL;
    goto LABEL_9;
  }
  *((_DWORD *)v5 + 38) = 0;
  *((_DWORD *)v5 + 39) = 87;
  *((_DWORD *)v5 + 41) = 1;
  CCachedVisualImage::ChoosePixelFormat(v5);
  v12 = 0LL;
  v7 = 0;
  *a2 = v5;
LABEL_6:
  wil::com_ptr_t<CVisual,wil::err_returncode_policy>::~com_ptr_t<CVisual,wil::err_returncode_policy>((__int64 *)&v12);
  return v7;
}
