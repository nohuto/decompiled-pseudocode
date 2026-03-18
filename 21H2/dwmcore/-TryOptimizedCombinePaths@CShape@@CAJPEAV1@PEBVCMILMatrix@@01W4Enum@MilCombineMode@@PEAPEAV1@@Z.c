/*
 * XREFs of ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800AD920
 * Callers:
 *     ?ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEAULayoutData@CContent@@PEAPEAVCShape@@@Z @ 0x1800ABBF0 (-ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEAULayoutData@CContent@@PEAPEAVCShape@@@Z.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800AD884 (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?TryAddRectangle@CRegion@@QEAAJAEBUtagRECT@@@Z @ 0x18001501C (-TryAddRectangle@CRegion@@QEAAJAEBUtagRECT@@@Z.c)
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x18003FA54 (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 *     ??_ECRegionShape@@UEAAPEAXI@Z @ 0x180063530 (--_ECRegionShape@@UEAAPEAXI@Z.c)
 *     ?IsAxisAlignedRectangle@CShape@@QEBA_NXZ @ 0x180063700 (-IsAxisAlignedRectangle@CShape@@QEBA_NXZ.c)
 *     ?BuildFromRects@CRegionShape@@QEAAXPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x180063748 (-BuildFromRects@CRegionShape@@QEAAXPEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?DoesIntersectInclusive@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800807A0 (-DoesIntersectInclusive@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NA.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080A44 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180082054 (-Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?Subtract@CRegion@@QEAAXAEBV1@@Z @ 0x1800823C8 (-Subtract@CRegion@@QEAAXAEBV1@@Z.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18008248C (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180083EF4 (-Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?TryClipWithRect@CRoundedRectangleGeometryData@@SA_NAEBU1@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAU1@@Z @ 0x1800846CC (-TryClipWithRect@CRoundedRectangleGeometryData@@SA_NAEBU1@AEBV-$TMilRect_@MUMilRectF@@UMil3DRect.c)
 *     ?Transform_AxisAlignedPreserving@CRoundedRectangleGeometryData@@SAXAEBU1@AEBVCMILMatrix@@PEAU1@@Z @ 0x180086108 (-Transform_AxisAlignedPreserving@CRoundedRectangleGeometryData@@SAXAEBU1@AEBVCMILMatrix@@PEAU1@@.c)
 *     ??0SharedData@CRoundedRectangleShape@@IEAA@AEBUCRoundedRectangleGeometryData@@@Z @ 0x1800862A0 (--0SharedData@CRoundedRectangleShape@@IEAA@AEBUCRoundedRectangleGeometryData@@@Z.c)
 *     ?GetBaseRect@CRoundedRectangleGeometryData@@QEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@XZ @ 0x1800864D4 (-GetBaseRect@CRoundedRectangleGeometryData@@QEBA-AV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoin.c)
 *     ??0FlattenedShapeSharedData@CRoundedRectangleShape@@QEAA@AEBUCRoundedRectangleGeometryData@@@Z @ 0x1800866CC (--0FlattenedShapeSharedData@CRoundedRectangleShape@@QEAA@AEBUCRoundedRectangleGeometryData@@@Z.c)
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBUMilRectF@@@Z @ 0x1800882E4 (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUnique.c)
 *     ?AddMultipleAndSet@?$DynArray@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0A@@@QEAAJPEFBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x1800893A0 (-AddMultipleAndSet@-$DynArray@V-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeede.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCRectanglesShape@@@Z @ 0x18008B164 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCRectanglesShape@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x18009B4C0 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?DoesContain@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800AD06C (-DoesContain@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ @ 0x1800AE2B4 (-Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ.c)
 *     ??$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x1800AE6D8 (--$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800B3CA0 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?IntersectWithRect@CRegionShape@@QEBAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVCShape@@@Z @ 0x1800B6BF0 (-IntersectWithRect@CRegionShape@@QEBAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF.c)
 *     ??$Is90Or270RotationWithTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x1800D1D9C (--$Is90Or270RotationWithTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ??0CRectanglesShape@@QEAA@AEBUMilRectF@@@Z @ 0x1800D3284 (--0CRectanglesShape@@QEAA@AEBUMilRectF@@@Z.c)
 *     ??0CRectanglesShape@@QEAA@XZ @ 0x1800D33F8 (--0CRectanglesShape@@QEAA@XZ.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800D3824 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?HasAnyRoundedCorners@CRoundedRectangleGeometryData@@QEBA_NXZ @ 0x1800D960C (-HasAnyRoundedCorners@CRoundedRectangleGeometryData@@QEBA_NXZ.c)
 *     ??8CRoundedRectangleGeometryData@@QEBA_NAEBU0@@Z @ 0x1800DC990 (--8CRoundedRectangleGeometryData@@QEBA_NAEBU0@@Z.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCRoundedRectangleShape@@@Z @ 0x1800DEF60 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCRoundedRectangleShape@@@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x1800DF980 (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?CMilRectLFromMilRectF@@YA?AV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBUMilRectF@@@Z @ 0x1800E1E84 (-CMilRectLFromMilRectF@@YA-AV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_.c)
 *     ??0CThreadContext@@AEAA@XZ @ 0x1800F1BC4 (--0CThreadContext@@AEAA@XZ.c)
 *     ??0?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@QEAA@XZ @ 0x1800F9440 (--0-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     memset_0 @ 0x1801019AC (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     CanCombineToRegion @ 0x180190594 (CanCombineToRegion.c)
 *     ?IntersectWithRect@CRectanglesShape@@QEBAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVCShape@@@Z @ 0x180191078 (-IntersectWithRect@CRectanglesShape@@QEBAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndS.c)
 *     ?TryMerge@CRoundedRectangleGeometryData@@SA_NAEBU1@0PEAU1@@Z @ 0x1801916A0 (-TryMerge@CRoundedRectangleGeometryData@@SA_NAEBU1@0PEAU1@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 *     ?Is2DAxisAlignedIntegerPreserving@CMILMatrix@@QEBA_NXZ @ 0x18026062C (-Is2DAxisAlignedIntegerPreserving@CMILMatrix@@QEBA_NXZ.c)
 */

