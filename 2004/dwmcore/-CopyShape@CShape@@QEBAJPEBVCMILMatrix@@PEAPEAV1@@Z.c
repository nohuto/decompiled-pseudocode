/*
 * XREFs of ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x18006C580
 * Callers:
 *     ?ConvertContextDependentClipToLocal@CCpuClip@@AEAAJXZ @ 0x180019D90 (-ConvertContextDependentClipToLocal@CCpuClip@@AEAAJXZ.c)
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x18004C820 (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?ComputeBrushClamp@CBrushDrawListGenerator@@CAJV?$span@PEBVCDrawListBrush@@$0?0@gsl@@KAEBVMatrix3x3@@PEAPEAVCShape@@@Z @ 0x1800500A0 (-ComputeBrushClamp@CBrushDrawListGenerator@@CAJV-$span@PEBVCDrawListBrush@@$0-0@gsl@@KAEBVMatrix.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180073590 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?CopyShape@CShapePtr@@QEBAJPEBVCMILMatrix@@PEAPEAVCShape@@@Z @ 0x18008112C (-CopyShape@CShapePtr@@QEBAJPEBVCMILMatrix@@PEAPEAVCShape@@@Z.c)
 *     ?GetShapeDataWorker@CGeometry@@AEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1800D1280 (-GetShapeDataWorker@CGeometry@@AEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?GetAccumShape@CGdiSpriteBitmap@@UEAAJPEAVCShapePtr@@_N@Z @ 0x1800D8480 (-GetAccumShape@CGdiSpriteBitmap@@UEAAJPEAVCShapePtr@@_N@Z.c)
 *     ?AddPrimitiveClip@CCpuClip@@QEAAJPEBVCShape@@PEBVCMILMatrix@@@Z @ 0x18019EF88 (-AddPrimitiveClip@CCpuClip@@QEAAJPEBVCShape@@PEBVCMILMatrix@@@Z.c)
 *     ?GetShapeDataCore@CGeometryGroup@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1801C53A0 (-GetShapeDataCore@CGeometryGroup@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?AddNewContent@CComposeTop@@QEAAJPEAVIBitmapResource@@AEBVCShape@@AEBVCMILMatrix@@@Z @ 0x1801FA818 (-AddNewContent@CComposeTop@@QEAAJPEAVIBitmapResource@@AEBVCShape@@AEBVCMILMatrix@@@Z.c)
 * Callees:
 *     ?CMilRectLFromMilRectF@@YA?AV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBUMilRectF@@@Z @ 0x18000A414 (-CMilRectLFromMilRectF@@YA-AV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_.c)
 *     ?Is2DAxisAlignedIntegerPreserving@CMILMatrix@@QEBA_N_N@Z @ 0x18001CF94 (-Is2DAxisAlignedIntegerPreserving@CMILMatrix@@QEBA_N_N@Z.c)
 *     ??$TryAppendRects@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@CRegion@@QEAAJPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x18001ED9C (--$TryAppendRects@V-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqu.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180041C50 (-Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180044474 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??_ECRegionShape@@UEAAPEAXI@Z @ 0x180044B40 (--_ECRegionShape@@UEAAPEAXI@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800466E8 (--2@YAPEAX_K@Z.c)
 *     ?GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z @ 0x180054D44 (-GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800585C8 (--3@YAXPEAX@Z.c)
 *     ??_GCRectanglesShape@@UEAAPEAXI@Z @ 0x18006D120 (--_GCRectanglesShape@@UEAAPEAXI@Z.c)
 *     ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x18006F780 (--$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180072960 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0A@@@QEAAJPEFBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x18009D9E0 (-AddMultipleAndSet@-$DynArray@V-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeede.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18009F68C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?Reset@CRectanglesShape@@IEAAXXZ @ 0x18009F934 (-Reset@CRectanglesShape@@IEAAXXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800AC2C0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800BC868 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ??$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z @ 0x1800BE1EC (--$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ??0?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@QEAA@XZ @ 0x1800DD810 (--0-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E3ABC (memset_0.c)
 *     memcpy_0 @ 0x1800EED1B (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x18020EDB4 (ModuleFailFastForHRESULT.c)
 *     ??0CComplexShape@@QEAA@PEAUID2D1Geometry@@@Z @ 0x18025BFB4 (--0CComplexShape@@QEAA@PEAUID2D1Geometry@@@Z.c)
 *     ??0CPathSegmentsShape@@QEAA@PEBVCPathData@@@Z @ 0x18025D860 (--0CPathSegmentsShape@@QEAA@PEBVCPathData@@@Z.c)
 */

