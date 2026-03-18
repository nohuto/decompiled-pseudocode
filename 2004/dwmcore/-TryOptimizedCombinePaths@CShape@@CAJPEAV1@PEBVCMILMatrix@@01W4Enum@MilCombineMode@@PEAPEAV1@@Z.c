/*
 * XREFs of ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x18004C820
 * Callers:
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x18004C7B0 (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?ComputeBrushClamp@CBrushDrawListGenerator@@CAJV?$span@PEBVCDrawListBrush@@$0?0@gsl@@KAEBVMatrix3x3@@PEAPEAVCShape@@@Z @ 0x1800500A0 (-ComputeBrushClamp@CBrushDrawListGenerator@@CAJV-$span@PEBVCDrawListBrush@@$0-0@gsl@@KAEBVMatrix.c)
 *     ?ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEAULayoutData@CContent@@PEAPEAVCShape@@@Z @ 0x180072E20 (-ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEAULayoutData@CContent@@PEAPEAVCShape@@@Z.c)
 * Callees:
 *     ?CMilRectLFromMilRectF@@YA?AV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBUMilRectF@@@Z @ 0x18000A414 (-CMilRectLFromMilRectF@@YA-AV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_.c)
 *     CanCombineToRegion @ 0x180018AF8 (CanCombineToRegion.c)
 *     ?IntersectWithRect@CRegionShape@@QEBAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVCShape@@@Z @ 0x18001AEB8 (-IntersectWithRect@CRegionShape@@QEBAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF.c)
 *     ?Is2DAxisAlignedIntegerPreserving@CMILMatrix@@QEBA_N_N@Z @ 0x18001CF94 (-Is2DAxisAlignedIntegerPreserving@CMILMatrix@@QEBA_N_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18004011C (-Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ??0CRectanglesShape@@QEAA@XZ @ 0x18004098C (--0CRectanglesShape@@QEAA@XZ.c)
 *     ??$AppendRects@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@CRegion@@QEAAXPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x1800418C8 (--$AppendRects@V-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquenes.c)
 *     ?Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180041B60 (-Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180041C50 (-Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180044474 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??$AppendRects@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@CRegion@@QEAAXPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x180044508 (--$AppendRects@V-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniquene.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180044738 (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ??_ECRegionShape@@UEAAPEAXI@Z @ 0x180044B40 (--_ECRegionShape@@UEAAPEAXI@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800466E8 (--2@YAPEAX_K@Z.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCRectanglesShape@@@Z @ 0x180048030 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCRectanglesShape@@@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180049364 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800585C8 (--3@YAXPEAX@Z.c)
 *     ?DoesContain@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180066654 (-DoesContain@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x18006C580 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ??$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x18006E1C0 (--$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?DoesIntersectInclusive@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18007E764 (-DoesIntersectInclusive@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NA.c)
 *     ?IsAxisAlignedRectangle@CShape@@QEBA_NXZ @ 0x18008034C (-IsAxisAlignedRectangle@CShape@@QEBA_NXZ.c)
 *     ?AddMultipleAndSet@?$DynArray@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0A@@@QEAAJPEFBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x18009D9E0 (-AddMultipleAndSet@-$DynArray@V-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeede.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18009F68C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z @ 0x1800BE1EC (--$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ??0?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@QEAA@XZ @ 0x1800DD810 (--0-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E3ABC (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x18020EDB4 (ModuleFailFastForHRESULT.c)
 *     ?IntersectWithRect@CRectanglesShape@@QEBAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVCShape@@@Z @ 0x18025B400 (-IntersectWithRect@CRectanglesShape@@QEBAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndS.c)
 */

