/*
 * XREFs of ?Create@CBackdropVisualImage@@SAJPEAVCComposition@@PEBVCVisual@@AEBVCVisualTreePath@@_NPEAPEAV1@@Z @ 0x1800D43C8
 * Callers:
 *     ?CreateOrUpdateBVI@CVisual@@QEAAJAEBVCVisualTreePath@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEA_N@Z @ 0x180086704 (-CreateOrUpdateBVI@CVisual@@QEAAJAEBVCVisualTreePath@@AEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@U.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18004F61C (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?InternalRelease@CResource@@IEAAKXZ @ 0x1800B1804 (-InternalRelease@CResource@@IEAAKXZ.c)
 *     ?Initialize@CBackdropVisualImage@@EEAAJXZ @ 0x1800D4490 (-Initialize@CBackdropVisualImage@@EEAAJXZ.c)
 *     ??4?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCBackdropVisualImage@@@Z @ 0x1800D4528 (--4-$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCBackdrop.c)
 *     ??0CBackdropVisualImage@@AEAA@PEAVCComposition@@PEBVCVisual@@AEBVCVisualTreePath@@_N@Z @ 0x1800D4568 (--0CBackdropVisualImage@@AEAA@PEAVCComposition@@PEBVCVisual@@AEBVCVisualTreePath@@_N@Z.c)
 */

__int64 __fastcall CBackdropVisualImage::Create(
        struct CComposition *a1,
        const struct CVisual *a2,
        const struct CVisualTreePath *a3,
        bool a4,
        struct CBackdropVisualImage **a5)
{
  CBackdropVisualImage *v9; // rax
  CResource *v10; // rbx
  int v11; // eax
  unsigned int v12; // edi
  struct CBackdropVisualImage *v13; // rax
  __int64 v15; // rdx
  __int64 v16; // r9
  CBackdropVisualImage *v17; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v17 = 0LL;
  *a5 = 0LL;
  v9 = (CBackdropVisualImage *)DefaultHeap::AllocClear(0x808uLL);
  if ( v9 )
    v9 = CBackdropVisualImage::CBackdropVisualImage(v9, a1, a2, a3, a4);
  wil::com_ptr_t<CBackdropVisualImage,wil::err_returncode_policy>::operator=(&v17, v9);
  v10 = v17;
  if ( v17 )
  {
    v11 = CBackdropVisualImage::Initialize(v17);
    v12 = v11;
    if ( v11 >= 0 )
    {
      v13 = v10;
      v10 = 0LL;
      v12 = 0;
      *a5 = v13;
      goto LABEL_6;
    }
    v16 = (unsigned int)v11;
    v15 = 28LL;
  }
  else
  {
    v12 = -2147024882;
    v15 = 26LL;
    v16 = 2147942414LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v15,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\backdropvisualimage.cpp",
    (const char *)v16);
LABEL_6:
  if ( v10 )
    CResource::InternalRelease(v10);
  return v12;
}
