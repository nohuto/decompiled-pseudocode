/*
 * XREFs of ?TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntryBuilder@@_NIV?$span@$$CBE$0?0@gsl@@PEA_N@Z @ 0x1800A7D8C
 * Callers:
 *     ?Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z @ 0x1800A7310 (-Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z.c)
 * Callees:
 *     ?IsRoundedRectangleGeometry@CRectangleGeometry@@QEBA_NXZ @ 0x18001C5D0 (-IsRoundedRectangleGeometry@CRectangleGeometry@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180054780 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?DrawImageResource_FillMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_NPEAVCImageSource@@PEBUD2D_RECT_F@@4M@Z @ 0x1800700DC (-DrawImageResource_FillMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_N.c)
 *     ?GetBoundsSafe@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180095A74 (-GetBoundsSafe@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoin.c)
 *     ?GetOpacity@CLegacyMilBrush@@KAMMPEAV?$TValueResource@MUtagMILCMD_FLOATRESOURCE@@$0DM@@@@Z @ 0x1800A84EC (-GetOpacity@CLegacyMilBrush@@KAMMPEAV-$TValueResource@MUtagMILCMD_FLOATRESOURCE@@$0DM@@@@Z.c)
 *     ?DrawSolidColorRectangle@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_NAEBUMilRectF@@AEBU_D3DCOLORVALUE@@@Z @ 0x1800A8598 (-DrawSolidColorRectangle@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_NAEB.c)
 *     ?ReducesToFillImage@CImageLegacyMilBrush@@QEBA_NXZ @ 0x1800A88C4 (-ReducesToFillImage@CImageLegacyMilBrush@@QEBA_NXZ.c)
 *     ?DrawImageResource_FillMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_NPEAVCImageSource@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M@Z @ 0x1800A8A18 (-DrawImageResource_FillMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEnt_ea_1800A8A18.c)
 *     ?DrawImageResource_TileMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_NPEAVCImageSource@@MAEBUMilPoint2F@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800A8A70 (-DrawImageResource_TileMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_N.c)
 *     ?IsRectangles@CShapePtr@@QEBA_NPEAI@Z @ 0x1800B696C (-IsRectangles@CShapePtr@@QEBA_NPEAI@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800BDC0C (-Release@CShapePtr@@QEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800BE77C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ?Draw@CLinearGradientLegacyMilBrush@@QEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_NAEBUMilRectF@@@Z @ 0x1801B92E4 (-Draw@CLinearGradientLegacyMilBrush@@QEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_NAEBU.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$allocator@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1801EC278 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@V-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMil.c)
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
  __int64 v21; // rcx
  __int64 v22; // rdx
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
  __int64 v47; // rcx
  bool v48; // zf
  __int64 v49; // rcx
  struct D2D_RECT_F v50; // xmm1
  __int64 v51; // rdx
  float v52; // xmm0_4
  int v53; // eax
  __int64 v54; // rcx
  CGeometry *v55; // rcx
  __int64 v56; // r8
  int v57; // eax
  __int64 v58; // rcx
  int v59; // eax
  struct _D3DCOLORVALUE *v60; // rcx
  float v61; // xmm0_4
  const struct D2D_RECT_F *v62; // rcx
  int v63; // eax
  __int64 v64; // rcx
  __int64 v65; // rdx
  int v66; // eax
  __int64 v67; // rcx
  int v68; // eax
  __int64 v69; // rcx
  CGeometry *v70; // rcx
  int BoundsSafe; // eax
  CRenderData *v72; // rcx
  int v73; // eax
  __int64 v74; // rcx
  int ShapeData; // eax
  __int64 v76; // rcx
  __int64 v77; // rdi
  _OWORD *v78; // r14
  CRenderData *v79; // rcx
  _OWORD *v80; // r15
  struct CDrawListEntryBuilder *v81; // r13
  int v82; // eax
  struct CImageSource *v83; // [rsp+48h] [rbp-69h] BYREF
  __int128 v84; // [rsp+50h] [rbp-61h] BYREF
  __int64 v85; // [rsp+60h] [rbp-51h]
  struct D2D_RECT_F v86; // [rsp+68h] [rbp-49h] BYREF
  struct _D3DCOLORVALUE v87; // [rsp+78h] [rbp-39h] BYREF
  struct CDrawListEntryBuilder *v88[2]; // [rsp+88h] [rbp-29h] BYREF

  v8 = 0;
  v88[0] = a4;
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
          v22 = *(_QWORD *)(v19 + 64);
          *(struct _D3DCOLORVALUE *)&v87.r = (struct _D3DCOLORVALUE)_mm_loadu_si128((const __m128i *)(v19 + 88));
          Opacity = CLegacyMilBrush::GetOpacity(v21, v22);
          v24 = *(unsigned __int8 (__fastcall **)(CRectangleGeometry *, __int64))(*(_QWORD *)v20 + 56LL);
          v87.a = _mm_shuffle_ps(*(__m128 *)&v87.r, *(__m128 *)&v87.r, 255).m128_f32[0] * Opacity;
          if ( v24(v20, 142LL) )
          {
            if ( *(_QWORD *)(a3 + 24) )
              goto LABEL_17;
            v34 = (struct D2D_RECT_F *)*((_QWORD *)v20 + 17);
            v35 = (struct D2D_RECT_F *)*((_QWORD *)v20 + 18);
            if ( v34 == v35 )
              goto LABEL_17;
            v36 = v88[0];
            while ( 1 )
            {
              v37 = 0LL;
              v86 = *v34;
              do
              {
                *(float *)((char *)v88 + v37) = (float)*(int *)((char *)&v86.left + v37);
                v37 += 4LL;
              }
              while ( v37 < 16 );
              v38 = CRenderData::DrawSolidColorRectangle(v25, a2, v36, a5, (const struct MilRectF *)v88, &v87);
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
                v86 = 0LL;
                BoundsSafe = CGeometry::GetBoundsSafe(v70, 0LL, &v86);
                v8 = BoundsSafe;
                if ( BoundsSafe < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast((__int64)v72, 0LL, 0, BoundsSafe, 0x2B5u, 0LL);
                  return v8;
                }
                v73 = CRenderData::DrawSolidColorRectangle(v72, a2, v88[0], a5, (const struct MilRectF *)&v86, &v87);
                v8 = v73;
                if ( v73 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(v74, 0LL, 0, v73, 0x2B7u, 0LL);
                  return v8;
                }
              }
              goto LABEL_17;
            }
            if ( (*(unsigned __int8 (__fastcall **)(CRectangleGeometry *, __int64))(*(_QWORD *)v20 + 56LL))(v20, 25LL) )
            {
              *(_QWORD *)&v86.left = 0LL;
              LOBYTE(v86.right) = 0;
              ShapeData = CGeometry::GetShapeData(v20, 0LL, (struct CShapePtr *)&v86);
              v8 = ShapeData;
              if ( ShapeData < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v76, 0LL, 0, ShapeData, 0x2C2u, 0LL);
              }
              else if ( CShapePtr::IsRectangles((CShapePtr *)&v86, (unsigned int *)&v83) )
              {
                v85 = 0LL;
                v77 = 0LL;
                v84 = 0LL;
                if ( (_DWORD)v83 )
                {
                  std::vector<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>>::_Resize_reallocate<std::_Value_init_tag>(
                    &v84,
                    (unsigned int)v83);
                  v77 = v85;
                }
                v78 = (_OWORD *)v84;
                if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)&v86.left + 48LL))(
                       *(_QWORD *)&v86.left,
                       v84) )
                {
                  if ( *(_QWORD *)(a3 + 24) || (v80 = v78, v78 == *((_OWORD **)&v84 + 1)) )
                  {
LABEL_83:
                    *a8 = 1;
                  }
                  else
                  {
                    v81 = v88[0];
                    while ( 1 )
                    {
                      *(_OWORD *)v88 = *v80;
                      v82 = CRenderData::DrawSolidColorRectangle(v79, a2, v81, a5, (const struct MilRectF *)v88, &v87);
                      v8 = v82;
                      if ( v82 < 0 )
                        break;
                      if ( ++v80 == *((_OWORD **)&v84 + 1) )
                        goto LABEL_83;
                    }
                    MilInstrumentationCheckHR_MaybeFailFast((__int64)v79, 0LL, 0, v82, 0x2D4u, 0LL);
                  }
                }
                else
                {
                  v8 = -2003304309;
                  MilInstrumentationCheckHR_MaybeFailFast((__int64)v79, 0LL, 0, -2003304309, 0x2CCu, 0LL);
                }
                if ( v78 )
                  std::_Deallocate<16,0>(v78, (v77 - (_QWORD)v78) & 0xFFFFFFFFFFFFFFF0uLL);
              }
              CShapePtr::Release((CShapePtr *)&v86);
            }
          }
        }
        else if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v19 + 56LL))(v19, 82LL) )
        {
          if ( (*(unsigned __int8 (__fastcall **)(CRectangleGeometry *, __int64))(*(_QWORD *)v20 + 56LL))(v20, 138LL) )
          {
            v83 = *(struct CImageSource **)(v19 + 240);
            if ( !CRectangleGeometry::IsRoundedRectangleGeometry(v20) )
            {
              if ( !*(_QWORD *)(a3 + 24) && v56 )
              {
                v86 = 0LL;
                v57 = CGeometry::GetBoundsSafe(v55, 0LL, &v86);
                v8 = v57;
                if ( v57 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(v58, 0LL, 0, v57, 0x2E7u, 0LL);
                  return v8;
                }
                v59 = *(_DWORD *)(v19 + 208);
                v60 = 0LL;
                *(struct _D3DCOLORVALUE *)&v87.r = (struct _D3DCOLORVALUE)v86;
                if ( !v59 || v59 == 2 )
                  v60 = &v87;
                v61 = CLegacyMilBrush::GetOpacity(v60, *(_QWORD *)(v19 + 128));
                v63 = CRenderData::DrawImageResource_FillMode(
                        this,
                        a2,
                        v88[0],
                        a5,
                        v83,
                        v62,
                        (const struct D2D_RECT_F *)&v87,
                        v61);
                v8 = v63;
                if ( v63 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(v64, 0LL, 0, v63, 0x307u, 0LL);
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
      v88[0] = v40;
      if ( v40
        && (*(unsigned __int8 (__fastcall **)(struct CDrawListEntryBuilder *, __int64))(*(_QWORD *)v40 + 56LL))(
             v40,
             83LL) )
      {
        if ( !*(_QWORD *)(a3 + 24) )
        {
          LOBYTE(v41) = a5;
          v86 = *(struct D2D_RECT_F *)(v39 + 8);
          v42 = CRenderData::DrawImageResource_FillMode(
                  (int)this,
                  (int)a2,
                  (int)a4,
                  v41,
                  (__int64)v88[0],
                  (__int64)&v86,
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
      v88[0] = *(struct CDrawListEntryBuilder **)(a7 + 8);
      v44 = *((unsigned int *)v88[0] + 1);
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
          v65 = *((_QWORD *)v46 + 8);
          *(struct _D3DCOLORVALUE *)&v87.r = (struct _D3DCOLORVALUE)_mm_loadu_si128((const __m128i *)((char *)v46 + 88));
          v87.a = _mm_shuffle_ps(*(__m128 *)&v87.r, *(__m128 *)&v87.r, 255).m128_f32[0]
                * CLegacyMilBrush::GetOpacity(v47, v65);
          v66 = CRenderData::DrawSolidColorRectangle(
                  (CRenderData *)&v87,
                  a2,
                  a4,
                  a5,
                  (struct CDrawListEntryBuilder *)((char *)v88[0] + 8),
                  &v87);
          v8 = v66;
          if ( v66 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v67, 0LL, 0, v66, 0x205u, 0LL);
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
          v83 = (struct CImageSource *)*((_QWORD *)v46 + 30);
          v48 = v83 == 0LL;
          if ( v83 )
          {
            if ( CImageLegacyMilBrush::ReducesToFillImage(v46) )
            {
              if ( !*(_QWORD *)(a3 + 24) )
              {
                v50 = *(struct D2D_RECT_F *)((char *)v46 + 184);
                v51 = *((_QWORD *)v46 + 16);
                v86 = *(struct D2D_RECT_F *)((char *)v88[0] + 8);
                *(struct _D3DCOLORVALUE *)&v87.r = (struct _D3DCOLORVALUE)v86;
                v86 = v50;
                v52 = CLegacyMilBrush::GetOpacity(v49, v51);
                v53 = CRenderData::DrawImageResource_FillMode(
                        this,
                        a2,
                        a4,
                        a5,
                        v83,
                        &v86,
                        (const struct D2D_RECT_F *)&v87,
                        v52);
                v8 = v53;
                if ( v53 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(v54, 0LL, 0, v53, 0x228u, 0LL);
                  return v8;
                }
              }
              goto LABEL_17;
            }
            v48 = v83 == 0LL;
          }
          *a8 = v48;
          return v8;
        }
        if ( !*(_QWORD *)(a3 + 24) )
        {
          v68 = CLinearGradientLegacyMilBrush::Draw(
                  v46,
                  a2,
                  a4,
                  a5,
                  (struct CDrawListEntryBuilder *)((char *)v88[0] + 8));
          v8 = v68;
          if ( v68 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v69, 0LL, 0, v68, 0x213u, 0LL);
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
      v88[0] = v14;
      if ( v14 )
      {
        if ( (*(unsigned __int8 (__fastcall **)(struct CDrawListEntryBuilder *, __int64))(*(_QWORD *)v14 + 56LL))(
               v14,
               83LL) )
        {
          if ( !*(_QWORD *)(a3 + 24) )
          {
            v86 = *(struct D2D_RECT_F *)(v13 + 8);
            v15 = CRenderData::DrawImageResource_TileMode(
                    this,
                    a2,
                    a4,
                    v88[0],
                    *(float *)(v13 + 24),
                    v13 + 28,
                    (__int64)&v86);
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
