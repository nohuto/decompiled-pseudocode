/*
 * XREFs of ?AffectsVisual@CCompositionSpotLight@@UEAA_NPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x180003C30
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?DoesIntersectUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18006BB30 (-DoesIntersectUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18007A590 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ??$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x180082210 (--$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?UpdateWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z @ 0x18009FDC8 (-UpdateWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800A7AB0 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@PEAVCVisual@@$0A@@@QEAAJPEFBQEAVCVisual@@I@Z @ 0x1800B866C (-AddMultipleAndSet@-$DynArray@PEAVCVisual@@$0A@@@QEAAJPEFBQEAVCVisual@@I@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x1800BA570 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?FindSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@AEBAII@Z @ 0x1800C666C (-FindSlot@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@AEBAII@Z.c)
 *     ?Remove@?$DynArray@PEAVCVisual@@$0A@@@QEAAHAEBQEAVCVisual@@@Z @ 0x1800C7588 (-Remove@-$DynArray@PEAVCVisual@@$0A@@@QEAAHAEBQEAVCVisual@@@Z.c)
 *     __security_check_cookie @ 0x1800E6E00 (__security_check_cookie.c)
 *     tanf_0 @ 0x1800F47B7 (tanf_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CCompositionSpotLight::AffectsVisual(
        CCompositionSpotLight *this,
        const struct CVisualTree *a2,
        CVisual **a3)
{
  bool v3; // zf
  float v8; // xmm1_4
  __int64 v9; // rax
  float v10; // xmm7_4
  bool v11; // r12
  unsigned __int8 (__fastcall *v12)(const struct CVisualTree *); // rax
  int v13; // r14d
  __int64 v14; // rdx
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *v16; // rdi
  struct CTreeData *TreeData; // rsi
  unsigned __int64 v18; // rax
  struct _LIST_ENTRY *v19; // rcx
  CVisual *v20; // r8
  __int64 v21; // rdx
  _BYTE *v22; // rcx
  unsigned int i; // eax
  CVisual *v24; // rcx
  struct _LIST_ENTRY *TreeDataListHead; // rax
  char v26; // bl
  _QWORD *v27; // rcx
  CVisual *v28; // rax
  CVisual *v29; // r12
  struct _LIST_ENTRY *v30; // rax
  int updated; // eax
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  unsigned int v36; // ecx
  int v37; // eax
  unsigned int v38; // ecx
  float v39; // xmm0_4
  float v40; // xmm2_4
  float v41; // xmm1_4
  int v42; // esi
  __int64 v43; // rax
  __int64 v44; // r15
  float v45; // xmm0_4
  unsigned __int8 (__fastcall *v46)(const struct CVisualTree *); // rax
  float v47; // xmm2_4
  float v48; // xmm1_4
  float v49; // xmm0_4
  struct _LIST_ENTRY *v50; // rcx
  struct _LIST_ENTRY *v51; // rdi
  struct CTreeData *v52; // r14
  bool v53; // r12
  struct _LIST_ENTRY *v54; // rcx
  unsigned int Slot; // eax
  __int64 v56; // r10
  __int64 v57; // rcx
  _QWORD **v58; // rdx
  struct _LIST_ENTRY *v59; // rax
  CVisual *v60; // rax
  CVisual *v61; // r12
  struct _LIST_ENTRY *v62; // rax
  unsigned __int64 v63; // rax
  int v64; // eax
  __int128 v65; // xmm0
  __int128 v66; // xmm1
  __int128 v67; // xmm0
  __int128 v68; // xmm1
  unsigned int v69; // ecx
  unsigned int v70; // edx
  unsigned int v71; // ecx
  struct CVisual **v72; // rax
  char v73; // al
  int v74; // eax
  unsigned int v75; // ecx
  char DoesIntersectUnsafe; // [rsp+30h] [rbp-D0h]
  struct CVisual *v77; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v78; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v79; // [rsp+50h] [rbp-B0h]
  __int128 v80; // [rsp+60h] [rbp-A0h]
  __int128 v81; // [rsp+70h] [rbp-90h]
  int Blink; // [rsp+80h] [rbp-80h]
  _DWORD v83[4]; // [rsp+90h] [rbp-70h] BYREF
  __int128 v84; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v85; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v86; // [rsp+C0h] [rbp-40h] BYREF

  v3 = *((_BYTE *)this + 162) == 0;
  v77 = (struct CVisual *)a3;
  if ( v3 )
    return 0;
  if ( *((float *)this + 90) != 0.0 )
    return 1;
  if ( *((float *)this + 91) != 0.0 )
    return 1;
  if ( *((float *)this + 92) != -1.0 )
    return 1;
  v8 = *((float *)this + 94);
  if ( *((float *)this + 93) > v8 || v8 > 1.5707952 )
    return 1;
  v9 = *(_QWORD *)a2;
  v10 = *((float *)this + 89) - *((float *)a3 + 28);
  v11 = 0;
  v86 = 0LL;
  v12 = *(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(v9 + 200);
  v13 = -2003292412;
  v85 = 0LL;
  Blink = 0;
  if ( v12(a2) )
  {
    v16 = (struct _LIST_ENTRY *)(a3 + 40);
  }
  else
  {
    TreeDataListHead = CVisual::GetTreeDataListHead((CVisual *)a3);
    if ( !TreeDataListHead )
      goto LABEL_26;
    Flink = TreeDataListHead->Flink;
    if ( TreeDataListHead->Flink == TreeDataListHead )
      goto LABEL_26;
    while ( 1 )
    {
      v16 = Flink - 18;
      if ( (const struct CVisualTree *)Flink[2].Flink == a2 )
        break;
      Flink = Flink->Flink;
      if ( Flink == TreeDataListHead )
        goto LABEL_26;
    }
  }
  if ( !v16 )
    goto LABEL_26;
  v13 = 0;
  TreeData = 0LL;
  v18 = 1LL;
  if ( a3 != *((CVisual ***)a2 + 7) )
  {
    v19 = 0LL;
    if ( g_pComposition )
      v19 = (struct _LIST_ENTRY *)*((_QWORD *)g_pComposition + 44);
    if ( BYTE2(v16[1].Flink) && v16[17].Blink == v19 )
      goto LABEL_33;
    v20 = a3[28];
    if ( (*(_DWORD *)v20 & 0x1000000) == 0 )
      goto LABEL_33;
    v21 = *((unsigned int *)v20 + 1);
    v22 = (char *)v20 + 8;
    for ( i = 0; i < (unsigned int)v21; ++v22 )
    {
      if ( *v22 == 8 )
        break;
      ++i;
    }
    v24 = i >= (unsigned int)v21 ? 0LL : (CVisual *)((char *)v20 + v21 + 8LL * i - (((_BYTE)v21 + 15) & 7) + 15);
    v27 = *(_QWORD **)v24;
    if ( v27 && (v28 = (CVisual *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v27 + 200LL))(*v27)) != 0LL )
    {
      v11 = 1;
      TreeData = CVisual::FindTreeData(v28, a2);
    }
    else
    {
LABEL_33:
      v29 = a3[10];
      if ( (*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)a2 + 200LL))(a2) )
      {
        TreeData = (CVisual *)((char *)v29 + 320);
      }
      else
      {
        v30 = CVisual::GetTreeDataListHead(v29);
        if ( v30 )
        {
          Flink = v30->Flink;
          if ( v30->Flink != v30 )
          {
            while ( (const struct CVisualTree *)Flink[2].Flink != a2 )
            {
              Flink = Flink->Flink;
              if ( Flink == v30 )
                goto LABEL_41;
            }
            TreeData = (struct CTreeData *)&Flink[-18];
          }
        }
      }
LABEL_41:
      v11 = 0;
    }
    if ( TreeData )
      v18 = *((_QWORD *)TreeData + 15);
    else
      v18 = 1LL;
  }
  if ( v16[7].Blink < (struct _LIST_ENTRY *)v18 )
  {
    updated = CVisual::UpdateWorldTransform((CVisual *)a3, a2, (struct CTreeData *)v16, v11, TreeData);
    v13 = updated;
    if ( updated < 0 )
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)Flink, 0LL, 0, updated, 0x7B0u, 0LL);
  }
  if ( v13 >= 0 )
  {
    if ( v16[7].Blink )
    {
      v32 = *(_OWORD *)&v16[2].Blink;
      v13 = 0;
      v33 = *(_OWORD *)&v16[3].Blink;
      Blink = (int)v16[6].Blink;
      v78 = v32;
      v34 = *(_OWORD *)&v16[4].Blink;
      v79 = v33;
      v35 = *(_OWORD *)&v16[5].Blink;
      v80 = v34;
      v81 = v35;
      goto LABEL_53;
    }
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)Flink, 0LL, 0, -2003292412, 0x69u, 0LL);
    v13 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast(v36, 0LL, 0, -2003292412, 0x6FFu, 0LL);
LABEL_26:
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)Flink, 0LL, 0, v13, 0x264u, 0LL);
    return 1;
  }
  MilInstrumentationCheckHR_MaybeFailFast((unsigned int)Flink, 0LL, 0, v13, 0x6FAu, 0LL);
LABEL_53:
  if ( v13 < 0 )
    goto LABEL_26;
  LOBYTE(v14) = 1;
  if ( !(unsigned __int8)CMILMatrix::Is2DAffine<1>(&v78, v14) )
    return 1;
  if ( v10 <= 0.0 || *((float *)this + 94) <= 0.0 )
  {
    DoesIntersectUnsafe = 0;
    goto LABEL_102;
  }
  v84 = 0LL;
  v37 = (*(__int64 (__fastcall **)(struct CVisual *, __int128 *))(*(_QWORD *)v77 + 248LL))(v77, &v84);
  if ( v37 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v38, 0LL, 0, v37, 0x274u, 0LL);
    return 1;
  }
  CMILMatrix::Transform2DBoundsHelper<1>(&v78, &v84, &v85);
  v39 = tanf_0(*((float *)this + 94));
  v40 = *((float *)this + 88);
  v41 = *((float *)this + 87);
  v42 = -2003292412;
  v43 = *(_QWORD *)a2;
  v44 = *((_QWORD *)this + 31);
  v45 = v39 * v10;
  Blink = 0;
  v46 = *(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(v43 + 200);
  v47 = v40 - v45;
  v48 = v41 - v45;
  v49 = v45 + v45;
  *(float *)&v83[1] = v47;
  *(float *)v83 = v48;
  *(float *)&v83[2] = v48 + v49;
  *(float *)&v83[3] = v47 + v49;
  if ( v46(a2) )
  {
    v51 = (struct _LIST_ENTRY *)(v44 + 320);
  }
  else
  {
    v59 = CVisual::GetTreeDataListHead((CVisual *)v44);
    if ( !v59 )
      goto LABEL_73;
    v50 = v59->Flink;
    if ( v59->Flink == v59 )
      goto LABEL_73;
    while ( 1 )
    {
      v51 = v50 - 18;
      if ( (const struct CVisualTree *)v50[2].Flink == a2 )
        break;
      v50 = v50->Flink;
      if ( v50 == v59 )
        goto LABEL_73;
    }
  }
  if ( !v51 )
    goto LABEL_73;
  v42 = 0;
  v52 = 0LL;
  v53 = 0;
  if ( v44 == *((_QWORD *)a2 + 7) )
    goto LABEL_89;
  v54 = 0LL;
  if ( g_pComposition )
    v54 = (struct _LIST_ENTRY *)*((_QWORD *)g_pComposition + 44);
  if ( (!BYTE2(v51[1].Flink) || v51[17].Blink != v54)
    && (**(_DWORD **)(v44 + 224) & 0x1000000) != 0
    && ((Slot = CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot(*(_QWORD *)(v44 + 224), 8LL),
         v57 = *(unsigned int *)(v56 + 4),
         Slot >= (unsigned int)v57)
      ? (v58 = 0LL)
      : (v58 = (_QWORD **)(v57 + 15 + v56 + 8LL * Slot - (((_BYTE)v57 + 15) & 7))),
        *v58 && (v60 = (CVisual *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)**v58 + 200LL))(**v58)) != 0LL) )
  {
    v53 = 1;
    v52 = CVisual::FindTreeData(v60, a2);
  }
  else
  {
    v61 = *(CVisual **)(v44 + 80);
    v52 = 0LL;
    if ( (*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)a2 + 200LL))(a2) )
    {
      v52 = (CVisual *)((char *)v61 + 320);
    }
    else
    {
      v62 = CVisual::GetTreeDataListHead(v61);
      if ( v62 )
      {
        v50 = v62->Flink;
        if ( v62->Flink != v62 )
        {
          while ( (const struct CVisualTree *)v50[2].Flink != a2 )
          {
            v50 = v50->Flink;
            if ( v50 == v62 )
              goto LABEL_86;
          }
          v52 = (struct CTreeData *)&v50[-18];
        }
      }
    }
LABEL_86:
    v53 = 0;
  }
  if ( !v52 )
LABEL_89:
    v63 = 1LL;
  else
    v63 = *((_QWORD *)v52 + 15);
  if ( v51[7].Blink < (struct _LIST_ENTRY *)v63 )
  {
    v64 = CVisual::UpdateWorldTransform((CVisual *)v44, a2, (struct CTreeData *)v51, v53, v52);
    v42 = v64;
    if ( v64 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v50, 0LL, 0, v64, 0x7B0u, 0LL);
  }
  if ( v42 >= 0 )
  {
    if ( v51[7].Blink )
    {
      v65 = *(_OWORD *)&v51[2].Blink;
      v42 = 0;
      v66 = *(_OWORD *)&v51[3].Blink;
      Blink = (int)v51[6].Blink;
      v78 = v65;
      v67 = *(_OWORD *)&v51[4].Blink;
      v79 = v66;
      v68 = *(_OWORD *)&v51[5].Blink;
      v80 = v67;
      v81 = v68;
      goto LABEL_98;
    }
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v50, 0LL, 0, -2003292412, 0x69u, 0LL);
    v42 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast(v69, 0LL, 0, -2003292412, 0x6FFu, 0LL);
LABEL_73:
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v50, 0LL, 0, v42, 0x287u, 0LL);
    return 1;
  }
  MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v50, 0LL, 0, v42, 0x6FAu, 0LL);
LABEL_98:
  if ( v42 < 0 )
    goto LABEL_73;
  CMILMatrix::Transform2DBoundsHelper<1>(&v78, v83, &v86);
  DoesIntersectUnsafe = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::DoesIntersectUnsafe(&v86, &v85);
LABEL_102:
  v70 = *((_DWORD *)this + 70);
  v71 = 0;
  v72 = (struct CVisual **)*((_QWORD *)this + 32);
  if ( v70 )
  {
    while ( v77 != *v72 )
    {
      ++v71;
      ++v72;
      if ( v71 >= v70 )
        goto LABEL_105;
    }
    v73 = 1;
  }
  else
  {
LABEL_105:
    v73 = 0;
  }
  v26 = DoesIntersectUnsafe;
  if ( DoesIntersectUnsafe )
  {
    if ( v73 )
    {
      DynArray<CVisual *,0>::Remove((char *)this + 256, &v77);
      return DoesIntersectUnsafe;
    }
    return v26;
  }
  if ( !v73 )
  {
    v74 = DynArray<CVisual *,0>::AddMultipleAndSet((char *)this + 256, &v77);
    if ( v74 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v75, 0LL, 0, v74, 0x2A7u, 0LL);
      return 1;
    }
    return 1;
  }
  return 0;
}
