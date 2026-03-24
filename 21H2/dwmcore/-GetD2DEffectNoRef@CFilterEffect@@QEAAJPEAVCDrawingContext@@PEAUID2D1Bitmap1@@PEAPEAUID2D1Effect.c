/*
 * XREFs of ?GetD2DEffectNoRef@CFilterEffect@@QEAAJPEAVCDrawingContext@@PEAUID2D1Bitmap1@@PEAPEAUID2D1Effect@@@Z @ 0x18000DF58
 * Callers:
 *     ?RenderLayer@CFilterEffectLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x18000DDA4 (-RenderLayer@CFilterEffectLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?GetD2DEffectNoRef@CFilterEffect@@QEAAJPEAVCDrawingContext@@PEAUID2D1Bitmap1@@PEAPEAUID2D1Effect@@@Z @ 0x18000DF58 (-GetD2DEffectNoRef@CFilterEffect@@QEAAJPEAVCDrawingContext@@PEAUID2D1Bitmap1@@PEAPEAUID2D1Effect.c)
 * Callees:
 *     ?GetD2DEffectNoRef@CFilterEffect@@QEAAJPEAVCDrawingContext@@PEAUID2D1Bitmap1@@PEAPEAUID2D1Effect@@@Z @ 0x18000DF58 (-GetD2DEffectNoRef@CFilterEffect@@QEAAJPEAVCDrawingContext@@PEAUID2D1Bitmap1@@PEAPEAUID2D1Effect.c)
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD2DEffect@@VCFilterEffect@@@@QEAAJPEAVCD3DDevice@@PEAPEAVCD2DEffect@@@Z @ 0x18000E090 (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD2DEffect@@VCFilterEffect@@@@QEAAJPEAVCD3DDe.c)
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x180017840 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     ?SetInputEffect@ID2D1Effect@@QEAAXIPEAU1@H@Z @ 0x1800407D8 (-SetInputEffect@ID2D1Effect@@QEAAXIPEAU1@H@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 *     ?GetInputEffectForAtlasedSurface@CFilterEffect@@AEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@PEAVCCompositionSurfaceBitmap@@PEAPEAUID2D1Effect@@@Z @ 0x1801B29B0 (-GetInputEffectForAtlasedSurface@CFilterEffect@@AEAAJPEAVCDrawingContext@@AEBV-$TMilRect_@HUtagR.c)
 */

__int64 __fastcall CFilterEffect::GetD2DEffectNoRef(
        CFilterEffect *this,
        struct CDrawingContext *a2,
        struct ID2D1Bitmap1 *a3,
        struct ID2D1Effect **a4)
{
  int v4; // eax
  ID2D1Effect *v5; // rdi
  struct ID2D1Effect *v6; // r14
  int v9; // eax
  unsigned int v10; // ecx
  int v11; // ebx
  struct ID2D1Effect *v12; // rbx
  int v13; // eax
  unsigned int v14; // ecx
  int v15; // eax
  struct ID2D1Effect **v16; // rax
  __int64 i; // r15
  __int64 v19; // r13
  __int64 v20; // rcx
  unsigned int v21; // r12d
  char v22; // al
  CFilterEffect *v23; // rcx
  int D2DEffectNoRef; // eax
  unsigned int v25; // ecx
  int v26; // r9d
  unsigned int v27; // ecx
  int InputEffectForAtlasedSurface; // eax
  unsigned int v29; // ecx
  int v30; // r9d
  struct ID2D1Effect *v31; // [rsp+30h] [rbp-18h] BYREF
  __int64 v32; // [rsp+38h] [rbp-10h]
  struct ID2D1Effect *v33; // [rsp+90h] [rbp+48h] BYREF
  struct CDrawingContext *v34; // [rsp+98h] [rbp+50h]
  struct ID2D1Bitmap1 *v35; // [rsp+A0h] [rbp+58h]
  struct ID2D1Effect **v36; // [rsp+A8h] [rbp+60h]