__int64 __fastcall CShape::TryOptimizedCombinePaths(
        struct CRectanglesShape *a1,
        __int64 a2,
        CShape *a3,
        float *a4,
        int a5,
        struct CShape **a6)
{
  unsigned int v9; // esi
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 (__fastcall *v12)(struct CRectanglesShape *, CRegionShape **, _QWORD); // rax
  int v13; // eax
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  float v17; // xmm0_4
  float v18; // xmm1_4
  float v19; // xmm3_4
  float v20; // xmm2_4
  _DWORD *Value; // rdi
  int v22; // ecx
  _QWORD *v23; // rbx
  void *v24; // rcx
  __int64 v25; // rcx
  const unsigned int *v26; // rcx
  char *v28; // rax
  char *v29; // rbx
  int *v30; // r14
  __int64 v31; // rcx
  int v32; // eax
  __int64 v33; // rcx
  int v34; // eax
  __int64 v35; // rcx
  CRegionShape *v36; // rdi
  int v37; // eax
  __int64 v38; // rcx
  CRegionShape *v39; // r14
  int v40; // eax
  char *v41; // rax
  const unsigned int *v42; // rcx
  char *v43; // rbx
  __int64 v44; // rcx
  int v45; // eax
  CRegionShape *v46; // rcx
  CRegionShape *v47; // rcx
  struct CObjectCache *ObjectCache; // rdx
  CRectanglesShape *v49; // rax
  int v50; // r8d
  CRectanglesShape *v51; // rax
  __int64 v52; // rax
  int v53; // eax
  __int64 v54; // rcx
  struct CRectanglesShape *v55; // rcx
  __int64 v56; // rdx
  int v57; // eax
  __int64 v58; // rcx
  int v59; // eax
  char *v60; // rax
  const unsigned int *v61; // rcx
  char *v62; // rbx
  void **v63; // rcx
  __int64 v64; // rcx
  int v65; // eax
  struct CObjectCache *v66; // rdx
  CRectanglesShape *v67; // rax
  int v68; // r8d
  CRectanglesShape *v69; // rax
  __int64 v70; // rdx
  int v71; // eax
  char *v72; // rax
  const unsigned int *v73; // rcx
  char *v74; // rbx
  __int64 v75; // rcx
  int v76; // eax
  int v77; // eax
  __int64 v78; // rcx
  int v79; // eax
  __int64 v80; // rcx
  _QWORD *v81; // rax
  __int64 v82; // rcx
  DWORD v83; // ecx
  int v84; // eax
  int v85; // eax
  int v86; // eax
  __int64 v87; // rcx
  int v88; // eax
  __int64 v89; // rcx
  struct CObjectCache *v90; // rdx
  CRectanglesShape *v91; // rax
  int v92; // r8d
  CRectanglesShape *v93; // rax
  int v94; // eax
  __int64 v95; // rcx
  int v96; // eax
  __int64 v97; // rcx
  struct CObjectCache *v98; // rdx
  CRectanglesShape *v99; // rax
  int v100; // r8d
  CRectanglesShape *v101; // rax
  unsigned int v102; // [rsp+20h] [rbp-E0h]
  CRegionShape *v103[2]; // [rsp+30h] [rbp-D0h] BYREF
  CRegionShape *v104[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v105; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD *v106; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD v107[18]; // [rsp+68h] [rbp-98h] BYREF
  _DWORD *v108; // [rsp+B0h] [rbp-50h] BYREF
  _DWORD v109[18]; // [rsp+B8h] [rbp-48h] BYREF
  void *retaddr; // [rsp+158h] [rbp+58h]

  v9 = 0;
  *a6 = 0LL;
  if ( !a1 )
    goto LABEL_66;
  if ( (*(unsigned __int8 (__fastcall **)(struct CRectanglesShape *))(*(_QWORD *)a1 + 16LL))(a1)
    || !a3
    || (*(unsigned __int8 (__fastcall **)(CShape *))(*(_QWORD *)a3 + 16LL))(a3) )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(struct CRectanglesShape *))(*(_QWORD *)a1 + 16LL))(a1) )
    {
LABEL_68:
      if ( a5 == 1 )
      {
        ObjectCache = CThreadContext::GetObjectCache(a1);
        v49 = 0LL;
        v50 = *((_DWORD *)ObjectCache + 1);
        if ( v50 )
        {
          v49 = (CRectanglesShape *)*((_QWORD *)ObjectCache + 1);
          *((_QWORD *)ObjectCache + 1) = *(_QWORD *)v49;
          *((_DWORD *)ObjectCache + 1) = v50 - 1;
        }
        if ( v49 || (v49 = (CRectanglesShape *)DefaultHeap::Alloc(0x48uLL)) != 0LL )
          v51 = CRectanglesShape::CRectanglesShape(v49);
        else
          v51 = 0LL;
        *a6 = v51;
        if ( !v51 )
        {
          v102 = 576;
          goto LABEL_201;
        }
      }
      else if ( a5 )
      {
        if ( a5 != 2 )
          return v9;
        if ( !a1 || (*(unsigned __int8 (__fastcall **)(struct CRectanglesShape *))(*(_QWORD *)a1 + 16LL))(a1) )
        {
          v90 = CThreadContext::GetObjectCache(a1);
          v91 = 0LL;
          v92 = *((_DWORD *)v90 + 1);
          if ( v92 )
          {
            v91 = (CRectanglesShape *)*((_QWORD *)v90 + 1);
            *((_QWORD *)v90 + 1) = *(_QWORD *)v91;
            *((_DWORD *)v90 + 1) = v92 - 1;
          }
          if ( v91 || (v91 = (CRectanglesShape *)DefaultHeap::Alloc(0x48uLL)) != 0LL )
            v93 = CRectanglesShape::CRectanglesShape(v91);
          else
            v93 = 0LL;
          *a6 = v93;
          if ( !v93 )
          {
            v102 = 590;
            goto LABEL_201;
          }
        }
        else
        {
          v88 = CShape::CopyShape(a1, 0LL, a6);
          v9 = v88;
          if ( v88 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v89, 0LL, 0, v88, 0x25Au, 0LL);
        }
      }
      else if ( !a1 || (*(unsigned __int8 (__fastcall **)(struct CRectanglesShape *))(*(_QWORD *)a1 + 16LL))(a1) )
      {
        if ( !a4 || CShape::IsAxisAlignedRectangle(a3) && (unsigned __int8)CMILMatrix::Is2DAxisAlignedPreserving<1>(a4) )
        {
          v96 = CShape::CopyShape(a3, (const struct CMILMatrix *)a4, a6);
          v9 = v96;
          if ( v96 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v97, 0LL, 0, v96, 0x229u, 0LL);
        }
      }
      else
      {
        v94 = CShape::CopyShape(a1, 0LL, a6);
        v9 = v94;
        if ( v94 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v95, 0LL, 0, v94, 0x234u, 0LL);
      }
      return v9;
    }
