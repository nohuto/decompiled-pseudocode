/*
 * XREFs of ?CreateLayoutGeometryDrawListBrush@CNineGridBrush@@MEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAPEAVCDrawListBrush@@@Z @ 0x1800DB970
 * Callers:
 *     <none>
 * Callees:
 *     ??_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z @ 0x1800542C0 (--_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?Create@CNineGridDrawListBrush@@SAJ$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@AEBVInsets@@1_NPEAPEAV1@@Z @ 0x18005A504 (-Create@CNineGridDrawListBrush@@SAJ$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delete@VCDrawL.c)
 *     ??_GCNineGridDrawListBrush@@UEAAPEAXI@Z @ 0x18005A5C0 (--_GCNineGridDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z @ 0x180089958 (-Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z.c)
 *     ??R?$default_delete@VCDrawListBrush@@@std@@QEBAXPEAVCDrawListBrush@@@Z @ 0x18008EF54 (--R-$default_delete@VCDrawListBrush@@@std@@QEBAXPEAVCDrawListBrush@@@Z.c)
 *     ?CreateLayoutGeometryDrawListBrush@CBrush@@MEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAPEAVCDrawListBrush@@@Z @ 0x1800DB9E0 (-CreateLayoutGeometryDrawListBrush@CBrush@@MEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAPEAVCDra.c)
 */

__int64 __fastcall CNineGridBrush::CreateLayoutGeometryDrawListBrush(
        CNineGridBrush *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListBrush **a4)
{
  int LayoutGeometryDrawListBrush; // eax
  __int64 v8; // rcx
  int v9; // edi
  float v11; // xmm0_4
  float v12; // xmm1_4
  float v13; // xmm0_4
  float v14; // xmm1_4
  CGeometryOnlyDrawListBrush *v15; // rcx
  FLOAT width; // xmm1_4
  CGeometryOnlyDrawListBrush *v17; // rax
  FLOAT height; // xmm0_4
  char v19; // r9
  CNineGridDrawListBrush *v20; // rcx
  CNineGridDrawListBrush *v21; // [rsp+30h] [rbp-50h] BYREF
  struct CGeometryOnlyDrawListBrush *v22[2]; // [rsp+38h] [rbp-48h] BYREF
  char v23; // [rsp+48h] [rbp-38h]
  _DWORD v24[4]; // [rsp+50h] [rbp-30h] BYREF
  CNineGridDrawListBrush **v25; // [rsp+60h] [rbp-20h]
  CNineGridDrawListBrush *v26; // [rsp+68h] [rbp-18h] BYREF
  char v27; // [rsp+70h] [rbp-10h]
  CGeometryOnlyDrawListBrush *v28; // [rsp+B0h] [rbp+30h] BYREF

  if ( *((_BYTE *)this + 80) && *((_BYTE *)this + 152) )
  {
    v11 = *((float *)this + 25) * *((float *)this + 24);
    v28 = 0LL;
    v12 = *((float *)this + 27) * *((float *)this + 26);
    v22[0] = (struct CGeometryOnlyDrawListBrush *)&v28;
    *(float *)v24 = v11;
    v13 = *((float *)this + 29) * *((float *)this + 28);
    v22[1] = 0LL;
    *(float *)&v24[1] = v12;
    v14 = *((float *)this + 31) * *((float *)this + 30);
    v23 = 1;
    *(float *)&v24[2] = v13;
    *(float *)&v24[3] = v14;
    v9 = CGeometryOnlyDrawListBrush::Create(&v22[1]);
    if ( v23 )
    {
      v15 = *(CGeometryOnlyDrawListBrush **)v22[0];
      *(_QWORD *)v22[0] = v22[1];
      if ( v15 )
        CGeometryOnlyDrawListBrush::`vector deleting destructor'(v15, 1);
    }
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v15, 0LL, 0LL, v9, 0x1F0u);
    }
    else
    {
      width = a3->width;
      v17 = v28;
      height = a3->height;
      v22[0] = 0LL;
      *((_BYTE *)v28 + 52) = 1;
      *((_DWORD *)v17 + 12) = 50529027;
      v22[1] = (struct CGeometryOnlyDrawListBrush *)__PAIR64__(LODWORD(height), LODWORD(width));
      v26 = 0LL;
      v27 = 1;
      *((_OWORD *)v17 + 2) = *(_OWORD *)v22;
      v19 = *((_BYTE *)this + 152);
      v25 = &v21;
      v22[0] = v28;
      v21 = 0LL;
      v28 = 0LL;
      v9 = CNineGridDrawListBrush::Create((struct CNineGridDrawListBrush *)v22, (int)v24, (int)v24, v19, &v26);
      if ( v22[0] )
        std::default_delete<CDrawListBrush>::operator()((__int64)v20, (__int64 (__fastcall ***)(_QWORD, __int64))v22[0]);
      if ( v27 )
      {
        v20 = *v25;
        *v25 = v26;
        if ( v20 )
          CNineGridDrawListBrush::`scalar deleting destructor'(v20, 1);
      }
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast((__int64)v20, 0LL, 0LL, v9, 0x1F9u);
        if ( v21 )
          CNineGridDrawListBrush::`scalar deleting destructor'(v21, 1);
      }
      else
      {
        *a4 = v21;
        v21 = 0LL;
      }
    }
    if ( v28 )
      CGeometryOnlyDrawListBrush::`vector deleting destructor'(v28, 1);
  }
  else
  {
    LayoutGeometryDrawListBrush = CBrush::CreateLayoutGeometryDrawListBrush(this, a2, a3, a4);
    v9 = LayoutGeometryDrawListBrush;
    if ( LayoutGeometryDrawListBrush < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0LL, LayoutGeometryDrawListBrush, 0x1FFu);
  }
  return (unsigned int)v9;
}