__int64 __fastcall CShape::TryOptimizedCombinePaths(
        struct CRectanglesShape *a1,
        __int64 a2,
        CShape *a3,
        CMILMatrix *a4,
        int a5,
        struct CShape **a6)
{
  const struct CRoundedRectangleGeometryData *v6; // r12
  unsigned int v10; // r14d
  bool v11; // si
  char v12; // al
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // rcx
  float v19; // xmm0_4
  float v20; // xmm2_4
  float v21; // xmm3_4
  float v22; // xmm1_4
  _DWORD *Value; // rdi
  int v24; // ecx
  _QWORD *v25; // rbx
  void *v26; // rcx
  __int64 v27; // rcx
  __int64 v29; // rax
  const struct CRoundedRectangleGeometryData *v30; // rsi
  __int64 v31; // rax
  bool v32; // al
  struct CRectanglesShape *v33; // rcx
  struct CObjectCache *v34; // rax
  struct CShape *v35; // rbx
  int v36; // edx
  bool v37; // cc
  CRoundedRectangleShape::FlattenedShapeSharedData *v38; // rax
  CRoundedRectangleShape::FlattenedShapeSharedData *v39; // rax
  __int64 v40; // rax
  struct CObjectCache *v41; // rax
  _QWORD *v42; // r8
  int v43; // edx
  const struct MilRectF *BaseRect; // rax
  CRectanglesShape *v45; // r8
  CRectanglesShape *v46; // rax
  __int64 v47; // rcx
  char *v48; // rax
  __int64 v49; // rcx
  __int64 v50; // rbx
  const struct tagRECT *v51; // rax
  __int64 v52; // rcx
  int v53; // eax
  __int64 v54; // rcx
  int **v55; // rbx
  int v56; // eax
  __int64 v57; // rcx
  const struct FastRegion::Internal::CRgnData **v58; // rdi
  int v59; // eax
  __int64 v60; // rcx
  int v61; // eax
  char *v62; // rax
  __int64 v63; // rcx
  char *v64; // rsi
  __int64 v65; // rcx
  int v66; // eax
  __int64 v67; // rax
  __int64 v68; // rcx
  CRoundedRectangleShape::SharedData *v69; // rax
  struct CObjectCache *ObjectCache; // rax
  CRectanglesShape *v71; // rcx
  int v72; // r8d
  CRectanglesShape *v73; // rax
  struct CRectanglesShape *v74; // rcx
  __int64 v75; // rdx
  const struct tagRECT *v76; // rax
  const struct tagRECT *v77; // rax
  char *v78; // rax
  __int64 v79; // rcx
  char *v80; // rbx
  __int64 v81; // rcx
  int v82; // eax
  struct CObjectCache *v83; // rdx
  CRectanglesShape *v84; // rax
  int v85; // r8d
  __int64 v86; // rcx
  CRectanglesShape *v87; // rax
  __int64 v88; // rdx
  const struct tagRECT *v89; // rax
  int v90; // eax
  const struct tagRECT *v91; // rax
  int v92; // eax
  char *v93; // rax
  __int64 v94; // rcx
  char *v95; // rbx
  __int64 v96; // rcx
  int v97; // eax
  CThreadContext *v98; // rax
  __int64 v99; // rcx
  CThreadContext *v100; // rax
  int v101; // eax
  struct CRectanglesShape *v102; // rcx
  struct CObjectCache *v103; // rdx
  CRectanglesShape *v104; // rax
  int v105; // r8d
  __int64 v106; // rcx
  CRectanglesShape *v107; // rax
  struct CObjectCache *v108; // rdx
  CRectanglesShape *v109; // rax
  int v110; // r8d
  __int64 v111; // rcx
  CRectanglesShape *v112; // rax
  unsigned int v113; // [rsp+20h] [rbp-E0h]
  _BYTE v114[48]; // [rsp+30h] [rbp-D0h] BYREF
  float v115; // [rsp+60h] [rbp-A0h]
  CRegionShape *v116[2]; // [rsp+68h] [rbp-98h] BYREF
  __int128 v117; // [rsp+78h] [rbp-88h] BYREF
  float v118[6]; // [rsp+88h] [rbp-78h] BYREF
  int *v119; // [rsp+A0h] [rbp-60h] BYREF
  _DWORD v120[18]; // [rsp+A8h] [rbp-58h] BYREF
  const struct FastRegion::Internal::CRgnData *v121[6]; // [rsp+F0h] [rbp-10h] BYREF
  int v122; // [rsp+120h] [rbp+20h]
  void *retaddr; // [rsp+198h] [rbp+98h]

