/*
 * XREFs of ?GetCpuClip@CDrawingContext@@QEAAJPEAVCCpuClip@@@Z @ 0x180094BD4
 * Callers:
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@@Z @ 0x18000B8E4 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEAVCDrawListCache.c)
 *     ?GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180056C40 (-GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCac.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x180094700 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     ?IsDrawListCacheDirty@CContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCMILMatrix@@@Z @ 0x1800961B0 (-IsDrawListCacheDirty@CContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@P.c)
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAPEAVCSurfaceDrawListBrush@@@Z @ 0x1801E56E8 (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1.c)
 *     ?BuildDrawList@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAVCDrawListEntryBuilder@@@Z @ 0x18020E450 (-BuildDrawList@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAVCDrawListEntryBuil.c)
 * Callees:
 *     ?IsInvertibleDeterminant@CMILMatrix@@SA_NM@Z @ 0x1800491BC (-IsInvertibleDeterminant@CMILMatrix@@SA_NM@Z.c)
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x1800572F0 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ??0CMILMatrix@@QEAA@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x180057724 (--0CMILMatrix@@QEAA@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x18008AF20 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x18008B098 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ??$ProducesUniformZ@$00@CMILMatrix@@AEBA_NXZ @ 0x1800ACAC4 (--$ProducesUniformZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?GetTopCpuClipInScope@CScopedClipStack@@QEAAJPEAPEBVCShape@@@Z @ 0x1800CBE30 (-GetTopCpuClipInScope@CScopedClipStack@@QEAAJPEAPEBVCShape@@@Z.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x1800DCDBC (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::GetCpuClip(CDrawingContext *this, struct CCpuClip *a2)
{
  unsigned int v4; // r14d
  char v5; // al
  int v6; // r9d
  __int64 v7; // r8
  __int64 v8; // rdx
  struct CShape *v9; // r15
  __int64 *v10; // rdi
  int v11; // r13d
  char v12; // al
  int v14; // ecx
  int v15; // eax
  CVisual *v16; // rax
  int TopCpuClipInScope; // eax
  __int64 v18; // rcx
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  CMatrixStack *v23; // r9
  const struct CMILMatrix *TopByReference; // rax
  void (__fastcall ***v25)(_QWORD, __int64); // rcx
  void (__fastcall ***v26)(_QWORD, __int64); // rcx
  struct CShape *v27; // [rsp+30h] [rbp-A9h] BYREF
  __int128 v28; // [rsp+40h] [rbp-99h] BYREF
  __int128 v29; // [rsp+50h] [rbp-89h]
  __int128 v30; // [rsp+60h] [rbp-79h]
  __int128 v31; // [rsp+70h] [rbp-69h]
  int v32; // [rsp+80h] [rbp-59h]
  __int128 v33; // [rsp+90h] [rbp-49h] BYREF
  __int128 v34; // [rsp+A0h] [rbp-39h]
  __int128 v35; // [rsp+B0h] [rbp-29h]
  __int128 v36; // [rsp+C0h] [rbp-19h]
  int v37; // [rsp+D0h] [rbp-9h]
  struct D2D_MATRIX_3X2_F v38; // [rsp+E0h] [rbp+7h] BYREF

  v4 = 0;
  if ( *((_BYTE *)a2 + 88) )
  {
    v25 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)a2 + 10);
    if ( v25 )
      (**v25)(v25, 1LL);
  }
  *((_QWORD *)a2 + 10) = 0LL;
  *((_BYTE *)a2 + 88) = 0;
  *((_BYTE *)a2 + 100) = 0;
  *(_QWORD *)a2 = 0LL;
  *((_DWORD *)a2 + 24) = 0;
  *((_QWORD *)a2 + 1) = 1065353216LL;
  *((_QWORD *)a2 + 2) = 0LL;
  *((_DWORD *)a2 + 6) = 0;
  *(_QWORD *)((char *)a2 + 28) = 1065353216LL;
  *(_QWORD *)((char *)a2 + 36) = 0LL;
  *((_DWORD *)a2 + 11) = 0;
  *((_QWORD *)a2 + 6) = 1065353216LL;
  *((_QWORD *)a2 + 7) = 0LL;
  *((_DWORD *)a2 + 16) = 0;
  *((_DWORD *)a2 + 17) = 1065353216;
  v5 = *((_BYTE *)a2 + 73);
  *((_BYTE *)a2 + 72) = 85;
  *((_BYTE *)a2 + 73) = v5 & 0xC0 | 0x17;
  v6 = *((_DWORD *)this + 222);
  v7 = *((_QWORD *)this + 108);
  v8 = 88LL * (unsigned int)(v6 - 1);
  if ( *(_BYTE *)(v8 + v7 + 84) )
  {
    v27 = 0LL;
    v9 = 0LL;
    v32 = 0;
    v10 = 0LL;
    v11 = 16;
    if ( v6 && *(_DWORD *)(v8 + v7 + 4) )
    {
      v14 = *((_DWORD *)this + 108);
      v15 = 0;
      if ( v14 )
        v15 = *(_DWORD *)(*((_QWORD *)this + 56) + 4LL * (unsigned int)(v14 - 1));
      if ( *((_DWORD *)this + 92) == v15 )
      {
        v16 = (CVisual *)(*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 3) + 32LL))((char *)this + 24);
        v10 = CVisual::FindTreeData(v16, *((const struct CVisualTree **)this + 991))[14];
      }
      else
      {
        v19 = *(_OWORD *)(v8 + v7 + 16);
        v20 = *(_OWORD *)(v8 + v7 + 32);
        v37 = *(_DWORD *)(v8 + v7 + 80);
        v33 = v19;
        v21 = *(_OWORD *)(v8 + v7 + 48);
        v34 = v20;
        v22 = *(_OWORD *)(v8 + v7 + 64);
        v35 = v21;
        v36 = v22;
        if ( !CMILMatrix::Invert((CMILMatrix *)&v33) )
          return v4;
        TopByReference = CMatrixStack::GetTopByReference(v23);
        CMILMatrix::Multiply(TopByReference, (const struct CMILMatrix *)&v33, (struct CMILMatrix *)&v28);
        if ( !(unsigned __int8)CMILMatrix::ProducesUniformZ<1>(&v28) )
          return v4;
        if ( COERCE_FLOAT(DWORD2(v31) & _xmm) >= 0.000081380211 )
        {
          if ( !(unsigned __int8)CMILMatrix::ProducesUniformZ<1>(*((_QWORD *)this + 108) + 16LL + 88LL
                                                                                                * (unsigned int)(*((_DWORD *)this + 222) - 1)) )
            return v4;
          *(_QWORD *)&v38.m11 = v28;
          *(_QWORD *)&v38.m[1][0] = v29;
          *(_QWORD *)&v38.m[2][0] = v31;
          CMILMatrix::CMILMatrix((CMILMatrix *)&v33, &v38);
          v11 = 144;
          v32 = v37;
          v28 = v33;
          v29 = v34;
          v30 = v35;
          v31 = v36;
        }
        v10 = (__int64 *)&v28;
        if ( !CMILMatrix::IsInvertibleDeterminant((float)(*((float *)&v29 + 1) * *(float *)&v28) - (float)(*(float *)&v29 * *((float *)&v28 + 1))) )
          return v4;
      }
      TopCpuClipInScope = CScopedClipStack::GetTopCpuClipInScope((CDrawingContext *)((char *)this + 864), &v27);
      v4 = TopCpuClipInScope;
      if ( TopCpuClipInScope < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0LL, TopCpuClipInScope, 0x236u);
        return v4;
      }
      v9 = v27;
    }
    if ( *((_BYTE *)a2 + 88) )
    {
      v26 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)a2 + 10);
      if ( v26 )
        (**v26)(v26, 1LL);
    }
    *((_QWORD *)a2 + 10) = 0LL;
    *((_BYTE *)a2 + 88) = 0;
    *((_BYTE *)a2 + 100) = 0;
    *(_QWORD *)a2 = v9;
    *((_DWORD *)a2 + 24) = v11;
    if ( v10 )
    {
      *(_OWORD *)((char *)a2 + 8) = *(_OWORD *)v10;
      *(_OWORD *)((char *)a2 + 24) = *((_OWORD *)v10 + 1);
      *(_OWORD *)((char *)a2 + 40) = *((_OWORD *)v10 + 2);
      *(_OWORD *)((char *)a2 + 56) = *((_OWORD *)v10 + 3);
      *((_DWORD *)a2 + 18) = *((_DWORD *)v10 + 16);
    }
    else
    {
      *((_QWORD *)a2 + 1) = 1065353216LL;
      *((_QWORD *)a2 + 2) = 0LL;
      *((_DWORD *)a2 + 6) = 0;
      *(_QWORD *)((char *)a2 + 28) = 1065353216LL;
      *(_QWORD *)((char *)a2 + 36) = 0LL;
      *((_DWORD *)a2 + 11) = 0;
      *((_QWORD *)a2 + 6) = 1065353216LL;
      *((_QWORD *)a2 + 7) = 0LL;
      *((_DWORD *)a2 + 16) = 0;
      *((_DWORD *)a2 + 17) = 1065353216;
      v12 = *((_BYTE *)a2 + 73) & 0xD7;
      *((_BYTE *)a2 + 72) = 85;
      *((_BYTE *)a2 + 73) = v12 | 0x17;
    }
  }
  return v4;
}
