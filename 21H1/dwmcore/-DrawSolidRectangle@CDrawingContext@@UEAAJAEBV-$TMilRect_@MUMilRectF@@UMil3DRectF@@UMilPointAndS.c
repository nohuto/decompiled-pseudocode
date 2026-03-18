/*
 * XREFs of ?DrawSolidRectangle@CDrawingContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x18017B140
 * Callers:
 *     ?Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180015D14 (-Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@.c)
 * Callees:
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x180010584 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ?Enter@CDisableCPUClipScope@CDrawingContext@@QEAAJPEAV2@@Z @ 0x18002AF64 (-Enter@CDisableCPUClipScope@CDrawingContext@@QEAAJPEAV2@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x18002F7B0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ??1CDisableCPUClipScope@CDrawingContext@@QEAA@XZ @ 0x1800301A8 (--1CDisableCPUClipScope@CDrawingContext@@QEAA@XZ.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x18003594C (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180036784 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180039700 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18003AF68 (--3@YAXPEAX@Z.c)
 *     ?GetUnOccludedWorldShape@CDrawingContext@@AEAAJAEBVCShape@@HPEAPEAV2@@Z @ 0x180049320 (-GetUnOccludedWorldShape@CDrawingContext@@AEAAJAEBVCShape@@HPEAPEAV2@@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x18007190C (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x1800950D4 (--1CRectanglesShape@@UEAA@XZ.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ??0CRectanglesShape@@QEAA@AEBUMilRectF@@@Z @ 0x180178AAC (--0CRectanglesShape@@QEAA@AEBUMilRectF@@@Z.c)
 *     gsl::final_action__lambda_b84a1ee213fa572390f758b550ef68e0___::_final_action__lambda_b84a1ee213fa572390f758b550ef68e0___ @ 0x180178B68 (gsl--final_action__lambda_b84a1ee213fa572390f758b550ef68e0___--_final_action__lambda_b84a1ee213f.c)
 *     ?FillRectanglesWithSolidColor@CDrawingContext@@QEAAJAEBV?$span@$$CBUMilRectF@@$0?0@gsl@@AEBU_D3DCOLORVALUE@@@Z @ 0x18017B598 (-FillRectanglesWithSolidColor@CDrawingContext@@QEAAJAEBV-$span@$$CBUMilRectF@@$0-0@gsl@@AEBU_D3D.c)
 */