  v36 = a4;
  v35 = a3;
  v34 = a2;
  v4 = *((_DWORD *)this + 8);
  v5 = 0LL;
  v31 = 0LL;
  v6 = 0LL;
  *a4 = 0LL;
  v33 = 0LL;
  *((_DWORD *)this + 8) = v4 ^ ((unsigned __int8)v4 ^ (unsigned __int8)(v4 + 2)) & 6;
  if ( (((unsigned __int8)v4 ^ ((unsigned __int8)v4 ^ (unsigned __int8)(v4 + 2)) & 6) & 6) == 2 )
  {
    v9 = CDeviceResourceTable<CD2DEffect,CFilterEffect>::FindOrCreateResourceNoRef(
           (char *)this + 72,
           *((_QWORD *)a2 + 5),
           &v31);
    v11 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x1Fu, 0LL);
    }
    else
    {
      v12 = v31;
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v31 + 10) + 8LL))(*((_QWORD *)v31 + 10));
      v5 = (ID2D1Effect *)*((_QWORD *)v12 + 10);
      v13 = (*(__int64 (__fastcall **)(CFilterEffect *, ID2D1Effect *))(*(_QWORD *)this + 224LL))(this, v5);
      v11 = v13;
      if ( v13 >= 0 )
      {
        v15 = *((_DWORD *)this + 32);
        if ( v15 )
        {
          if ( v15 > 0 )
          {
            v32 = *((int *)this + 32);
            for ( i = 0LL; i < v32; ++i )
            {
              v19 = *(_QWORD *)(*((_QWORD *)this + 15) + 8 * i);
              v20 = *(_QWORD *)(v19 + 24);
              v21 = *(_DWORD *)(*((_QWORD *)this + 14) + 4 * i);
              if ( v20 )
              {
                v22 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v20 + 56LL))(v20, 59LL);
                v23 = *(CFilterEffect **)(v19 + 24);
                if ( v22 )
                {
                  v31 = 0LL;
                  D2DEffectNoRef = CFilterEffect::GetD2DEffectNoRef(v23, v34, v35, &v31);
                  v11 = D2DEffectNoRef;
                  if ( D2DEffectNoRef < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, D2DEffectNoRef, 0x3Du, 0LL);
                    goto LABEL_33;
                  }
                  ID2D1Effect::SetInputEffect(v5, v21, v31, v26);
                }
                else
                {
                  if ( !(*(unsigned __int8 (__fastcall **)(CFilterEffect *, __int64))(*(_QWORD *)v23 + 56LL))(v23, 40LL) )
                  {
                    v11 = -2147467263;
                    MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, -2147467263, 0x52u, 0LL);
                    goto LABEL_16;
                  }
                  InputEffectForAtlasedSurface = CFilterEffect::GetInputEffectForAtlasedSurface(
                                                   v27,
                                                   (_DWORD)v34,
                                                   (int)v19 + 4,
                                                   *(_QWORD *)(v19 + 24),
                                                   (__int64)&v33);
                  v11 = InputEffectForAtlasedSurface;
                  if ( InputEffectForAtlasedSurface < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, InputEffectForAtlasedSurface, 0x49u, 0LL);
                    v6 = v33;
                    goto LABEL_33;
                  }
                  ID2D1Effect::SetInputEffect(v5, v21, v33, v30);
                  ReleaseInterface<ID2D1Geometry>(&v33);
                  v6 = v33;
                }
              }
              else
              {
                (*(void (__fastcall **)(ID2D1Effect *, _QWORD, struct ID2D1Bitmap1 *, __int64))(*(_QWORD *)v5 + 112LL))(
                  v5,
                  v21,
                  v35,
                  1LL);
              }
            }
          }
        }
        else
        {
          (*(void (__fastcall **)(ID2D1Effect *, _QWORD, struct ID2D1Bitmap1 *, __int64))(*(_QWORD *)v5 + 112LL))(
            v5,
            0LL,
            a3,
            1LL);
        }
        v16 = v36;
        *v36 = v5;
LABEL_7:
        if ( v11 >= 0 )
          goto LABEL_8;
        goto LABEL_13;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x21u, 0LL);
    }
LABEL_33:
    v16 = v36;
    goto LABEL_7;
  }
  v11 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2147467259, 0x1Bu, 0LL);
LABEL_16:
  v16 = v36;
LABEL_13:
  *v16 = 0LL;
LABEL_8:
  if ( v5 )
    (*(void (__fastcall **)(ID2D1Effect *))(*(_QWORD *)v5 + 16LL))(v5);
  if ( v6 )
    (*(void (__fastcall **)(struct ID2D1Effect *))(*(_QWORD *)v6 + 16LL))(v6);
  *((_DWORD *)this + 8) ^= (*((_DWORD *)this + 8) ^ (2 * (*((_DWORD *)this + 8) >> 1) - 2)) & 6;
  return (unsigned int)v11;
}
