/*
 * XREFs of ?AffectsVisual@CCompositionSpotLight@@UEAA_NPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x1800236F0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x180045CF8 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ??$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x18005C260 (--$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?UpdateWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z @ 0x18007D638 (-UpdateWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800A6070 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x1800A7124 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800A9948 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?DoesIntersectUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800AC3B0 (-DoesIntersectUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV.c)
 *     ?Remove@?$DynArray@PEAVCVisual@@$0A@@@QEAAHAEBQEAVCVisual@@@Z @ 0x1800BCF48 (-Remove@-$DynArray@PEAVCVisual@@$0A@@@QEAAHAEBQEAVCVisual@@@Z.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     tanf_0 @ 0x1800EBD47 (tanf_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CCompositionSpotLight::AffectsVisual(
        CCompositionSpotLight *this,
        const struct CVisualTree *a2,
        CVisual **a3)
{
  bool v3; // zf
  float v7; // xmm1_4
  struct CVisual *v8; // rax
  float v9; // xmm7_4
  unsigned __int8 (__fastcall *v10)(const struct CVisualTree *); // rax
  int v11; // r12d
  __int64 v12; // rdx
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *v14; // rbx
  struct CTreeData *TreeData; // r15
  bool v16; // r13
  struct _LIST_ENTRY *v17; // rcx
  CVisual *v18; // r8
  CVisual *v19; // r13
  unsigned __int64 v20; // rax
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  int v25; // eax
  unsigned int v26; // ecx
  float v27; // xmm0_4
  float v28; // xmm2_4
  float v29; // xmm1_4
  struct CVisual *v30; // rax
  int v31; // esi
  CVisual *v32; // r15
  unsigned __int8 (__fastcall *v33)(const struct CVisualTree *); // rax
  float v34; // xmm3_4
  struct _LIST_ENTRY *v35; // rcx
  struct _LIST_ENTRY *v36; // rbx
  struct CTreeData *v37; // rsi
  bool v38; // r12
  struct _LIST_ENTRY *v39; // rcx
  _DWORD *v40; // r8
  CVisual *v41; // r13
  unsigned __int64 v42; // rax
  __int128 v43; // xmm0
  __int128 v44; // xmm1
  __int128 v45; // xmm0
  __int128 v46; // xmm1
  char DoesIntersectUnsafe; // bl
  char *v48; // rdi
  unsigned int v49; // ecx
  __int64 v50; // rdx
  __int64 v51; // r9
  struct CVisual **v52; // rax
  char v53; // al
  unsigned int v55; // ecx
  int updated; // eax
  int v57; // eax
  unsigned int v58; // ecx
  int v59; // edi
  struct _LIST_ENTRY *TreeDataListHead; // rax
  __int64 v61; // rcx
  _BYTE *v62; // rdx
  unsigned int i; // eax
  CVisual *v64; // rcx
  _QWORD *v65; // rcx
  CVisual *v66; // rax
  struct _LIST_ENTRY *v67; // rax
  unsigned int v68; // ecx
  struct _LIST_ENTRY *v69; // rax
  __int64 v70; // rcx
  _BYTE *v71; // rdx
  unsigned int j; // eax
  _QWORD **v73; // rcx
  _QWORD *v74; // rcx
  CVisual *v75; // rax
  struct _LIST_ENTRY *v76; // rax
  int v77; // eax
  unsigned int v78; // ecx
  unsigned int v79; // ecx
  struct CVisual *v80; // [rsp+40h] [rbp-C8h] BYREF
  __int128 v81; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v82; // [rsp+58h] [rbp-B0h]
  __int128 v83; // [rsp+68h] [rbp-A0h]
  __int128 v84; // [rsp+78h] [rbp-90h]
  int Blink; // [rsp+88h] [rbp-80h]
  float v86; // [rsp+98h] [rbp-70h] BYREF
  float v87; // [rsp+9Ch] [rbp-6Ch]
  float v88; // [rsp+A0h] [rbp-68h]
  float v89; // [rsp+A4h] [rbp-64h]
  __int128 v90; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v91; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v92; // [rsp+C8h] [rbp-40h] BYREF

  v3 = *((_BYTE *)this + 162) == 0;
  v80 = (struct CVisual *)a3;
  if ( v3 )
    return 0;
  if ( *((float *)this + 90) != 0.0 )
    return 1;
  if ( *((float *)this + 91) != 0.0 )
    return 1;
  if ( *((float *)this + 92) != -1.0 )
    return 1;
  v7 = *((float *)this + 94);
  if ( *((float *)this + 93) > v7 || v7 > 1.5707952 )
    return 1;
  v8 = *(struct CVisual **)a2;
  v9 = *((float *)this + 89) - *((float *)a3 + 28);
  Blink = 0;
  v92 = 0LL;
  v10 = (unsigned __int8 (__fastcall *)(const struct CVisualTree *))*((_QWORD *)v8 + 25);
  v11 = -2003292412;
  v91 = 0LL;
  if ( v10(a2) )
  {
    v14 = (struct _LIST_ENTRY *)(a3 + 40);
  }
  else
  {
    TreeDataListHead = CVisual::GetTreeDataListHead((CVisual *)a3);
    if ( !TreeDataListHead )
      goto LABEL_71;
    Flink = TreeDataListHead->Flink;
    if ( TreeDataListHead->Flink == TreeDataListHead )
      goto LABEL_71;
    while ( 1 )
    {
      v14 = Flink - 18;
      if ( (const struct CVisualTree *)Flink[2].Flink == a2 )
        break;
      Flink = Flink->Flink;
      if ( Flink == TreeDataListHead )
        goto LABEL_71;
    }
  }
  if ( !v14 )
    goto LABEL_71;
  v11 = 0;
  TreeData = 0LL;
  v16 = 0;
  if ( a3 == *((CVisual ***)a2 + 7) )
    goto LABEL_90;
  v17 = 0LL;
  if ( g_pComposition )
    v17 = (struct _LIST_ENTRY *)*((_QWORD *)g_pComposition + 44);
  if ( BYTE2(v14[1].Flink) && v14[17].Blink == v17 )
    goto LABEL_15;
  v18 = a3[28];
  if ( (*(_DWORD *)v18 & 0x1000000) == 0 )
    goto LABEL_15;
  v61 = *((unsigned int *)v18 + 1);
  v62 = (char *)v18 + 8;
  for ( i = 0; i < (unsigned int)v61; ++v62 )
  {
    if ( *v62 == 8 )
      break;
    ++i;
  }
  v64 = i >= (unsigned int)v61 ? 0LL : (CVisual *)((char *)v18 + v61 + 8LL * i - (((_BYTE)v61 + 15) & 7) + 15);
  v65 = *(_QWORD **)v64;
  if ( v65 && (v66 = (CVisual *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v65 + 200LL))(*v65)) != 0LL )
  {
    v16 = 1;
    TreeData = CVisual::FindTreeData(v66, a2);
  }
  else
  {
LABEL_15:
    v19 = a3[10];
    if ( (*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)a2 + 200LL))(a2) )
    {
      TreeData = (CVisual *)((char *)v19 + 320);
    }
    else
    {
      v67 = CVisual::GetTreeDataListHead(v19);
      if ( v67 )
      {
        Flink = v67->Flink;
        if ( v67->Flink != v67 )
        {
          while ( (const struct CVisualTree *)Flink[2].Flink != a2 )
          {
            Flink = Flink->Flink;
            if ( Flink == v67 )
              goto LABEL_17;
          }
          TreeData = (struct CTreeData *)&Flink[-18];
        }
      }
    }
LABEL_17:
    v16 = 0;
  }
  if ( !TreeData )
LABEL_90:
    v20 = 1LL;
  else
    v20 = *((_QWORD *)TreeData + 15);
  if ( v14[7].Blink < (struct _LIST_ENTRY *)v20 )
  {
    updated = CVisual::UpdateWorldTransform((CVisual *)a3, a2, (struct CTreeData *)v14, v16, TreeData);
    v11 = updated;
    if ( updated < 0 )
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)Flink, 0LL, 0, updated, 0x793u, 0LL);
  }
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)Flink, 0LL, 0, v11, 0x6DDu, 0LL);
  }
  else
  {
    if ( !v14[7].Blink )
    {
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)Flink, 0LL, 0, -2003292412, 0x65u, 0LL);
      v11 = -2003292412;
      MilInstrumentationCheckHR_MaybeFailFast(v68, 0LL, 0, -2003292412, 0x6E2u, 0LL);
      goto LABEL_71;
    }
    v21 = *(_OWORD *)&v14[2].Blink;
    v11 = 0;
    v22 = *(_OWORD *)&v14[3].Blink;
    Blink = (int)v14[6].Blink;
    v81 = v21;
    v23 = *(_OWORD *)&v14[4].Blink;
    v82 = v22;
    v24 = *(_OWORD *)&v14[5].Blink;
    v83 = v23;
    v84 = v24;
  }
  if ( v11 < 0 )
  {
LABEL_71:
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)Flink, 0LL, 0, v11, 0x264u, 0LL);
    return 1;
  }
  LOBYTE(v12) = 1;
  if ( !(unsigned __int8)CMILMatrix::Is2DAffine<1>(&v81, v12) )
    return 1;
  if ( v9 > 0.0 && *((float *)this + 94) > 0.0 )
  {
    v90 = 0LL;
    v25 = (*(__int64 (__fastcall **)(struct CVisual *, __int128 *))(*(_QWORD *)v80 + 240LL))(v80, &v90);
    if ( v25 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, v25, 0x274u, 0LL);
      return 1;
    }
    CMILMatrix::Transform2DBoundsHelper<1>(&v81, &v90, &v91);
    v27 = tanf_0(*((float *)this + 94));
    v28 = *((float *)this + 88);
    v29 = *((float *)this + 87);
    v30 = *(struct CVisual **)a2;
    v31 = -2003292412;
    v32 = (CVisual *)*((_QWORD *)this + 31);
    Blink = 0;
    v33 = (unsigned __int8 (__fastcall *)(const struct CVisualTree *))*((_QWORD *)v30 + 25);
    v34 = (float)(v27 * v9) + (float)(v27 * v9);
    v86 = v29 - (float)(v27 * v9);
    v87 = v28 - (float)(v27 * v9);
    v89 = v34 + v87;
    v88 = v34 + v86;
    if ( v33(a2) )
    {
      v36 = (struct _LIST_ENTRY *)((char *)v32 + 320);
    }
    else
    {
      v69 = CVisual::GetTreeDataListHead(v32);
      if ( !v69 )
        goto LABEL_121;
      v35 = v69->Flink;
      if ( v69->Flink == v69 )
        goto LABEL_121;
      while ( 1 )
      {
        v36 = v35 - 18;
        if ( (const struct CVisualTree *)v35[2].Flink == a2 )
          break;
        v35 = v35->Flink;
        if ( v35 == v69 )
          goto LABEL_121;
      }
    }
    if ( v36 )
    {
      v37 = 0LL;
      v38 = 0;
      if ( v32 == *((CVisual **)a2 + 7) )
        goto LABEL_115;
      v39 = 0LL;
      if ( g_pComposition )
        v39 = (struct _LIST_ENTRY *)*((_QWORD *)g_pComposition + 44);
      if ( BYTE2(v36[1].Flink) && v36[17].Blink == v39 )
        goto LABEL_37;
      v40 = (_DWORD *)*((_QWORD *)v32 + 28);
      if ( (*v40 & 0x1000000) == 0 )
        goto LABEL_37;
      v70 = (unsigned int)v40[1];
      v71 = v40 + 2;
      for ( j = 0; j < (unsigned int)v70; ++v71 )
      {
        if ( *v71 == 8 )
          break;
        ++j;
      }
      v73 = j >= (unsigned int)v70 ? 0LL : (_QWORD **)((char *)v40 + 8LL * j - (((_BYTE)v70 + 15) & 7) + v70 + 15);
      v74 = *v73;
      if ( v74 && (v75 = (CVisual *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v74 + 200LL))(*v74)) != 0LL )
      {
        v38 = 1;
        v37 = CVisual::FindTreeData(v75, a2);
      }
      else
      {
LABEL_37:
        v41 = (CVisual *)*((_QWORD *)v32 + 10);
        if ( (*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)a2 + 200LL))(a2) )
        {
          v37 = (CVisual *)((char *)v41 + 320);
        }
        else
        {
          v76 = CVisual::GetTreeDataListHead(v41);
          if ( v76 )
          {
            v35 = v76->Flink;
            if ( v76->Flink != v76 )
            {
              while ( (const struct CVisualTree *)v35[2].Flink != a2 )
              {
                v35 = v35->Flink;
                if ( v35 == v76 )
                  goto LABEL_39;
              }
              v37 = (struct CTreeData *)&v35[-18];
            }
          }
        }
      }
LABEL_39:
      if ( !v37 )
LABEL_115:
        v42 = 1LL;
      else
        v42 = *((_QWORD *)v37 + 15);
      if ( v36[7].Blink < (struct _LIST_ENTRY *)v42 )
      {
        v77 = CVisual::UpdateWorldTransform(v32, a2, (struct CTreeData *)v36, v38, v37);
        v31 = v77;
        if ( v77 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v35, 0LL, 0, v77, 0x793u, 0LL);
        if ( v31 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v35, 0LL, 0, v31, 0x6DDu, 0LL);
LABEL_44:
          if ( v31 >= 0 )
          {
            CMILMatrix::Transform2DBoundsHelper<1>(&v81, &v86, &v92);
            DoesIntersectUnsafe = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::DoesIntersectUnsafe(
                                    &v92,
                                    &v91);
            goto LABEL_46;
          }
          goto LABEL_121;
        }
      }
      if ( v36[7].Blink )
      {
        v43 = *(_OWORD *)&v36[2].Blink;
        v31 = 0;
        v44 = *(_OWORD *)&v36[3].Blink;
        Blink = (int)v36[6].Blink;
        v81 = v43;
        v45 = *(_OWORD *)&v36[4].Blink;
        v82 = v44;
        v46 = *(_OWORD *)&v36[5].Blink;
        v83 = v45;
        v84 = v46;
        goto LABEL_44;
      }
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v35, 0LL, 0, -2003292412, 0x65u, 0LL);
      v31 = -2003292412;
      MilInstrumentationCheckHR_MaybeFailFast(v78, 0LL, 0, -2003292412, 0x6E2u, 0LL);
    }
LABEL_121:
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v35, 0LL, 0, v31, 0x287u, 0LL);
    return 1;
  }
  DoesIntersectUnsafe = 0;
LABEL_46:
  v48 = (char *)this + 256;
  v49 = 0;
  v50 = *((unsigned int *)v48 + 6);
  v51 = *(_QWORD *)v48;
  if ( (_DWORD)v50 )
  {
    v52 = *(struct CVisual ***)v48;
    while ( v80 != *v52 )
    {
      ++v49;
      ++v52;
      if ( v49 >= (unsigned int)v50 )
        goto LABEL_50;
    }
    v53 = 1;
  }
  else
  {
LABEL_50:
    v53 = 0;
  }
  if ( DoesIntersectUnsafe )
  {
    if ( v53 )
      DynArray<CVisual *,0>::Remove(v48, &v80, v80, v51);
    return DoesIntersectUnsafe;
  }
  if ( !v53 )
  {
    v55 = v50 + 1;
    DoesIntersectUnsafe = 1;
    if ( (int)v50 + 1 < (unsigned int)v50 )
    {
      v59 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v55, 0LL, 0, -2147024362, 0xB5u, 0LL);
    }
    else
    {
      if ( v55 <= *((_DWORD *)v48 + 5) )
      {
        *(_QWORD *)(v51 + 8 * v50) = v80;
        *((_DWORD *)v48 + 6) = v55;
        return DoesIntersectUnsafe;
      }
      v57 = DynArrayImpl<0>::AddMultipleAndSet(v48, 8LL, 1LL, &v80);
      v59 = v57;
      if ( v57 >= 0 )
        return DoesIntersectUnsafe;
      MilInstrumentationCheckHR_MaybeFailFast(v58, 0LL, 0, v57, 0xC0u, 0LL);
    }
    MilInstrumentationCheckHR_MaybeFailFast(v79, 0LL, 0, v59, 0x2A7u, 0LL);
  }
  return DoesIntersectUnsafe;
}
