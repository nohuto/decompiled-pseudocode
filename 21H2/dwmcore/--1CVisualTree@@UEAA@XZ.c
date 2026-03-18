/*
 * XREFs of ??1CVisualTree@@UEAA@XZ @ 0x180063EB4
 * Callers:
 *     ??_ECVisualTree@@UEAAPEAXI@Z @ 0x180063E70 (--_ECVisualTree@@UEAAPEAXI@Z.c)
 *     ??1CDesktopTree@@UEAA@XZ @ 0x1801F5E24 (--1CDesktopTree@@UEAA@XZ.c)
 *     ??_GCSubVisualTree@@UEAAPEAXI@Z @ 0x180246590 (--_GCSubVisualTree@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?clear_region@?$vector_facade@UD2D_POINT_2F@@V?$buffer_impl@UD2D_POINT_2F@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800121BC (-clear_region@-$vector_facade@UD2D_POINT_2F@@V-$buffer_impl@UD2D_POINT_2F@@$0BA@$00Vliberal_expa.c)
 *     ??1CPreComputeContext@@QEAA@XZ @ 0x180019C48 (--1CPreComputeContext@@QEAA@XZ.c)
 *     ?FindSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@AEBAII@Z @ 0x18004D2F4 (-FindSlot@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@AEBAII@Z.c)
 *     ??1COcclusionContext@@QEAA@XZ @ 0x1800644D8 (--1COcclusionContext@@QEAA@XZ.c)
 *     ?ReleaseTreeDatas@CVisualTree@@AEAAXXZ @ 0x1800647F0 (-ReleaseTreeDatas@CVisualTree@@AEAAXXZ.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800D3824 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?ReleaseDirtyRegionAnnotationBuffers@CDirtyRegionAnnotationAllocationSet@@AEAAXXZ @ 0x1800E8790 (-ReleaseDirtyRegionAnnotationBuffers@CDirtyRegionAnnotationAllocationSet@@AEAAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180100BF8 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall CVisualTree::~CVisualTree(CVisualTree *this)
{
  __int64 v1; // r10
  CVisualTree **v3; // rdi
  CVisualTree *v4; // rcx
  __int64 v5; // r8
  void *v6; // rdi
  _DWORD *v7; // r10
  unsigned int Slot; // eax
  __int64 v9; // r10

  v1 = *((_QWORD *)this + 8);
  *(_QWORD *)this = &CVisualTree::`vftable';
  if ( v1 )
  {
    v7 = *(_DWORD **)(v1 + 232);
    if ( (*v7 & 0x4000000) != 0 )
    {
      *v7 &= ~0x4000000u;
      Slot = CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot((__int64)v7, 6);
      if ( Slot < *(_DWORD *)(v9 + 4) )
        *(_BYTE *)(Slot + v9 + 8) = 0;
    }
  }
  CVisualTree::ReleaseTreeDatas(this);
  FastRegion::CRegion::FreeMemory((CVisualTree *)((char *)this + 4608));
  v3 = (CVisualTree **)((char *)this + 4536);
  v4 = (CVisualTree *)*((_QWORD *)this + 567);
  v5 = (__int64)(*((_QWORD *)this + 568) - (_QWORD)v4) >> 3;
  if ( v5 )
  {
    detail::vector_facade<D2D_POINT_2F,detail::buffer_impl<D2D_POINT_2F,16,1,detail::liberal_expansion_policy>>::clear_region(
      (__int64 *)this + 567,
      0LL,
      v5);
    v4 = *v3;
  }
  *v3 = 0LL;
  if ( v4 == (CVisualTree *)((char *)this + 4560) )
    v4 = 0LL;
  DefaultHeap::Free(v4);
  CDirtyRegionAnnotationAllocationSet::ReleaseDirtyRegionAnnotationBuffers((CVisualTree *)((char *)this + 2928));
  COcclusionContext::~COcclusionContext((CVisualTree *)((char *)this + 120));
  v6 = (void *)*((_QWORD *)this + 12);
  if ( v6 )
  {
    CPreComputeContext::~CPreComputeContext(*((void ***)this + 12));
    operator delete(v6, 0x798uLL);
  }
  CResource::~CResource(this);
}
