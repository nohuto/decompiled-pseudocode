/*
 * XREFs of ?GetEffects@CDrawingContext@@AEAAXPEBVCVisualTree@@PEAVCVisual@@PEAUNodeEffects@1@@Z @ 0x18006F890
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800678C0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180073590 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?GetCount@CPtrArrayBase@@IEBA_KXZ @ 0x1800BD6F8 (-GetCount@CPtrArrayBase@@IEBA_KXZ.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ?GetColorSpace@CVisual@@QEBA?AW4DXGI_COLOR_SPACE_TYPE@@XZ @ 0x180178DAC (-GetColorSpace@CVisual@@QEBA-AW4DXGI_COLOR_SPACE_TYPE@@XZ.c)
 *     ?GetResampleMode@CVisual@@QEBA?AW4Enum@CompositionResampleMode@@XZ @ 0x180178EBC (-GetResampleMode@CVisual@@QEBA-AW4Enum@CompositionResampleMode@@XZ.c)
 */

void __fastcall CDrawingContext::GetEffects(
        CDrawingContext *this,
        struct CVisual **a2,
        struct CVisual *a3,
        struct CDrawingContext::NodeEffects *a4)
{
  __int64 v7; // rax
  float v8; // xmm0_4
  float v9; // xmm1_4
  _QWORD *v10; // rsi
  _DWORD *v11; // r8
  float v12; // xmm7_4
  int v13; // eax
  float v14; // xmm0_4
  float v15; // xmm1_4
  CGeometry *v16; // rcx
  _DWORD *v17; // r8
  _DWORD *v18; // r8
  float v19; // xmm1_4
  int ShapeData; // eax
  __int64 v21; // rcx
  int v22; // r14d
  void (__fastcall ***v23)(_QWORD, __int64); // rcx
  int v24; // eax
  __int64 v25; // rcx
  float v26; // xmm3_4
  float v27; // xmm2_4
  float v28; // xmm1_4
  float v29; // xmm0_4
  __int64 v30; // rax
  _BYTE *v31; // rdx
  unsigned int i; // ecx
  float **v33; // r14
  float *v34; // r14
  __int64 v35; // rax
  _BYTE *v36; // rdx
  unsigned int k; // ecx
  float v38; // edx
  float *v39; // rcx
  __int64 v40; // rcx
  _BYTE *v41; // rdx
  unsigned int j; // eax
  _QWORD *v43; // rax
  void (__fastcall ***v44)(_QWORD, __int128 *); // rcx
  enum DXGI_COLOR_SPACE_TYPE ColorSpace; // eax
  int v46; // r10d
  void (__fastcall ***v48)(_QWORD, __int64); // [rsp+30h] [rbp-88h] BYREF
  char v49; // [rsp+38h] [rbp-80h]
  float v50; // [rsp+40h] [rbp-78h]
  __int128 v51; // [rsp+48h] [rbp-70h] BYREF

  *(_QWORD *)a4 = a3;
  if ( a3 == a2[7] )
  {
    v9 = *(float *)&FLOAT_1_0;
  }
  else
  {
    v7 = *((_QWORD *)a3 + 27);
    if ( (*(_DWORD *)(v7 + 4) & 0x8000000) != 0 )
    {
      v38 = *(float *)(v7 + 12);
      v39 = (float *)(v7 + 12);
      if ( (LODWORD(v38) & 0x7F000000) != 0x5000000 )
      {
        do
        {
          v39 = (float *)((char *)v39 + (LODWORD(v38) & 0xFFFFFF) + 4);
          v38 = *v39;
        }
        while ( (*(_DWORD *)v39 & 0x7F000000) != 0x5000000 );
      }
      v50 = v39[1];
      v8 = v50;
    }
    else
    {
      v8 = *(float *)&FLOAT_1_0;
    }
    v9 = fminf(1.0, fmaxf(v8, 0.0));
  }
  *((float *)a4 + 5) = v9;
  v10 = 0LL;
  v11 = (_DWORD *)*((_QWORD *)a3 + 28);
  v12 = *(float *)&FLOAT_1_0;
  if ( (*v11 & 0x400000) != 0 )
  {
    v30 = (unsigned int)v11[1];
    v31 = v11 + 2;
    for ( i = 0; i < (unsigned int)v30; ++v31 )
    {
      if ( *v31 == 10 )
        break;
      ++i;
    }
    if ( i >= (unsigned int)v30 )
      v33 = 0LL;
    else
      v33 = (float **)((char *)v11 + v30 + 8LL * i - (((_BYTE)v30 + 15) & 7) + 15);
    v34 = *v33;
    if ( (*(unsigned __int8 (__fastcall **)(float *, __int64))(*(_QWORD *)v34 + 56LL))(v34, 56LL) )
      v12 = v34[18];
  }
  v13 = *((_DWORD *)this + 808);
  v14 = fminf(1.0, fmaxf(v12, 0.0));
  if ( v13 )
    v15 = *(float *)(*((_QWORD *)this + 406) + 4LL * (unsigned int)(v13 - 1));
  else
    v15 = *(float *)&FLOAT_1_0;
  *((float *)a4 + 2) = v14 * v15;
  v16 = (CGeometry *)*((_QWORD *)a3 + 30);
  if ( v16 )
  {
    v48 = 0LL;
    v49 = 0;
    v51 = 0LL;
    ShapeData = CGeometry::GetShapeData(v16, (const struct D2D_SIZE_F *)((char *)a3 + 132), (struct CShapePtr *)&v48);
    v22 = ShapeData;
    if ( ShapeData < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, ShapeData, 0x62u, 0LL);
    }
    else
    {
      v23 = v48;
      v22 = -2003292412;
      if ( v48 )
      {
        v24 = ((__int64 (__fastcall *)(void (__fastcall ***)(_QWORD, __int64), __int128 *, _QWORD))(*v48)[4])(
                v48,
                &v51,
                0LL);
        v22 = v24;
        if ( v24 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v24, 0x115u, 0LL);
        v23 = v48;
      }
      if ( v22 >= 0 )
        goto LABEL_23;
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v23, 0LL, 0, v22, 0x63u, 0LL);
    }
    v23 = v48;