  v6 = 0LL;
  v10 = 0;
  *a6 = 0LL;
  v11 = !a1 || (*(unsigned __int8 (__fastcall **)(struct CRectanglesShape *))(*(_QWORD *)a1 + 16LL))(a1);
  if ( !a3 || (v12 = (*(__int64 (__fastcall **)(CShape *))(*(_QWORD *)a3 + 16LL))(a3)) != 0 )
    v12 = 1;
  if ( v11 )
  {
    if ( v12 )
    {
      ObjectCache = CThreadContext::GetObjectCache(a1);
      v71 = 0LL;
      v72 = *((_DWORD *)ObjectCache + 1);
      if ( v72 )
      {
        v71 = (CRectanglesShape *)*((_QWORD *)ObjectCache + 1);
        *((_QWORD *)ObjectCache + 1) = *(_QWORD *)v71;
        *((_DWORD *)ObjectCache + 1) = v72 - 1;
      }
      if ( v71 || (v71 = (CRectanglesShape *)DefaultHeap::Alloc(0x48uLL)) != 0LL )
      {
        v73 = CRectanglesShape::CRectanglesShape(v71);
        *a6 = v73;
        if ( v73 )
          return v10;
      }
      else
      {
        *a6 = 0LL;
      }
      v10 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v71, 0LL, 0LL, -2147024882, 0x268u);
      return v10;
    }
  }
  else if ( !v12 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(struct CRectanglesShape *, CRegionShape **))(*(_QWORD *)a1 + 64LL))(
           a1,
           v116)
      && LODWORD(v116[0]) == 1
      && (*(unsigned __int8 (__fastcall **)(CShape *, CRegionShape **))(*(_QWORD *)a3 + 64LL))(a3, v116)
      && LODWORD(v116[0]) == 1 )
    {
      if ( a4
        && !(unsigned __int8)CMILMatrix::IsTranslateAndScaleIgnoreZ<1>(a4, v13, v14, v15)
        && !(unsigned __int8)CMILMatrix::Is90Or270RotationWithTranslateAndScaleIgnoreZ<1>(a4) )
      {
        return v10;
      }
      v16 = *(_QWORD *)a1;
      *(_OWORD *)v116 = 0LL;
      *(_OWORD *)v118 = 0LL;
      v17 = (*(__int64 (__fastcall **)(struct CRectanglesShape *, CRegionShape **, _QWORD))(v16 + 48))(a1, v116, 0LL);
      v10 = v17;
      if ( v17 < 0 )
      {
        v113 = 666;
        goto LABEL_229;
      }
      v17 = (*(__int64 (__fastcall **)(CShape *, float *, CMILMatrix *))(*(_QWORD *)a3 + 48LL))(a3, v118, a4);
      v10 = v17;
      if ( v17 < 0 )
      {
        v113 = 667;
        goto LABEL_229;
      }
      if ( a5 == 1 )
      {
        v19 = *(float *)v116;
        if ( v118[0] > *(float *)v116 )
        {
          *(float *)v116 = v118[0];
          v19 = v118[0];
        }
        v20 = *((float *)v116 + 1);
        if ( v118[1] > *((float *)v116 + 1) )
        {
          *((float *)v116 + 1) = v118[1];
          v20 = v118[1];
        }
        v21 = *(float *)&v116[1];
        if ( *(float *)&v116[1] > v118[2] )
        {
          *(float *)&v116[1] = v118[2];
          v21 = v118[2];
        }
        v22 = *((float *)&v116[1] + 1);
        if ( *((float *)&v116[1] + 1) > v118[3] )
        {
          *((float *)&v116[1] + 1) = v118[3];
          v22 = v118[3];
        }
        if ( v21 <= v19 || v22 <= v20 )
        {
          v116[1] = 0LL;
          v116[0] = 0LL;
        }
        if ( (*(unsigned int (__fastcall **)(struct CRectanglesShape *))(*(_QWORD *)a1 + 8LL))(a1) == 2
          && (*(unsigned int (__fastcall **)(CShape *))(*(_QWORD *)a3 + 8LL))(a3) == 2
          && (!a4 || CMILMatrix::Is2DAxisAlignedIntegerPreserving(a4)) )
        {
          v48 = (char *)DefaultHeap::Alloc(0x60uLL);
          v50 = (__int64)v48;
          if ( v48 )
          {
            memset_0(v48 + 24, 0, 0x40uLL);
            *(_QWORD *)(v50 + 8) = 0LL;
            *(_QWORD *)v50 = &CRegionShape::`vftable';
            *(_QWORD *)(v50 + 16) = v50 + 24;
            *(_DWORD *)(v50 + 24) = 0;
            *(_QWORD *)(v50 + 88) = 0LL;
            v51 = (const struct tagRECT *)CMilRectLFromMilRectF(&v117);
            CRegionShape::BuildFromRects(v50, v51, 1u);
            *a6 = (struct CShape *)v50;
          }
          else
          {
            v10 = -2147024882;
            MilInstrumentationCheckHR_MaybeFailFast(v49, 0LL, 0LL, -2147024882, 0x2A6u);
          }
        }
        else
        {
          Value = TlsGetValue(CThreadContext::s_dwTlsIndex);
          if ( !Value )
          {
            v98 = (CThreadContext *)operator new(0x150uLL);
            if ( !v98 || (v100 = CThreadContext::CThreadContext(v98), (Value = v100) == 0LL) )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v99, 0LL, 0LL, -2147024882, 0x42u);
              ModuleFailFastForHRESULT(2147942414LL, retaddr);
            }
            TlsSetValue(CThreadContext::s_dwTlsIndex, v100);
          }
          v24 = Value[9];
          v25 = 0LL;
          if ( v24 )
          {
            v25 = (_QWORD *)*((_QWORD *)Value + 5);
            *((_QWORD *)Value + 5) = *v25;
            Value[9] = v24 - 1;
          }
          if ( v25 || (v25 = DefaultHeap::Alloc(0x48uLL)) != 0LL )
          {
            v25[1] = 0LL;
            *v25 = &CRectanglesShape::`vftable';
            v25[2] = v25 + 6;
            v25[3] = v25 + 6;
            *((_DWORD *)v25 + 8) = 1;
            *(_QWORD *)((char *)v25 + 36) = 1LL;
            TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>::TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>(v25 + 6);
            v25[8] = 0LL;
            v26 = (void *)v25[2];
            *((_DWORD *)v25 + 10) = 0;
            if ( v26 != (void *)v25[3] )
            {
              DefaultHeap::Free(v26);
              v25[2] = v25[3];
              *((_DWORD *)v25 + 9) = *((_DWORD *)v25 + 8);
            }
            v27 = v25[8];
            if ( v27 )
            {
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
              v25[8] = 0LL;
            }
            v117 = *(_OWORD *)v116;
            DynArray<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,0>::AddMultipleAndSet(
              (__int64)(v25 + 2),
              &v117,
              1u);
            *a6 = (struct CShape *)v25;
          }
          else
          {
            *a6 = 0LL;
            v10 = -2147024882;
            MilInstrumentationCheckHR_MaybeFailFast(v52, 0LL, 0LL, -2147024882, 0x2ADu);
          }
        }
        return v10;
      }
      if ( a5 )
      {
        if ( a5 != 2 )
          return v10;
        if ( TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::DoesContain(v118, (float *)v116)
          || (unsigned __int8)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty(v116) )
        {
          v83 = CThreadContext::GetObjectCache(v74);
          v84 = 0LL;
          v85 = *((_DWORD *)v83 + 1);
          if ( v85 )
          {
            v84 = (CRectanglesShape *)*((_QWORD *)v83 + 1);
            *((_QWORD *)v83 + 1) = *(_QWORD *)v84;
            *((_DWORD *)v83 + 1) = v85 - 1;
          }
          if ( v84 || (v84 = (CRectanglesShape *)DefaultHeap::Alloc(0x48uLL)) != 0LL )
          {
            v87 = CRectanglesShape::CRectanglesShape(v84);
            *a6 = v87;
            if ( v87 )
              return v10;
          }
          else
          {
            *a6 = 0LL;
          }
          v10 = -2147024882;
          MilInstrumentationCheckHR_MaybeFailFast(v86, 0LL, 0LL, -2147024882, 0x2B7u);
          return v10;
        }
        if ( !TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::DoesIntersectInclusive((float *)v116, v118) )
        {
          v17 = CShape::CopyShape(a1, 0LL, a6);
          v10 = v17;
          if ( v17 >= 0 )
            return v10;
          v113 = 700;
          goto LABEL_229;
        }
        if ( !(unsigned __int8)CanCombineToRegion(a1, v75, a3, a4) )
          return v10;
        v76 = (const struct tagRECT *)PixelAlign(&v117, (__int64)v116);
        FastRegion::CRegion::CRegion((FastRegion::CRegion *)&v119, v76);
        v77 = (const struct tagRECT *)PixelAlign(&v117, (__int64)v118);
        FastRegion::CRegion::CRegion((FastRegion::CRegion *)v121, v77);
        CRegion::Subtract((const struct FastRegion::Internal::CRgnData **)&v119, v121);
        v78 = (char *)DefaultHeap::Alloc(0x60uLL);
        v80 = v78;
        if ( v78 )
        {
          memset_0(v78 + 24, 0, 0x40uLL);
          *((_QWORD *)v80 + 1) = 0LL;
          *(_QWORD *)v80 = &CRegionShape::`vftable';
          *((_QWORD *)v80 + 2) = v80 + 24;
          *((_DWORD *)v80 + 6) = 0;
          *((_QWORD *)v80 + 11) = 0LL;
          **((_DWORD **)v80 + 2) = 0;
          v81 = *((_QWORD *)v80 + 11);
          *((_QWORD *)v80 + 11) = 0LL;
          if ( v81 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v81 + 16LL))(v81);
          v82 = FastRegion::CRegion::Copy((int **)v80 + 2, &v119);
          if ( v82 < 0 )
            ModuleFailFastForHRESULT((unsigned int)v82, retaddr);
          *a6 = (struct CShape *)v80;
        }
        else
        {
          v10 = -2147024882;
          MilInstrumentationCheckHR_MaybeFailFast(v79, 0LL, 0LL, -2147024882, 0x2CCu);
        }
        FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)v121);
      }
      else
      {
        if ( TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::DoesContain((float *)v116, v118)
          || (unsigned __int8)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty(v118) )
        {
          v17 = CShape::CopyShape(a1, 0LL, a6);
          v10 = v17;
          if ( v17 >= 0 )
            return v10;
          v113 = 728;
          goto LABEL_229;
        }
        if ( TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::DoesContain(v118, (float *)v116)
          || (unsigned __int8)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty(v116) )
        {
          v17 = CShape::CopyShape(a3, a4, a6);
          v10 = v17;
          if ( v17 >= 0 )
            return v10;
          v113 = 732;
          goto LABEL_229;
        }
        if ( !(unsigned __int8)CanCombineToRegion(a1, v88, a3, a4) )
          return v10;
        v120[0] = 0;
        v119 = v120;
        v89 = (const struct tagRECT *)PixelAlign(&v117, (__int64)v116);
        v90 = CRegion::TryAddRectangle((CRegion *)&v119, v89);
        if ( v90 < 0 )
          ModuleFailFastForHRESULT((unsigned int)v90, retaddr);
        v91 = (const struct tagRECT *)PixelAlign(&v117, (__int64)v118);
        v92 = CRegion::TryAddRectangle((CRegion *)&v119, v91);
        if ( v92 < 0 )
          ModuleFailFastForHRESULT((unsigned int)v92, retaddr);
        v93 = (char *)DefaultHeap::Alloc(0x60uLL);
        v95 = v93;
        if ( !v93 )
        {
          v10 = -2147024882;
          MilInstrumentationCheckHR_MaybeFailFast(v94, 0LL, 0LL, -2147024882, 0x2EBu);
          FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v119);
          return v10;
        }
        memset_0(v93 + 24, 0, 0x40uLL);
        *((_QWORD *)v95 + 1) = 0LL;
        *(_QWORD *)v95 = &CRegionShape::`vftable';
        *((_QWORD *)v95 + 2) = v95 + 24;
        *((_DWORD *)v95 + 6) = 0;
        *((_QWORD *)v95 + 11) = 0LL;
        **((_DWORD **)v95 + 2) = 0;
        v96 = *((_QWORD *)v95 + 11);
        *((_QWORD *)v95 + 11) = 0LL;
        if ( v96 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v96 + 16LL))(v96);
        v97 = FastRegion::CRegion::Copy((int **)v95 + 2, &v119);
        if ( v97 < 0 )
          ModuleFailFastForHRESULT((unsigned int)v97, retaddr);
        *a6 = (struct CShape *)v95;
      }
      FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v119);
      return v10;
    }
    if ( (*(unsigned int (__fastcall **)(struct CRectanglesShape *))(*(_QWORD *)a1 + 8LL))(a1) == 2
      && (*(unsigned int (__fastcall **)(CShape *))(*(_QWORD *)a3 + 8LL))(a3) == 2
      && (!a4 || CMILMatrix::Is2DAxisAlignedIntegerPreserving(a4)) )
    {
      v116[0] = 0LL;
      v53 = CShape::CopyShape(a1, 0LL, v116);
      v55 = (int **)v116[0];
      v10 = v53;
      if ( v53 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v54, 0LL, 0LL, v53, 0x2FDu);
      }
      else
      {
        v116[0] = 0LL;
        v56 = CShape::CopyShape(a3, a4, v116);
        v58 = (const struct FastRegion::Internal::CRgnData **)v116[0];
        v10 = v56;
        if ( v56 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v57, 0LL, 0LL, v56, 0x300u);
LABEL_101:
          if ( !v58 )
            goto LABEL_103;
          goto LABEL_102;
        }
        v120[0] = 0;
        v119 = v120;
        v59 = FastRegion::CRegion::Copy(&v119, v55 + 2);
        v10 = v59;
        if ( v59 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v60, 0LL, 0LL, v59, 0x303u);
