/*
 * XREFs of ?EnsureSpawner@CParticleEmitterVisual@@IEAAJXZ @ 0x1801DFD94
 * Callers:
 *     ?SpawnParticles@CParticleEmitterVisual@@IEAAJHAEBUD2D_SIZE_F@@@Z @ 0x1801E1148 (-SpawnParticles@CParticleEmitterVisual@@IEAAJHAEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ?IsRoundedRectangleGeometry@CRectangleGeometry@@QEBA_NXZ @ 0x18001A250 (-IsRoundedRectangleGeometry@CRectangleGeometry@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetBoundsSafe@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800678F4 (-GetBoundsSafe@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoin.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180087600 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C891C (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UID2D1Geometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C930C (-InternalRelease@-$ComPtr@UID2D1Geometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800CB404 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1800E6E00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 *     ??R?$default_delete@VCSpawner@EmitterShapes@@@std@@QEBAXPEAVCSpawner@EmitterShapes@@@Z @ 0x18016C8EC (--R-$default_delete@VCSpawner@EmitterShapes@@@std@@QEBAXPEAVCSpawner@EmitterShapes@@@Z.c)
 *     ??$make_unique@VCEllipseSpawner@EmitterShapes@@Ufloat2@Numerics@Foundation@Windows@@U3456@AEBW4EmitFrom@2@$0A@@std@@YA?AV?$unique_ptr@VCEllipseSpawner@EmitterShapes@@U?$default_delete@VCEllipseSpawner@EmitterShapes@@@std@@@0@$$QEAUfloat2@Numerics@Foundation@Windows@@0AEBW4EmitFrom@EmitterShapes@@@Z @ 0x1801DDCC8 (--$make_unique@VCEllipseSpawner@EmitterShapes@@Ufloat2@Numerics@Foundation@Windows@@U3456@AEBW4E.c)
 *     ??$make_unique@VCLineSpawner@EmitterShapes@@Ufloat2@Numerics@Foundation@Windows@@U3456@$0A@@std@@YA?AV?$unique_ptr@VCLineSpawner@EmitterShapes@@U?$default_delete@VCLineSpawner@EmitterShapes@@@std@@@0@$$QEAUfloat2@Numerics@Foundation@Windows@@0@Z @ 0x1801DDD6C (--$make_unique@VCLineSpawner@EmitterShapes@@Ufloat2@Numerics@Foundation@Windows@@U3456@$0A@@std@.c)
 *     ??$make_unique@VCPathAreaSpawner@EmitterShapes@@PEAVCPathEmitterArea@2@$0A@@std@@YA?AV?$unique_ptr@VCPathAreaSpawner@EmitterShapes@@U?$default_delete@VCPathAreaSpawner@EmitterShapes@@@std@@@0@$$QEAPEAVCPathEmitterArea@EmitterShapes@@@Z @ 0x1801DDDC0 (--$make_unique@VCPathAreaSpawner@EmitterShapes@@PEAVCPathEmitterArea@2@$0A@@std@@YA-AV-$unique_p.c)
 *     ??$make_unique@VCPathEdgeSpawner@EmitterShapes@@PEAVCPathEmitterEdge@2@$0A@@std@@YA?AV?$unique_ptr@VCPathEdgeSpawner@EmitterShapes@@U?$default_delete@VCPathEdgeSpawner@EmitterShapes@@@std@@@0@$$QEAPEAVCPathEmitterEdge@EmitterShapes@@@Z @ 0x1801DDE2C (--$make_unique@VCPathEdgeSpawner@EmitterShapes@@PEAVCPathEmitterEdge@2@$0A@@std@@YA-AV-$unique_p.c)
 *     ??$make_unique@VCPointSpawner@EmitterShapes@@$$V$0A@@std@@YA?AV?$unique_ptr@VCPointSpawner@EmitterShapes@@U?$default_delete@VCPointSpawner@EmitterShapes@@@std@@@0@XZ @ 0x1801DDE98 (--$make_unique@VCPointSpawner@EmitterShapes@@$$V$0A@@std@@YA-AV-$unique_ptr@VCPointSpawner@Emitt.c)
 *     ??$make_unique@VCRectangleEdgeSpawner@EmitterShapes@@AEAMAEAMAEAMAEAM$0A@@std@@YA?AV?$unique_ptr@VCRectangleEdgeSpawner@EmitterShapes@@U?$default_delete@VCRectangleEdgeSpawner@EmitterShapes@@@std@@@0@AEAM000@Z @ 0x1801DDED0 (--$make_unique@VCRectangleEdgeSpawner@EmitterShapes@@AEAMAEAMAEAMAEAM$0A@@std@@YA-AV-$unique_ptr.c)
 *     ??$make_unique@VCRectangleVolumeSpawner@EmitterShapes@@AEAMAEAMAEAMAEAM$0A@@std@@YA?AV?$unique_ptr@VCRectangleVolumeSpawner@EmitterShapes@@U?$default_delete@VCRectangleVolumeSpawner@EmitterShapes@@@std@@@0@AEAM000@Z @ 0x1801DDF48 (--$make_unique@VCRectangleVolumeSpawner@EmitterShapes@@AEAMAEAMAEAMAEAM$0A@@std@@YA-AV-$unique_p.c)
 *     ?GetD2DGeometry@CShapePtr@@QEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x1801E06EC (-GetD2DGeometry@CShapePtr@@QEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ?CreatePathEmitterArea@CPathEmitterArea@EmitterShapes@@SAJPEAUID2D1Geometry@@PEAPEAV12@@Z @ 0x180208DE4 (-CreatePathEmitterArea@CPathEmitterArea@EmitterShapes@@SAJPEAUID2D1Geometry@@PEAPEAV12@@Z.c)
 *     ?CreatePathEmitterShape@CPathEmitterEdge@EmitterShapes@@SAJPEAUID2D1Geometry@@PEAPEAV12@@Z @ 0x180208F0C (-CreatePathEmitterShape@CPathEmitterEdge@EmitterShapes@@SAJPEAUID2D1Geometry@@PEAPEAV12@@Z.c)
 */