LABEL_23:
    v26 = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3);
    v27 = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2);
    v28 = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1);
    v29 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
    if ( v22 == -2003304438 )
    {
      v51 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
      v22 = 0;
    }
    if ( v49 && v23 )
    {
      (**v23)(v23, 1LL);
      v26 = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3);
      v27 = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2);
      v28 = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1);
      v29 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
    }
    if ( v22 >= 0
      && (v29 < *(float *)&v51 || *((float *)&v51 + 2) < v27)
      && (v28 < *((float *)&v51 + 1) || *((float *)&v51 + 3) < v26) )
    {
      *((_BYTE *)a4 + 164) = 1;
      *(_QWORD *)((char *)a4 + 92) = 1065353216LL;
      *(_QWORD *)((char *)a4 + 100) = 0LL;
      *((_DWORD *)a4 + 27) = 0;
      *((_QWORD *)a4 + 14) = 1065353216LL;
      *((_QWORD *)a4 + 15) = 0LL;
      *((_DWORD *)a4 + 32) = 0;
      *(_QWORD *)((char *)a4 + 132) = 1065353216LL;
      *(_QWORD *)((char *)a4 + 140) = 0LL;
      *((_DWORD *)a4 + 37) = 0;
      *((_DWORD *)a4 + 38) = 1065353216;
      *((_WORD *)a4 + 78) = 32085;
    }
  }
  v17 = (_DWORD *)*((_QWORD *)a3 + 28);
  if ( (*v17 & 0x2000000) != 0 )
  {
    v40 = (unsigned int)v17[1];
    v41 = v17 + 2;
    for ( j = 0; j < (unsigned int)v40; ++v41 )
    {
      if ( *v41 == 7 )
        break;
      ++j;
    }
    if ( j >= (unsigned int)v40 )
      v43 = 0LL;
    else
      v43 = (_QWORD *)((char *)v17 + 8LL * j - (((_BYTE)v40 + 15) & 7) + v40 + 15);
    if ( *v43 )
      *((_BYTE *)a4 + 165) = 1;
  }
  v18 = (_DWORD *)*((_QWORD *)a3 + 28);
  if ( (*v18 & 0x400000) != 0 )
  {
    v35 = (unsigned int)v18[1];
    v36 = v18 + 2;
    for ( k = 0; k < (unsigned int)v35; ++v36 )
    {
      if ( *v36 == 10 )
        break;
      ++k;
    }
    if ( k < (unsigned int)v35 )
      v10 = (_QWORD *)((char *)v18 + 8LL * k - (((_BYTE)v35 + 15) & 7) + v35 + 15);
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v10 + 56LL))(*v10, 59LL) )
      *((_BYTE *)a4 + 166) = 1;
  }
  if ( (*(_DWORD *)(*((_QWORD *)a3 + 27) + 4LL) & 0x4000000) != 0 )
  {
    v44 = (void (__fastcall ***)(_QWORD, __int128 *))(*((_QWORD *)this + 4)
                                                    + 8LL
                                                    + *(int *)(*(_QWORD *)(*((_QWORD *)this + 4) + 8LL) + 12LL));
    (**v44)(v44, &v51);
    ColorSpace = CVisual::GetColorSpace(a3);
    if ( ColorSpace != v46 )
      *((_BYTE *)a4 + 168) = 1;
  }
  if ( (*(unsigned __int8 (__fastcall **)(struct CVisual *, __int64))(*(_QWORD *)a3 + 56LL))(a3, 91LL)
    && ((*(unsigned __int8 (__fastcall **)(struct CVisual *))(*(_QWORD *)a3 + 232LL))(a3) || *((_QWORD *)a3 + 77)) )
  {
    *((_BYTE *)a4 + 167) = 1;
  }
  v19 = *((float *)a4 + 2);
  if ( v19 < 1.0 && COERCE_FLOAT(COERCE_UNSIGNED_INT(v19 - 1.0) & _xmm) >= 0.0000011920929 )
  {
    if ( !(unsigned int)CPtrArrayBase::GetCount((struct CVisual *)((char *)a3 + 72))
      && (*((_BYTE *)a3 + 92) & 1) != 0
      && *((_DWORD *)this + 70) != 4
      || *((_DWORD *)this + 71) == 1
      || *((_DWORD *)a3 + 25) == 1 )
    {
      *((_DWORD *)a4 + 3) = 1;
    }
    else
    {
      *((_DWORD *)a4 + 3) = 2;
      if ( EventEnabled(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_LAYEREVENT_BeginLayer_Start) )
      {
        if ( (unsigned int)CPtrArrayBase::GetCount((struct CVisual *)((char *)a3 + 72)) )
          *((_DWORD *)a4 + 40) |= 0x20u;
        if ( (*((_BYTE *)a3 + 92) & 1) == 0 )
          *((_DWORD *)a4 + 40) |= 0x40u;
      }
    }
  }
  if ( (*(_DWORD *)(*((_QWORD *)a3 + 27) + 4LL) & 0x2000000) != 0 )
    *((_DWORD *)a4 + 4) = CVisual::GetResampleMode(a3);
}
