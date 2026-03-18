/*
 * XREFs of ??1CVisualTree@@UEAA@XZ @ 0x18008E170
 * Callers:
 *     ??_ECVisualTree@@UEAAPEAXI@Z @ 0x18008DFD0 (--_ECVisualTree@@UEAAPEAXI@Z.c)
 *     ??1CDesktopTree@@UEAA@XZ @ 0x1801B5F74 (--1CDesktopTree@@UEAA@XZ.c)
 * Callees:
 *     ?ReleaseVisualTreeData@CVisual@@QEAAXPEAVCVisualTreeData@@@Z @ 0x180025718 (-ReleaseVisualTreeData@CVisual@@QEAAXPEAVCVisualTreeData@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18003AF68 (--3@YAXPEAX@Z.c)
 *     ??1CPreComputeContext@@QEAA@XZ @ 0x18008E014 (--1CPreComputeContext@@QEAA@XZ.c)
 *     ??1COcclusionContext@@QEAA@XZ @ 0x180093A80 (--1COcclusionContext@@QEAA@XZ.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800BBA38 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?FindSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@AEBAII@Z @ 0x1800BCC1C (-FindSlot@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@AEBAII@Z.c)
 *     ?ReleaseDirtyRegionAnnotationBuffers@CDirtyRegionAnnotationAllocationSet@@AEAAXXZ @ 0x1800CDED8 (-ReleaseDirtyRegionAnnotationBuffers@CDirtyRegionAnnotationAllocationSet@@AEAAXXZ.c)
 *     ?clear_region@?$vector_facade@PEAVIVisualTreeClient@@V?$buffer_impl@PEAVIVisualTreeClient@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800D7AD0 (-clear_region@-$vector_facade@PEAVIVisualTreeClient@@V-$buffer_impl@PEAVIVisualTreeClient@@$03$0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CVisualTree::~CVisualTree(CVisualTree *this)
{
  _QWORD *i; // rdi
  __int64 v3; // r10
  _DWORD *v4; // r10
  unsigned int Slot; // eax
  __int64 v6; // r10
  __int64 v7; // rcx
  CVisualTree **v8; // rdi
  CVisualTree *v9; // rcx
  __int64 v10; // rcx

  *(_QWORD *)this = &CVisualTree::`vftable';
  for ( i = (_QWORD *)((char *)this + 5872);
        (_QWORD *)*i != i;
        CVisual::ReleaseVisualTreeData(*(CVisual **)(*i - 280LL), (struct CVisualTreeData *)(*i - 304LL)) )
  {
    ;
  }
  v3 = *((_QWORD *)this + 7);
  if ( v3 )
  {
    v4 = *(_DWORD **)(v3 + 224);
    if ( (*v4 & 0x4000000) != 0 )
    {
      *v4 &= ~0x4000000u;
      Slot = CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot(v4, 6LL);
      if ( Slot < *(_DWORD *)(v6 + 4) )
        *(_BYTE *)(Slot + v6 + 8) = 0;
    }
    v7 = *((_QWORD *)this + 7);
    *((_QWORD *)this + 7) = 0LL;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  FastRegion::CRegion::FreeMemory((CVisualTree *)((char *)this + 5800));
  v8 = (CVisualTree **)((char *)this + 5728);
  v9 = (CVisualTree *)*((_QWORD *)this + 716);
  if ( (__int64)(*((_QWORD *)this + 717) - (_QWORD)v9) >> 3 )
  {
    detail::vector_facade<IVisualTreeClient *,detail::buffer_impl<IVisualTreeClient *,4,1,detail::liberal_expansion_policy>>::clear_region(
      (char *)this + 5728,
      0LL);
    v9 = *v8;
  }
  *v8 = 0LL;
  if ( v9 == (CVisualTree *)((char *)this + 5752) )
    v9 = 0LL;
  operator delete(v9);
  CDirtyRegionAnnotationAllocationSet::ReleaseDirtyRegionAnnotationBuffers((CVisualTree *)((char *)this + 4120));
  COcclusionContext::~COcclusionContext((CVisualTree *)((char *)this + 1280));
  CPreComputeContext::~CPreComputeContext((CVisualTree *)((char *)this + 96));
  v10 = *((_QWORD *)this + 7);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  CResource::~CResource(this);
}
