/*
 * XREFs of ?TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntryBuilder@@_NIV?$span@$$CBE$0?0@gsl@@PEA_N@Z @ 0x180074B3C
 * Callers:
 *     ?Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z @ 0x1800740C0 (-Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z.c)
 * Callees:
 *     ?IsRoundedRectangleGeometry@CRectangleGeometry@@QEBA_NXZ @ 0x18001B7A0 (-IsRoundedRectangleGeometry@CRectangleGeometry@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetBoundsSafe@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180072C04 (-GetBoundsSafe@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoin.c)
 *     ?GetOpacity@CLegacyMilBrush@@KAMMPEAV?$TValueResource@MUtagMILCMD_FLOATRESOURCE@@$0DM@@@@Z @ 0x180073D8C (-GetOpacity@CLegacyMilBrush@@KAMMPEAV-$TValueResource@MUtagMILCMD_FLOATRESOURCE@@$0DM@@@@Z.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180092390 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?DrawImageResource_TileMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_NPEAVCImageSource@@MAEBUMilPoint2F@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800C2568 (-DrawImageResource_TileMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_N.c)
 *     ?DrawImageResource_FillMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_NPEAVCImageSource@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M@Z @ 0x1800C28E4 (-DrawImageResource_FillMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_N.c)
 *     ?DrawImageResource_FillMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_NPEAVCImageSource@@PEBUD2D_RECT_F@@4M@Z @ 0x1800C293C (-DrawImageResource_FillMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEnt_ea_1800C293C.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C463C (-Release@CShapePtr@@QEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C4B6C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?DrawSolidColorRectangle@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_NAEBUMilRectF@@AEBU_D3DCOLORVALUE@@@Z @ 0x1800C7A90 (-DrawSolidColorRectangle@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_NAEB.c)
 *     ?IsRectangles@CShapePtr@@QEBA_NPEAI@Z @ 0x1800CE754 (-IsRectangles@CShapePtr@@QEBA_NPEAI@Z.c)
 *     ?ReducesToFillImage@CImageLegacyMilBrush@@QEBA_NXZ @ 0x1800CFCEC (-ReducesToFillImage@CImageLegacyMilBrush@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ?Draw@CLinearGradientLegacyMilBrush@@QEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_NAEBUMilRectF@@@Z @ 0x1801B4A84 (-Draw@CLinearGradientLegacyMilBrush@@QEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_NAEBU.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$allocator@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1801E7AB8 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@V-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMil.c)
 */

