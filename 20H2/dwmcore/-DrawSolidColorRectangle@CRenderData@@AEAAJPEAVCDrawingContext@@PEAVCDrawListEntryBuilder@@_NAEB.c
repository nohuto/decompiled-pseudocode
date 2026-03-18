/*
 * XREFs of ?DrawSolidColorRectangle@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_NAEBUMilRectF@@AEBU_D3DCOLORVALUE@@@Z @ 0x1800C7A90
 * Callers:
 *     ?TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntryBuilder@@_NIV?$span@$$CBE$0?0@gsl@@PEA_N@Z @ 0x180074B3C (-TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawLi.c)
 * Callees:
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x180008B94 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ??_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z @ 0x18005E650 (--_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z @ 0x18005E698 (-Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x1800619C4 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x18009F37C (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     ??0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@@Z @ 0x18009F508 (--0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@@Z.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x18009F53C (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ?Convert_MilColorF_scRGB_To_MilColorF_sRGB@@YA?AU_D3DCOLORVALUE@@PEBU1@@Z @ 0x1800C7C54 (-Convert_MilColorF_scRGB_To_MilColorF_sRGB@@YA-AU_D3DCOLORVALUE@@PEBU1@@Z.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 */

__int64 __fastcall CRenderData::DrawSolidColorRectangle(
        CRenderData *this,
        struct CDrawingContext *a2,
        struct CDrawListEntryBuilder *a3,
        char a4,
        const struct MilRectF *a5,
        const struct _D3DCOLORVALUE *a6)
{
  int v9; // eax
  __m128 v10; // xmm2
  __int128 v11; // xmm0
  CGeometryOnlyDrawListBrush *v12; // rcx
  int v13; // ebx
  unsigned int r_low; // r8d
  __int128 v15; // xmm0
  CGeometryOnlyDrawListBrush *v16; // rax
  __int64 v17; // rcx
  int DrawList; // eax
  __int64 v19; // rcx
  unsigned int v20; // r8d
  CGeometryOnlyDrawListBrush *v22; // [rsp+38h] [rbp-D0h] BYREF
  struct _D3DCOLORVALUE v23; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD v24[3]; // [rsp+50h] [rbp-B8h] BYREF
  int v25; // [rsp+68h] [rbp-A0h]
  bool v26; // [rsp+B4h] [rbp-54h]
  __int16 v27; // [rsp+B5h] [rbp-53h]
  struct _D3DCOLORVALUE v28; // [rsp+B8h] [rbp-50h] BYREF
  _BYTE v29[20]; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v30; // [rsp+DCh] [rbp-2Ch]
  char v31; // [rsp+114h] [rbp+Ch]

  CBrushDrawListGenerator::CBrushDrawListGenerator((CBrushDrawListGenerator *)v29, a2);
  v25 = 0;
  *(_OWORD *)&v24[1] = 0LL;
  v27 = 0;
  v9 = *((_DWORD *)a2 + 808);
  *(struct _D3DCOLORVALUE *)&v28.r = *(struct _D3DCOLORVALUE *)&a6->r;
  if ( v9 )
    v10 = (__m128)*(unsigned int *)(*((_QWORD *)a2 + 406) + 4LL * (unsigned int)(v9 - 1));
  else
    v10 = (__m128)(unsigned int)FLOAT_1_0;
  *(struct _D3DCOLORVALUE *)&v28.r = (struct _D3DCOLORVALUE)_mm_mul_ps(*(__m128 *)&v28.r, _mm_shuffle_ps(v10, v10, 0));
  v11 = *(_OWORD *)&Convert_MilColorF_scRGB_To_MilColorF_sRGB(&v23, &v28)->r;
  v31 = 0;
  v26 = a4 == 0;
  *(_QWORD *)&v23.r = &v22;
  v30 = v11;
  v22 = 0LL;
  *(_QWORD *)&v23.b = 0LL;
  LOBYTE(v24[0]) = 1;
  v13 = CGeometryOnlyDrawListBrush::Create((struct CGeometryOnlyDrawListBrush **)&v23.b);
  if ( LOBYTE(v24[0]) )
  {
    r_low = LODWORD(v23.r);
    v12 = **(CGeometryOnlyDrawListBrush ***)&v23.r;
    **(_QWORD **)&v23.r = *(_QWORD *)&v23.b;
    if ( v12 )
      CGeometryOnlyDrawListBrush::`vector deleting destructor'(v12, 1, r_low);
  }
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v12, 0LL, 0, v13, 0x3BAu, 0LL);
  }
  else
  {
    v15 = *(_OWORD *)a5;
    v16 = v22;
    *(_QWORD *)&v28.b = *((_QWORD *)a5 + 1);
    *((_BYTE *)v22 + 52) = 1;
    *((_OWORD *)v16 + 2) = v15;
    *((_DWORD *)v16 + 12) = 50529027;
    *(_QWORD *)&v28.r = v22;
    v22 = 0LL;
    CBrushDrawListGenerator::AttachInput((__int64)v29, 0, &v28);
    if ( *(_QWORD *)&v28.r )
      std::default_delete<CShape>::operator()(v17, *(__int64 (__fastcall ****)(_QWORD, __int64))&v28.r);
    DrawList = CBrushDrawListGenerator::GenerateDrawList(
                 (CBrushDrawListGenerator *)v29,
                 (const struct CBrushDrawListGenerator::GenerateDrawListProperties *)&v24[1],
                 a3);
    v13 = DrawList;
    if ( DrawList < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, DrawList, 0x3BEu, 0LL);
  }
  if ( v22 )
    CGeometryOnlyDrawListBrush::`vector deleting destructor'(v22, 1, v20);
  CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)v29);
  return (unsigned int)v13;
}