LABEL_100:
          FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v119);
          goto LABEL_101;
        }
        if ( a5 == 1 )
        {
          v61 = FastRegion::CRegion::Intersect((const struct FastRegion::Internal::CRgnData **)&v119, v58 + 2);
          if ( v61 < 0 )
            ModuleFailFastForHRESULT((unsigned int)v61, retaddr);
        }
        else if ( a5 )
        {
          if ( a5 == 2 )
            CRegion::Subtract((const struct FastRegion::Internal::CRgnData **)&v119, v58 + 2);
        }
        else
        {
          v101 = FastRegion::CRegion::Union((const struct FastRegion::Internal::CRgnData **)&v119, v58 + 2);
          if ( v101 < 0 )
            ModuleFailFastForHRESULT((unsigned int)v101, retaddr);
        }
        v62 = (char *)DefaultHeap::Alloc(0x60uLL);
        v64 = v62;
        if ( v62 )
        {
          memset_0(v62 + 24, 0, 0x40uLL);
          *((_QWORD *)v64 + 1) = 0LL;
          *(_QWORD *)v64 = &CRegionShape::`vftable';
          *((_QWORD *)v64 + 2) = v64 + 24;
          *((_DWORD *)v64 + 6) = 0;
          *((_QWORD *)v64 + 11) = 0LL;
          **((_DWORD **)v64 + 2) = 0;
          v65 = *((_QWORD *)v64 + 11);
          *((_QWORD *)v64 + 11) = 0LL;
          if ( v65 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v65 + 16LL))(v65);
          v66 = FastRegion::CRegion::Copy((int **)v64 + 2, &v119);
          if ( v66 < 0 )
            ModuleFailFastForHRESULT((unsigned int)v66, retaddr);
          *a6 = (struct CShape *)v64;
          goto LABEL_100;
        }
        v10 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(v63, 0LL, 0LL, -2147024882, 0x316u);
        FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v119);
        if ( v58 )
LABEL_102:
          CRegionShape::`vector deleting destructor'((CRegionShape *)v58, 1);
      }