__int64 __fastcall CRenderData::TryDrawCommandAsDrawList(
        CRenderData *this,
        struct CDrawingContext *a2,
        __int64 a3,
        struct CDrawListEntryBuilder *a4,
        bool a5,
        int a6,
        __int64 a7,
        bool *a8)
{
  unsigned int v8; // ebx
  __int64 v13; // rdi
  struct CDrawListEntryBuilder *v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // r14
  CRectangleGeometry *v20; // rdi
  __int64 v21; // rdx
  float v22; // xmm0_4
  float Opacity; // xmm0_4
  unsigned __int8 (__fastcall *v24)(CRectangleGeometry *, __int64); // rax
  CRenderData *v25; // rcx
  __int64 v27; // rcx
  __int64 v28; // rax
  struct CImageSource *v29; // rdi
  int v30; // eax
  __int64 v31; // rcx
  int v32; // eax
  __int64 v33; // rcx
  struct D2D_RECT_F *v34; // r14
  struct D2D_RECT_F *v35; // rdi
  struct CDrawListEntryBuilder *v36; // r13
  __int64 v37; // rax
  int v38; // eax
  __int64 v39; // rdi
  struct CDrawListEntryBuilder *v40; // rcx
  int v41; // r9d
  int v42; // eax
  __int64 v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // rax
  CImageLegacyMilBrush *v46; // rdi
  bool v47; // zf
  struct D2D_RECT_F v48; // xmm1
  __int64 v49; // rdx
  float v50; // xmm0_4
  float v51; // xmm0_4
  int v52; // eax
  __int64 v53; // rcx
  CGeometry *v54; // rcx
  __int64 v55; // r8
  int v56; // eax
  __int64 v57; // rcx
  float v58; // xmm0_4
  const struct D2D_RECT_F *v59; // rcx
  int v60; // eax
  __int64 v61; // rcx
  __int64 v62; // rdx
  float v63; // xmm0_4
  int v64; // eax
  __int64 v65; // rcx
  int v66; // eax
  __int64 v67; // rcx
  CGeometry *v68; // rcx
  int BoundsSafe; // eax
  CRenderData *v70; // rcx
  int v71; // eax
  __int64 v72; // rcx
  int ShapeData; // eax
  __int64 v74; // rcx
  __int64 v75; // rdi
  _OWORD *v76; // r14
  CRenderData *v77; // rcx
  _OWORD *v78; // r15
  struct CDrawListEntryBuilder *v79; // r13
  int v80; // eax
  struct CImageSource *v81; // [rsp+48h] [rbp-69h] BYREF
  __int128 v82; // [rsp+50h] [rbp-61h] BYREF
  __int64 v83; // [rsp+60h] [rbp-51h]
  struct D2D_RECT_F v84; // [rsp+68h] [rbp-49h] BYREF
  struct _D3DCOLORVALUE v85; // [rsp+78h] [rbp-39h] BYREF
  struct CDrawListEntryBuilder *v86[2]; // [rsp+88h] [rbp-29h] BYREF

  v8 = 0;
  v86[0] = a4;
  *a8 = 0;
  switch ( a6 )
  {
    case 460:
      v27 = *(unsigned int *)(*(_QWORD *)(a7 + 8) + 4LL);
      v28 = *((_QWORD *)this + 16);
      v29 = *(struct CImageSource **)(v28 + 8 * v27);
      if ( v29
        && (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v29 + 56LL))(
             *(_QWORD *)(v28 + 8 * v27),
             83LL) )
      {
        if ( !*(_QWORD *)(a3 + 24) )
        {
          v30 = CRenderData::DrawImageResource_FillMode(this, a2, a4, a5, v29, 0LL, 0LL, 1.0);
          v8 = v30;
          if ( v30 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0, v30, 0x286u, 0LL);
            return v8;
          }
        }
        goto LABEL_17;
      }
      break;
    case 461:
      v17 = *(_QWORD *)(a7 + 8);
      v18 = *((_QWORD *)this + 16);
      v19 = *(_QWORD *)(v18 + 8LL * *(unsigned int *)(v17 + 4));
      v20 = *(CRectangleGeometry **)(v18 + 8LL * *(unsigned int *)(v17 + 8));
      if ( v19 && v20 )
      {
        if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v19 + 56LL))(v19, 175LL) )
        {
          v21 = *(_QWORD *)(v19 + 64);
          v22 = *(float *)(v19 + 56);
          *(struct _D3DCOLORVALUE *)&v85.r = (struct _D3DCOLORVALUE)_mm_loadu_si128((const __m128i *)(v19 + 88));
          Opacity = CLegacyMilBrush::GetOpacity(v22, v21);
          v24 = *(unsigned __int8 (__fastcall **)(CRectangleGeometry *, __int64))(*(_QWORD *)v20 + 56LL);
          v85.a = _mm_shuffle_ps(*(__m128 *)&v85.r, *(__m128 *)&v85.r, 255).m128_f32[0] * Opacity;
          if ( v24(v20, 142LL) )
          {
            if ( *(_QWORD *)(a3 + 24) )
              goto LABEL_17;
            v34 = (struct D2D_RECT_F *)*((_QWORD *)v20 + 17);
            v35 = (struct D2D_RECT_F *)*((_QWORD *)v20 + 18);
            if ( v34 == v35 )
              goto LABEL_17;
            v36 = v86[0];
            while ( 1 )
            {
              v37 = 0LL;
              v84 = *v34;
              do
              {
                *(float *)((char *)v86 + v37) = (float)*(int *)((char *)&v84.left + v37);
                v37 += 4LL;
              }
              while ( v37 < 16 );
              v38 = CRenderData::DrawSolidColorRectangle(v25, a2, v36, a5, (const struct MilRectF *)v86, &v85);
              v8 = v38;
              if ( v38 < 0 )
                break;
              if ( ++v34 == v35 )
                goto LABEL_17;
            }
            MilInstrumentationCheckHR_MaybeFailFast((__int64)v25, 0LL, 0, v38, 0x2A7u, 0LL);
          }
          else
          {
            if ( (*(unsigned __int8 (__fastcall **)(CRectangleGeometry *, __int64))(*(_QWORD *)v20 + 56LL))(v20, 138LL) )
            {
              if ( CRectangleGeometry::IsRoundedRectangleGeometry(v20) )
                return v8;
              if ( !*(_QWORD *)(a3 + 24) )
              {
                v84 = 0LL;
                BoundsSafe = CGeometry::GetBoundsSafe(v68, 0LL, &v84);
                v8 = BoundsSafe;
                if ( BoundsSafe < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast((__int64)v70, 0LL, 0, BoundsSafe, 0x2B5u, 0LL);
                  return v8;
                }
                v71 = CRenderData::DrawSolidColorRectangle(v70, a2, v86[0], a5, (const struct MilRectF *)&v84, &v85);
                v8 = v71;
                if ( v71 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(v72, 0LL, 0, v71, 0x2B7u, 0LL);
                  return v8;
                }
              }
              goto LABEL_17;
            }
            if ( (*(unsigned __int8 (__fastcall **)(CRectangleGeometry *, __int64))(*(_QWORD *)v20 + 56LL))(v20, 25LL) )
            {
              *(_QWORD *)&v84.left = 0LL;
              LOBYTE(v84.right) = 0;
              ShapeData = CGeometry::GetShapeData(v20, 0LL, (struct CShapePtr *)&v84);
              v8 = ShapeData;
              if ( ShapeData < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v74, 0LL, 0, ShapeData, 0x2C2u, 0LL);
              }
              else if ( CShapePtr::IsRectangles((CShapePtr *)&v84, (unsigned int *)&v81) )
              {
                v83 = 0LL;
                v75 = 0LL;
                v82 = 0LL;
                if ( (_DWORD)v81 )
                {
                  std::vector<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>>::_Resize_reallocate<std::_Value_init_tag>(
                    &v82,
                    (unsigned int)v81);
                  v75 = v83;
                }
                v76 = (_OWORD *)v82;
                if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)&v84.left + 48LL))(
                       *(_QWORD *)&v84.left,
                       v82) )
                {
                  if ( *(_QWORD *)(a3 + 24) || (v78 = v76, v76 == *((_OWORD **)&v82 + 1)) )
                  {
LABEL_81:
                    *a8 = 1;
                  }
                  else
                  {
                    v79 = v86[0];
                    while ( 1 )
                    {
                      *(_OWORD *)v86 = *v78;
                      v80 = CRenderData::DrawSolidColorRectangle(v77, a2, v79, a5, (const struct MilRectF *)v86, &v85);
                      v8 = v80;
                      if ( v80 < 0 )
                        break;
                      if ( ++v78 == *((_OWORD **)&v82 + 1) )
                        goto LABEL_81;
                    }
                    MilInstrumentationCheckHR_MaybeFailFast((__int64)v77, 0LL, 0, v80, 0x2D4u, 0LL);
                  }
                }
                else
                {
                  v8 = -2003304309;
                  MilInstrumentationCheckHR_MaybeFailFast((__int64)v77, 0LL, 0, -2003304309, 0x2CCu, 0LL);
                }
                if ( v76 )
                  std::_Deallocate<16,0>(v76, (v75 - (_QWORD)v76) & 0xFFFFFFFFFFFFFFF0uLL);
              }
              CShapePtr::Release((CShapePtr *)&v84);
            }
          }
        }
        else if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v19 + 56LL))(v19, 82LL) )
        {
          if ( (*(unsigned __int8 (__fastcall **)(CRectangleGeometry *, __int64))(*(_QWORD *)v20 + 56LL))(v20, 138LL) )
          {
            v81 = *(struct CImageSource **)(v19 + 240);
            if ( !CRectangleGeometry::IsRoundedRectangleGeometry(v20) )
            {
              if ( !*(_QWORD *)(a3 + 24) && v55 )
              {
                v84 = 0LL;
                v56 = CGeometry::GetBoundsSafe(v54, 0LL, &v84);
                v8 = v56;
                if ( v56 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(v57, 0LL, 0, v56, 0x2E7u, 0LL);
                  return v8;
                }
                *(struct _D3DCOLORVALUE *)&v85.r = (struct _D3DCOLORVALUE)v84;
                v58 = CLegacyMilBrush::GetOpacity(*(float *)(v19 + 120), *(_QWORD *)(v19 + 128));
                v60 = CRenderData::DrawImageResource_FillMode(
                        this,
                        a2,
                        v86[0],
                        a5,
                        v81,
                        v59,
                        (const struct D2D_RECT_F *)&v85,
                        v58);
                v8 = v60;
                if ( v60 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(v61, 0LL, 0, v60, 0x307u, 0LL);
                  return v8;
                }
              }
              goto LABEL_17;
            }
          }
        }
      }
      break;
    case 463:
      v39 = *(_QWORD *)(a7 + 8);
      v40 = *(struct CDrawListEntryBuilder **)(*((_QWORD *)this + 16) + 8LL * *(unsigned int *)(v39 + 4));
      v86[0] = v40;
      if ( v40
        && (*(unsigned __int8 (__fastcall **)(struct CDrawListEntryBuilder *, __int64))(*(_QWORD *)v40 + 56LL))(
             v40,
             83LL) )
      {
        if ( !*(_QWORD *)(a3 + 24) )
        {
          LOBYTE(v41) = a5;
          v84 = *(struct D2D_RECT_F *)(v39 + 8);
          v42 = CRenderData::DrawImageResource_FillMode(
                  (_DWORD)this,
                  (_DWORD)a2,
                  (_DWORD)a4,
                  v41,
                  (__int64)v86[0],
                  (__int64)&v84,
                  1.0);
          v8 = v42;
          if ( v42 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v43, 0LL, 0, v42, 0x26Eu, 0LL);
            return v8;
          }
        }
        goto LABEL_17;
      }
      break;
    case 465:
      v86[0] = *(struct CDrawListEntryBuilder **)(a7 + 8);
      v44 = *((unsigned int *)v86[0] + 1);
      v45 = *((_QWORD *)this + 16);
      v46 = *(CImageLegacyMilBrush **)(v45 + 8 * v44);
      if ( !v46 )
        return v8;
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v46 + 56LL))(
             *(_QWORD *)(v45 + 8 * v44),
             175LL) )
      {
        if ( !*(_QWORD *)(a3 + 24) )
        {
          v62 = *((_QWORD *)v46 + 8);
          v63 = *((float *)v46 + 14);
          *(struct _D3DCOLORVALUE *)&v85.r = (struct _D3DCOLORVALUE)_mm_loadu_si128((const __m128i *)((char *)v46 + 88));
          v85.a = _mm_shuffle_ps(*(__m128 *)&v85.r, *(__m128 *)&v85.r, 255).m128_f32[0]
                * CLegacyMilBrush::GetOpacity(v63, v62);
          v64 = CRenderData::DrawSolidColorRectangle(
                  (CRenderData *)&v85,
                  a2,
                  a4,
                  a5,
                  (struct CDrawListEntryBuilder *)((char *)v86[0] + 8),
                  &v85);
          v8 = v64;
          if ( v64 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v65, 0LL, 0, v64, 0x205u, 0LL);
            return v8;
          }
        }
      }
      else
      {
        if ( !(*(unsigned __int8 (__fastcall **)(CImageLegacyMilBrush *, __int64))(*(_QWORD *)v46 + 56LL))(v46, 98LL) )
        {
          if ( !(*(unsigned __int8 (__fastcall **)(CImageLegacyMilBrush *, __int64))(*(_QWORD *)v46 + 56LL))(v46, 82LL) )
            return v8;
          v81 = (struct CImageSource *)*((_QWORD *)v46 + 30);
          v47 = v81 == 0LL;
          if ( v81 )
          {
            if ( CImageLegacyMilBrush::ReducesToFillImage(v46) )
            {
              if ( !*(_QWORD *)(a3 + 24) )
              {
                v48 = *(struct D2D_RECT_F *)((char *)v46 + 184);
                v49 = *((_QWORD *)v46 + 16);
                v84 = *(struct D2D_RECT_F *)((char *)v86[0] + 8);
                *(struct _D3DCOLORVALUE *)&v85.r = (struct _D3DCOLORVALUE)v84;
                v50 = *((float *)v46 + 30);
                v84 = v48;
                v51 = CLegacyMilBrush::GetOpacity(v50, v49);
                v52 = CRenderData::DrawImageResource_FillMode(
                        this,
                        a2,
                        a4,
                        a5,
                        v81,
                        &v84,
                        (const struct D2D_RECT_F *)&v85,
                        v51);
                v8 = v52;
                if ( v52 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(v53, 0LL, 0, v52, 0x228u, 0LL);
                  return v8;
                }
              }
              goto LABEL_17;
            }
            v47 = v81 == 0LL;
          }
          *a8 = v47;
          return v8;
        }
        if ( !*(_QWORD *)(a3 + 24) )
        {
          v66 = CLinearGradientLegacyMilBrush::Draw(
                  v46,
                  a2,
                  a4,
                  a5,
                  (struct CDrawListEntryBuilder *)((char *)v86[0] + 8));
          v8 = v66;
          if ( v66 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v67, 0LL, 0, v66, 0x213u, 0LL);
            return v8;
          }
        }
      }