__int64 __fastcall CShape::CopyShape(CShape *this, const struct CMILMatrix *a2, struct CShape **a3)
{
  CMILMatrix *v4; // r12
  int v6; // esi
  int v7; // eax
  _DWORD *Value; // rbx
  int v9; // ecx
  char *v10; // rdi
  __int64 v11; // r13
  struct CThreadContext *v12; // rdx
  void *v13; // rcx
  __int64 v14; // rcx
  unsigned int v15; // eax
  unsigned int v16; // r12d
  __int64 v17; // rcx
  char *v18; // r13
  __int64 v20; // rdi
  SIZE_T v21; // rbx
  HANDLE ProcessHeap; // rax
  char *v23; // rax
  __int64 v24; // rcx
  char *v25; // rbx
  unsigned int i; // edi
  char *v27; // rbx
  int Current; // eax
  struct CThreadContext *v29; // rcx
  int v30; // edx
  unsigned int v31; // esi
  __int64 v32; // rcx
  int v33; // eax
  __int64 v34; // rcx
  HANDLE v35; // rax
  char *v36; // rax
  __int64 v37; // rcx
  char *v38; // rbx
  __int64 v39; // rcx
  int v40; // eax
  __int64 v41; // rcx
  char *v42; // rax
  __int64 v43; // rcx
  char *v44; // rbx
  _DWORD **v45; // rcx
  int v46; // edi
  int v47; // eax
  __int64 v48; // rcx
  __int64 v49; // rcx
  int v50; // eax
  __int64 v51; // rcx
  char *v52; // rax
  __int64 v53; // rcx
  char *v54; // rbx
  CPathSegmentsShape *v55; // rax
  __int64 v56; // rcx
  struct CShape *v57; // rax
  struct CShape *v58; // rax
  struct CShape *v59; // rcx
  _QWORD *v60; // rax
  __int64 v61; // rcx
  DWORD v62; // ecx
  int v63; // eax
  int v64; // eax
  __int64 v65; // rcx
  CComplexShape *v66; // rax
  __int64 v67; // rcx
  struct CShape *v68; // rax
  unsigned int v69; // [rsp+30h] [rbp-69h] BYREF
  LPVOID lpMem; // [rsp+38h] [rbp-61h]
  struct CThreadContext *v71; // [rsp+40h] [rbp-59h] BYREF
  struct ID2D1Geometry *v72; // [rsp+48h] [rbp-51h] BYREF
  __int128 v73; // [rsp+50h] [rbp-49h] BYREF
  int *v74; // [rsp+60h] [rbp-39h] BYREF
  int v75; // [rsp+68h] [rbp-31h] BYREF
  void *retaddr; // [rsp+F8h] [rbp+5Fh]

  *(_QWORD *)&v73 = a2;
  v72 = 0LL;
  lpMem = 0LL;
  v4 = a2;
  *a3 = 0LL;
  v6 = 0;
  if ( !a2 || (unsigned __int8)CMILMatrix::IsIdentity<0>(a2) )
  {
    v7 = (*(__int64 (__fastcall **)(CShape *))(*(_QWORD *)this + 8LL))(this);
    if ( v7 == 1 )
    {
      Value = TlsGetValue(CThreadContext::s_dwTlsIndex);
      if ( !Value )
      {
        v60 = operator new(0x118uLL);
        Value = v60;
        if ( !v60 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v61, 0LL, 0, -2147024882, 0x42u, 0LL);
          ModuleFailFastForHRESULT(2147942414LL, retaddr);
        }
        *v60 = 0LL;
        v60[1] = 0LL;
        v60[2] = 0LL;
        v62 = CThreadContext::s_dwTlsIndex;
        v60[3] = 0LL;
        v60[4] = 0LL;
        v60[5] = 0LL;
        v60[6] = 0LL;
        v60[7] = 0LL;
        v60[8] = 0LL;
        v60[9] = 0LL;
        v60[10] = 0LL;
        v60[11] = 0LL;
        v60[12] = 0LL;
        v60[13] = 0LL;
        v60[14] = 0LL;
        v60[15] = 0LL;
        v60[16] = 0LL;
        v60[17] = 0LL;
        v60[18] = 0LL;
        v60[19] = 0LL;
        v60[20] = 0LL;
        v60[21] = 0LL;
        v60[22] = 0LL;
        v60[23] = 0LL;
        v60[24] = 0LL;
        v60[25] = 0LL;
        v60[26] = 0LL;
        v60[27] = 0LL;
        v60[28] = 0LL;
        v60[29] = 0LL;
        v60[30] = 0LL;
        v60[31] = 0LL;
        v60[32] = 0LL;
        v60[33] = 0LL;
        v60[34] = 0LL;
        TlsSetValue(v62, v60);
      }
      v9 = Value[3];
      v10 = 0LL;
      if ( v9 )
      {
        v10 = (char *)*((_QWORD *)Value + 2);
        *((_QWORD *)Value + 2) = *(_QWORD *)v10;
        Value[3] = v9 - 1;
      }
      if ( !v10 )
      {
        v10 = (char *)DefaultHeap::Alloc(0x48uLL);
        if ( !v10 )
        {
          v6 = -2147024882;
          MilInstrumentationCheckHR_MaybeFailFast(v41, 0LL, 0, -2147024882, 0xDFu, 0LL);
          goto LABEL_22;
        }
      }
      *((_QWORD *)v10 + 1) = 0LL;
      *(_QWORD *)v10 = &CRectanglesShape::`vftable';
      *((_QWORD *)v10 + 2) = v10 + 48;
      *((_QWORD *)v10 + 3) = v10 + 48;
      *((_DWORD *)v10 + 8) = 1;
      *(_QWORD *)(v10 + 36) = 1LL;
      TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>::TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>(v10 + 48);
      *((_QWORD *)v10 + 8) = 0LL;
      v11 = *((unsigned int *)this + 10);
      if ( (_DWORD)v11 )
      {
        v12 = (struct CThreadContext *)*((_QWORD *)this + 2);
        v13 = (void *)*((_QWORD *)v10 + 2);
        v71 = v12;
        *((_DWORD *)v10 + 10) = 0;
        if ( v13 != *((void **)v10 + 3) )
        {
          operator delete(v13);
          v12 = v71;
          *((_QWORD *)v10 + 2) = *((_QWORD *)v10 + 3);
          *((_DWORD *)v10 + 9) = *((_DWORD *)v10 + 8);
        }
        v14 = *((_QWORD *)v10 + 8);
        if ( v14 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
          v12 = v71;
          *((_QWORD *)v10 + 8) = 0LL;
        }
        v15 = *((_DWORD *)v10 + 10);
        v16 = v15 + v11;
        if ( v15 + (unsigned int)v11 < v15 )
        {
          v6 = -2147024362;
          MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, -2147024362, 0xB5u, 0LL);
        }
        else if ( v16 > *((_DWORD *)v10 + 9) )
        {
          v63 = DynArrayImpl<0>::AddMultipleAndSet(v10 + 16, 16LL, (unsigned int)v11, v12);
          v6 = v63;
          if ( v63 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v63, 0xC0u, 0LL);
        }
        else
        {
          memcpy_0((void *)(*((_QWORD *)v10 + 2) + 16LL * v15), v12, 16 * v11);
          *((_DWORD *)v10 + 10) = v16;
        }
        v4 = (CMILMatrix *)v73;
      }
      else
      {
        CRectanglesShape::Reset((CRectanglesShape *)v10);
      }
      if ( v6 >= 0 )
      {
        v18 = (char *)lpMem;
        *a3 = (struct CShape *)v10;
        goto LABEL_19;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v6, 0xE1u, 0LL);
      v18 = (char *)lpMem;
      goto LABEL_103;
    }
    if ( v7 )
    {
      if ( v7 == 2 )
      {
        v36 = (char *)DefaultHeap::Alloc(0x60uLL);
        v38 = v36;
        if ( !v36 )
        {
          v6 = -2147024882;
          MilInstrumentationCheckHR_MaybeFailFast(v37, 0LL, 0, -2147024882, 0xEEu, 0LL);
          goto LABEL_22;
        }
        memset_0(v36 + 24, 0, 0x40uLL);
        *((_QWORD *)v38 + 1) = 0LL;
        *(_QWORD *)v38 = &CRegionShape::`vftable';
        *((_QWORD *)v38 + 2) = v38 + 24;
        *((_DWORD *)v38 + 6) = 0;
        *((_QWORD *)v38 + 11) = 0LL;
        **((_DWORD **)v38 + 2) = 0;
        v39 = *((_QWORD *)v38 + 11);
        *((_QWORD *)v38 + 11) = 0LL;
        if ( v39 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
        v40 = FastRegion::CRegion::Copy(
                (const struct FastRegion::Internal::CRgnData **)v38 + 2,
                (const struct FastRegion::Internal::CRgnData **)this + 2);
        if ( v40 < 0 )
          ModuleFailFastForHRESULT((unsigned int)v40, retaddr);
        *a3 = (struct CShape *)v38;
      }
      else if ( v7 == 4 )
      {
        v55 = (CPathSegmentsShape *)DefaultHeap::Alloc(0x18uLL);
        if ( !v55 || (v57 = CPathSegmentsShape::CPathSegmentsShape(v55, *((const struct CPathData **)this + 2))) == 0LL )
        {
          v6 = -2147024882;
          MilInstrumentationCheckHR_MaybeFailFast(v56, 0LL, 0, -2147024882, 0xFCu, 0LL);
          goto LABEL_22;
        }
        *a3 = v57;
      }
    }
    else
    {
      v58 = (struct CShape *)DefaultHeap::Alloc(0x50uLL);
      v59 = v58;
      if ( v58 )
      {
        *((_QWORD *)v58 + 1) = 0LL;
        *(_QWORD *)v58 = &CRoundedRectangleShape::`vftable';
        *((_OWORD *)v58 + 1) = *((_OWORD *)this + 1);
        *((_OWORD *)v58 + 2) = *((_OWORD *)this + 2);
        *((_OWORD *)v58 + 3) = *((_OWORD *)this + 3);
        *((_DWORD *)v58 + 16) = *((_DWORD *)this + 16);
        *((_QWORD *)v58 + 9) = 0LL;
      }
      else
      {
        v59 = 0LL;
      }
      *a3 = v59;
      if ( !v59 )
      {
        v6 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(0LL, 0LL, 0, -2147024882, 0xD5u, 0LL);
        goto LABEL_22;
      }
    }
    goto LABEL_51;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(CShape *, unsigned int *))(*(_QWORD *)this + 40LL))(this, &v69)
    || !(unsigned __int8)CMILMatrix::Is2DAxisAlignedPreserving<1>(v4) )
  {
LABEL_51:
    v18 = 0LL;
    goto LABEL_19;
  }
  if ( !v69 )
  {
    v52 = (char *)DefaultHeap::Alloc(0x60uLL);
    v54 = v52;
    if ( v52 )
    {
      memset_0(v52 + 24, 0, 0x40uLL);
      *((_QWORD *)v54 + 1) = 0LL;
      *(_QWORD *)v54 = &CRegionShape::`vftable';
      *((_QWORD *)v54 + 2) = v54 + 24;
      *((_DWORD *)v54 + 6) = 0;
      *((_QWORD *)v54 + 11) = 0LL;
    }
    else
    {
      v54 = 0LL;
    }
    *a3 = (struct CShape *)v54;
    if ( !v54 )
    {
      v6 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v53, 0LL, 0, -2147024882, 0x136u, 0LL);
      goto LABEL_22;
    }
    goto LABEL_51;
  }
  v20 = v69;
  v21 = 16LL * v69;
  if ( !is_mul_ok(v69, 0x10uLL) )
    v21 = -1LL;
  ProcessHeap = GetProcessHeap();
  v23 = (char *)HeapAlloc(ProcessHeap, 0, v21);
  v18 = v23;
  if ( !v23 )
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, -2147024882, 0x108u, 0LL);
    goto LABEL_22;
  }
  v25 = v23;
  do
  {
    TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>::TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>(v25);
    v25 += 16;
    --v20;
  }
  while ( v20 );
  (*(void (__fastcall **)(CShape *, char *, _QWORD))(*(_QWORD *)this + 48LL))(this, v18, v69);
  for ( i = 0; i < v69; *(_OWORD *)v27 = v73 )
  {
    v27 = &v18[16 * i];
    v73 = 0LL;
    CMILMatrix::Transform2DBoundsHelper<0>(v4);
    ++i;
  }
  if ( (*(unsigned int (__fastcall **)(CShape *))(*(_QWORD *)this + 8LL))(this) != 2
    || !CMILMatrix::Is2DAxisAlignedIntegerPreserving(v4) )
  {
    Current = CThreadContext::GetCurrent(&v71);
    if ( Current < 0 )
      ModuleFailFastForHRESULT((unsigned int)Current, retaddr);
    v29 = v71;
    v10 = 0LL;
    v30 = *((_DWORD *)v71 + 3);
    if ( v30 )
    {
      v10 = (char *)*((_QWORD *)v71 + 2);
      *((_QWORD *)v71 + 2) = *(_QWORD *)v10;
      *((_DWORD *)v29 + 3) = v30 - 1;
    }
    if ( !v10 )
    {
      v10 = (char *)DefaultHeap::Alloc(0x48uLL);
      if ( !v10 )
      {
        v6 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(v51, 0LL, 0, -2147024882, 0x12Bu, 0LL);
        goto LABEL_20;
      }
    }
    *((_QWORD *)v10 + 1) = 0LL;
    *(_QWORD *)v10 = &CRectanglesShape::`vftable';
    *((_QWORD *)v10 + 2) = v10 + 48;
    *((_QWORD *)v10 + 3) = v10 + 48;
    *((_DWORD *)v10 + 8) = 1;
    *(_QWORD *)(v10 + 36) = 1LL;
    TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>::TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>(v10 + 48);
    *((_QWORD *)v10 + 8) = 0LL;
    v31 = v69;
    *((_DWORD *)v10 + 10) = 0;
    DynArrayImpl<0>::ShrinkToSize(v10 + 16, 16LL);
    v32 = *((_QWORD *)v10 + 8);
    if ( v32 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
      *((_QWORD *)v10 + 8) = 0LL;
    }
    v33 = DynArray<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,0>::AddMultipleAndSet(
            v10 + 16,
            v18,
            v31);
    v6 = v33;
    if ( v33 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v34, 0LL, 0, v33, 0x12Du, 0LL);
LABEL_103:
      CRectanglesShape::`scalar deleting destructor'((CRectanglesShape *)v10, 1u);
      goto LABEL_20;
    }
    *a3 = (struct CShape *)v10;
