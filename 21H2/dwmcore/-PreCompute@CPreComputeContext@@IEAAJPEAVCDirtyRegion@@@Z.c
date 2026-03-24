/*
 * XREFs of ?PreCompute@CPreComputeContext@@IEAAJPEAVCDirtyRegion@@@Z @ 0x18008E370
 * Callers:
 *     ?PreCompute@CVisualTree@@IEAAJXZ @ 0x18008F4E8 (-PreCompute@CVisualTree@@IEAAJXZ.c)
 * Callees:
 *     ?UpdateVisualProperty@CProjectedShadowCaster@@QEAAXPEBVCVisualTree@@_N@Z @ 0x18001067C (-UpdateVisualProperty@CProjectedShadowCaster@@QEAAXPEBVCVisualTree@@_N@Z.c)
 *     ?GetProjectedShadowCasters@CVisual@@QEBAPEAV?$vector@PEAVCProjectedShadowCaster@@V?$allocator@PEAVCProjectedShadowCaster@@@std@@@std@@XZ @ 0x180011D60 (-GetProjectedShadowCasters@CVisual@@QEBAPEAV-$vector@PEAVCProjectedShadowCaster@@V-$allocator@PE.c)
 *     ?DirtyIfChanged@CPreComputeHelper@@QEAAJPEAVCComposition@@PEBVCVisualTree@@PEAVCVisual@@_N@Z @ 0x18001ADDC (-DirtyIfChanged@CPreComputeHelper@@QEAAJPEAVCComposition@@PEBVCVisualTree@@PEAVCVisual@@_N@Z.c)
 *     ?HrMalloc@@YAJ_K0PEAPEAX@Z @ 0x180042320 (-HrMalloc@@YAJ_K0PEAPEAX@Z.c)
 *     ?Optimize@?$CWatermarkStack@UCFrame@?$CGraphWalker@VCVisual@@@@$0EA@$01$09@@QEAAXXZ @ 0x180057CF4 (-Optimize@-$CWatermarkStack@UCFrame@-$CGraphWalker@VCVisual@@@@$0EA@$01$09@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18007A590 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ??$WalkSubtree@VCPreComputeContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@PEAVCPreComputeContext@@W4WalkReason@@@Z @ 0x180088360 (--$WalkSubtree@VCPreComputeContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@PEAVCPreComputeConte.c)
 *     ?Push@?$CWatermarkStack@PEAX$01$01$09@@QEAAJAEBQEAX@Z @ 0x18008CB3C (-Push@-$CWatermarkStack@PEAX$01$01$09@@QEAAJAEBQEAX@Z.c)
 *     ?Optimize@?$CWatermarkStack@W4Enum@MilBitmapBorderMode@@$0EA@$01$09@@QEAAXXZ @ 0x18008ECAC (-Optimize@-$CWatermarkStack@W4Enum@MilBitmapBorderMode@@$0EA@$01$09@@QEAAXXZ.c)
 *     ?Optimize@?$CWatermarkStack@_N$0EA@$01$09@@QEAAXXZ @ 0x18008EF60 (-Optimize@-$CWatermarkStack@_N$0EA@$01$09@@QEAAXXZ.c)
 *     ?Optimize@?$CWatermarkStack@UD2D_VECTOR_2F@@$01$01$09@@QEAAXXZ @ 0x18008F0C4 (-Optimize@-$CWatermarkStack@UD2D_VECTOR_2F@@$01$01$09@@QEAAXXZ.c)
 *     ?Optimize@?$CWatermarkStack@M$01$01$09@@QEAAXXZ @ 0x18008F12C (-Optimize@-$CWatermarkStack@M$01$01$09@@QEAAXXZ.c)
 *     ?EnsureRootLayoutSize@CPreComputeContext@@AEAAJXZ @ 0x18008F194 (-EnsureRootLayoutSize@CPreComputeContext@@AEAAJXZ.c)
 *     ?Push@?$CWatermarkStack@UD2D_VECTOR_2F@@$01$01$09@@QEAAJAEBUD2D_VECTOR_2F@@@Z @ 0x18008F250 (-Push@-$CWatermarkStack@UD2D_VECTOR_2F@@$01$01$09@@QEAAJAEBUD2D_VECTOR_2F@@@Z.c)
 *     ?Push@?$CWatermarkStack@M$01$01$09@@QEAAJAEBM@Z @ 0x18008F330 (-Push@-$CWatermarkStack@M$01$01$09@@QEAAJAEBM@Z.c)
 *     ?Push@?$CWatermarkStack@W4Enum@MilBitmapInterpolationMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBitmapInterpolationMode@@@Z @ 0x18008F40C (-Push@-$CWatermarkStack@W4Enum@MilBitmapInterpolationMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBitmap.c)
 *     ??3@YAXPEAX@Z @ 0x18009478C (--3@YAXPEAX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800C0048 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?_IsInTree@CVisualTree@@IEBA_NPEBVCVisual@@_N@Z @ 0x1800C7778 (-_IsInTree@CVisualTree@@IEBA_NPEBVCVisual@@_N@Z.c)
 *     ?SetFullDirty@CDirtyRegion@@QEAAXXZ @ 0x1800D5F10 (-SetFullDirty@CDirtyRegion@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPreComputeContext::PreCompute(CPreComputeContext *this, struct CDirtyRegion *a2)
{
  CDirtyRegion *v3; // rbx
  __int64 v4; // r8
  __int64 v5; // r15
  int v6; // eax
  __int64 v7; // rcx
  int v8; // r14d
  int v9; // eax
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  unsigned int i; // edi
  __int64 v14; // rcx
  int v15; // eax
  _BYTE *v16; // rcx
  int v17; // r9d
  struct CComposition *v18; // rdx
  unsigned int v19; // r13d
  struct _LIST_ENTRY *v20; // rsi
  CVisual *v21; // r15
  CVisual *v22; // rax
  CVisual *v23; // rcx
  unsigned int v24; // ebx
  unsigned int v25; // edi
  const struct CVisual **v26; // rbx
  const struct CVisual **j; // rdi
  __int64 v28; // rax
  int v29; // eax
  __int64 v30; // rcx
  int v31; // eax
  _DWORD *v32; // rcx
  int v33; // eax
  _DWORD *v34; // rcx
  int v35; // eax
  _DWORD *v36; // rcx
  int v37; // eax
  int v38; // eax
  int v39; // eax
  __int64 v40; // rcx
  int v41; // eax
  int v42; // eax
  int v43; // eax
  int v44; // eax
  __int64 v45; // rdi
  int v46; // eax
  int v47; // eax
  __int64 v48; // rcx
  int v49; // eax
  int v50; // eax
  __int64 v51; // rcx
  int v52; // eax
  int v53; // eax
  int v54; // eax
  int v55; // eax
  int v56; // eax
  int v57; // eax
  int v58; // eax
  int v59; // eax
  int v60; // eax
  int v61; // eax
  __int64 v62; // rax
  __int64 v63; // rcx
  __int64 v65; // rcx
  struct _LIST_ENTRY *v66; // rbx
  struct _LIST_ENTRY *v67; // rax
  int v68; // eax
  __int64 v69; // rcx
  int v70; // eax
  __int64 v71; // rcx
  unsigned int v72; // eax
  __int64 v73; // rbx
  unsigned int v74; // eax
  __int64 v75; // rbx
  unsigned int v76; // eax
  __int64 v77; // rbx
  unsigned int v78; // eax
  __int64 v79; // rbx
  unsigned int v80; // eax
  __int64 v81; // rbx
  unsigned int v82; // eax
  __int64 v83; // rbx
  unsigned int v84; // eax
  __int64 v85; // rbx
  unsigned int v86; // eax
  __int64 v87; // rbx
  unsigned int v88; // eax
  const struct CVisual *v89; // rsi
  struct CComposition *v90; // rdx
  const struct CVisualTree *v91; // r10
  int v92; // eax
  __int64 v93; // rcx
  __int64 ProjectedShadowCasters; // rax
  CProjectedShadowCaster **v95; // r14
  unsigned __int64 v96; // rsi
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *v98; // r10
  struct _LIST_ENTRY *Flink; // rcx
  __int64 v100; // rcx
  __int64 v101; // rsi
  const struct CVisual *v102; // rax
  struct CComposition *v103; // rdx
  struct CVisual *v104; // r10
  const struct CVisualTree *v105; // r11
  int v106; // eax
  int v107; // eax
  __int64 v108; // rcx
  int v109; // eax
  __int64 v110; // rcx
  int v111; // eax
  __int64 v112; // rcx
  int v113; // eax
  __int64 v114; // rcx
  int v115; // eax
  __int64 v116; // rcx
  int v117; // eax
  __int64 v118; // rcx
  int v119; // eax
  __int64 v120; // rcx
  int v121; // eax
  __int64 v122; // rcx
  int v123; // eax
  __int64 v124; // rcx
  void *v125; // [rsp+80h] [rbp+28h] BYREF
  CDirtyRegion *v126; // [rsp+88h] [rbp+30h]
  struct CComposition *v127; // [rsp+90h] [rbp+38h]
  __int64 v128; // [rsp+98h] [rbp+40h]

  v126 = a2;
  v3 = a2;
  v4 = *((_QWORD *)g_pComposition + 59);
  if ( v4 && *(_BYTE *)(v4 + 24) )
    *(_BYTE *)(v4 + 26) = 1;
  *((_QWORD *)this + 86) = a2;
  v5 = 0LL;
  *((_DWORD *)this + 2) = 0;
  LODWORD(v125) = 1;
  v6 = CWatermarkStack<enum MilBitmapInterpolationMode::Enum,64,2,10>::Push((char *)this + 8, &v125);
  v8 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x33u, 0LL);
    goto LABEL_61;
  }
  *((_DWORD *)this + 10) = 0;
  LODWORD(v125) = 1;
  v9 = CWatermarkStack<enum MilBitmapInterpolationMode::Enum,64,2,10>::Push((char *)this + 40, &v125);
  v8 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x36u, 0LL);
    goto LABEL_61;
  }
  *((_DWORD *)this + 18) = 0;
  LODWORD(v125) = 0;
  v11 = CWatermarkStack<enum MilBitmapInterpolationMode::Enum,64,2,10>::Push((char *)this + 72, &v125);
  v8 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x39u, 0LL);
    goto LABEL_61;
  }
  LODWORD(v125) = (_DWORD)FLOAT_1_0;
  *((_DWORD *)this + 26) = 0;
  *((_DWORD *)this + 34) = 0;
  CWatermarkStack<float,2,2,10>::Push((char *)this + 136, &v125);
  *((_DWORD *)this + 42) = 0;
  v125 = (void *)_mm_unpacklo_ps((__m128)0LL, (__m128)LODWORD(FLOAT_N1_0)).m128_u64[0];
  CWatermarkStack<D2D_VECTOR_2F,2,2,10>::Push((char *)this + 168, &v125);
  *((_DWORD *)this + 50) = 0;
  v125 = 0LL;
  CWatermarkStack<void *,2,2,10>::Push((unsigned int *)this + 50, &v125);
  *((_DWORD *)this + 58) = 0;
  *((_DWORD *)this + 66) = 0;
  for ( i = 0; i < *((_DWORD *)this + 80); ++i )
  {
    v100 = *(_QWORD *)(*((_QWORD *)this + 37) + 16LL * i);
    if ( v100 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v100 + 16LL))(v100);
  }
  *((_DWORD *)this + 80) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 296, 16LL);
  v14 = *((_QWORD *)this + 50);
  if ( v14 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
    *((_QWORD *)this + 50) = 0LL;
  }
  *((_DWORD *)this + 126) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 480, 8LL);
  *((_BYTE *)this + 1161) = 0;
  v15 = CPreComputeContext::EnsureRootLayoutSize(this);
  v8 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v16, 0LL, 0, v15, 0x4Eu, 0LL);
    goto LABEL_197;
  }
  v18 = g_pComposition;
  v8 = 0;
  v19 = 0;
  v127 = g_pComposition;
  LODWORD(v125) = *((_DWORD *)g_pComposition + 222);
  if ( !(_DWORD)v125 )
    goto LABEL_24;
  v16 = 0LL;
  v128 = 0LL;
  while ( 1 )
  {
    v20 = *(struct _LIST_ENTRY **)this;
    v21 = *(CVisual **)&v16[*((_QWORD *)v18 + 108)];
    v22 = v21;
    v23 = v21;
    if ( v21 )
      break;
LABEL_22:
    ++v19;
    v16 = (_BYTE *)(v128 + 8);
    v128 += 8LL;
    if ( v19 >= (unsigned int)v125 )
    {
      v5 = 0LL;
      goto LABEL_24;
    }
  }
  while ( 1 )
  {
    if ( (*((_BYTE *)v22 + 95) & 2) == 0 || (*((_BYTE *)v22 + 94) & 4) != 0 )
      goto LABEL_22;
    if ( v22 == (CVisual *)v20[3].Blink )
      break;
    if ( !v23
      || (v23 = (CVisual *)*((_QWORD *)v23 + 10)) == 0LL
      || v22 != v23 && (v23 = (CVisual *)*((_QWORD *)v23 + 10), v22 != v23) )
    {
      v22 = (CVisual *)*((_QWORD *)v22 + 10);
      if ( v22 )
        continue;
    }
    goto LABEL_22;
  }
  v8 = 0;
  v65 = *(_QWORD *)this;
  *((_DWORD *)this + 272) = 0;
  v66 = (struct _LIST_ENTRY *)*((_QWORD *)v18 + 44);
  if ( ((unsigned __int8 (__fastcall *)(__int64))v20->Flink[12].Blink)(v65) )
  {
    v67 = (struct _LIST_ENTRY *)((char *)v21 + 320);
    goto LABEL_74;
  }
  TreeDataListHead = CVisual::GetTreeDataListHead(v21);
  v98 = TreeDataListHead;
  if ( TreeDataListHead )
  {
    Flink = TreeDataListHead->Flink;
    if ( TreeDataListHead->Flink != TreeDataListHead )
    {
      while ( 1 )
      {
        v67 = Flink - 18;
        if ( Flink[2].Flink == v20 )
          break;
        Flink = Flink->Flink;
        if ( Flink == v98 )
          goto LABEL_76;
      }
LABEL_74:
      if ( v67 && v67[7].Blink >= v66 )
      {
LABEL_80:
        v18 = g_pComposition;
        v127 = g_pComposition;
        goto LABEL_22;
      }
    }
  }
LABEL_76:
  v68 = (**((__int64 (__fastcall ***)(char *, struct CComposition *, struct _LIST_ENTRY *, CVisual *, struct _LIST_ENTRY *))this
          + 135))(
          (char *)this + 1080,
          v127,
          v20,
          v21,
          v66);
  v8 = v68;
  if ( v68 < 0 )
  {
    v5 = 0LL;
    MilInstrumentationCheckHR_MaybeFailFast(v69, 0LL, 0, v68, 0x1Cu, 0LL);
  }
  else
  {
    v70 = (*(__int64 (__fastcall **)(char *, struct _LIST_ENTRY *, struct _LIST_ENTRY *, _QWORD))(*((_QWORD *)this + 135)
                                                                                                + 8LL))(
            (char *)this + 1080,
            v20,
            v66,
            0LL);
    v5 = 0LL;
    v8 = v70;
    if ( v70 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v71, 0LL, 0, v70, 0x1Eu, 0LL);
  }
  if ( v8 >= 0 )
    goto LABEL_80;
  MilInstrumentationCheckHR_MaybeFailFast(v71, 0LL, 0, v8, 0x4F5u, 0LL);
  v18 = g_pComposition;
LABEL_24:
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v16, 0LL, 0, v8, 0x51u, 0LL);
    goto LABEL_195;
  }
  v24 = *((_DWORD *)v18 + 230);
  v8 = 0;
  v25 = 0;
  if ( !v24 )
    goto LABEL_26;
  v101 = 0LL;
  while ( 1 )
  {
    v16 = *(_BYTE **)(v101 + *((_QWORD *)v18 + 112));
    if ( v16[162] )
      break;
LABEL_153:
    ++v25;
    v101 += 8LL;
    if ( v25 >= v24 )
      goto LABEL_26;
  }
  v102 = (const struct CVisual *)(*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)v16 + 216LL))(v16);
  if ( !CVisualTree::_IsInTree(*(CVisualTree **)this, v102, 1)
    || (v106 = CPreComputeHelper::DirtyIfChanged((CPreComputeContext *)((char *)this + 1120), v103, v105, v104, 0),
        v8 = v106,
        v106 >= 0) )
  {
    v18 = g_pComposition;
    goto LABEL_153;
  }
  MilInstrumentationCheckHR_MaybeFailFast((__int64)v16, 0LL, 0, v106, 0x511u, 0LL);
  v18 = g_pComposition;
LABEL_26:
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v16, 0LL, 0, v8, 0x54u, 0LL);
LABEL_195:
    v3 = v126;
    goto LABEL_61;
  }
  if ( *((_BYTE *)this + 1162) )
  {
    v26 = (const struct CVisual **)*((_QWORD *)v18 + 116);
    for ( j = (const struct CVisual **)*((_QWORD *)v18 + 117); v26 != j; ++v26 )
    {
      v89 = *v26;
      if ( CVisualTree::_IsInTree(*(CVisualTree **)this, *v26, 1) )
      {
        v92 = CPreComputeHelper::DirtyIfChanged((CPreComputeContext *)((char *)this + 1080), v90, v91, v89, 0);
        if ( v92 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v93, 0LL, 0, v92, 0x52Du, 0LL);
          break;
        }
        if ( (**((_DWORD **)v89 + 28) & 0x40000) != 0 )
        {
          ProjectedShadowCasters = CVisual::GetProjectedShadowCasters((__int64)v89);
          v95 = *(CProjectedShadowCaster ***)ProjectedShadowCasters;
          v96 = (unsigned __int64)(*(_QWORD *)(ProjectedShadowCasters + 8) - *(_QWORD *)ProjectedShadowCasters + 7LL) >> 3;
          if ( *(_QWORD *)ProjectedShadowCasters > *(_QWORD *)(ProjectedShadowCasters + 8) )
            v96 = 0LL;
          if ( v96 )
          {
            do
            {
              CProjectedShadowCaster::UpdateVisualProperty(*v95, *(const struct CVisualTree **)this, 0);
              ++v5;
              ++v95;
            }
            while ( v5 != v96 );
          }
          v5 = 0LL;
        }
      }
    }
  }
  v28 = *(_QWORD *)this;
  *((_QWORD *)this + 76) = *(_QWORD *)this;
  v29 = CVisualTreeIterator::WalkSubtree<CPreComputeContext>((__int64)this + 544, *(void **)(v28 + 56), this, v17);
  v8 = v29;
  if ( v29 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v30, 0LL, 0, v29, 0x60u, 0LL);
LABEL_197:
    v3 = v126;
    goto LABEL_61;
  }
  v31 = *((_DWORD *)this + 2);
  v32 = (_DWORD *)((char *)this + 8);
  if ( v31 )
    *v32 = v31 - 1;
  CWatermarkStack<enum MilBitmapBorderMode::Enum,64,2,10>::Optimize(v32);
  v33 = *((_DWORD *)this + 10);
  v34 = (_DWORD *)((char *)this + 40);
  if ( v33 )
    *v34 = v33 - 1;
  CWatermarkStack<enum MilBitmapBorderMode::Enum,64,2,10>::Optimize(v34);
  v35 = *((_DWORD *)this + 18);
  v36 = (_DWORD *)((char *)this + 72);
  if ( v35 )
    *v36 = v35 - 1;
  CWatermarkStack<enum MilBitmapBorderMode::Enum,64,2,10>::Optimize(v36);
  CWatermarkStack<CGraphWalker<CVisual>::CFrame,64,2,10>::Optimize((__int64)this + 104);
  v37 = *((_DWORD *)this + 34);
  if ( v37 )
    *((_DWORD *)this + 34) = v37 - 1;
  CWatermarkStack<float,2,2,10>::Optimize();
  v38 = *((_DWORD *)this + 42);
  if ( v38 )
    *((_DWORD *)this + 42) = v38 - 1;
  CWatermarkStack<D2D_VECTOR_2F,2,2,10>::Optimize();
  v39 = *((_DWORD *)this + 50);
  if ( v39 )
    *((_DWORD *)this + 50) = v39 - 1;
  CWatermarkStack<D2D_VECTOR_2F,2,2,10>::Optimize();
  v41 = *((_DWORD *)this + 60);
  if ( v41 == 8 )
  {
    v72 = *((_DWORD *)this + 64);
    v73 = 8LL;
    if ( v72 > 8 )
      v73 = v72;
    if ( (unsigned __int64)(3 * v73) > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v40, 0LL, 0, -2147024362, 0xEEu, 0LL);
    }
    else if ( (unsigned int)(3 * v73) <= *((_DWORD *)this + 59) )
    {
      v125 = 0LL;
      v107 = HrMalloc(0x44uLL, (unsigned int)v73, &v125);
      if ( v107 >= 0 )
      {
        operator delete(*((void **)this + 31));
        *((_QWORD *)this + 31) = v125;
        *((_DWORD *)this + 59) = v73;
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(v108, 0LL, 0, v107, 0xFEu, 0LL);
      }
    }
    *((_DWORD *)this + 64) = 0;
    v42 = 0;
  }
  else
  {
    v42 = v41 + 1;
  }
  *((_DWORD *)this + 60) = v42;
  v43 = *((_DWORD *)this + 68);
  if ( v43 == 8 )
  {
    v78 = *((_DWORD *)this + 72);
    v79 = 8LL;
    if ( v78 > 8 )
      v79 = v78;
    if ( (unsigned __int64)(3 * v79) > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v40, 0LL, 0, -2147024362, 0xEEu, 0LL);
    }
    else if ( (unsigned int)(3 * v79) <= *((_DWORD *)this + 67) )
    {
      v125 = 0LL;
      v109 = HrMalloc(0x10uLL, (unsigned int)v79, &v125);
      if ( v109 >= 0 )
      {
        operator delete(*((void **)this + 35));
        *((_QWORD *)this + 35) = v125;
        *((_DWORD *)this + 67) = v79;
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(v110, 0LL, 0, v109, 0xFEu, 0LL);
      }
    }
    *((_DWORD *)this + 72) = 0;
    v44 = 0;
  }
  else
  {
    v44 = v43 + 1;
  }
  *((_DWORD *)this + 68) = v44;
  v45 = 64LL;
  *((_DWORD *)this + 268) = 0;
  v46 = *((_DWORD *)this + 262);
  if ( v46 == 10 )
  {
    v80 = *((_DWORD *)this + 266);
    v81 = 64LL;
    if ( v80 > 0x40 )
      v81 = v80;
    if ( (unsigned __int64)(3 * v81) > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v40, 0LL, 0, -2147024362, 0xEEu, 0LL);
    }
    else if ( (unsigned int)(3 * v81) <= *((_DWORD *)this + 261) )
    {
      v125 = 0LL;
      v111 = HrMalloc(4uLL, (unsigned int)v81, &v125);
      if ( v111 >= 0 )
      {
        operator delete(*((void **)this + 132));
        *((_QWORD *)this + 132) = v125;
        *((_DWORD *)this + 261) = v81;
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(v112, 0LL, 0, v111, 0xFEu, 0LL);
      }
    }
    *((_DWORD *)this + 266) = 0;
    v47 = 0;
  }
  else
  {
    v47 = v46 + 1;
  }
  *((_DWORD *)this + 262) = v47;
  CWatermarkStack<bool,64,2,10>::Optimize((char *)this + 1008);
  CWatermarkStack<enum MilBitmapBorderMode::Enum,64,2,10>::Optimize((char *)this + 976);
  v49 = *((_DWORD *)this + 238);
  if ( v49 == 10 )
  {
    v82 = *((_DWORD *)this + 242);
    v83 = 64LL;
    if ( v82 > 0x40 )
      v83 = v82;
    if ( (unsigned __int64)(3 * v83) > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v48, 0LL, 0, -2147024362, 0xEEu, 0LL);
    }
    else if ( (unsigned int)(3 * v83) <= *((_DWORD *)this + 237) )
    {
      v125 = 0LL;
      v113 = HrMalloc(4uLL, (unsigned int)v83, &v125);
      if ( v113 >= 0 )
      {
        operator delete(*((void **)this + 120));
        *((_QWORD *)this + 120) = v125;
        *((_DWORD *)this + 237) = v83;
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(v114, 0LL, 0, v113, 0xFEu, 0LL);
      }
    }
    *((_DWORD *)this + 242) = 0;
    v50 = 0;
  }
  else
  {
    v50 = v49 + 1;
  }
  *((_DWORD *)this + 238) = v50;
  CWatermarkStack<enum MilBitmapBorderMode::Enum,64,2,10>::Optimize((char *)this + 912);
  CWatermarkStack<enum MilBitmapBorderMode::Enum,64,2,10>::Optimize((char *)this + 880);
  v52 = *((_DWORD *)this + 214);
  if ( v52 == 10 )
  {
    v84 = *((_DWORD *)this + 218);
    v85 = 64LL;
    if ( v84 > 0x40 )
      v85 = v84;
    if ( (unsigned __int64)(3 * v85) > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v51, 0LL, 0, -2147024362, 0xEEu, 0LL);
    }
    else if ( (unsigned int)(3 * v85) <= *((_DWORD *)this + 213) )
    {
      v125 = 0LL;
      v115 = HrMalloc(4uLL, (unsigned int)v85, &v125);
      if ( v115 >= 0 )
      {
        operator delete(*((void **)this + 108));
        *((_QWORD *)this + 108) = v125;
        *((_DWORD *)this + 213) = v85;
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(v116, 0LL, 0, v115, 0xFEu, 0LL);
      }
    }
    *((_DWORD *)this + 218) = 0;
    v53 = 0;
  }
  else
  {
    v53 = v52 + 1;
  }
  *((_DWORD *)this + 214) = v53;
  v54 = *((_DWORD *)this + 206);
  if ( v54 == 8 )
  {
    v74 = *((_DWORD *)this + 210);
    v75 = 8LL;
    if ( v74 > 8 )
      v75 = v74;
    if ( (unsigned __int64)(3 * v75) > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v51, 0LL, 0, -2147024362, 0xEEu, 0LL);
    }
    else if ( (unsigned int)(3 * v75) <= *((_DWORD *)this + 205) )
    {
      v125 = 0LL;
      v117 = HrMalloc(0x44uLL, (unsigned int)v75, &v125);
      if ( v117 >= 0 )
      {
        operator delete(*((void **)this + 104));
        *((_QWORD *)this + 104) = v125;
        *((_DWORD *)this + 205) = v75;
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(v118, 0LL, 0, v117, 0xFEu, 0LL);
      }
    }
    *((_DWORD *)this + 210) = 0;
    v55 = 0;
  }
  else
  {
    v55 = v54 + 1;
  }
  *((_DWORD *)this + 206) = v55;
  v56 = *((_DWORD *)this + 198);
  if ( v56 == 8 )
  {
    v76 = *((_DWORD *)this + 202);
    v77 = 8LL;
    if ( v76 > 8 )
      v77 = v76;
    if ( (unsigned __int64)(3 * v77) > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v51, 0LL, 0, -2147024362, 0xEEu, 0LL);
    }
    else if ( (unsigned int)(3 * v77) <= *((_DWORD *)this + 197) )
    {
      v125 = 0LL;
      v119 = HrMalloc(0x44uLL, (unsigned int)v77, &v125);
      if ( v119 >= 0 )
      {
        operator delete(*((void **)this + 100));
        *((_QWORD *)this + 100) = v125;
        *((_DWORD *)this + 197) = v77;
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(v120, 0LL, 0, v119, 0xFEu, 0LL);
      }
    }
    *((_DWORD *)this + 202) = 0;
    v57 = 0;
  }
  else
  {
    v57 = v56 + 1;
  }
  *((_DWORD *)this + 198) = v57;
  v58 = *((_DWORD *)this + 190);
  if ( v58 == 10 )
  {
    v86 = *((_DWORD *)this + 194);
    v87 = 64LL;
    if ( v86 > 0x40 )
      v87 = v86;
    if ( (unsigned __int64)(3 * v87) > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v51, 0LL, 0, -2147024362, 0xEEu, 0LL);
    }
    else if ( (unsigned int)(3 * v87) <= *((_DWORD *)this + 189) )
    {
      v125 = 0LL;
      v121 = HrMalloc(8uLL, (unsigned int)v87, &v125);
      if ( v121 >= 0 )
      {
        operator delete(*((void **)this + 96));
        *((_QWORD *)this + 96) = v125;
        *((_DWORD *)this + 189) = v87;
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(v122, 0LL, 0, v121, 0xFEu, 0LL);
      }
    }
    *((_DWORD *)this + 194) = 0;
    v59 = 0;
  }
  else
  {
    v59 = v58 + 1;
  }
  *((_DWORD *)this + 190) = v59;
  v60 = *((_DWORD *)this + 182);
  if ( v60 == 10 )
  {
    v88 = *((_DWORD *)this + 186);
    if ( v88 > 0x40 )
      v45 = v88;
    if ( (unsigned __int64)(3 * v45) > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v51, 0LL, 0, -2147024362, 0xEEu, 0LL);
    }
    else if ( (unsigned int)(3 * v45) <= *((_DWORD *)this + 181) )
    {
      v125 = 0LL;
      v123 = HrMalloc(8uLL, (unsigned int)v45, &v125);
      if ( v123 >= 0 )
      {
        operator delete(*((void **)this + 92));
        *((_QWORD *)this + 92) = v125;
        *((_DWORD *)this + 181) = v45;
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(v124, 0LL, 0, v123, 0xFEu, 0LL);
      }
    }
    *((_DWORD *)this + 186) = 0;
    v61 = 0;
  }
  else
  {
    v61 = v60 + 1;
  }
  *((_DWORD *)this + 182) = v61;
  v3 = v126;
LABEL_61:
  v62 = 0LL;
  if ( g_pComposition )
    v62 = *((_QWORD *)g_pComposition + 44);
  *((_QWORD *)v3 + 1) = v62;
  if ( v8 < 0 )
    CDirtyRegion::SetFullDirty(v3);
  v63 = *(_QWORD *)this;
  *((_QWORD *)this + 86) = 0LL;
  *((_BYTE *)this + 1161) = 0;
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v63 + 200LL))(v63) )
  {
    if ( *((_DWORD *)this + 162) )
      UpdateWindowInputSinkHints(*((_QWORD *)this + 78));
    *((_DWORD *)this + 162) = 0;
    DynArrayImpl<0>::ShrinkToSize((char *)this + 624, 16LL);
    if ( *((_DWORD *)this + 170) )
      NtUpdateInputSinkTransforms(*((_QWORD *)this + 82));
    *((_DWORD *)this + 170) = 0;
    DynArrayImpl<0>::ShrinkToSize((char *)this + 656, 80LL);
  }
  return (unsigned int)v8;
}