LABEL_17:
      *a8 = 1;
      return v8;
    case 466:
      if ( !*(_QWORD *)(a3 + 24) )
      {
        v32 = CRenderData::DrawSolidColorRectangle(
                (CRenderData *)(*(_QWORD *)(a7 + 8) + 20LL),
                a2,
                a4,
                a5,
                (const struct MilRectF *)(*(_QWORD *)(a7 + 8) + 4LL),
                (const struct _D3DCOLORVALUE *)(*(_QWORD *)(a7 + 8) + 20LL));
        v8 = v32;
        if ( v32 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v33, 0LL, 0, v32, 0x241u, 0LL);
          return v8;
        }
      }
      goto LABEL_17;
    case 467:
      v13 = *(_QWORD *)(a7 + 8);
      v14 = *(struct CDrawListEntryBuilder **)(*((_QWORD *)this + 16) + 8LL * *(unsigned int *)(v13 + 4));
      v86[0] = v14;
      if ( v14 )
      {
        if ( (*(unsigned __int8 (__fastcall **)(struct CDrawListEntryBuilder *, __int64))(*(_QWORD *)v14 + 56LL))(
               v14,
               83LL) )
        {
          if ( !*(_QWORD *)(a3 + 24) )
          {
            v84 = *(struct D2D_RECT_F *)(v13 + 8);
            v15 = CRenderData::DrawImageResource_TileMode(
                    this,
                    a2,
                    a4,
                    v86[0],
                    *(float *)(v13 + 24),
                    v13 + 28,
                    (__int64)&v84);
            v8 = v15;
            if ( v15 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x257u, 0LL);
              return v8;
            }
          }
          goto LABEL_17;
        }
      }
      break;
  }
  return v8;
}
