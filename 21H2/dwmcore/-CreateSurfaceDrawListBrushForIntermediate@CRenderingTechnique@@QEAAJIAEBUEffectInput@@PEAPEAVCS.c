/*
 * XREFs of ?CreateSurfaceDrawListBrushForIntermediate@CRenderingTechnique@@QEAAJIAEBUEffectInput@@PEAPEAVCSurfaceDrawListBrush@@@Z @ 0x1800879D0
 * Callers:
 *     ?UpdateDrawListCache@CBrushRenderingGraph@@IEAAJPEAVCDrawingContext@@PEBVCDrawListBrush@@PEAUEffectStage@@PEAVCDrawListCache@@@Z @ 0x180086E30 (-UpdateDrawListCache@CBrushRenderingGraph@@IEAAJPEAVCDrawingContext@@PEBVCDrawListBrush@@PEAUEff.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetSize@CDrawListBitmap@@QEBA?AUD2D_SIZE_U@@XZ @ 0x18003F1D8 (-GetSize@CDrawListBitmap@@QEBA-AUD2D_SIZE_U@@XZ.c)
 *     ?DeflateToHalf@@YAMM@Z @ 0x180087BA0 (-DeflateToHalf@@YAMM@Z.c)
 *     ?InflateToHalf@@YAMM@Z @ 0x180087BE0 (-InflateToHalf@@YAMM@Z.c)
 *     ?CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMatrix3x3@@PEAPEAV1@@Z @ 0x180088C60 (-CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMat.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x1800D04C0 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 */

__int64 __fastcall CRenderingTechnique::CreateSurfaceDrawListBrushForIntermediate(
        CRenderingTechnique *this,
        unsigned int a2,
        const struct EffectInput *a3,
        struct CSurfaceDrawListBrush **a4)
{
  __int64 v6; // rdx
  char v7; // al
  char v8; // r8
  char v9; // si
  int v10; // edi
  CSurfaceDrawListBrush *v11; // rcx
  float v12; // xmm6_4
  float v13; // xmm10_4
  float v14; // xmm0_4
  float v15; // xmm7_4
  float v16; // xmm6_4
  float v17; // xmm9_4
  float v18; // xmm0_4
  float v19; // xmm8_4
  CSurfaceDrawListBrush *v20; // rcx
  float v21; // xmm0_4
  float v22; // xmm1_4
  CSurfaceDrawListBrush *v23; // rax
  __int128 v25; // [rsp+28h] [rbp-29h] BYREF
  char v26; // [rsp+38h] [rbp-19h]
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]
  __int64 v28; // [rsp+B8h] [rbp+67h] BYREF
  CSurfaceDrawListBrush *v29; // [rsp+C8h] [rbp+77h] BYREF

  v6 = 44LL * a2;
  v7 = *((_BYTE *)this + v6 + 76);
  v8 = *((_BYTE *)this + v6 + 77);
  if ( !v7 )
  {
    v7 = 1;
    v8 = 1;
  }
  v9 = *((_BYTE *)a3 + 100);
  v29 = 0LL;
  v25 = (unsigned __int64)&v29;
  BYTE2(v28) = v8;
  v26 = 1;
  LOBYTE(v28) = v9;
  BYTE1(v28) = v7;
  v10 = CSurfaceDrawListBrush::CreateWithTextureTransform(a3, &v28, (char *)a3 + 48, (char *)&v25 + 8);
  if ( v26 )
  {
    v11 = *(CSurfaceDrawListBrush **)v25;
    *(_QWORD *)v25 = *((_QWORD *)&v25 + 1);
    if ( v11 )
      CSurfaceDrawListBrush::`vector deleting destructor'(v11, 1u);
  }
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x80,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\renderingtechnique.cpp",
      (const char *)(unsigned int)v10);
    v20 = v29;
  }
  else
  {
    if ( v9 )
    {
      v12 = *((float *)a3 + 21);
      v13 = InflateToHalf(v12);
      v14 = DeflateToHalf(*((float *)a3 + 23));
      v15 = v14;
      if ( v12 > v14 )
        v13 = v14;
      v16 = *((float *)a3 + 22);
      v17 = InflateToHalf(v16);
      v18 = DeflateToHalf(*((float *)a3 + 24));
      v19 = v18;
      if ( v16 > v18 )
        v17 = v18;
    }
    else
    {
      v25 = *(_OWORD *)((char *)a3 + 84);
      v19 = *((float *)&v25 + 3);
      v15 = *((float *)&v25 + 2);
      v17 = *((float *)&v25 + 1);
      v13 = *(float *)&v25;
    }
    CDrawListBitmap::GetSize(a3, &v28);
    v20 = 0LL;
    v10 = 0;
    v21 = (float)(int)v28;
    v22 = (float)SHIDWORD(v28);
    v23 = v29;
    *((_BYTE *)v29 + 145) = 0;
    *((float *)&v25 + 1) = v17 / v22;
    *((float *)&v25 + 3) = v19 / v22;
    *(float *)&v25 = v13 / v21;
    *((float *)&v25 + 2) = v15 / v21;
    *(_OWORD *)((char *)v23 + 120) = v25;
    *((_BYTE *)v29 + 146) = 1;
    *a4 = v29;
    v29 = 0LL;
  }
  if ( v20 )
    CSurfaceDrawListBrush::`vector deleting destructor'(v20, 1u);
  return (unsigned int)v10;
}
