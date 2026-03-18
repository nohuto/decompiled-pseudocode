/*
 * XREFs of ?EnsureTreeData@CVisual@@QEAAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x18008F210
 * Callers:
 *     ??$WalkSubtree@VCInputSinkContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCInputSinkContext@@W4WalkReason@@@Z @ 0x180046190 (--$WalkSubtree@VCInputSinkContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCInputSinkContex.c)
 *     ?CreateOrUpdateBVI@CVisual@@QEAAJAEBVCVisualTreePath@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEA_N@Z @ 0x180086704 (-CreateOrUpdateBVI@CVisual@@QEAAJAEBVCVisualTreePath@@AEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@U.c)
 *     ?UpdateTransformChildBounds@CPreWalkVisual@CPreComputeContext@@QEAAXPEBVCVisualTree@@@Z @ 0x18008F470 (-UpdateTransformChildBounds@CPreWalkVisual@CPreComputeContext@@QEAAXPEBVCVisualTree@@@Z.c)
 *     ?InvalidateTransformParent@CVisual@@IEAAXPEBVCVisualTree@@@Z @ 0x1801F7950 (-InvalidateTransformParent@CVisual@@IEAAXPEBVCVisualTree@@@Z.c)
 *     ?EnsureVisualTransform@CVisualTree@@QEBAJPEAVCVisual@@@Z @ 0x1801FAFC8 (-EnsureVisualTransform@CVisualTree@@QEBAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ?GetUnusedTreeData@CVisual@@QEBAPEAVCTreeData@@XZ @ 0x18004962C (-GetUnusedTreeData@CVisual@@QEBAPEAVCTreeData@@XZ.c)
 *     ??0CTreeData@@IEAA@XZ @ 0x18004A6C4 (--0CTreeData@@IEAA@XZ.c)
 *     ?FindSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@AEBAII@Z @ 0x18004D2F4 (-FindSlot@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@AEBAII@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

struct CTreeData *__fastcall CVisual::EnsureTreeData(CVisual *this, const struct CVisualTree *a2)
{
  char *v4; // rdx
  __int64 v6; // r8
  __int64 v7; // rcx
  _BYTE *v8; // rdx
  unsigned int v9; // eax
  _QWORD ***v10; // rcx
  _QWORD **v11; // rcx
  _QWORD *i; // rax
  struct CTreeData *UnusedTreeData; // rbx
  _DWORD *v14; // r10
  __int64 v15; // rcx
  unsigned int Slot; // eax
  __int64 v17; // r10
  CTreeData *v18; // rax

  if ( !(*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)a2 + 184LL))(a2) )
  {
    v6 = *((_QWORD *)this + 29);
    if ( *(int *)v6 >= 0 )
      goto LABEL_17;
    v7 = *(unsigned int *)(v6 + 4);
    v8 = (_BYTE *)(v6 + 8);
    v9 = 0;
    if ( (_DWORD)v7 )
    {
      while ( *v8 != 1 )
      {
        ++v9;
        ++v8;
        if ( v9 >= (unsigned int)v7 )
          goto LABEL_15;
      }
    }
    else
    {
LABEL_15:
      if ( v9 >= (unsigned int)v7 )
      {
        v10 = 0LL;
LABEL_9:
        v11 = *v10;
        if ( v11 )
        {
          for ( i = *v11; i != v11; i = (_QWORD *)*i )
          {
            v4 = (char *)(i - 48);
            if ( (const struct CVisualTree *)i[4] == a2 )
              goto LABEL_3;
          }
        }
        goto LABEL_17;
      }
    }
    v10 = (_QWORD ***)(v7 + 15 + v6 + 8LL * v9 - (((_BYTE)v7 + 15) & 7));
    goto LABEL_9;
  }
  v4 = (char *)this + 336;
LABEL_3:
  if ( v4 )
    return (struct CTreeData *)v4;
LABEL_17:
  UnusedTreeData = CVisual::GetUnusedTreeData(this);
  if ( UnusedTreeData )
  {
    v14 = (_DWORD *)*((_QWORD *)this + 29);
    if ( (*v14 & 0x8000000) != 0 )
    {
      v15 = *((_QWORD *)this + 29);
      *v14 &= ~0x8000000u;
      Slot = CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot(v15, 5);
      if ( Slot < *(_DWORD *)(v17 + 4) )
        *(_BYTE *)(Slot + v17 + 8) = 0;
    }
  }
  else
  {
    v18 = (CTreeData *)operator new(0x1A8uLL);
    UnusedTreeData = v18;
    if ( v18 )
    {
      CTreeData::CTreeData(v18);
      *((_QWORD *)UnusedTreeData + 52) = 0LL;
      *(_QWORD *)UnusedTreeData = &CVisualTreeData::`vftable';
    }
    else
    {
      UnusedTreeData = 0LL;
    }
  }
  (*(void (__fastcall **)(struct CTreeData *, const struct CVisualTree *, CVisual *))(*(_QWORD *)UnusedTreeData + 8LL))(
    UnusedTreeData,
    a2,
    this);
  return UnusedTreeData;
}
