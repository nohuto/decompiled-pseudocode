/*
 * XREFs of ?EnterClippingScope@CScopedClipStack@@QEAAJ_N0PEBVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18007EBA0
 * Callers:
 *     ?PushRenderTarget@CDrawingContext@@QEAAJPEAVIDeviceTarget@@@Z @ 0x18007E9E4 (-PushRenderTarget@CDrawingContext@@QEAAJPEAVIDeviceTarget@@@Z.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009FA80 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PushClippingScope@CDrawingContext@@AEAAJPEBVCVisual@@_N1PEBVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801B3174 (-PushClippingScope@CDrawingContext@@AEAAJPEBVCVisual@@_N1PEBVCMILMatrix@@PEAV-$TMilRect_@MUMilRe.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Top@CBaseClipStack@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18008A238 (-Top@CBaseClipStack@@QEBAXPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800CB358 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 */

__int64 __fastcall CScopedClipStack::EnterClippingScope(__int64 a1, char a2, char a3, __int64 a4, _OWORD *a5)
{
  __int64 v5; // r11
  int v6; // r8d
  int v7; // eax
  __int128 v8; // xmm0
  int v9; // eax
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int64 v14; // rax
  unsigned int v15; // edx
  unsigned int v16; // ebx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v20; // r10
  float v21; // xmm2_4
  float v22; // xmm1_4
  float v23; // xmm0_4
  float v24; // xmm1_4
  float v25; // xmm1_4
  float v26; // xmm3_4
  __int64 v27; // rcx
  int v28; // eax
  __int64 v29; // rcx
  __int128 v30; // [rsp+30h] [rbp-41h] BYREF
  __int128 v31; // [rsp+40h] [rbp-31h]
  __int128 v32; // [rsp+50h] [rbp-21h]
  __int128 v33; // [rsp+60h] [rbp-11h]
  __int128 v34; // [rsp+70h] [rbp-1h]
  __int64 v35; // [rsp+80h] [rbp+Fh]
  __int128 v36; // [rsp+90h] [rbp+1Fh] BYREF

  *(_QWORD *)&v30 = 0LL;
  v5 = a1;
  DWORD2(v30) = 0;
  LODWORD(v35) = 0;
  BYTE4(v35) = a2;
  if ( a3 && (v6 = *(_DWORD *)(a1 + 24)) != 0 )
  {
    HIDWORD(v30) = *(_DWORD *)(88LL * (unsigned int)(v6 - 1) + *(_QWORD *)a1 + 12);
  }
  else
  {
    v6 = *(_DWORD *)(a1 + 24);
    HIDWORD(v30) = *(_DWORD *)(a1 + 2152);
    if ( !v6 )
    {
LABEL_17:
      v8 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
      goto LABEL_8;
    }
  }
  a1 = (unsigned int)(v6 - 1);
  if ( !*(_DWORD *)(88 * a1 + *(_QWORD *)v5) )
    goto LABEL_17;
  v7 = *(_DWORD *)(v5 + 2064);
  if ( v7 )
  {
    a1 = 2LL * (unsigned int)(v7 - 1);
    v8 = *(_OWORD *)(*(_QWORD *)(v5 + 2080) + 16LL * (unsigned int)(v7 - 1));
  }
  else
  {
    v8 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
    v36 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
  }
LABEL_8:
  *a5 = v8;
  v9 = *(_DWORD *)(v5 + 24);
  if ( v9 )
  {
    a1 = (unsigned int)(v9 - 1);
    if ( *(_DWORD *)(88 * a1 + *(_QWORD *)v5 + 8) )
    {
      v36 = 0LL;
      CBaseClipStack::Top(v5 + 2096, &v36);
      v21 = *(float *)v20;
      v22 = *(float *)&v36;
      if ( *(float *)&v36 > *(float *)v20 )
      {
        *(_DWORD *)v20 = v36;
        v21 = v22;
      }
      if ( *((float *)&v36 + 1) > *(float *)(v20 + 4) )
        *(_DWORD *)(v20 + 4) = DWORD1(v36);
      v23 = *(float *)(v20 + 8);
      v24 = *((float *)&v36 + 2);
      if ( v23 > *((float *)&v36 + 2) )
      {
        *(_DWORD *)(v20 + 8) = DWORD2(v36);
        v23 = v24;
      }
      v25 = *(float *)(v20 + 12);
      v26 = *((float *)&v36 + 3);
      if ( v25 > *((float *)&v36 + 3) )
      {
        *(_DWORD *)(v20 + 12) = HIDWORD(v36);
        v25 = v26;
        v23 = *(float *)(v20 + 8);
      }
      if ( v23 <= v21 || v25 <= *(float *)(v20 + 4) )
      {
        *(_QWORD *)(v20 + 8) = 0LL;
        *(_QWORD *)v20 = 0LL;
      }
    }
  }
  if ( a4 )
  {
    v10 = *(_OWORD *)a4;
    v11 = *(_OWORD *)(a4 + 16);
    LODWORD(v35) = *(_DWORD *)(a4 + 64);
    v31 = v10;
    v12 = *(_OWORD *)(a4 + 32);
    v32 = v11;
    v13 = *(_OWORD *)(a4 + 48);
  }
  else
  {
    v31 = _xmm;
    v12 = _xmm;
    v32 = _xmm;
    v13 = _xmm;
    BYTE1(v35) = BYTE1(v35) & 0xC0 | 0x17;
    LOBYTE(v35) = 85;
  }
  v14 = *(unsigned int *)(v5 + 24);
  v34 = v13;
  v33 = v12;
  v15 = v14 + 1;
  if ( (int)v14 + 1 < (unsigned int)v14 )
  {
    v16 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0LL, -2147024362, 0xB5u);
    goto LABEL_33;
  }
  v16 = 0;
  if ( v15 > *(_DWORD *)(v5 + 20) )
  {
    v28 = DynArrayImpl<0>::AddMultipleAndSet(v5, 88LL, 1LL, &v30);
    v16 = v28;
    if ( v28 >= 0 )
      return v16;
    MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0LL, v28, 0xC0u);
LABEL_33:
    MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0LL, v16, 0x54u);
    return v16;
  }
  v17 = 88 * v14;
  v18 = *(_QWORD *)v5;
  *(_OWORD *)(v17 + v18) = v30;
  *(_OWORD *)(v17 + v18 + 16) = v31;
  *(_OWORD *)(v17 + v18 + 32) = v32;
  *(_OWORD *)(v17 + v18 + 48) = v33;
  *(_OWORD *)(v17 + v18 + 64) = v34;
  *(_QWORD *)(v17 + v18 + 80) = v35;
  *(_DWORD *)(v5 + 24) = v15;
  return v16;
}
