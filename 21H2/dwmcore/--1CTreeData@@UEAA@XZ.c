/*
 * XREFs of ??1CTreeData@@UEAA@XZ @ 0x18008E62C
 * Callers:
 *     ??1CVisual@@MEAA@XZ @ 0x18004A90C (--1CVisual@@MEAA@XZ.c)
 *     ??_ECVisualTreeData@@UEAAPEAXI@Z @ 0x1800E2390 (--_ECVisualTreeData@@UEAAPEAXI@Z.c)
 *     ??_ECDesktopTreeData@@UEAAPEAXI@Z @ 0x1801F6910 (--_ECDesktopTreeData@@UEAAPEAXI@Z.c)
 *     ??_ECTreeData@@UEAAPEAXI@Z @ 0x1801F6960 (--_ECTreeData@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?clear@?$vector_facade@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@V?$buffer_impl@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x18004A8EC (-clear@-$vector_facade@V-$unique_ptr@VCOcclusionInfo@@U-$default_delete@VCOcclusionInfo@@@std@@@.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ??$SAFE_DELETE@VCMILMatrix@@@@YAXAEAPEAVCMILMatrix@@@Z @ 0x18009504C (--$SAFE_DELETE@VCMILMatrix@@@@YAXAEAPEAVCMILMatrix@@@Z.c)
 *     ?clear@?$vector_facade@UContentEntry@CDrawListCacheSet@@V?$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1800C8020 (-clear@-$vector_facade@UContentEntry@CDrawListCacheSet@@V-$buffer_impl@UContentEntry@CDrawListCa.c)
 *     ??1CCpuClippingData@@QEAA@XZ @ 0x1800D3694 (--1CCpuClippingData@@QEAA@XZ.c)
 *     ?clear_region@?$vector_facade@V?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800DB6AC (-clear_region@-$vector_facade@V-$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@w.c)
 *     ??3@YAXPEAX_K@Z @ 0x180100BF8 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall CTreeData::~CTreeData(CTreeData *this)
{
  void *v2; // rcx
  CTreeData *v3; // rcx
  CTreeData **v4; // rbx
  CTreeData *v5; // rcx
  CTreeData *v6; // rcx

  *(_QWORD *)this = &CTreeData::`vftable';
  SAFE_DELETE<CMILMatrix>((char *)this + 296);
  v2 = (void *)*((_QWORD *)this + 38);
  if ( v2 )
    operator delete(v2, 0x10uLL);
  detail::vector_facade<std::unique_ptr<COcclusionInfo>,detail::buffer_impl<std::unique_ptr<COcclusionInfo>,1,1,detail::liberal_expansion_policy>>::clear((_QWORD *)this + 28);
  v3 = (CTreeData *)*((_QWORD *)this + 28);
  *((_QWORD *)this + 28) = 0LL;
  if ( v3 == (CTreeData *)((char *)this + 248) )
    v3 = 0LL;
  DefaultHeap::Free(v3);
  v4 = (CTreeData **)((char *)this + 192);
  v5 = (CTreeData *)*((_QWORD *)this + 24);
  if ( (__int64)(*((_QWORD *)this + 25) - (_QWORD)v5) >> 3 )
  {
    detail::vector_facade<wil::com_ptr_t<CBackdropVisualImage,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CBackdropVisualImage,wil::err_returncode_policy>,1,1,detail::liberal_expansion_policy>>::clear_region(
      (char *)this + 192,
      0LL);
    v5 = *v4;
  }
  *v4 = 0LL;
  if ( v5 == (CTreeData *)((char *)this + 216) )
    v5 = 0LL;
  DefaultHeap::Free(v5);
  CCpuClippingData::~CCpuClippingData((CTreeData *)((char *)this + 88));
  detail::vector_facade<CDrawListCacheSet::ContentEntry,detail::buffer_impl<CDrawListCacheSet::ContentEntry,2,1,detail::liberal_expansion_policy>>::clear((char *)this + 16);
  v6 = (CTreeData *)*((_QWORD *)this + 2);
  *((_QWORD *)this + 2) = 0LL;
  if ( v6 == (CTreeData *)((char *)this + 40) )
    v6 = 0LL;
  DefaultHeap::Free(v6);
}
