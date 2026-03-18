/*
 * XREFs of ?AdjustDesktopScaleFactorForOverride@Win81@@YAKKUtagSIZE@@H@Z @ 0x1C02AAC0C
 * Callers:
 *     ?FillOverridesAndAdjustedScaleFactor@Win81@@YAXIHPEAU_DPI_INFORMATION@@@Z @ 0x1C02AB10C (-FillOverridesAndAdjustedScaleFactor@Win81@@YAXIHPEAU_DPI_INFORMATION@@@Z.c)
 *     ?UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C02AB4F8 (-UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z.c)
 * Callees:
 *     ?SatisfyMinResolutionBarForScaleIdx@Win81@@YAKHUtagSIZE@@QEBUDPI_SCALE_FACTOR_COLLECTION@1@@Z @ 0x1C02AB44C (-SatisfyMinResolutionBarForScaleIdx@Win81@@YAKHUtagSIZE@@QEBUDPI_SCALE_FACTOR_COLLECTION@1@@Z.c)
 */

unsigned int __fastcall Win81::AdjustDesktopScaleFactorForOverride(
        Win81 *this,
        __int64 a2,
        struct tagSIZE a3,
        const struct Win81::DPI_SCALE_FACTOR_COLLECTION *a4)
{
  LONG cx; // esi
  int v5; // ebx
  int v6; // ebp
  __int64 v7; // rax
  _DWORD *v8; // rax
  unsigned int i; // edi
  __int64 v10; // rax

  cx = a3.cx;
  v5 = a2;
  v6 = (int)this;
  if ( (unsigned int)(a3.cx + 4) > 8 )
  {
    v7 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v7 + 24) = 468LL;
    WdLogEvent5_WdAssertion(v7);
  }
  v8 = &unk_1C00794E0;
  for ( i = 0; i < 5; ++i )
  {
    if ( v6 == *v8 )
      break;
    ++v8;
  }
  if ( i >= 5 )
  {
    v10 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v10 + 24) = 452LL;
    WdLogEvent5_WdAssertion(v10);
  }
  return Win81::SatisfyMinResolutionBarForScaleIdx((Win81 *)(i + cx), v5, a3, a4);
}
