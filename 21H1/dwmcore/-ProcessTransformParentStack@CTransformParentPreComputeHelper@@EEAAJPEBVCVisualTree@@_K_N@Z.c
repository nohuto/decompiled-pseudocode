/*
 * XREFs of ?ProcessTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEBVCVisualTree@@_K_N@Z @ 0x180004080
 * Callers:
 *     <none>
 * Callees:
 *     ?DirtyProjectedShadowCasters@CVisual@@QEAAXXZ @ 0x1800045C8 (-DirtyProjectedShadowCasters@CVisual@@QEAAXXZ.c)
 *     ?EnsureTreeData@CVisual@@QEAAJPEBVCVisualTree@@PEAPEAVCTreeData@@@Z @ 0x18000463C (-EnsureTreeData@CVisual@@QEAAJPEBVCVisualTree@@PEAPEAVCTreeData@@@Z.c)
 *     ?GetTransformParentNoRef@CVisual@@QEBAPEAV1@XZ @ 0x18000573C (-GetTransformParentNoRef@CVisual@@QEBAPEAV1@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180037B1C (--2@YAPEAX_K@Z.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x180045CF8 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x18007CF48 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?UpdateWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z @ 0x18007D638 (-UpdateWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z.c)
 *     ?GetUnusedTreeData@CVisual@@QEBAPEAVCTreeData@@XZ @ 0x18007D7F8 (-GetUnusedTreeData@CVisual@@QEBAPEAVCTreeData@@XZ.c)
 *     ??0CTreeData@@IEAA@XZ @ 0x18007E954 (--0CTreeData@@IEAA@XZ.c)
 *     ?OnClipChanged@CVisual@@AEAAXXZ @ 0x18007F37C (-OnClipChanged@CVisual@@AEAAXXZ.c)
 *     ?FindSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@AEBAII@Z @ 0x1800BCC1C (-FindSlot@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@AEBAII@Z.c)
 *     ?OnLayoutChanged@CVisual@@AEAAXXZ @ 0x1800C2E78 (-OnLayoutChanged@CVisual@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ?ClearResolvingFlagsFromStack@CPreComputeHelper@@IEAAXPEBVCVisualTree@@@Z @ 0x18019E8A8 (-ClearResolvingFlagsFromStack@CPreComputeHelper@@IEAAXPEBVCVisualTree@@@Z.c)
 */

