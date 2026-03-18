/*
 * XREFs of ?EnsureTreeData@CVisual@@QEAAJPEBVCVisualTree@@PEAPEAVCTreeData@@@Z @ 0x18000463C
 * Callers:
 *     ?BuildTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEAVCComposition@@PEBVCVisualTree@@PEAVCVisual@@_K@Z @ 0x180003930 (-BuildTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEAVCComposition@@PEBVCVisualT.c)
 *     ?ProcessTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEBVCVisualTree@@_K_N@Z @ 0x180004080 (-ProcessTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEBVCVisualTree@@_K_N@Z.c)
 *     ??$WalkSubtree@VCInputSinkContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@PEAVCInputSinkContext@@W4WalkReason@@@Z @ 0x1800BACC8 (--$WalkSubtree@VCInputSinkContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@PEAVCInputSinkContext.c)
 *     ?ProcessTransformParentStack@CLightPreComputeHelper@@EEAAJPEBVCVisualTree@@_K_N@Z @ 0x18019E970 (-ProcessTransformParentStack@CLightPreComputeHelper@@EEAAJPEBVCVisualTree@@_K_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180037B1C (--2@YAPEAX_K@Z.c)
 *     ?GetUnusedTreeData@CVisual@@QEBAPEAVCTreeData@@XZ @ 0x18007D7F8 (-GetUnusedTreeData@CVisual@@QEBAPEAVCTreeData@@XZ.c)
 *     ??0CTreeData@@IEAA@XZ @ 0x18007E954 (--0CTreeData@@IEAA@XZ.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x1800A7124 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?FindSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@AEBAII@Z @ 0x1800BCC1C (-FindSlot@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@AEBAII@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::EnsureTreeData(CVisual *this, const struct CVisualTree *a2, struct CTreeData **a3)
{
  unsigned int v3; // edi
  struct CTreeData *TreeData; // rbx
  CTreeData *v9; // rax
  const unsigned int *v10; // rcx
  _DWORD *v11; // r10
  __int64 v12; // rcx
  unsigned int Slot; // eax
  __int64 v14; // r10

  v3 = 0;
  *a3 = 0LL;
  TreeData = CVisual::FindTreeData(this, a2);
  if ( !TreeData )
  {
    TreeData = CVisual::GetUnusedTreeData(this);
    if ( TreeData )
    {
      v11 = (_DWORD *)*((_QWORD *)this + 28);
      if ( (*v11 & 0x8000000) != 0 )
      {
        v12 = *((_QWORD *)this + 28);
        *v11 &= ~0x8000000u;
        Slot = CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot(v12, 5LL);
        if ( Slot < *(_DWORD *)(v14 + 4) )
          *(_BYTE *)(Slot + v14 + 8) = 0;
      }
    }
    else
    {
      v9 = (CTreeData *)operator new(0x148uLL);
      TreeData = v9;
      if ( v9 )
      {
        CTreeData::CTreeData(v9);
        *((_QWORD *)TreeData + 40) = 0LL;
        v10 = &CVisualTreeData::`vftable';
        *(_QWORD *)TreeData = &CVisualTreeData::`vftable';
      }
      else
      {
        TreeData = 0LL;
      }
      if ( !TreeData )
      {
        v3 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v10, 0LL, 0, -2147024882, 0x133Eu, 0LL);
        return v3;
      }
    }
    (*(void (__fastcall **)(struct CTreeData *, const struct CVisualTree *, CVisual *))(*(_QWORD *)TreeData + 8LL))(
      TreeData,
      a2,
      this);
  }
  *a3 = TreeData;
  return v3;
}
