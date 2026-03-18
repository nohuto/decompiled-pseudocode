/*
 * XREFs of ?DrawSolidColorRectangle@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_NAEBUMilRectF@@AEBU_D3DCOLORVALUE@@@Z @ 0x1800A8598
 * Callers:
 *     ?TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntryBuilder@@_NIV?$span@$$CBE$0?0@gsl@@PEA_N@Z @ 0x1800A7D8C (-TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawLi.c)
 * Callees:
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x180010584 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z @ 0x18003666C (-Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z.c)
 *     ??0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@@Z @ 0x1800373BC (--0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@@Z.c)
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x180037C10 (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x18003A8F0 (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x18004B1C0 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     ?Convert_MilColorF_scRGB_To_MilColorF_sRGB@@YA?AU_D3DCOLORVALUE@@PEBU1@@Z @ 0x1800A875C (-Convert_MilColorF_scRGB_To_MilColorF_sRGB@@YA-AU_D3DCOLORVALUE@@PEBU1@@Z.c)
 *     ??_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z @ 0x1800BCD60 (--_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
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
  __int128 v14; // xmm0
  CGeometryOnlyDrawListBrush *v15; // rax
  __int64 v16; // rcx
  int DrawList; // eax
  __int64 v18; // rcx
  CGeometryOnlyDrawListBrush *v20; // [rsp+38h] [rbp-D0h] BYREF
  struct _D3DCOLORVALUE v21; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD v22[3]; // [rsp+50h] [rbp-B8h] BYREF
  int v23; // [rsp+68h] [rbp-A0h]
  bool v24; // [rsp+B4h] [rbp-54h]
  __int16 v25; // [rsp+B5h] [rbp-53h]
  struct _D3DCOLORVALUE v26; // [rsp+B8h] [rbp-50h] BYREF
  _BYTE v27[20]; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v28; // [rsp+DCh] [rbp-2Ch]
  char v29; // [rsp+114h] [rbp+Ch]

  CBrushDrawListGenerator::CBrushDrawListGenerator((CBrushDrawListGenerator *)v27, a2);
  v23 = 0;
  *(_OWORD *)&v22[1] = 0LL;
  v25 = 0;
  v9 = *((_DWORD *)a2 + 808);
  *(struct _D3DCOLORVALUE *)&v26.r = *(struct _D3DCOLORVALUE *)&a6->r;
  if ( v9 )
    v10 = (__m128)*(unsigned int *)(*((_QWORD *)a2 + 406) + 4LL * (unsigned int)(v9 - 1));
  else
    v10 = (__m128)(unsigned int)FLOAT_1_0;
  *(struct _D3DCOLORVALUE *)&v26.r = (struct _D3DCOLORVALUE)_mm_mul_ps(*(__m128 *)&v26.r, _mm_shuffle_ps(v10, v10, 0));
  v11 = *(_OWORD *)&Convert_MilColorF_scRGB_To_MilColorF_sRGB(&v21, &v26)->r;
  v29 = 0;
  v24 = a4 == 0;
  *(_QWORD *)&v21.r = &v20;
  v28 = v11;
  v20 = 0LL;
  *(_QWORD *)&v21.b = 0LL;
  LOBYTE(v22[0]) = 1;
  v13 = CGeometryOnlyDrawListBrush::Create((struct CGeometryOnlyDrawListBrush **)&v21.b);
  if ( LOBYTE(v22[0]) )
  {
    v12 = **(CGeometryOnlyDrawListBrush ***)&v21.r;
    **(_QWORD **)&v21.r = *(_QWORD *)&v21.b;
    if ( v12 )
      CGeometryOnlyDrawListBrush::`vector deleting destructor'(v12, 1u);
  }
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v12, 0LL, 0, v13, 0x3BAu, 0LL);
  }
  else
  {
    v14 = *(_OWORD *)a5;
    v15 = v20;
    *(_QWORD *)&v26.b = *((_QWORD *)a5 + 1);
    *((_BYTE *)v20 + 52) = 1;
    *((_OWORD *)v15 + 2) = v14;
    *((_DWORD *)v15 + 12) = 50529027;
    *(_QWORD *)&v26.r = v20;
    v20 = 0LL;
    CBrushDrawListGenerator::AttachInput((__int64)v27, 0, &v26);
    if ( *(_QWORD *)&v26.r )
      std::default_delete<CShape>::operator()(v16, *(__int64 (__fastcall ****)(_QWORD, __int64))&v26.r);
    DrawList = CBrushDrawListGenerator::GenerateDrawList(
                 (CBrushDrawListGenerator *)v27,
                 (const struct CBrushDrawListGenerator::GenerateDrawListProperties *)&v22[1],
                 a3);
    v13 = DrawList;
    if ( DrawList < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, DrawList, 0x3BEu, 0LL);
  }
  if ( v20 )
    CGeometryOnlyDrawListBrush::`vector deleting destructor'(v20, 1u);
  CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)v27);
  return (unsigned int)v13;
}