LABEL_103:
      if ( v55 )
        CRegionShape::`vector deleting destructor'((CRegionShape *)v55, 1);
      return v10;
    }
    if ( (*(unsigned __int8 (__fastcall **)(struct CRectanglesShape *, CRegionShape **))(*(_QWORD *)a1 + 64LL))(
           a1,
           v116)
      && LODWORD(v116[0]) == 1
      && (*(unsigned __int8 (__fastcall **)(CShape *, _QWORD))(*(_QWORD *)a3 + 64LL))(a3, 0LL) )
    {
      if ( a4 || a5 != 1 )
        return v10;
      v40 = *(_QWORD *)a1;
      v117 = 0LL;
      (*(void (__fastcall **)(struct CRectanglesShape *, __int128 *, __int64))(v40 + 80))(a1, &v117, 1LL);
      if ( (*(unsigned int (__fastcall **)(CShape *))(*(_QWORD *)a3 + 8LL))(a3) == 2 )
      {
        v17 = CRegionShape::IntersectWithRect(a3, &v117, a6);
        v10 = v17;
        if ( v17 >= 0 )
          return v10;
        v113 = 810;
      }
      else
      {
        v17 = CRectanglesShape::IntersectWithRect(a3, &v117, a6);
        v10 = v17;
        if ( v17 >= 0 )
          return v10;
        v113 = 817;
      }
LABEL_229:
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0LL, v17, v113);
      return v10;
    }
    if ( (*(unsigned int (__fastcall **)(struct CRectanglesShape *))(*(_QWORD *)a1 + 8LL))(a1)
      && !CShape::IsAxisAlignedRectangle(a1)
      || (*(unsigned int (__fastcall **)(CShape *))(*(_QWORD *)a3 + 8LL))(a3) && !CShape::IsAxisAlignedRectangle(a3)
      || a5 != 1
      || a4 && !CMILMatrix::Is2DAxisAlignedPreserving(a4) )
    {
      return v10;
    }
    if ( !(*(unsigned int (__fastcall **)(struct CRectanglesShape *))(*(_QWORD *)a1 + 8LL))(a1) )
      v6 = (const struct CRoundedRectangleGeometryData *)(*((_QWORD *)a1 + 2) + 16LL);
    v29 = *(_QWORD *)a3;
    v30 = 0LL;
    v122 = 0;
    if ( !(*(unsigned int (__fastcall **)(CShape *))(v29 + 8))(a3) )
    {
      v30 = (const struct CRoundedRectangleGeometryData *)(*((_QWORD *)a3 + 2) + 16LL);
      if ( a4 )
      {
        CRoundedRectangleGeometryData::Transform_AxisAlignedPreserving(
          (const struct CRoundedRectangleGeometryData *)(*((_QWORD *)a3 + 2) + 16LL),
          a4,
          (struct CRoundedRectangleGeometryData *)v121);
        v30 = (const struct CRoundedRectangleGeometryData *)v121;
      }
    }
    v115 = 0.0;
    if ( v6 && v30 )
    {
      v32 = CRoundedRectangleGeometryData::TryMerge(v6, v30, (struct CRoundedRectangleGeometryData *)v114);
    }
    else
    {
      v117 = 0LL;
      if ( v6 )
      {
        v67 = *(_QWORD *)a3;
        v116[0] = v6;
        v17 = (*(__int64 (__fastcall **)(CShape *, __int128 *, CMILMatrix *))(v67 + 48))(a3, &v117, a4);
        v10 = v17;
        if ( v17 < 0 )
        {
          v113 = 877;
          goto LABEL_229;
        }
      }
      else
      {
        v31 = *(_QWORD *)a1;
        v116[0] = v30;
        v17 = (*(__int64 (__fastcall **)(struct CRectanglesShape *, __int128 *, _QWORD))(v31 + 48))(a1, &v117, 0LL);
        v10 = v17;
        if ( v17 < 0 )
        {
          v113 = 884;
          goto LABEL_229;
        }
      }
      v32 = CRoundedRectangleGeometryData::TryClipWithRect((__int64)v116[0]);
    }
    if ( !v32 )
      return v10;
    if ( !CRoundedRectangleGeometryData::HasAnyRoundedCorners((CRoundedRectangleGeometryData *)v114) )
    {
      v41 = CThreadContext::GetObjectCache(v33);
      v42 = 0LL;
      v43 = *((_DWORD *)v41 + 1);
      if ( v43 )
      {
        v42 = (_QWORD *)*((_QWORD *)v41 + 1);
        *((_QWORD *)v41 + 1) = *v42;
        *((_DWORD *)v41 + 1) = v43 - 1;
      }
      if ( v42 || DefaultHeap::Alloc(0x48uLL) )
      {
        BaseRect = (const struct MilRectF *)CRoundedRectangleGeometryData::GetBaseRect((__int64)v114, (__int64)&v117);
        v46 = CRectanglesShape::CRectanglesShape(v45, BaseRect);
        *a6 = v46;
        if ( v46 )
          return v10;
      }
      else
      {
        *a6 = 0LL;
      }
      v10 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v47, 0LL, 0LL, -2147024882, 0x37Fu);
      return v10;
    }
    if ( v6 && (unsigned __int8)CRoundedRectangleGeometryData::operator==(v114, v6) )
    {
      v17 = CShape::CopyShape(a1, 0LL, a6);
      v10 = v17;
      if ( v17 >= 0 )
        return v10;
      v113 = 901;
      goto LABEL_229;
    }
    if ( v30 && (unsigned __int8)CRoundedRectangleGeometryData::operator==(v114, v30) )
    {
      v17 = CShape::CopyShape(a3, a4, a6);
      v10 = v17;
      if ( v17 >= 0 )
        return v10;
      v113 = 907;
      goto LABEL_229;
    }
    v34 = CThreadContext::GetObjectCache(v33);
    v35 = 0LL;
    v36 = *((_DWORD *)v34 + 1);
    if ( v36 )
    {
      v35 = (struct CShape *)*((_QWORD *)v34 + 1);
      *((_QWORD *)v34 + 1) = *(_QWORD *)v35;
      *((_DWORD *)v34 + 1) = v36 - 1;
    }
    if ( !v35 )
    {
      v35 = (struct CShape *)DefaultHeap::Alloc(0x18uLL);
      if ( !v35 )
      {
        *a6 = 0LL;
        v10 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(v68, 0LL, 0LL, -2147024882, 0x390u);
        return v10;
      }
    }
    v37 = v115 <= 0.0;
    *((_QWORD *)v35 + 1) = 0LL;
    *(_QWORD *)v35 = &CRoundedRectangleShape::`vftable';
    if ( v37 )
    {
      v69 = (CRoundedRectangleShape::SharedData *)operator new(0x50uLL);
      if ( v69 )
      {
        v39 = (CRoundedRectangleShape::FlattenedShapeSharedData *)CRoundedRectangleShape::SharedData::SharedData(
                                                                    v69,
                                                                    (const struct CRoundedRectangleGeometryData *)v114);
        goto LABEL_68;
      }
    }
    else
    {
      v38 = (CRoundedRectangleShape::FlattenedShapeSharedData *)operator new(0x68uLL);
      if ( v38 )
      {
        v39 = CRoundedRectangleShape::FlattenedShapeSharedData::FlattenedShapeSharedData(
                v38,
                (const struct CRoundedRectangleGeometryData *)v114);
LABEL_68:
        *((_QWORD *)v35 + 2) = v39;
        Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef((char *)v35 + 16);
        *a6 = v35;
        return v10;
      }
    }
    v39 = 0LL;
    goto LABEL_68;
  }
  if ( !a5 )
  {
    if ( v11 )
    {
      v17 = CShape::CopyShape(a3, a4, a6);
      v10 = v17;
      if ( v17 >= 0 )
        return v10;
      v113 = 625;
    }
    else
    {
      v17 = CShape::CopyShape(a1, 0LL, a6);
      v10 = v17;
      if ( v17 >= 0 )
        return v10;
      v113 = 629;
    }
    goto LABEL_229;
  }
  v102 = (struct CRectanglesShape *)(unsigned int)(a5 - 1);
  if ( a5 == 1 )
  {
    v108 = CThreadContext::GetObjectCache(v102);
    v109 = 0LL;
    v110 = *((_DWORD *)v108 + 1);
    if ( v110 )
    {
      v109 = (CRectanglesShape *)*((_QWORD *)v108 + 1);
      *((_QWORD *)v108 + 1) = *(_QWORD *)v109;
      *((_DWORD *)v108 + 1) = v110 - 1;
    }
    if ( v109 || (v109 = (CRectanglesShape *)DefaultHeap::Alloc(0x48uLL)) != 0LL )
    {
      v112 = CRectanglesShape::CRectanglesShape(v109);
      *a6 = v112;
      if ( v112 )
        return v10;
    }
    else
    {
      *a6 = 0LL;
    }
    v10 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v111, 0LL, 0LL, -2147024882, 0x27Cu);
    return v10;
  }
  if ( a5 == 2 )
  {
    if ( v11 )
    {
      v103 = CThreadContext::GetObjectCache(v102);
      v104 = 0LL;
      v105 = *((_DWORD *)v103 + 1);
      if ( v105 )
      {
        v104 = (CRectanglesShape *)*((_QWORD *)v103 + 1);
        *((_QWORD *)v103 + 1) = *(_QWORD *)v104;
        *((_DWORD *)v103 + 1) = v105 - 1;
      }
      if ( v104 || (v104 = (CRectanglesShape *)DefaultHeap::Alloc(0x48uLL)) != 0LL )
      {
        v107 = CRectanglesShape::CRectanglesShape(v104);
        *a6 = v107;
        if ( v107 )
          return v10;
      }
      else
      {
        *a6 = 0LL;
      }
      v10 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v106, 0LL, 0LL, -2147024882, 0x284u);
      return v10;
    }
    v17 = CShape::CopyShape(a1, 0LL, a6);
    v10 = v17;
    if ( v17 >= 0 )
      return v10;
    v113 = 649;
    goto LABEL_229;
  }
  return v10;
}
