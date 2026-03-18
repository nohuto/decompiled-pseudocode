/*
 * XREFs of ?EnsureSpawner@CParticleEmitterVisual@@IEAAJXZ @ 0x18022EC94
 * Callers:
 *     ?SpawnParticles@CParticleEmitterVisual@@IEAAJHAEBUD2D_SIZE_F@@@Z @ 0x180230098 (-SpawnParticles@CParticleEmitterVisual@@IEAAJHAEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetBoundsSafe@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18008ECB8 (-GetBoundsSafe@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoin.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x18009AF00 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800D2E54 (-InternalRelease@-$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800D36F8 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1801000AC (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??R?$default_delete@VCSpawner@EmitterShapes@@@std@@QEBAXPEAVCSpawner@EmitterShapes@@@Z @ 0x18019E624 (--R-$default_delete@VCSpawner@EmitterShapes@@@std@@QEBAXPEAVCSpawner@EmitterShapes@@@Z.c)
 *     ?GetD2DGeometry@CShapePtr@@QEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x1801FA6A8 (-GetD2DGeometry@CShapePtr@@QEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ??$make_unique@VCEllipseSpawner@EmitterShapes@@Ufloat2@Numerics@Foundation@Windows@@U3456@AEBW4EmitFrom@2@$0A@@std@@YA?AV?$unique_ptr@VCEllipseSpawner@EmitterShapes@@U?$default_delete@VCEllipseSpawner@EmitterShapes@@@std@@@0@$$QEAUfloat2@Numerics@Foundation@Windows@@0AEBW4EmitFrom@EmitterShapes@@@Z @ 0x18022CCC8 (--$make_unique@VCEllipseSpawner@EmitterShapes@@Ufloat2@Numerics@Foundation@Windows@@U3456@AEBW4E.c)
 *     ??$make_unique@VCLineSpawner@EmitterShapes@@Ufloat2@Numerics@Foundation@Windows@@U3456@$0A@@std@@YA?AV?$unique_ptr@VCLineSpawner@EmitterShapes@@U?$default_delete@VCLineSpawner@EmitterShapes@@@std@@@0@$$QEAUfloat2@Numerics@Foundation@Windows@@0@Z @ 0x18022CD6C (--$make_unique@VCLineSpawner@EmitterShapes@@Ufloat2@Numerics@Foundation@Windows@@U3456@$0A@@std@.c)
 *     ??$make_unique@VCPathAreaSpawner@EmitterShapes@@PEAVCPathEmitterArea@2@$0A@@std@@YA?AV?$unique_ptr@VCPathAreaSpawner@EmitterShapes@@U?$default_delete@VCPathAreaSpawner@EmitterShapes@@@std@@@0@$$QEAPEAVCPathEmitterArea@EmitterShapes@@@Z @ 0x18022CDC0 (--$make_unique@VCPathAreaSpawner@EmitterShapes@@PEAVCPathEmitterArea@2@$0A@@std@@YA-AV-$unique_p.c)
 *     ??$make_unique@VCPathEdgeSpawner@EmitterShapes@@PEAVCPathEmitterEdge@2@$0A@@std@@YA?AV?$unique_ptr@VCPathEdgeSpawner@EmitterShapes@@U?$default_delete@VCPathEdgeSpawner@EmitterShapes@@@std@@@0@$$QEAPEAVCPathEmitterEdge@EmitterShapes@@@Z @ 0x18022CE38 (--$make_unique@VCPathEdgeSpawner@EmitterShapes@@PEAVCPathEmitterEdge@2@$0A@@std@@YA-AV-$unique_p.c)
 *     ??$make_unique@VCPointSpawner@EmitterShapes@@$$V$0A@@std@@YA?AV?$unique_ptr@VCPointSpawner@EmitterShapes@@U?$default_delete@VCPointSpawner@EmitterShapes@@@std@@@0@XZ @ 0x18022CEB0 (--$make_unique@VCPointSpawner@EmitterShapes@@$$V$0A@@std@@YA-AV-$unique_ptr@VCPointSpawner@Emitt.c)
 *     ??$make_unique@VCRectangleEdgeSpawner@EmitterShapes@@AEAMAEAMAEAMAEAM$0A@@std@@YA?AV?$unique_ptr@VCRectangleEdgeSpawner@EmitterShapes@@U?$default_delete@VCRectangleEdgeSpawner@EmitterShapes@@@std@@@0@AEAM000@Z @ 0x18022CEE8 (--$make_unique@VCRectangleEdgeSpawner@EmitterShapes@@AEAMAEAMAEAMAEAM$0A@@std@@YA-AV-$unique_ptr.c)
 *     ??$make_unique@VCRectangleVolumeSpawner@EmitterShapes@@AEAMAEAMAEAMAEAM$0A@@std@@YA?AV?$unique_ptr@VCRectangleVolumeSpawner@EmitterShapes@@U?$default_delete@VCRectangleVolumeSpawner@EmitterShapes@@@std@@@0@AEAM000@Z @ 0x18022CF60 (--$make_unique@VCRectangleVolumeSpawner@EmitterShapes@@AEAMAEAMAEAMAEAM$0A@@std@@YA-AV-$unique_p.c)
 *     ?IsRoundedRectangleGeometry@CRectangleGeometry@@QEBA_NXZ @ 0x18023B320 (-IsRoundedRectangleGeometry@CRectangleGeometry@@QEBA_NXZ.c)
 *     ?CreatePathEmitterArea@CPathEmitterArea@EmitterShapes@@SAJPEAUID2D1Geometry@@PEAPEAV12@@Z @ 0x180259354 (-CreatePathEmitterArea@CPathEmitterArea@EmitterShapes@@SAJPEAUID2D1Geometry@@PEAPEAV12@@Z.c)
 *     ?CreatePathEmitterShape@CPathEmitterEdge@EmitterShapes@@SAJPEAUID2D1Geometry@@PEAPEAV12@@Z @ 0x18025947C (-CreatePathEmitterShape@CPathEmitterEdge@EmitterShapes@@SAJPEAUID2D1Geometry@@PEAPEAV12@@Z.c)
 */

