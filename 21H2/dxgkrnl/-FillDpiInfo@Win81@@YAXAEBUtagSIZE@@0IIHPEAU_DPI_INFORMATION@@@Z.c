/*
 * XREFs of ?FillDpiInfo@Win81@@YAXAEBUtagSIZE@@0IIHPEAU_DPI_INFORMATION@@@Z @ 0x1C03160FC
 * Callers:
 *     ?UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C0316668 (-UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z.c)
 * Callees:
 *     ?CalcDpi@Win81@@YAIII@Z @ 0x1C0315D40 (-CalcDpi@Win81@@YAIII@Z.c)
 *     ?FillOverridesAndAdjustedScaleFactor@Win81@@YAXIHPEAU_DPI_INFORMATION@@@Z @ 0x1C031621C (-FillOverridesAndAdjustedScaleFactor@Win81@@YAXIHPEAU_DPI_INFORMATION@@@Z.c)
 *     ?SatisfyMinResolutionBarForScaleIdx@Win81@@YAKHUtagSIZE@@QEBUDPI_SCALE_FACTOR_COLLECTION@1@@Z @ 0x1C03165B0 (-SatisfyMinResolutionBarForScaleIdx@Win81@@YAKHUtagSIZE@@QEBUDPI_SCALE_FACTOR_COLLECTION@1@@Z.c)
 */

void __fastcall Win81::FillDpiInfo(
        Win81 *this,
        const struct tagSIZE *a2,
        const struct tagSIZE *a3,
        unsigned int a4,
        unsigned int a5,
        __int64 a6)
{
  unsigned int v8; // ebx
  int v10; // r15d
  struct tagSIZE v12; // r8
  _DWORD *v13; // rcx
  unsigned int v14; // edx
  struct _DPI_INFORMATION *v15; // r9
  __int64 v16; // [rsp+68h] [rbp+30h]
  __int64 v17; // [rsp+68h] [rbp+30h]

  v8 = 0;
  v10 = (int)a3;
  *(_QWORD *)(a6 + 24) = *(_QWORD *)this;
  *(struct tagSIZE *)(a6 + 32) = *a2;
  if ( *(_DWORD *)this && *((_DWORD *)this + 1) )
  {
    LODWORD(v16) = Win81::CalcDpi((Win81 *)(unsigned int)a2->cx, *(_DWORD *)this);
    HIDWORD(v16) = Win81::CalcDpi((Win81 *)(unsigned int)a2->cy, *((_DWORD *)this + 1));
    *(_QWORD *)(a6 + 40) = v16;
  }
  *(_DWORD *)(a6 + 64) = v10;
  LODWORD(v17) = 100 * v10 * *(_DWORD *)(a6 + 40) / 0x6900u;
  v12 = (struct tagSIZE)(100 * v10 * *(_DWORD *)(a6 + 44) / 0x6900u);
  HIDWORD(v17) = 100 * v10 * *(_DWORD *)(a6 + 44) / 0x6900u;
  *(_QWORD *)(a6 + 56) = v17;
  v13 = &unk_1C0094678;
  do
  {
    if ( (unsigned int)(((int)v17 + v12.cx) / 2) < *v13 )
      break;
    ++v8;
    ++v13;
  }
  while ( v8 < 4 );
  *(_DWORD *)(a6 + 12) = Win81::SatisfyMinResolutionBarForScaleIdx(
                           (Win81 *)v8,
                           (int)*a2,
                           v12,
                           (const struct Win81::DPI_SCALE_FACTOR_COLLECTION *const)(unsigned int)v17);
  Win81::FillOverridesAndAdjustedScaleFactor((Win81 *)a4, v14, a6, v15);
}