LABEL_66:
    if ( !a3 || (*(unsigned __int8 (__fastcall **)(CShape *))(*(_QWORD *)a3 + 16LL))(a3) )
    {
      v98 = CThreadContext::GetObjectCache(a1);
      v99 = 0LL;
      v100 = *((_DWORD *)v98 + 1);
      if ( v100 )
      {
        v99 = (CRectanglesShape *)*((_QWORD *)v98 + 1);
        *((_QWORD *)v98 + 1) = *(_QWORD *)v99;
        *((_DWORD *)v98 + 1) = v100 - 1;
      }
      if ( v99 || (v99 = (CRectanglesShape *)DefaultHeap::Alloc(0x48uLL)) != 0LL )
        v101 = CRectanglesShape::CRectanglesShape(v99);
      else
        v101 = 0LL;
      *a6 = v101;
      if ( !v101 )
      {
        v102 = 529;
        goto LABEL_201;
      }
      return v9;
    }
    goto LABEL_68;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(struct CRectanglesShape *, CRegionShape **))(*(_QWORD *)a1 + 40LL))(a1, v104)
    || LODWORD(v104[0]) != 1
    || !(*(unsigned __int8 (__fastcall **)(CShape *, CRegionShape **))(*(_QWORD *)a3 + 40LL))(a3, v104)
    || LODWORD(v104[0]) != 1
    || a4
    && ((LOBYTE(v10) = 1, !(unsigned __int8)CMILMatrix::Is2DAffine<1>(a4, v10))
     || COERCE_FLOAT(COERCE_UNSIGNED_INT(a4[1] - 0.0) & _xmm) >= 0.000081380211
     || COERCE_FLOAT(COERCE_UNSIGNED_INT(a4[4] - 0.0) & _xmm) >= 0.000081380211)
    && (COERCE_FLOAT(COERCE_UNSIGNED_INT(*a4 - 0.0) & _xmm) >= 0.000081380211
     || COERCE_FLOAT(COERCE_UNSIGNED_INT(a4[5] - 0.0) & _xmm) >= 0.000081380211) )
  {
    if ( !CanCombineToRegion((__int64)a1, v10, (__int64)a3, (CMILMatrix *)a4) )
    {
      if ( CShape::IsAxisAlignedRectangle(a1)
        && (*(unsigned __int8 (__fastcall **)(CShape *, _QWORD))(*(_QWORD *)a3 + 40LL))(a3, 0LL)
        && !a4
        && a5 == 1 )
      {
        v52 = *(_QWORD *)a1;
        v105 = 0LL;
        (*(void (__fastcall **)(struct CRectanglesShape *, __int128 *, __int64))(v52 + 48))(a1, &v105, 1LL);
        if ( (*(unsigned int (__fastcall **)(CShape *))(*(_QWORD *)a3 + 8LL))(a3) == 2 )
        {
          v53 = CRegionShape::IntersectWithRect((__int64)a3, (float *)&v105, a6);
          v9 = v53;
          if ( v53 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v54, 0LL, 0, v53, 0x2F8u, 0LL);
        }
        else
        {
          v86 = CRectanglesShape::IntersectWithRect(a3, &v105, a6);
          v9 = v86;
          if ( v86 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v87, 0LL, 0, v86, 0x2FFu, 0LL);
        }
      }
      return v9;
    }
    v103[0] = 0LL;
    v32 = CShape::CopyShape(a1, 0LL, v103);
    v9 = v32;
    if ( v32 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v33, 0LL, 0, v32, 0x2CBu, 0LL);
    }
    else
    {
      v104[0] = 0LL;
      v34 = CShape::CopyShape(a3, (const struct CMILMatrix *)a4, v104);
      v9 = v34;
      if ( v34 >= 0 )
      {
        v36 = v103[0];
        v106 = v107;
        v107[0] = 0;
        v37 = FastRegion::CRegion::Copy(
                (const struct FastRegion::Internal::CRgnData **)&v106,
                (const struct FastRegion::Internal::CRgnData **)v103[0] + 2);
        v9 = v37;
        if ( v37 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v38, 0LL, 0, v37, 0x2D1u, 0LL);
          FastRegion::CRegion::FreeMemory((void **)&v106);
          v46 = v104[0];
          if ( !v104[0] )
            goto LABEL_62;
        }
        else
        {
          v39 = v104[0];
          if ( a5 == 1 )
          {
            v40 = FastRegion::CRegion::Intersect(
                    (const struct FastRegion::Internal::CRgnData **)&v106,
                    (const struct FastRegion::Internal::CRgnData **)v104[0] + 2);
            if ( v40 < 0 )
              ModuleFailFastForHRESULT((unsigned int)v40, retaddr);
          }
          else if ( a5 )
          {
            if ( a5 == 2 )
            {
              v84 = FastRegion::CRegion::Subtract(
                      (const struct FastRegion::Internal::CRgnData **)&v106,
                      (const struct FastRegion::Internal::CRgnData **)v104[0] + 2);
              if ( v84 < 0 )
                ModuleFailFastForHRESULT((unsigned int)v84, retaddr);
            }
          }
          else
          {
            v85 = FastRegion::CRegion::Union(
                    (void **)&v106,
                    (const struct FastRegion::Internal::CRgnData **)v104[0] + 2);
            if ( v85 < 0 )
              ModuleFailFastForHRESULT((unsigned int)v85, retaddr);
          }
          v41 = (char *)DefaultHeap::Alloc(0x60uLL);
          v43 = v41;
          if ( v41 )
          {
            memset_0(v41 + 24, 0, 0x40uLL);
            *((_QWORD *)v43 + 1) = 0LL;
            v42 = &CRegionShape::`vftable';
            *(_QWORD *)v43 = &CRegionShape::`vftable';
            *((_QWORD *)v43 + 2) = v43 + 24;
            *((_DWORD *)v43 + 6) = 0;
            *((_QWORD *)v43 + 11) = 0LL;
          }
          else
          {
            v43 = 0LL;
          }
          if ( v43 )
          {
            **((_DWORD **)v43 + 2) = 0;
            v44 = *((_QWORD *)v43 + 11);
            *((_QWORD *)v43 + 11) = 0LL;
            if ( v44 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v44 + 16LL))(v44);
            v45 = FastRegion::CRegion::Copy(
                    (const struct FastRegion::Internal::CRgnData **)v43 + 2,
                    (const struct FastRegion::Internal::CRgnData **)&v106);
            if ( v45 < 0 )
              ModuleFailFastForHRESULT((unsigned int)v45, retaddr);
            *a6 = (struct CShape *)v43;
            FastRegion::CRegion::FreeMemory((void **)&v106);
            if ( !v39 )
              goto LABEL_62;
          }
          else
          {
            v9 = -2147024882;
            MilInstrumentationCheckHR_MaybeFailFast((__int64)v42, 0LL, 0, -2147024882, 0x2E4u, 0LL);
            FastRegion::CRegion::FreeMemory((void **)&v106);
            if ( !v39 )
              goto LABEL_62;
          }
          v46 = v39;
        }
        CRegionShape::`vector deleting destructor'(v46, 1);
LABEL_62:
        if ( !v36 )
          return v9;
        v47 = v36;
LABEL_64:
        CRegionShape::`vector deleting destructor'(v47, 1);
        return v9;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v35, 0LL, 0, v34, 0x2CEu, 0LL);
      if ( v104[0] )
        CRegionShape::`vector deleting destructor'(v104[0], 1);
    }
    v47 = v103[0];
    if ( !v103[0] )
      return v9;
    goto LABEL_64;
  }
  v11 = *(_QWORD *)a1;
  *(_OWORD *)v103 = 0LL;
  v12 = *(__int64 (__fastcall **)(struct CRectanglesShape *, CRegionShape **, _QWORD))(v11 + 32);
  *(_OWORD *)v104 = 0LL;
  v13 = v12(a1, v103, 0LL);
  v9 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x26Eu, 0LL);
    return v9;
  }
  v15 = (*(__int64 (__fastcall **)(CShape *, CRegionShape **, float *))(*(_QWORD *)a3 + 32LL))(a3, v104, a4);
  v9 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x26Fu, 0LL);
    return v9;
  }
  if ( a5 != 1 )
  {
    if ( a5 )
    {
      if ( a5 != 2 )
        return v9;
      if ( (unsigned __int8)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::DoesContain(v104, v103)
        || TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)v103) )
      {
        v66 = CThreadContext::GetObjectCache(v55);
        v67 = 0LL;
        v68 = *((_DWORD *)v66 + 1);
        if ( v68 )
        {
          v67 = (CRectanglesShape *)*((_QWORD *)v66 + 1);
          *((_QWORD *)v66 + 1) = *(_QWORD *)v67;
          *((_DWORD *)v66 + 1) = v68 - 1;
        }
        if ( v67 || (v67 = (CRectanglesShape *)DefaultHeap::Alloc(0x48uLL)) != 0LL )
          v69 = CRectanglesShape::CRectanglesShape(v67);
        else
          v69 = 0LL;
        *a6 = v69;
        if ( !v69 )
        {
          v102 = 651;
          goto LABEL_201;
        }
        return v9;
      }
      if ( !(unsigned __int8)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::DoesIntersectInclusive(
                               v103,
                               v104) )
      {
        v57 = CShape::CopyShape(a1, 0LL, a6);
        v9 = v57;
        if ( v57 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v58, 0LL, 0, v57, 0x290u, 0LL);
        return v9;
      }
      if ( !CanCombineToRegion((__int64)a1, v56, (__int64)a3, (CMILMatrix *)a4) )
        return v9;
      v107[0] = 0;
      v108 = v109;
      v109[0] = 0;
      v106 = v107;
      CRegion::AppendRects<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>>(
        (FastRegion::CRegion *)&v108,
        (float *)v103);
      *v106 = 0;
      CRegion::AppendRects<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>>(
        (FastRegion::CRegion *)&v106,
        (float *)v104);
      v59 = FastRegion::CRegion::Subtract(
              (const struct FastRegion::Internal::CRgnData **)&v108,
              (const struct FastRegion::Internal::CRgnData **)&v106);
      if ( v59 < 0 )
        ModuleFailFastForHRESULT((unsigned int)v59, retaddr);
      v60 = (char *)DefaultHeap::Alloc(0x60uLL);
      v62 = v60;
      if ( v60 )
      {
        memset_0(v60 + 24, 0, 0x40uLL);
        *((_QWORD *)v62 + 1) = 0LL;
        v61 = &CRegionShape::`vftable';
        *(_QWORD *)v62 = &CRegionShape::`vftable';
        *((_QWORD *)v62 + 2) = v62 + 24;
        *((_DWORD *)v62 + 6) = 0;
        *((_QWORD *)v62 + 11) = 0LL;
      }
      else
      {
        v62 = 0LL;
      }
      if ( v62 )
      {
        **((_DWORD **)v62 + 2) = 0;
        v64 = *((_QWORD *)v62 + 11);
        *((_QWORD *)v62 + 11) = 0LL;
        if ( v64 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v64 + 16LL))(v64);
        v65 = FastRegion::CRegion::Copy(
                (const struct FastRegion::Internal::CRgnData **)v62 + 2,
                (const struct FastRegion::Internal::CRgnData **)&v108);
        if ( v65 < 0 )
          ModuleFailFastForHRESULT((unsigned int)v65, retaddr);
        *a6 = (struct CShape *)v62;
      }
      else
      {
        v9 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast((__int64)v61, 0LL, 0, -2147024882, 0x29Du, 0LL);
      }
      FastRegion::CRegion::FreeMemory((void **)&v106);
      v63 = (void **)&v108;
    }
    else
    {
      if ( (unsigned __int8)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::DoesContain(v103, v104)
        || TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)v104) )
      {
        v79 = CShape::CopyShape(a1, 0LL, a6);
        v9 = v79;
        if ( v79 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v80, 0LL, 0, v79, 0x2A9u, 0LL);
        return v9;
      }
      if ( (unsigned __int8)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::DoesContain(v104, v103)
        || TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)v103) )
      {
        v77 = CShape::CopyShape(a3, (const struct CMILMatrix *)a4, a6);
        v9 = v77;
        if ( v77 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v78, 0LL, 0, v77, 0x2ADu, 0LL);
        return v9;
      }
      if ( !CanCombineToRegion((__int64)a1, v70, (__int64)a3, (CMILMatrix *)a4) )
        return v9;
      v109[0] = 0;
      v106 = v107;
      v107[0] = 0;
      v108 = v109;
      CRegion::AppendRects<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>>(
        (FastRegion::CRegion *)&v106,
        (float *)v103);
      *v108 = 0;
      CRegion::AppendRects<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>>(
        (FastRegion::CRegion *)&v108,
        (float *)v104);
      v71 = FastRegion::CRegion::Union((void **)&v106, (const struct FastRegion::Internal::CRgnData **)&v108);
      if ( v71 < 0 )
        ModuleFailFastForHRESULT((unsigned int)v71, retaddr);
      v72 = (char *)DefaultHeap::Alloc(0x60uLL);
      v74 = v72;
      if ( v72 )
      {
        memset_0(v72 + 24, 0, 0x40uLL);
        *((_QWORD *)v74 + 1) = 0LL;
        v73 = &CRegionShape::`vftable';
        *(_QWORD *)v74 = &CRegionShape::`vftable';
        *((_QWORD *)v74 + 2) = v74 + 24;
        *((_DWORD *)v74 + 6) = 0;
        *((_QWORD *)v74 + 11) = 0LL;
      }
      else
      {
        v74 = 0LL;
      }
      if ( !v74 )
      {
        v9 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast((__int64)v73, 0LL, 0, -2147024882, 0x2BAu, 0LL);
        FastRegion::CRegion::FreeMemory((void **)&v108);
        FastRegion::CRegion::FreeMemory((void **)&v106);
        return v9;
      }
      **((_DWORD **)v74 + 2) = 0;
      v75 = *((_QWORD *)v74 + 11);
      *((_QWORD *)v74 + 11) = 0LL;
      if ( v75 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v75 + 16LL))(v75);
      v76 = FastRegion::CRegion::Copy(
              (const struct FastRegion::Internal::CRgnData **)v74 + 2,
              (const struct FastRegion::Internal::CRgnData **)&v106);
      if ( v76 < 0 )
        ModuleFailFastForHRESULT((unsigned int)v76, retaddr);
      *a6 = (struct CShape *)v74;
      FastRegion::CRegion::FreeMemory((void **)&v108);
      v63 = (void **)&v106;
    }
    FastRegion::CRegion::FreeMemory(v63);
    return v9;
  }
  v17 = *(float *)v103;
  if ( *(float *)v104 > *(float *)v103 )
  {
    LODWORD(v103[0]) = v104[0];
    v17 = *(float *)v104;
  }
  v18 = *((float *)v103 + 1);
  if ( *((float *)v104 + 1) > *((float *)v103 + 1) )
  {
    HIDWORD(v103[0]) = HIDWORD(v104[0]);
    v18 = *((float *)v104 + 1);
  }
  v19 = *(float *)&v103[1];
  if ( *(float *)&v103[1] > *(float *)&v104[1] )
  {
    LODWORD(v103[1]) = v104[1];
    v19 = *(float *)&v104[1];
  }
  v20 = *((float *)&v103[1] + 1);
  if ( *((float *)&v103[1] + 1) > *((float *)&v104[1] + 1) )
  {
    HIDWORD(v103[1]) = HIDWORD(v104[1]);
    v20 = *((float *)&v104[1] + 1);
  }
  if ( v19 <= v17 || v20 <= v18 )
  {
    v103[1] = 0LL;
    v103[0] = 0LL;
  }
  if ( (*(unsigned int (__fastcall **)(struct CRectanglesShape *))(*(_QWORD *)a1 + 8LL))(a1) == 2
    && (*(unsigned int (__fastcall **)(CShape *))(*(_QWORD *)a3 + 8LL))(a3) == 2
    && (!a4 || CMILMatrix::Is2DAxisAlignedIntegerPreserving((CMILMatrix *)a4)) )
  {
    v28 = (char *)DefaultHeap::Alloc(0x60uLL);
    v29 = v28;
    if ( v28 )
    {
      memset_0(v28 + 24, 0, 0x40uLL);
      *((_QWORD *)v29 + 1) = 0LL;
      v26 = &CRegionShape::`vftable';
      *(_QWORD *)v29 = &CRegionShape::`vftable';
      *((_QWORD *)v29 + 2) = v29 + 24;
      *((_DWORD *)v29 + 6) = 0;
      *((_QWORD *)v29 + 11) = 0LL;
    }
    else
    {
      v29 = 0LL;
    }
    if ( v29 )
    {
      v30 = CMilRectLFromMilRectF((int *)&v105, (__int64)v103);
      **((_DWORD **)v29 + 2) = 0;
      v31 = *((_QWORD *)v29 + 11);
      *((_QWORD *)v29 + 11) = 0LL;
      if ( v31 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
      CRegion::AppendRects<TMilRect_<int,tagRECT,MilPointAndSizeL,Mil3DRectL,RectUniqueness::_CMilRectL_>>(
        (FastRegion::CRegion *)(v29 + 16),
        (__int64)v30,
        1u);
      *a6 = (struct CShape *)v29;
      return v9;
    }
    v102 = 634;
LABEL_201:
    v9 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v26, 0LL, 0, -2147024882, v102, 0LL);
    return v9;
  }
  Value = TlsGetValue(CThreadContext::s_dwTlsIndex);
  if ( !Value )
  {
    v81 = operator new(0x118uLL);
    Value = v81;
    if ( !v81 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v82, 0LL, 0, -2147024882, 0x42u, 0LL);
      ModuleFailFastForHRESULT(2147942414LL, retaddr);
    }
    *v81 = 0LL;
    v81[1] = 0LL;
    v81[2] = 0LL;
    v83 = CThreadContext::s_dwTlsIndex;
    v81[3] = 0LL;
    v81[4] = 0LL;
    v81[5] = 0LL;
    v81[6] = 0LL;
    v81[7] = 0LL;
    v81[8] = 0LL;
    v81[9] = 0LL;
    v81[10] = 0LL;
    v81[11] = 0LL;
    v81[12] = 0LL;
    v81[13] = 0LL;
    v81[14] = 0LL;
    v81[15] = 0LL;
    v81[16] = 0LL;
    v81[17] = 0LL;
    v81[18] = 0LL;
    v81[19] = 0LL;
    v81[20] = 0LL;
    v81[21] = 0LL;
    v81[22] = 0LL;
    v81[23] = 0LL;
    v81[24] = 0LL;
    v81[25] = 0LL;
    v81[26] = 0LL;
    v81[27] = 0LL;
    v81[28] = 0LL;
    v81[29] = 0LL;
    v81[30] = 0LL;
    v81[31] = 0LL;
    v81[32] = 0LL;
    v81[33] = 0LL;
    v81[34] = 0LL;
    TlsSetValue(v83, v81);
  }
  v22 = Value[3];
  v23 = 0LL;
  if ( v22 )
  {
    v23 = (_QWORD *)*((_QWORD *)Value + 2);
    *((_QWORD *)Value + 2) = *v23;
    Value[3] = v22 - 1;
  }
  if ( v23 || (v23 = DefaultHeap::Alloc(0x48uLL)) != 0LL )
  {
    v23[1] = 0LL;
    *v23 = &CRectanglesShape::`vftable';
    v23[2] = v23 + 6;
    v23[3] = v23 + 6;
    *((_DWORD *)v23 + 8) = 1;
    *(_QWORD *)((char *)v23 + 36) = 1LL;
    TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>::TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>(v23 + 6);
    v23[8] = 0LL;
    v24 = (void *)v23[2];
    *((_DWORD *)v23 + 10) = 0;
    if ( v24 != (void *)v23[3] )
    {
      operator delete(v24);
      v23[2] = v23[3];
      *((_DWORD *)v23 + 9) = *((_DWORD *)v23 + 8);
    }
    v25 = v23[8];
    if ( v25 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
      v23[8] = 0LL;
    }
    v105 = *(_OWORD *)v103;
    DynArray<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,0>::AddMultipleAndSet(
      v23 + 2,
      &v105,
      1LL);
  }
  else
  {
    v23 = 0LL;
  }
  *a6 = (struct CShape *)v23;
  if ( !v23 )
  {
    v102 = 641;
    goto LABEL_201;
  }
  return v9;
}