__int64 __fastcall CParticleEmitterVisual::EnsureSpawner(CParticleEmitterVisual *this)
{
  unsigned int v2; // edi
  __int64 *v3; // rcx
  int v4; // r15d
  __int64 v5; // rax
  __int64 v6; // rcx
  char v7; // r14
  char v8; // al
  _DWORD *v9; // rcx
  int v10; // xmm1_4
  unsigned int v11; // xmm0_4
  __int64 *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdx
  _DWORD *v15; // rax
  int v16; // xmm1_4
  unsigned int v17; // xmm0_4
  CGeometry *v18; // rcx
  int BoundsSafe; // eax
  __int64 v20; // rcx
  __int64 v21; // rcx
  CGeometry *v22; // rcx
  int ShapeData; // eax
  __int64 v24; // rcx
  const struct CMILMatrix *v25; // rdx
  int D2DGeometry; // eax
  __int64 v27; // rcx
  int v28; // eax
  __int64 v29; // rcx
  __int64 *v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rdx
  int v33; // eax
  __int64 v34; // rcx
  __int64 *v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rdx
  __int64 *v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rdx
  struct EmitterShapes::CPathEmitterArea *v43; // [rsp+30h] [rbp-40h] BYREF
  struct EmitterShapes::CPathEmitterArea *v44; // [rsp+38h] [rbp-38h] BYREF
  struct ID2D1Geometry *v45; // [rsp+40h] [rbp-30h] BYREF
  __int64 v46; // [rsp+48h] [rbp-28h] BYREF
  char v47; // [rsp+50h] [rbp-20h]
  __int128 v48; // [rsp+58h] [rbp-18h] BYREF

  v2 = 0;
  if ( *((_QWORD *)this + 803) )
    return v2;
  v3 = (__int64 *)*((_QWORD *)this + 105);
  if ( v3 )
  {
    v4 = *((_DWORD *)this + 186);
    v5 = *v3;
    LODWORD(v45) = v4;
    if ( (*(unsigned __int8 (__fastcall **)(__int64 *, __int64))(v5 + 56))(v3, 137LL)
      && CRectangleGeometry::IsRoundedRectangleGeometry(*((CRectangleGeometry **)this + 105)) )
    {
      v7 = 1;
    }
    else
    {
      v6 = *((_QWORD *)this + 105);
      v7 = 0;
    }
    v8 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 56LL))(v6, 57LL);
    v9 = (_DWORD *)*((_QWORD *)this + 105);
    if ( v8 )
    {
      v10 = v9[39];
      LODWORD(v43) = v9[38];
      v11 = v9[36];
      HIDWORD(v43) = v10;
      *(_QWORD *)&v48 = __PAIR64__(v9[37], v11);
      v12 = std::make_unique<EmitterShapes::CEllipseSpawner,Windows::Foundation::Numerics::float2,Windows::Foundation::Numerics::float2,enum EmitterShapes::EmitFrom const &,0>(
              &v44,
              &v48,
              (__int64 *)&v43,
              (int *)&v45);
LABEL_9:
      v13 = *v12;
      *v12 = 0LL;
      v14 = *((_QWORD *)this + 803);
      *((_QWORD *)this + 803) = v13;
      if ( v14 )
        std::default_delete<EmitterShapes::CSpawner>::operator()(v13, v14);
      if ( v44 )
        (*(void (__fastcall **)(struct EmitterShapes::CPathEmitterArea *, __int64))(*(_QWORD *)v44 + 8LL))(v44, 1LL);
      return v2;
    }
    if ( (*(unsigned __int8 (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v9 + 56LL))(v9, 100LL) )
    {
      v15 = (_DWORD *)*((_QWORD *)this + 105);
      v16 = v15[39];
      LODWORD(v48) = v15[38];
      v17 = v15[36];
      DWORD1(v48) = v16;
      v43 = (struct EmitterShapes::CPathEmitterArea *)__PAIR64__(v15[37], v17);
      v12 = std::make_unique<EmitterShapes::CLineSpawner,Windows::Foundation::Numerics::float2,Windows::Foundation::Numerics::float2,0>(
              (__int64 *)&v44,
              &v43,
              &v48);
      goto LABEL_9;
    }
    if ( !v7
      && (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 105) + 56LL))(
           *((_QWORD *)this + 105),
           137LL) )
    {
      v18 = (CGeometry *)*((_QWORD *)this + 105);
      v48 = 0LL;
      BoundsSafe = CGeometry::GetBoundsSafe(v18, 0LL, &v48);
      v2 = BoundsSafe;
      if ( BoundsSafe >= 0 )
      {
        if ( v4 )
          v12 = std::make_unique<EmitterShapes::CRectangleVolumeSpawner,float &,float &,float &,float &,0>(
                  &v44,
                  (int *)&v48,
                  (int *)&v48 + 1,
                  (int *)&v48 + 2,
                  (_DWORD *)&v48 + 3);
        else
          v12 = std::make_unique<EmitterShapes::CRectangleEdgeSpawner,float &,float &,float &,float &,0>(
                  (__int64 *)&v44,
                  (float *)&v48,
                  (float *)&v48 + 1,
                  (float *)&v48 + 2,
                  (float *)&v48 + 3);
        goto LABEL_9;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0LL, BoundsSafe, 0x1A7u);
      goto LABEL_42;
    }
    v22 = (CGeometry *)*((_QWORD *)this + 105);
    v46 = 0LL;
    v47 = 0;
    v45 = 0LL;
    ShapeData = CGeometry::GetShapeData(v22, 0LL, (struct CShapePtr *)&v46);
    v2 = ShapeData;
    if ( ShapeData < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0LL, ShapeData, 0x1B8u);
    }
    else
    {
      Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease((__int64 *)&v45);
      D2DGeometry = CShapePtr::GetD2DGeometry((CShapePtr *)&v46, v25, &v45);
      v2 = D2DGeometry;
      if ( D2DGeometry < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0LL, D2DGeometry, 0x1B9u);
      }
      else
      {
        v43 = 0LL;
        if ( v4 )
        {
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v43);
          v33 = EmitterShapes::CPathEmitterArea::CreatePathEmitterArea(v45, &v43);
          v2 = v33;
          if ( v33 >= 0 )
          {
            v44 = v43;
            v35 = std::make_unique<EmitterShapes::CPathAreaSpawner,EmitterShapes::CPathEmitterArea *,0>(
                    &v48,
                    (__int64 *)&v44);
            v36 = *v35;
            *v35 = 0LL;
            v37 = *((_QWORD *)this + 803);
            *((_QWORD *)this + 803) = v36;
            if ( v37 )
              std::default_delete<EmitterShapes::CSpawner>::operator()(v36, v37);
            if ( (_QWORD)v48 )
              (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v48 + 8LL))(v48, 1LL);
            goto LABEL_37;
          }
          MilInstrumentationCheckHR_MaybeFailFast(v34, 0LL, 0LL, v33, 0x1C4u);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v43);
        }
        else
        {
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v43);
          v28 = EmitterShapes::CPathEmitterEdge::CreatePathEmitterShape(v45, &v43);
          v2 = v28;
          if ( v28 >= 0 )
          {
            v44 = v43;
            v30 = std::make_unique<EmitterShapes::CPathEdgeSpawner,EmitterShapes::CPathEmitterEdge *,0>(
                    &v48,
                    (__int64 *)&v44);
            v31 = *v30;
            *v30 = 0LL;
            v32 = *((_QWORD *)this + 803);
            *((_QWORD *)this + 803) = v31;
            if ( v32 )
              std::default_delete<EmitterShapes::CSpawner>::operator()(v31, v32);
            if ( (_QWORD)v48 )
              (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v48 + 8LL))(v48, 1LL);
LABEL_37:
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v43);
            Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease((__int64 *)&v45);
            CShapePtr::Release((CShapePtr *)&v46);
            return v2;
          }
          MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0LL, v28, 0x1BEu);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v43);
        }
      }
    }
    Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease((__int64 *)&v45);
    CShapePtr::Release((CShapePtr *)&v46);
LABEL_42:
    v38 = *((_QWORD *)this + 803);
    *((_QWORD *)this + 803) = 0LL;
    if ( v38 )
      std::default_delete<EmitterShapes::CSpawner>::operator()(v21, v38);
    return v2;
  }
  v39 = std::make_unique<EmitterShapes::CPointSpawner,,0>(&v44);
  v40 = *v39;
  *v39 = 0LL;
  v41 = *((_QWORD *)this + 803);
  *((_QWORD *)this + 803) = v40;
  if ( v41 )
    std::default_delete<EmitterShapes::CSpawner>::operator()(v40, v41);
  if ( v44 )
    (*(void (__fastcall **)(struct EmitterShapes::CPathEmitterArea *, __int64))(*(_QWORD *)v44 + 8LL))(v44, 1LL);
  return v2;
}