LABEL_19:
    if ( !*a3 )
    {
      v64 = (*(__int64 (__fastcall **)(CShape *, CMILMatrix *, struct ID2D1Geometry **))(*(_QWORD *)this + 24LL))(
              this,
              v4,
              &v72);
      v6 = v64;
      if ( v64 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v65, 0LL, 0, v64, 0x13Cu, 0LL);
      }
      else
      {
        v66 = (CComplexShape *)operator new(0x18uLL);
        if ( v66 && (v68 = CComplexShape::CComplexShape(v66, v72)) != 0LL )
        {
          *a3 = v68;
        }
        else
        {
          v6 = -2147024882;
          MilInstrumentationCheckHR_MaybeFailFast(v67, 0LL, 0, -2147024882, 0x13Fu, 0LL);
        }
      }
    }
    goto LABEL_20;
  }
  v42 = (char *)DefaultHeap::Alloc(0x60uLL);
  v44 = v42;
  if ( v42 )
  {
    memset_0(v42 + 24, 0, 0x40uLL);
    *((_QWORD *)v44 + 1) = 0LL;
    v45 = (_DWORD **)(v44 + 16);
    *(_QWORD *)v44 = &CRegionShape::`vftable';
    v46 = 0;
    *((_QWORD *)v44 + 2) = v44 + 24;
    *((_DWORD *)v44 + 6) = 0;
    *((_QWORD *)v44 + 11) = 0LL;
    v74 = &v75;
    v75 = 0;
    if ( v69 )
    {
      while ( 1 )
      {
        CMilRectLFromMilRectF((int *)&v73, (__int64)&v18[16 * v46]);
        v47 = CRegion::TryAppendRects<TMilRect_<int,tagRECT,MilPointAndSizeL,Mil3DRectL,RectUniqueness::_CMilRectL_>>(
                (FastRegion::CRegion *)&v74,
                (int *)&v73);
        v6 = v47;
        if ( v47 < 0 )
          break;
        if ( ++v46 >= v69 )
        {
          v45 = (_DWORD **)(v44 + 16);
          goto LABEL_60;
        }
      }
      MilInstrumentationCheckHR_MaybeFailFast(v48, 0LL, 0, v47, 0x11Fu, 0LL);
      FastRegion::CRegion::FreeMemory((void **)&v74);
      CRegionShape::`vector deleting destructor'((CRegionShape *)v44, 1);
      goto LABEL_20;
    }
LABEL_60:
    **v45 = 0;
    v49 = *((_QWORD *)v44 + 11);
    *((_QWORD *)v44 + 11) = 0LL;
    if ( v49 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v49 + 16LL))(v49);
    v50 = FastRegion::CRegion::Copy(
            (const struct FastRegion::Internal::CRgnData **)v44 + 2,
            (const struct FastRegion::Internal::CRgnData **)&v74);
    if ( v50 < 0 )
      ModuleFailFastForHRESULT((unsigned int)v50, retaddr);
    *a3 = (struct CShape *)v44;
    FastRegion::CRegion::FreeMemory((void **)&v74);
    goto LABEL_19;
  }
  v6 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(v43, 0LL, 0, -2147024882, 0x119u, 0LL);
LABEL_20:
  if ( v18 )
  {
    v35 = GetProcessHeap();
    HeapFree(v35, 0, v18);
  }
LABEL_22:
  if ( v72 )
    (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v72 + 16LL))(v72);
  return (unsigned int)v6;
}