__int64 __fastcall CTransformParentPreComputeHelper::ProcessTransformParentStack(
        CTransformParentPreComputeHelper *this,
        const struct CVisualTree *a2,
        __int64 a3,
        char a4)
{
  __int64 v5; // rbx
  int v7; // ecx
  char v8; // bp
  __int64 v9; // r14
  __int64 v10; // rax
  unsigned __int64 v11; // r15
  __int64 v12; // rax
  struct CTreeData *UnusedTreeData; // rdi
  _DWORD *v14; // r8
  int v15; // r13d
  __int64 v16; // rax
  float v17; // xmm6_4
  float v18; // xmm3_4
  float v19; // xmm7_4
  float v20; // xmm4_4
  float v21; // xmm8_4
  float v22; // xmm9_4
  __int64 v23; // rax
  float v24; // xmm2_4
  float v25; // xmm5_4
  __int64 v26; // rax
  float v27; // xmm1_4
  float v28; // xmm0_4
  bool v29; // r14
  char v30; // bp
  unsigned __int64 v31; // rax
  int v32; // eax
  unsigned int v33; // eax
  int v34; // edx
  int *v35; // rcx
  __int64 v36; // rax
  _BYTE *v37; // rdx
  __int64 i; // rcx
  _QWORD **v39; // rcx
  _QWORD *v40; // rcx
  int updated; // eax
  unsigned int v43; // ecx
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *Flink; // rcx
  __int64 v46; // rax
  CTreeData *v47; // rax
  unsigned int v48; // ecx
  const unsigned int *v49; // rax
  _QWORD *v50; // rcx
  CVisual *TransformParentNoRef; // rax
  int v52; // eax
  unsigned int v53; // ecx
  _DWORD *v54; // r10
  __int64 v55; // rcx
  unsigned int Slot; // eax
  __int64 v57; // r10
  int v58; // edx
  int *v59; // rcx
  unsigned int v60; // ecx
  const struct CTreeData *v61; // [rsp+30h] [rbp-B8h]
  float v62[6]; // [rsp+38h] [rbp-B0h]
  struct CTreeData *v63; // [rsp+F0h] [rbp+8h] BYREF
  __int64 v64; // [rsp+F8h] [rbp+10h]
  __int64 v65; // [rsp+100h] [rbp+18h]
  char v66; // [rsp+108h] [rbp+20h]

  v66 = a4;
  v65 = a3;
  v5 = 0LL;
  v7 = *((_DWORD *)this + 2);
  v8 = a4;
  v63 = 0LL;
  v9 = a3;
  v10 = 0LL;
  v61 = 0LL;
  v11 = 1LL;
  if ( v7 )
  {
    *((_DWORD *)this + 2) = v7 - 1;
    v5 = *(_QWORD *)(*((_QWORD *)this + 3) + 8LL * (unsigned int)(v7 - 1));
    v10 = v5;
  }
  if ( v10 == *((_QWORD *)a2 + 7) )
  {
    while ( 1 )
    {
LABEL_4:
      v12 = *(_QWORD *)a2;
      LOBYTE(v63) = 0;
      UnusedTreeData = 0LL;
      if ( (*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(v12 + 200))(a2) )
      {
        UnusedTreeData = (struct CTreeData *)(v5 + 320);
      }
      else
      {
        TreeDataListHead = CVisual::GetTreeDataListHead((CVisual *)v5);
        if ( TreeDataListHead )
        {
          Flink = TreeDataListHead->Flink;
          if ( TreeDataListHead->Flink != TreeDataListHead )
          {
            while ( (const struct CVisualTree *)Flink[2].Flink != a2 )
            {
              Flink = Flink->Flink;
              if ( Flink == TreeDataListHead )
                goto LABEL_6;
            }
            UnusedTreeData = (struct CTreeData *)&Flink[-18];
          }
        }
      }
LABEL_6:
      if ( !UnusedTreeData )
      {
        UnusedTreeData = CVisual::GetUnusedTreeData((CVisual *)v5);
        if ( UnusedTreeData )
        {
          v54 = *(_DWORD **)(v5 + 224);
          if ( (*v54 & 0x8000000) != 0 )
          {
            v55 = *(_QWORD *)(v5 + 224);
            *v54 &= ~0x8000000u;
            Slot = CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot(v55, 5LL);
            if ( Slot < *(_DWORD *)(v57 + 4) )
              *(_BYTE *)(Slot + v57 + 8) = 0;
          }
          v49 = *(const unsigned int **)UnusedTreeData;
        }
        else
        {
          v47 = (CTreeData *)operator new(0x148uLL);
          UnusedTreeData = v47;
          if ( !v47 )
          {
            v15 = -2147024882;
            MilInstrumentationCheckHR_MaybeFailFast(v48, 0LL, 0, -2147024882, 0x133Eu, 0LL);
            MilInstrumentationCheckHR_MaybeFailFast(v60, 0LL, 0, -2147024882, 0xE6u, 0LL);
            goto LABEL_42;
          }
          CTreeData::CTreeData(v47);
          v49 = &CVisualTreeData::`vftable';
          *v50 = &CVisualTreeData::`vftable';
          v50[40] = 0LL;
        }
        (*((void (__fastcall **)(struct CTreeData *, const struct CVisualTree *, __int64))v49 + 1))(
          UnusedTreeData,
          a2,
          v5);
      }
      v14 = *(_DWORD **)(v5 + 224);
      v15 = 0;
      if ( (*v14 & 0x1000000) != 0 )
      {
        v36 = (unsigned int)v14[1];
        v37 = v14 + 2;
        for ( i = 0LL; (unsigned int)i < (unsigned int)v36; ++v37 )
        {
          if ( *v37 == 8 )
            break;
          i = (unsigned int)(i + 1);
        }
        if ( (unsigned int)i >= (unsigned int)v36 )
          v39 = 0LL;
        else
          v39 = (_QWORD **)((char *)v14 + 8 * i - (((_BYTE)v36 + 15) & 7) + v36 + 15);
        v40 = *v39;
        if ( v40 )
        {
          if ( (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v40 + 200LL))(*v40) )
          {
            *((_BYTE *)UnusedTreeData + 19) = 0;
            if ( !*((_BYTE *)UnusedTreeData + 18) || (LOBYTE(v63) = 0, *((_QWORD *)UnusedTreeData + 35) != v9) )
              LOBYTE(v63) = 1;
          }
        }
      }
      v16 = *(_QWORD *)(v5 + 80);
      if ( !v16 || (*(_BYTE *)(v16 + 88) & 1) != 0 )
      {
        v17 = *(float *)(v5 + 116);
        v18 = 0.0;
        v19 = *(float *)(v5 + 120);
        v20 = 0.0;
        v21 = *(float *)(v5 + 132);
        v22 = *(float *)(v5 + 136);
        if ( v16 )
        {
          v18 = *(float *)(v16 + 132);
          v20 = *(float *)(v16 + 136);
        }
        v23 = *(_QWORD *)(v5 + 216);
        if ( (*(_DWORD *)(v23 + 4) & 0x10000000) != 0 )
        {
          v58 = *(_DWORD *)(v23 + 12);
          v59 = (int *)(v23 + 12);
          if ( (v58 & 0x7F000000) != 0x4000000 )
          {
            do
            {
              v59 = (int *)((char *)v59 + (v58 & 0xFFFFFF) + 4);
              v58 = *v59;
            }
            while ( (*v59 & 0x7F000000) != 0x4000000 );
          }
          *(_QWORD *)v62 = *(_QWORD *)(v59 + 1);
        }
        else
        {
          *(_QWORD *)v62 = 0LL;
        }
        v24 = (float)(v62[0] * v18) + *(float *)(v5 + 104);
        v25 = (float)(v62[1] * v20) + *(float *)(v5 + 108);
        *(float *)(v5 + 116) = v24;
        *(float *)(v5 + 120) = v25;
        v26 = *(_QWORD *)(v5 + 216);
        if ( (*(_DWORD *)(v26 + 4) & 0x20000000) != 0 )
        {
          v34 = *(_DWORD *)(v26 + 12);
          v35 = (int *)(v26 + 12);
          if ( (v34 & 0x7F000000) != 0x3000000 )
          {
            do
            {
              v35 = (int *)((char *)v35 + (v34 & 0xFFFFFF) + 4);
              v34 = *v35;
            }
            while ( (*v35 & 0x7F000000) != 0x3000000 );
          }
          v64 = *(_QWORD *)(v35 + 1);
        }
        else
        {
          v64 = 0LL;
        }
        v27 = (float)(*(float *)&v64 * v18) + *(float *)(v5 + 124);
        v28 = (float)(*((float *)&v64 + 1) * v20) + *(float *)(v5 + 128);
        *(float *)(v5 + 132) = v27;
        *(float *)(v5 + 136) = v28;
        if ( v27 < 0.0 )
        {
          *(_DWORD *)(v5 + 132) = 0;
          v27 = 0.0;
        }
        if ( v28 < 0.0 )
        {
          *(_DWORD *)(v5 + 136) = 0;
          v28 = 0.0;
        }
        v29 = v17 != v24 || v19 != v25;
        if ( v21 == v27 && v22 == v28 )
        {
          v30 = 0;
        }
        else
        {
          v46 = *(_QWORD *)(v5 + 240);
          v30 = 1;
          if ( v46 && *(_BYTE *)(v46 + 128) )
            CVisual::OnClipChanged((CVisual *)v5);
          CVisual::OnLayoutChanged((CVisual *)v5);
        }
        if ( v29 || v30 )
          *(_BYTE *)(v5 + 88) |= 1u;
        v9 = v65;
        v8 = v66;
      }
      v31 = *((_QWORD *)UnusedTreeData + 15);
      if ( v31 < v11 )
      {
        updated = CVisual::UpdateWorldTransform((CVisual *)v5, a2, UnusedTreeData, (bool)v63, v61);
        v15 = updated;
        if ( updated < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v43, 0LL, 0, updated, 0xF9u, 0LL);
          goto LABEL_42;
        }
        if ( !v8 )
        {
          CVisual::PropagateFlags(v5, 5LL);
          CVisual::DirtyProjectedShadowCasters((CVisual *)v5);
        }
        *((_QWORD *)UnusedTreeData + 30) = 0LL;
        v31 = *((_QWORD *)UnusedTreeData + 15);
      }
      v11 = v31;
      v61 = UnusedTreeData;
      v32 = *((_DWORD *)this + 2);
      if ( !v32 )
        goto LABEL_42;
      v33 = v32 - 1;
      *((_DWORD *)this + 2) = v33;
      v5 = *(_QWORD *)(*((_QWORD *)this + 3) + 8LL * v33);
    }
  }
  TransformParentNoRef = CVisual::GetTransformParentNoRef((CVisual *)v5);
  if ( !TransformParentNoRef )
    TransformParentNoRef = *(CVisual **)(v5 + 80);
  v52 = CVisual::EnsureTreeData(TransformParentNoRef, a2, &v63);
  v15 = v52;
  if ( v52 >= 0 )
  {
    v61 = v63;
    v11 = *((_QWORD *)v63 + 15);
    goto LABEL_4;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v53, 0LL, 0, v52, 0xD7u, 0LL);
LABEL_42:
  if ( v15 < 0 )
    CPreComputeHelper::ClearResolvingFlagsFromStack(this, a2);
  return (unsigned int)v15;
}
