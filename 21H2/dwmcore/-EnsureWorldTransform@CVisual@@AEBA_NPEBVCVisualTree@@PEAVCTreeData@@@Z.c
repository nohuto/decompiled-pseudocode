/*
 * XREFs of ?EnsureWorldTransform@CVisual@@AEBA_NPEBVCVisualTree@@PEAVCTreeData@@@Z @ 0x18008AF48
 * Callers:
 *     ?GetWorldTransform@CVisual@@QEBAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x18004AFB8 (-GetWorldTransform@CVisual@@QEBAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180091060 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?EnsureVisualTransform@CVisualTree@@QEBAJPEAVCVisual@@@Z @ 0x1801FAFC8 (-EnsureVisualTransform@CVisualTree@@QEBAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ?UpdateWorldTransform@CVisual@@AEBA_NPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z @ 0x18004D320 (-UpdateWorldTransform@CVisual@@AEBA_NPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x18008B098 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18008FC84 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x180092F80 (-GetCurrentFrameId@@YA_KXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

bool __fastcall CVisual::EnsureWorldTransform(CVisual *this, CVisual **a2, struct CTreeData *a3)
{
  struct CTreeData *v3; // rbx
  char v4; // r15
  _DWORD *v8; // r9
  struct CTreeData *TreeData; // rax
  CVisual *v10; // rbp
  unsigned __int64 CurrentFrameId; // rax
  unsigned __int64 v12; // rdx
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *i; // rcx
  __int64 v16; // rcx
  _BYTE *v17; // rdx
  unsigned int v18; // eax
  _QWORD **v19; // rcx
  _QWORD *v20; // rcx

  v3 = 0LL;
  v4 = 0;
  if ( this == a2[8] )
    goto LABEL_18;
  v8 = (_DWORD *)*((_QWORD *)this + 29);
  if ( (*v8 & 0x1000000) != 0 )
  {
    v16 = (unsigned int)v8[1];
    v17 = v8 + 2;
    v18 = 0;
    if ( (_DWORD)v16 )
    {
      while ( *v17 != 8 )
      {
        ++v18;
        ++v17;
        if ( v18 >= (unsigned int)v16 )
          goto LABEL_23;
      }
    }
    else
    {
LABEL_23:
      if ( v18 >= (unsigned int)v16 )
      {
        v19 = 0LL;
        goto LABEL_26;
      }
    }
    v17 = (_BYTE *)(v16 + 15);
    v19 = (_QWORD **)&v17[8LL * v18 - ((unsigned __int8)v17 & 7) + (_QWORD)v8];
LABEL_26:
    v20 = *v19;
    if ( v20 )
      v3 = (struct CTreeData *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)*v20 + 184LL))(*v20, v17);
  }
  TreeData = CVisual::FindTreeData(this, (const struct CVisualTree *)a2);
  if ( TreeData
    && *((_QWORD *)TreeData + 35) != *(_QWORD *)(*(_QWORD *)(*((_QWORD *)TreeData + 36) + 16LL) + 496LL)
    && v3 )
  {
    v3 = CVisual::FindTreeData(v3, (const struct CVisualTree *)a2);
    v4 = 1;
  }
  else
  {
    v10 = (CVisual *)*((_QWORD *)this + 11);
    v3 = 0LL;
    if ( (*((unsigned __int8 (__fastcall **)(CVisual **, struct CTreeData *))*a2 + 23))(a2, TreeData) )
    {
      v3 = (CVisual *)((char *)v10 + 336);
    }
    else
    {
      TreeDataListHead = CVisual::GetTreeDataListHead(v10);
      if ( TreeDataListHead )
      {
        for ( i = TreeDataListHead->Flink; i != TreeDataListHead; i = i->Flink )
        {
          if ( (CVisual **)i[2].Flink == a2 )
          {
            v3 = (struct CTreeData *)&i[-24];
            break;
          }
        }
      }
    }
  }
  if ( v3 )
  {
    CurrentFrameId = *((_QWORD *)v3 + 34);
    goto LABEL_10;
  }
LABEL_18:
  CurrentFrameId = GetCurrentFrameId();
LABEL_10:
  v12 = *((_QWORD *)a3 + 34);
  if ( v12 < CurrentFrameId )
  {
    CVisual::UpdateWorldTransform(this, (const struct CVisualTree *)a2, a3, v4, v3);
    v12 = *((_QWORD *)a3 + 34);
  }
  return v12 == *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 36) + 16LL) + 496LL);
}