__int64 __fastcall CParticleEmitterVisual::EnsureSpawner(CParticleEmitterVisual *this)
{
  unsigned int v2; // edi
  __int64 *v3; // rcx
  __int64 v4; // rax
  int v5; // r15d
  char v6; // al
  CRectangleGeometry *v7; // rcx
  char v8; // r14
  char v9; // al
  _DWORD *v10; // rcx
  int v11; // xmm1_4
  unsigned int v12; // xmm0_4
  __int64 *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdx
  _DWORD *v16; // rax
  int v17; // xmm1_4
  unsigned int v18; // xmm0_4
  CGeometry *v19; // rcx
  int BoundsSafe; // eax
  __int64 v21; // rcx
  __int64 *v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  CGeometry *v26; // rcx
  int ShapeData; // eax
  __int64 v28; // rcx
  const struct CMILMatrix *v29; // rdx
  int D2DGeometry; // eax
  __int64 v31; // rcx
  int v32; // eax
  __int64 v33; // rcx
  __int64 *v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rcx
  int v38; // eax
  __int64 v39; // rcx
  __int64 *v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rdx
  __int64 *v43; // rax
  __int64 v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // rdx
  struct EmitterShapes::CPathEmitterArea *v48; // [rsp+30h] [rbp-40h] BYREF
  struct EmitterShapes::CPathEmitterArea *v49; // [rsp+38h] [rbp-38h] BYREF
  struct ID2D1Geometry *v50; // [rsp+40h] [rbp-30h] BYREF
  __int64 v51; // [rsp+48h] [rbp-28h] BYREF
  char v52; // [rsp+50h] [rbp-20h]
  __int128 v53; // [rsp+58h] [rbp-18h] BYREF

  v2 = 0;
  if ( *((_QWORD *)this + 789) )
    return v2;
  v3 = (__int64 *)*((_QWORD *)this + 91);
  if ( v3 )
  {
    v4 = *v3;
    v5 = *((_DWORD *)this + 158);
    LODWORD(v50) = v5;
    v6 = (*(__int64 (__fastcall **)(__int64 *, __int64))(v4 + 56))(v3, 138LL);
    v7 = (CRectangleGeometry *)*((_QWORD *)this + 91);
    if ( !v6 || (v8 = 1, !CRectangleGeometry::IsRoundedRectangleGeometry(v7)) )
      v8 = 0;
    v9 = (*(__int64 (__fastcall **)(CRectangleGeometry *, __int64))(*(_QWORD *)v7 + 56LL))(v7, 57LL);
    v10 = (_DWORD *)*((_QWORD *)this + 91);
    if ( v9 )
    {
      v11 = v10[37];
      LODWORD(v48) = v10[36];
      v12 = v10[34];
      HIDWORD(v48) = v11;
      *(_QWORD *)&v53 = __PAIR64__(v10[35], v12);
      v13 = std::make_unique<EmitterShapes::CEllipseSpawner,Windows::Foundation::Numerics::float2,Windows::Foundation::Numerics::float2,enum EmitterShapes::EmitFrom const &,0>(
              &v49,
              &v53,
              (__int64 *)&v48,
              (int *)&v50);
LABEL_8:
      v14 = *v13;
      *v13 = 0LL;
      v15 = *((_QWORD *)this + 789);
      *((_QWORD *)this + 789) = v14;
      if ( v15 )
        std::default_delete<EmitterShapes::CSpawner>::operator()(v14, v15);
      if ( v49 )
        (*(void (__fastcall **)(struct EmitterShapes::CPathEmitterArea *, __int64))(*(_QWORD *)v49 + 8LL))(v49, 1LL);
      return v2;
    }
    if ( (*(unsigned __int8 (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v10 + 56LL))(v10, 100LL) )
    {
      v16 = (_DWORD *)*((_QWORD *)this + 91);
      v17 = v16[37];
      LODWORD(v53) = v16[36];
      v18 = v16[34];
      DWORD1(v53) = v17;
      v48 = (struct EmitterShapes::CPathEmitterArea *)__PAIR64__(v16[35], v18);
      v13 = std::make_unique<EmitterShapes::CLineSpawner,Windows::Foundation::Numerics::float2,Windows::Foundation::Numerics::float2,0>(
              (__int64 *)&v49,
              &v48,
              &v53);
      goto LABEL_8;
    }
    if ( !v8
      && (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 91) + 56LL))(
           *((_QWORD *)this + 91),
           138LL) )
    {
      v19 = (CGeometry *)*((_QWORD *)this + 91);
      v53 = 0LL;
      BoundsSafe = CGeometry::GetBoundsSafe(v19, 0LL, &v53);
      v2 = BoundsSafe;
      if ( BoundsSafe >= 0 )
      {
        if ( v5 )
          v22 = std::make_unique<EmitterShapes::CRectangleVolumeSpawner,float &,float &,float &,float &,0>(
                  &v49,
                  (int *)&v53,
                  (int *)&v53 + 1,
                  (int *)&v53 + 2,
                  (_DWORD *)&v53 + 3);
        else
          v22 = std::make_unique<EmitterShapes::CRectangleEdgeSpawner,float &,float &,float &,float &,0>(
                  (__int64 *)&v49,
                  (float *)&v53,
                  (float *)&v53 + 1,
                  (float *)&v53 + 2,
                  (float *)&v53 + 3);
        v23 = *v22;
        *v22 = 0LL;
        v24 = *((_QWORD *)this + 789);
        *((_QWORD *)this + 789) = v23;
        if ( v24 )
          std::default_delete<EmitterShapes::CSpawner>::operator()(v23, v24);
        v25 = (__int64)v49;
        if ( !v49 )
          goto LABEL_49;
        goto LABEL_48;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, BoundsSafe, 0x1AFu, 0LL);
LABEL_49:
      if ( (v2 & 0x80000000) != 0 )
      {
        v46 = *((_QWORD *)this + 789);
        *((_QWORD *)this + 789) = 0LL;
        if ( v46 )
          std::default_delete<EmitterShapes::CSpawner>::operator()(v25, v46);
      }
      return v2;
    }
    v26 = (CGeometry *)*((_QWORD *)this + 91);
    v51 = 0LL;
    v52 = 0;
    v50 = 0LL;
    ShapeData = CGeometry::GetShapeData(v26, 0LL, (struct CShapePtr *)&v51);
    v2 = ShapeData;
    if ( ShapeData < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0, ShapeData, 0x1C0u, 0LL);
      goto LABEL_44;
    }
    Microsoft::WRL::ComPtr<ID2D1Geometry>::InternalRelease((__int64 *)&v50);
    D2DGeometry = CShapePtr::GetD2DGeometry((CShapePtr *)&v51, v29, &v50);
    v2 = D2DGeometry;
    if ( D2DGeometry < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0, D2DGeometry, 0x1C1u, 0LL);
      goto LABEL_44;
    }
    v48 = 0LL;
    if ( v5 )
    {
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v48);
      v38 = EmitterShapes::CPathEmitterArea::CreatePathEmitterArea(v50, &v48);
      v2 = v38;
      if ( v38 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v39, 0LL, 0, v38, 0x1CCu, 0LL);
        goto LABEL_34;
      }
      v49 = v48;
      v40 = std::make_unique<EmitterShapes::CPathAreaSpawner,EmitterShapes::CPathEmitterArea *,0>(&v53, (__int64 *)&v49);
      v41 = *v40;
      *v40 = 0LL;
      v42 = *((_QWORD *)this + 789);
      *((_QWORD *)this + 789) = v41;
      if ( v42 )
        std::default_delete<EmitterShapes::CSpawner>::operator()(v41, v42);
      v37 = v53;
      if ( !(_QWORD)v53 )
        goto LABEL_34;
    }
    else
    {
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v48);
      v32 = EmitterShapes::CPathEmitterEdge::CreatePathEmitterShape(v50, &v48);
      v2 = v32;
      if ( v32 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v33, 0LL, 0, v32, 0x1C6u, 0LL);
        goto LABEL_34;
      }
      v49 = v48;
      v34 = std::make_unique<EmitterShapes::CPathEdgeSpawner,EmitterShapes::CPathEmitterEdge *,0>(&v53, (__int64 *)&v49);
      v35 = *v34;
      *v34 = 0LL;
      v36 = *((_QWORD *)this + 789);
      *((_QWORD *)this + 789) = v35;
      if ( v36 )
        std::default_delete<EmitterShapes::CSpawner>::operator()(v35, v36);
      v37 = v53;
      if ( !(_QWORD)v53 )
        goto LABEL_34;
    }
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v53 + 8LL))(v37, 1LL);
LABEL_34:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v48);
LABEL_44:
    Microsoft::WRL::ComPtr<ID2D1Geometry>::InternalRelease((__int64 *)&v50);
    CShapePtr::Release((CShapePtr *)&v51);
    goto LABEL_49;
  }
  v43 = std::make_unique<EmitterShapes::CPointSpawner,,0>(&v49);
  v44 = *v43;
  *v43 = 0LL;
  v45 = *((_QWORD *)this + 789);
  *((_QWORD *)this + 789) = v44;
  if ( v45 )
    std::default_delete<EmitterShapes::CSpawner>::operator()(v44, v45);
  v25 = (__int64)v49;
  if ( v49 )
  {
LABEL_48:
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v25 + 8LL))(v25, 1LL);
    goto LABEL_49;
  }
  return v2;
}
