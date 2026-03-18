/*
 * XREFs of ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x180072F50
 * Callers:
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x180072EDC (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEAULayoutData@CContent@@PEAPEAVCShape@@@Z @ 0x180091C20 (-ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEAULayoutData@CContent@@PEAPEAVCShape@@@Z.c)
 *     ?ComputeBrushClamp@CBrushDrawListGenerator@@CAJV?$span@PEBVCDrawListBrush@@$0?0@gsl@@KAEBVMatrix3x3@@PEAPEAVCShape@@@Z @ 0x1800A03D0 (-ComputeBrushClamp@CBrushDrawListGenerator@@CAJV-$span@PEBVCDrawListBrush@@$0-0@gsl@@KAEBVMatrix.c)
 * Callees:
 *     ?CMilRectLFromMilRectF@@YA?AV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBUMilRectF@@@Z @ 0x180009C18 (-CMilRectLFromMilRectF@@YA-AV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_.c)
 *     CanCombineToRegion @ 0x1800188E8 (CanCombineToRegion.c)
 *     ?IntersectWithRect@CRegionShape@@QEBAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVCShape@@@Z @ 0x18001ACA8 (-IntersectWithRect@CRegionShape@@QEBAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF.c)
 *     ?Is2DAxisAlignedIntegerPreserving@CMILMatrix@@QEBA_N_N@Z @ 0x18001CD84 (-Is2DAxisAlignedIntegerPreserving@CMILMatrix@@QEBA_N_N@Z.c)
 *     ?Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800473E8 (-Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCRectanglesShape@@@Z @ 0x180064A5C (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCRectanglesShape@@@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180065090 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?AddMultipleAndSet@?$DynArray@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0A@@@QEAAJPEFBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x180066090 (-AddMultipleAndSet@-$DynArray@V-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeede.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180066E94 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CRectanglesShape@@QEAA@XZ @ 0x180069850 (--0CRectanglesShape@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18006D9A8 (--2@YAPEAX_K@Z.c)
 *     ?IsAxisAlignedRectangle@CShape@@QEBA_NXZ @ 0x18007705C (-IsAxisAlignedRectangle@CShape@@QEBA_NXZ.c)
 *     ?DoesContain@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180085460 (-DoesContain@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x18008B360 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ??$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x18008CFA0 (--$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18009F4CC (--3@YAXPEAX@Z.c)
 *     ?Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800A353C (-Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800A362C (-Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800A5E54 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??$AppendRects@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@CRegion@@QEAAXPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x1800A5EE8 (--$AppendRects@V-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniquene.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800A6118 (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ??$AppendRects@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@CRegion@@QEAAXPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x1800A63AC (--$AppendRects@V-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquenes.c)
 *     ??_ECRegionShape@@UEAAPEAXI@Z @ 0x1800A7550 (--_ECRegionShape@@UEAAPEAXI@Z.c)
 *     ?DoesIntersectInclusive@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800BC424 (-DoesIntersectInclusive@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NA.c)
 *     ??$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z @ 0x1800BDEAC (--$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ??0?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@QEAA@XZ @ 0x1800DDA90 (--0-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E3DCC (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x18020CF74 (ModuleFailFastForHRESULT.c)
 *     ?IntersectWithRect@CRectanglesShape@@QEBAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVCShape@@@Z @ 0x18025A620 (-IntersectWithRect@CRectanglesShape@@QEBAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndS.c)
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
  __int64 v30; // rcx
  int v31; // eax
  __int64 v32; // rcx
  int v33; // eax
  __int64 v34; // rcx
  CRegionShape *v35; // rdi
  int v36; // eax
  __int64 v37; // rcx
  CRegionShape *v38; // r14
  int v39; // eax
  char *v40; // rax
  const unsigned int *v41; // rcx
  char *v42; // rbx
  __int64 v43; // rcx
  int v44; // eax
  CRegionShape *v45; // rcx
  CRegionShape *v46; // rcx
  struct CObjectCache *ObjectCache; // rdx
  CRectanglesShape *v48; // rax
  int v49; // r8d
  CRectanglesShape *v50; // rax
  __int64 v51; // rax
  int v52; // eax
  __int64 v53; // rcx
  struct CRectanglesShape *v54; // rcx
  __int64 v55; // rdx
  int v56; // eax
  __int64 v57; // rcx
  int v58; // eax
  char *v59; // rax
  const unsigned int *v60; // rcx
  char *v61; // rbx
  const struct FastRegion::Internal::CRgnData **v62; // rcx
  __int64 v63; // rcx
  int v64; // eax
  struct CObjectCache *v65; // rdx
  CRectanglesShape *v66; // rax
  int v67; // r8d
  CRectanglesShape *v68; // rax
  __int64 v69; // rdx
  int v70; // eax
  char *v71; // rax
  const unsigned int *v72; // rcx
  char *v73; // rbx
  __int64 v74; // rcx
  int v75; // eax
  int v76; // eax
  __int64 v77; // rcx
  int v78; // eax
  __int64 v79; // rcx
  _QWORD *v80; // rax
  __int64 v81; // rcx
  DWORD v82; // ecx
  int v83; // eax
  int v84; // eax
  int v85; // eax
  __int64 v86; // rcx
  int v87; // eax
  __int64 v88; // rcx
  struct CObjectCache *v89; // rdx
  CRectanglesShape *v90; // rax
  int v91; // r8d
  CRectanglesShape *v92; // rax
  int v93; // eax
  __int64 v94; // rcx
  int v95; // eax
  __int64 v96; // rcx
  struct CObjectCache *v97; // rdx
  CRectanglesShape *v98; // rax
  int v99; // r8d
  CRectanglesShape *v100; // rax
  unsigned int v101; // [rsp+20h] [rbp-E0h]
  CRegionShape *v102[2]; // [rsp+30h] [rbp-D0h] BYREF
  CRegionShape *v103[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v104; // [rsp+50h] [rbp-B0h] BYREF
  const struct FastRegion::Internal::CRgnData *v105; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD v106[18]; // [rsp+68h] [rbp-98h] BYREF
  const struct FastRegion::Internal::CRgnData *v107; // [rsp+B0h] [rbp-50h] BYREF
  _DWORD v108[18]; // [rsp+B8h] [rbp-48h] BYREF
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
        v48 = 0LL;
        v49 = *((_DWORD *)ObjectCache + 1);
        if ( v49 )
        {
          v48 = (CRectanglesShape *)*((_QWORD *)ObjectCache + 1);
          *((_QWORD *)ObjectCache + 1) = *(_QWORD *)v48;
          *((_DWORD *)ObjectCache + 1) = v49 - 1;
        }
        if ( v48 || (v48 = (CRectanglesShape *)DefaultHeap::Alloc(0x48uLL)) != 0LL )
          v50 = CRectanglesShape::CRectanglesShape(v48);
        else
          v50 = 0LL;
        *a6 = v50;
        if ( !v50 )
        {
          v101 = 576;
          goto LABEL_201;
        }
      }
      else if ( a5 )
      {
        if ( a5 != 2 )
          return v9;
        if ( !a1 || (*(unsigned __int8 (__fastcall **)(struct CRectanglesShape *))(*(_QWORD *)a1 + 16LL))(a1) )
        {
          v89 = CThreadContext::GetObjectCache(a1);
          v90 = 0LL;
          v91 = *((_DWORD *)v89 + 1);
          if ( v91 )
          {
            v90 = (CRectanglesShape *)*((_QWORD *)v89 + 1);
            *((_QWORD *)v89 + 1) = *(_QWORD *)v90;
            *((_DWORD *)v89 + 1) = v91 - 1;
          }
          if ( v90 || (v90 = (CRectanglesShape *)DefaultHeap::Alloc(0x48uLL)) != 0LL )
            v92 = CRectanglesShape::CRectanglesShape(v90);
          else
            v92 = 0LL;
          *a6 = v92;
          if ( !v92 )
          {
            v101 = 590;
            goto LABEL_201;
          }
        }
        else
        {
          v87 = CShape::CopyShape(a1, 0LL, a6);
          v9 = v87;
          if ( v87 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v88, 0LL, 0, v87, 0x25Au, 0LL);
        }
      }
      else if ( !a1 || (*(unsigned __int8 (__fastcall **)(struct CRectanglesShape *))(*(_QWORD *)a1 + 16LL))(a1) )
      {
        if ( !a4 || CShape::IsAxisAlignedRectangle(a3) && (unsigned __int8)CMILMatrix::Is2DAxisAlignedPreserving<1>(a4) )
        {
          v95 = CShape::CopyShape(a3, (const struct CMILMatrix *)a4, a6);
          v9 = v95;
          if ( v95 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v96, 0LL, 0, v95, 0x229u, 0LL);
        }
      }
      else
      {
        v93 = CShape::CopyShape(a1, 0LL, a6);
        v9 = v93;
        if ( v93 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v94, 0LL, 0, v93, 0x234u, 0LL);
      }
      return v9;
    }
LABEL_66:
    if ( !a3 || (*(unsigned __int8 (__fastcall **)(CShape *))(*(_QWORD *)a3 + 16LL))(a3) )
    {
      v97 = CThreadContext::GetObjectCache(a1);
      v98 = 0LL;
      v99 = *((_DWORD *)v97 + 1);
      if ( v99 )
      {
        v98 = (CRectanglesShape *)*((_QWORD *)v97 + 1);
        *((_QWORD *)v97 + 1) = *(_QWORD *)v98;
        *((_DWORD *)v97 + 1) = v99 - 1;
      }
      if ( v98 || (v98 = (CRectanglesShape *)DefaultHeap::Alloc(0x48uLL)) != 0LL )
        v100 = CRectanglesShape::CRectanglesShape(v98);
      else
        v100 = 0LL;
      *a6 = v100;
      if ( !v100 )
      {
        v101 = 529;
        goto LABEL_201;
      }
      return v9;
    }
    goto LABEL_68;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(struct CRectanglesShape *, CRegionShape **))(*(_QWORD *)a1 + 40LL))(a1, v103)
    || LODWORD(v103[0]) != 1
    || !(*(unsigned __int8 (__fastcall **)(CShape *, CRegionShape **))(*(_QWORD *)a3 + 40LL))(a3, v103)
    || LODWORD(v103[0]) != 1
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
        v51 = *(_QWORD *)a1;
        v104 = 0LL;
        (*(void (__fastcall **)(struct CRectanglesShape *, __int128 *, __int64))(v51 + 48))(a1, &v104, 1LL);
        if ( (*(unsigned int (__fastcall **)(CShape *))(*(_QWORD *)a3 + 8LL))(a3) == 2 )
        {
          v52 = CRegionShape::IntersectWithRect((__int64)a3, (float *)&v104, a6);
          v9 = v52;
          if ( v52 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v53, 0LL, 0, v52, 0x2F8u, 0LL);
        }
        else
        {
          v85 = CRectanglesShape::IntersectWithRect(a3, &v104, a6);
          v9 = v85;
          if ( v85 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v86, 0LL, 0, v85, 0x2FFu, 0LL);
        }
      }
      return v9;
    }
    v102[0] = 0LL;
    v31 = CShape::CopyShape(a1, 0LL, v102);
    v9 = v31;
    if ( v31 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0, v31, 0x2CBu, 0LL);
    }
    else
    {
      v103[0] = 0LL;
      v33 = CShape::CopyShape(a3, (const struct CMILMatrix *)a4, v103);
      v9 = v33;
      if ( v33 >= 0 )
      {
        v35 = v102[0];
        v105 = (const struct FastRegion::Internal::CRgnData *)v106;
        v106[0] = 0;
        v36 = FastRegion::CRegion::Copy((FastRegion::CRegion *)&v105, (CRegionShape *)((char *)v102[0] + 16));
        v9 = v36;
        if ( v36 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v37, 0LL, 0, v36, 0x2D1u, 0LL);
          FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v105);
          v45 = v103[0];
          if ( !v103[0] )
            goto LABEL_62;
        }
        else
        {
          v38 = v103[0];
          if ( a5 == 1 )
          {
            v39 = FastRegion::CRegion::Intersect((FastRegion::CRegion *)&v105, (CRegionShape *)((char *)v103[0] + 16));
            if ( v39 < 0 )
              ModuleFailFastForHRESULT((unsigned int)v39, retaddr);
          }
          else if ( a5 )
          {
            if ( a5 == 2 )
            {
              v83 = FastRegion::CRegion::Subtract(&v105, (const struct FastRegion::Internal::CRgnData **)v103[0] + 2);
              if ( v83 < 0 )
                ModuleFailFastForHRESULT((unsigned int)v83, retaddr);
            }
          }
          else
          {
            v84 = FastRegion::CRegion::Union((FastRegion::CRegion *)&v105, (CRegionShape *)((char *)v103[0] + 16));
            if ( v84 < 0 )
              ModuleFailFastForHRESULT((unsigned int)v84, retaddr);
          }
          v40 = (char *)DefaultHeap::Alloc(0x60uLL);
          v42 = v40;
          if ( v40 )
          {
            memset_0(v40 + 24, 0, 0x40uLL);
            *((_QWORD *)v42 + 1) = 0LL;
            v41 = &CRegionShape::`vftable';
            *(_QWORD *)v42 = &CRegionShape::`vftable';
            *((_QWORD *)v42 + 2) = v42 + 24;
            *((_DWORD *)v42 + 6) = 0;
            *((_QWORD *)v42 + 11) = 0LL;
          }
          else
          {
            v42 = 0LL;
          }
          if ( v42 )
          {
            **((_DWORD **)v42 + 2) = 0;
            v43 = *((_QWORD *)v42 + 11);
            *((_QWORD *)v42 + 11) = 0LL;
            if ( v43 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 16LL))(v43);
            v44 = FastRegion::CRegion::Copy((FastRegion::CRegion *)(v42 + 16), (const struct CRegion *)&v105);
            if ( v44 < 0 )
              ModuleFailFastForHRESULT((unsigned int)v44, retaddr);
            *a6 = (struct CShape *)v42;
            FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v105);
            if ( !v38 )
              goto LABEL_62;
          }
          else
          {
            v9 = -2147024882;
            MilInstrumentationCheckHR_MaybeFailFast((__int64)v41, 0LL, 0, -2147024882, 0x2E4u, 0LL);
            FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v105);
            if ( !v38 )
              goto LABEL_62;
          }
          v45 = v38;
        }
        CRegionShape::`vector deleting destructor'(v45, 1u);
LABEL_62:
        if ( !v35 )
          return v9;
        v46 = v35;
LABEL_64:
        CRegionShape::`vector deleting destructor'(v46, 1u);
        return v9;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v34, 0LL, 0, v33, 0x2CEu, 0LL);
      if ( v103[0] )
        CRegionShape::`vector deleting destructor'(v103[0], 1u);
    }
    v46 = v102[0];
    if ( !v102[0] )
      return v9;
    goto LABEL_64;
  }
  v11 = *(_QWORD *)a1;
  *(_OWORD *)v102 = 0LL;
  v12 = *(__int64 (__fastcall **)(struct CRectanglesShape *, CRegionShape **, _QWORD))(v11 + 32);
  *(_OWORD *)v103 = 0LL;
  v13 = v12(a1, v102, 0LL);
  v9 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x26Eu, 0LL);
    return v9;
  }
  v15 = (*(__int64 (__fastcall **)(CShape *, CRegionShape **, float *))(*(_QWORD *)a3 + 32LL))(a3, v103, a4);
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
      if ( (unsigned __int8)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::DoesContain(v103, v102)
        || TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)v102) )
      {
        v65 = CThreadContext::GetObjectCache(v54);
        v66 = 0LL;
        v67 = *((_DWORD *)v65 + 1);
        if ( v67 )
        {
          v66 = (CRectanglesShape *)*((_QWORD *)v65 + 1);
          *((_QWORD *)v65 + 1) = *(_QWORD *)v66;
          *((_DWORD *)v65 + 1) = v67 - 1;
        }
        if ( v66 || (v66 = (CRectanglesShape *)DefaultHeap::Alloc(0x48uLL)) != 0LL )
          v68 = CRectanglesShape::CRectanglesShape(v66);
        else
          v68 = 0LL;
        *a6 = v68;
        if ( !v68 )
        {
          v101 = 651;
          goto LABEL_201;
        }
        return v9;
      }
      if ( !(unsigned __int8)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::DoesIntersectInclusive(
                               v102,
                               v103) )
      {
        v56 = CShape::CopyShape(a1, 0LL, a6);
        v9 = v56;
        if ( v56 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v57, 0LL, 0, v56, 0x290u, 0LL);
        return v9;
      }
      if ( !CanCombineToRegion((__int64)a1, v55, (__int64)a3, (CMILMatrix *)a4) )
        return v9;
      v106[0] = 0;
      v107 = (const struct FastRegion::Internal::CRgnData *)v108;
      v108[0] = 0;
      v105 = (const struct FastRegion::Internal::CRgnData *)v106;
      CRegion::AppendRects<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>>((FastRegion::CRegion *)&v107);
      *(_DWORD *)v105 = 0;
      CRegion::AppendRects<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>>((FastRegion::CRegion *)&v105);
      v58 = FastRegion::CRegion::Subtract(&v107, &v105);
      if ( v58 < 0 )
        ModuleFailFastForHRESULT((unsigned int)v58, retaddr);
      v59 = (char *)DefaultHeap::Alloc(0x60uLL);
      v61 = v59;
      if ( v59 )
      {
        memset_0(v59 + 24, 0, 0x40uLL);
        *((_QWORD *)v61 + 1) = 0LL;
        v60 = &CRegionShape::`vftable';
        *(_QWORD *)v61 = &CRegionShape::`vftable';
        *((_QWORD *)v61 + 2) = v61 + 24;
        *((_DWORD *)v61 + 6) = 0;
        *((_QWORD *)v61 + 11) = 0LL;
      }
      else
      {
        v61 = 0LL;
      }
      if ( v61 )
      {
        **((_DWORD **)v61 + 2) = 0;
        v63 = *((_QWORD *)v61 + 11);
        *((_QWORD *)v61 + 11) = 0LL;
        if ( v63 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v63 + 16LL))(v63);
        v64 = FastRegion::CRegion::Copy((FastRegion::CRegion *)(v61 + 16), (const struct CRegion *)&v107);
        if ( v64 < 0 )
          ModuleFailFastForHRESULT((unsigned int)v64, retaddr);
        *a6 = (struct CShape *)v61;
      }
      else
      {
        v9 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast((__int64)v60, 0LL, 0, -2147024882, 0x29Du, 0LL);
      }
      FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v105);
      v62 = &v107;
    }
    else
    {
      if ( (unsigned __int8)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::DoesContain(v102, v103)
        || TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)v103) )
      {
        v78 = CShape::CopyShape(a1, 0LL, a6);
        v9 = v78;
        if ( v78 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v79, 0LL, 0, v78, 0x2A9u, 0LL);
        return v9;
      }
      if ( (unsigned __int8)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::DoesContain(v103, v102)
        || TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)v102) )
      {
        v76 = CShape::CopyShape(a3, (const struct CMILMatrix *)a4, a6);
        v9 = v76;
        if ( v76 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v77, 0LL, 0, v76, 0x2ADu, 0LL);
        return v9;
      }
      if ( !CanCombineToRegion((__int64)a1, v69, (__int64)a3, (CMILMatrix *)a4) )
        return v9;
      v108[0] = 0;
      v105 = (const struct FastRegion::Internal::CRgnData *)v106;
      v106[0] = 0;
      v107 = (const struct FastRegion::Internal::CRgnData *)v108;
      CRegion::AppendRects<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>>((FastRegion::CRegion *)&v105);
      *(_DWORD *)v107 = 0;
      CRegion::AppendRects<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>>((FastRegion::CRegion *)&v107);
      v70 = FastRegion::CRegion::Union((FastRegion::CRegion *)&v105, (const struct CRegion *)&v107);
      if ( v70 < 0 )
        ModuleFailFastForHRESULT((unsigned int)v70, retaddr);
      v71 = (char *)DefaultHeap::Alloc(0x60uLL);
      v73 = v71;
      if ( v71 )
      {
        memset_0(v71 + 24, 0, 0x40uLL);
        *((_QWORD *)v73 + 1) = 0LL;
        v72 = &CRegionShape::`vftable';
        *(_QWORD *)v73 = &CRegionShape::`vftable';
        *((_QWORD *)v73 + 2) = v73 + 24;
        *((_DWORD *)v73 + 6) = 0;
        *((_QWORD *)v73 + 11) = 0LL;
      }
      else
      {
        v73 = 0LL;
      }
      if ( !v73 )
      {
        v9 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast((__int64)v72, 0LL, 0, -2147024882, 0x2BAu, 0LL);
        FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v107);
        FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v105);
        return v9;
      }
      **((_DWORD **)v73 + 2) = 0;
      v74 = *((_QWORD *)v73 + 11);
      *((_QWORD *)v73 + 11) = 0LL;
      if ( v74 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v74 + 16LL))(v74);
      v75 = FastRegion::CRegion::Copy((FastRegion::CRegion *)(v73 + 16), (const struct CRegion *)&v105);
      if ( v75 < 0 )
        ModuleFailFastForHRESULT((unsigned int)v75, retaddr);
      *a6 = (struct CShape *)v73;
      FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v107);
      v62 = &v105;
    }
    FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)v62);
    return v9;
  }
  v17 = *(float *)v102;
  if ( *(float *)v103 > *(float *)v102 )
  {
    LODWORD(v102[0]) = v103[0];
    v17 = *(float *)v103;
  }
  v18 = *((float *)v102 + 1);
  if ( *((float *)v103 + 1) > *((float *)v102 + 1) )
  {
    HIDWORD(v102[0]) = HIDWORD(v103[0]);
    v18 = *((float *)v103 + 1);
  }
  v19 = *(float *)&v102[1];
  if ( *(float *)&v102[1] > *(float *)&v103[1] )
  {
    LODWORD(v102[1]) = v103[1];
    v19 = *(float *)&v103[1];
  }
  v20 = *((float *)&v102[1] + 1);
  if ( *((float *)&v102[1] + 1) > *((float *)&v103[1] + 1) )
  {
    HIDWORD(v102[1]) = HIDWORD(v103[1]);
    v20 = *((float *)&v103[1] + 1);
  }
  if ( v19 <= v17 || v20 <= v18 )
  {
    v102[1] = 0LL;
    v102[0] = 0LL;
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
      CMilRectLFromMilRectF((int *)&v104, (__int64)v102);
      **((_DWORD **)v29 + 2) = 0;
      v30 = *((_QWORD *)v29 + 11);
      *((_QWORD *)v29 + 11) = 0LL;
      if ( v30 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
      CRegion::AppendRects<TMilRect_<int,tagRECT,MilPointAndSizeL,Mil3DRectL,RectUniqueness::_CMilRectL_>>((FastRegion::CRegion *)(v29 + 16));
      *a6 = (struct CShape *)v29;
      return v9;
    }
    v101 = 634;
LABEL_201:
    v9 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v26, 0LL, 0, -2147024882, v101, 0LL);
    return v9;
  }
  Value = TlsGetValue(CThreadContext::s_dwTlsIndex);
  if ( !Value )
  {
    v80 = operator new(0x118uLL);
    Value = v80;
    if ( !v80 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v81, 0LL, 0, -2147024882, 0x42u, 0LL);
      ModuleFailFastForHRESULT(2147942414LL, retaddr);
    }
    *v80 = 0LL;
    v80[1] = 0LL;
    v80[2] = 0LL;
    v82 = CThreadContext::s_dwTlsIndex;
    v80[3] = 0LL;
    v80[4] = 0LL;
    v80[5] = 0LL;
    v80[6] = 0LL;
    v80[7] = 0LL;
    v80[8] = 0LL;
    v80[9] = 0LL;
    v80[10] = 0LL;
    v80[11] = 0LL;
    v80[12] = 0LL;
    v80[13] = 0LL;
    v80[14] = 0LL;
    v80[15] = 0LL;
    v80[16] = 0LL;
    v80[17] = 0LL;
    v80[18] = 0LL;
    v80[19] = 0LL;
    v80[20] = 0LL;
    v80[21] = 0LL;
    v80[22] = 0LL;
    v80[23] = 0LL;
    v80[24] = 0LL;
    v80[25] = 0LL;
    v80[26] = 0LL;
    v80[27] = 0LL;
    v80[28] = 0LL;
    v80[29] = 0LL;
    v80[30] = 0LL;
    v80[31] = 0LL;
    v80[32] = 0LL;
    v80[33] = 0LL;
    v80[34] = 0LL;
    TlsSetValue(v82, v80);
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
    v104 = *(_OWORD *)v102;
    DynArray<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,0>::AddMultipleAndSet(
      (__int64)(v23 + 2),
      &v104,
      1LL);
  }
  else
  {
    v23 = 0LL;
  }
  *a6 = (struct CShape *)v23;
  if ( !v23 )
  {
    v101 = 641;
    goto LABEL_201;
  }
  return v9;
}
