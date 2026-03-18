/*
 * XREFs of ??1CVisualTree@@UEAA@XZ @ 0x180035BA0
 * Callers:
 *     ??_ECVisualTree@@UEAAPEAXI@Z @ 0x180035A00 (--_ECVisualTree@@UEAAPEAXI@Z.c)
 *     ??1CDesktopTree@@UEAA@XZ @ 0x1801B3604 (--1CDesktopTree@@UEAA@XZ.c)
 * Callees:
 *     ?ReleaseVisualTreeData@CVisual@@QEAAXPEAVCVisualTreeData@@@Z @ 0x180024088 (-ReleaseVisualTreeData@CVisual@@QEAAXPEAVCVisualTreeData@@@Z.c)
 *     ?clear_region@?$vector_facade@PEAVIVisualTreeClient@@V?$buffer_impl@PEAVIVisualTreeClient@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800266A8 (-clear_region@-$vector_facade@PEAVIVisualTreeClient@@V-$buffer_impl@PEAVIVisualTreeClient@@$03$0.c)
 *     ??1CPreComputeContext@@QEAA@XZ @ 0x180035A44 (--1CPreComputeContext@@QEAA@XZ.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180044474 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800585C8 (--3@YAXPEAX@Z.c)
 *     ??1COcclusionContext@@QEAA@XZ @ 0x18009955C (--1COcclusionContext@@QEAA@XZ.c)
 *     ?FindSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@AEBAII@Z @ 0x1800BEFCC (-FindSlot@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@AEBAII@Z.c)
 *     ?ReleaseDirtyRegionAnnotationBuffers@CDirtyRegionAnnotationAllocationSet@@AEAAXXZ @ 0x1800D5D78 (-ReleaseDirtyRegionAnnotationBuffers@CDirtyRegionAnnotationAllocationSet@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
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
  __int64 v10; // r8
  __int64 v11; // rcx

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
  v10 = (__int64)(*((_QWORD *)this + 717) - (_QWORD)v9) >> 3;
  if ( v10 )
  {
    detail::vector_facade<IVisualTreeClient *,detail::buffer_impl<IVisualTreeClient *,4,1,detail::liberal_expansion_policy>>::clear_region(
      (__int64 *)this + 716,
      0LL,
      v10);
    v9 = *v8;
  }
  *v8 = 0LL;
  if ( v9 == (CVisualTree *)((char *)this + 5752) )
    v9 = 0LL;
  operator delete(v9);
  CDirtyRegionAnnotationAllocationSet::ReleaseDirtyRegionAnnotationBuffers((CVisualTree *)((char *)this + 4120));
  COcclusionContext::~COcclusionContext((CVisualTree *)((char *)this + 1280));
  CPreComputeContext::~CPreComputeContext((CVisualTree *)((char *)this + 96));
  v11 = *((_QWORD *)this + 7);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  CResource::~CResource(this);
}