__int64 __fastcall CDrawingContext::DrawSolidRectangle(__int64 a1, struct CShape *a2, __int128 *a3)
{
  int v3; // eax
  unsigned int v4; // edi
  float v7; // xmm0_4
  float v8; // xmm6_4
  const struct MilRectF *v9; // rdx
  CDrawingContext *v10; // rbx
  int v11; // r8d
  bool v12; // di
  struct CShape *v13; // rcx
  __int64 (__fastcall ***v14)(_QWORD, __int64); // rdx
  int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  unsigned int v19; // edi
  char *v20; // rax
  __int64 v21; // rcx
  struct CShape *v22; // rsi
  __int64 v23; // rcx
  __int128 v24; // xmm1
  int v25; // eax
  __int64 v26; // rcx
  __int128 v27; // xmm1
  int v28; // eax
  __int64 (__fastcall ***v30)(_QWORD, __int64); // [rsp+38h] [rbp-89h] BYREF
  unsigned __int64 v31; // [rsp+40h] [rbp-81h] BYREF
  struct CShape *v32[2]; // [rsp+48h] [rbp-79h] BYREF
  char v33; // [rsp+58h] [rbp-69h]
  __int64 v34; // [rsp+60h] [rbp-61h] BYREF
  __int128 v35; // [rsp+68h] [rbp-59h] BYREF
  int v36; // [rsp+78h] [rbp-49h] BYREF
  unsigned int *v37[2]; // [rsp+80h] [rbp-41h] BYREF
  char v38; // [rsp+90h] [rbp-31h]
  _BYTE v39[80]; // [rsp+98h] [rbp-29h] BYREF

  v3 = *(_DWORD *)(a1 + 3216);
  v4 = 0;
  v35 = *a3;
  if ( v3 )
    v7 = *(float *)(*(_QWORD *)(a1 + 3232) + 4LL * (unsigned int)(v3 - 1));
  else
    v7 = *(float *)&FLOAT_1_0;
  v8 = *((float *)&v35 + 3) * v7;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)&v35 + 3) * v7) & _xmm) >= 0.0000011920929
    && !TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)a2) )
  {
    v10 = (CDrawingContext *)(a1 - 16);
    v36 = *(_DWORD *)(a1 + 264);
    *(_DWORD *)(a1 + 264) = *(_DWORD *)(a1 + 284);
    v37[0] = (unsigned int *)&v36;
    v37[1] = (unsigned int *)(a1 - 16);
    v38 = 1;
    CRectanglesShape::CRectanglesShape((CRectanglesShape *)v39, v9);
    v11 = *(_DWORD *)(a1 + 5928);
    v30 = 0LL;
    v32[1] = 0LL;
    v32[0] = (struct CShape *)&v30;
    v33 = 1;
    v12 = (int)CDrawingContext::GetUnOccludedWorldShape(
                 (CDrawingContext *)(a1 - 16),
                 (const struct CShape *)v39,
                 v11,
                 &v32[1]) >= 0;
    if ( v33 )
    {
      v13 = v32[0];
      v14 = *(__int64 (__fastcall ****)(_QWORD, __int64))v32[0];
      *(_QWORD *)v32[0] = v32[1];
      if ( v14 )
        std::default_delete<CShape>::operator()((__int64)v13, v14);
    }
    if ( v12 )
    {
      v15 = CDrawingContext::PushTransformInternal(
              (CDrawingContext *)(a1 - 16),
              0LL,
              (const struct CMILMatrix *)&CMILMatrix::Identity,
              0,
              1);
      v4 = v15;
      if ( v15 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x257u, 0LL);
      }
      else
      {
        v34 = 0LL;
        v17 = CDrawingContext::CDisableCPUClipScope::Enter(
                (CDrawingContext::CDisableCPUClipScope *)&v34,
                (struct CDrawingContext *)(a1 - 16));
        v4 = v17;
        if ( v17 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x260u, 0LL);
        }
        else
        {
          (*v30)[5](v30, (__int64)&v31);
          v19 = v31;
          v20 = (char *)DefaultHeap::Alloc(saturated_mul((unsigned int)v31, 0x10uLL));
          v22 = (struct CShape *)v20;
          if ( v20 )
            `vector constructor iterator'(
              v20,
              16LL,
              v19,
              (void (__fastcall *)(char *))TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>::TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>);
          else
            v22 = 0LL;
          if ( v22 )
          {
            ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, __int64), struct CShape *, _QWORD))(*v30)[6])(
              v30,
              v22,
              (unsigned int)v31);
            LODWORD(v32[0]) = v35;
            *((float *)&v32[1] + 1) = v8;
            *(struct CShape **)((char *)v32 + 4) = *(struct CShape **)((char *)&v35 + 4);
            v24 = *(_OWORD *)v32;
            v32[0] = (struct CShape *)(unsigned int)v31;
            v32[1] = v22;
            v35 = v24;
            v25 = CDrawingContext::FillRectanglesWithSolidColor(v10, v32, &v35);
            v4 = v25;
            if ( v25 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, v25, 0x26Bu, 0LL);
            operator delete(v22);
          }
          else
          {
            v4 = -2147024882;
            MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, -2147024882, 0x266u, 0LL);
          }
        }
        CDrawingContext::CDisableCPUClipScope::~CDisableCPUClipScope((CDrawingContext::CDisableCPUClipScope *)&v34);
        CDrawingContext::PopTransformInternal(v10, 1);
      }
    }
    else
    {
      LODWORD(v32[0]) = v35;
      *((float *)&v32[1] + 1) = v8;
      *(struct CShape **)((char *)v32 + 4) = *(struct CShape **)((char *)&v35 + 4);
      v27 = *(_OWORD *)v32;
      v32[0] = (struct CShape *)1;
      v32[1] = a2;
      v35 = v27;
      if ( !a2 )
      {
        ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
        __debugbreak();
      }
      v28 = CDrawingContext::FillRectanglesWithSolidColor(a1 - 16, v32, &v35);
      v4 = v28;
      if ( v28 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v28, 0x270u, 0LL);
    }
    if ( v30 )
      std::default_delete<CShape>::operator()(v23, v30);
    CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v39);
    gsl::final_action__lambda_b84a1ee213fa572390f758b550ef68e0___::_final_action__lambda_b84a1ee213fa572390f758b550ef68e0___(v37);
  }
  return v4;
}
