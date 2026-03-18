/*
 * XREFs of ?Initialize@CTreeData@@MEAAXPEAVCVisualTree@@PEAVCVisual@@@Z @ 0x18004A820
 * Callers:
 *     ?Initialize@CVisualTreeData@@MEAAXPEAVCVisualTree@@PEAVCVisual@@@Z @ 0x18004A6B0 (-Initialize@CVisualTreeData@@MEAAXPEAVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ??0CVisual@@IEAA@PEAVCComposition@@@Z @ 0x180088200 (--0CVisual@@IEAA@PEAVCComposition@@@Z.c)
 *     ?Initialize@CDesktopTreeData@@MEAAXPEAVCVisualTree@@PEAVCVisual@@@Z @ 0x1801F7940 (-Initialize@CDesktopTreeData@@MEAAXPEAVCVisualTree@@PEAVCVisual@@@Z.c)
 * Callees:
 *     ?clear@?$vector_facade@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@V?$buffer_impl@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x18004A8EC (-clear@-$vector_facade@V-$unique_ptr@VCOcclusionInfo@@U-$default_delete@VCOcclusionInfo@@@std@@@.c)
 *     ?clear_region@?$vector_facade@V?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800DB6AC (-clear_region@-$vector_facade@V-$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@w.c)
 *     ??3@YAXPEAX_K@Z @ 0x180100BF8 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall CTreeData::Initialize(CTreeData *this, struct CVisualTree *a2, struct CVisual *a3)
{
  void *v4; // rcx

  *((_QWORD *)this + 36) = a3;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_DWORD *)this + 26) = 0;
  *((_QWORD *)this + 16) = 0LL;
  *((_DWORD *)this + 34) = 0;
  *((_DWORD *)this + 46) = 16842752;
  *((_BYTE *)this + 188) = 1;
  detail::vector_facade<std::unique_ptr<COcclusionInfo>,detail::buffer_impl<std::unique_ptr<COcclusionInfo>,1,1,detail::liberal_expansion_policy>>::clear(
    (char *)this + 224,
    a2);
  if ( (__int64)(*((_QWORD *)this + 25) - *((_QWORD *)this + 24)) >> 3 )
    detail::vector_facade<wil::com_ptr_t<CBackdropVisualImage,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CBackdropVisualImage,wil::err_returncode_policy>,1,1,detail::liberal_expansion_policy>>::clear_region(
      (char *)this + 192,
      0LL);
  v4 = (void *)*((_QWORD *)this + 38);
  *((_QWORD *)this + 38) = 0LL;
  if ( v4 )
    operator delete(v4, 0x10uLL);
  (*(void (__fastcall **)(CTreeData *))(*(_QWORD *)this + 32LL))(this);
}
