/*
 * XREFs of ?FillOverridesAndAdjustedScaleFactor@DpiInternal@@YAXIHPEBU_DPI_SCALE_FACTOR_COLLECTION@@PEAU_DPI_INFORMATION@@H@Z @ 0x1C000C074
 * Callers:
 *     ?FillDpiInfo@@YAXAEBUtagSIZE@@0PEBU_DPI_SCALE_FACTOR_COLLECTION@@IIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C000BF04 (-FillDpiInfo@@YAXAEBUtagSIZE@@0PEBU_DPI_SCALE_FACTOR_COLLECTION@@IIIHPEAU_DPI_INFORMATION@@@Z.c)
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C0145660 (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION.c)
 * Callees:
 *     ?AdjustDesktopScaleFactorForOverride@DpiInternal@@YAKKUtagSIZE@@PEBU_DPI_SCALE_FACTOR_COLLECTION@@HH@Z @ 0x1C000C118 (-AdjustDesktopScaleFactorForOverride@DpiInternal@@YAKKUtagSIZE@@PEBU_DPI_SCALE_FACTOR_COLLECTION.c)
 *     ?CalculateMinMaxOverride@DpiInternal@@YAXKUtagSIZE@@PEAJ1QEBU_DPI_SCALE_FACTOR_COLLECTION@@@Z @ 0x1C0019F08 (-CalculateMinMaxOverride@DpiInternal@@YAXKUtagSIZE@@PEAJ1QEBU_DPI_SCALE_FACTOR_COLLECTION@@@Z.c)
 */

void __fastcall DpiInternal::FillOverridesAndAdjustedScaleFactor(
        DpiInternal *this,
        __int64 a2,
        int *a3,
        const struct _DPI_SCALE_FACTOR_COLLECTION *a4,
        struct _DPI_INFORMATION *a5)
{
  int v7; // edi
  int v8; // esi
  DpiInternal *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  const struct _DPI_SCALE_FACTOR_COLLECTION *v12; // [rsp+28h] [rbp-10h]

  v7 = a2;
  v8 = (int)this;
  if ( !*((_DWORD *)a4 + 3) )
  {
    v10 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v10 + 24) = 517LL;
    WdLogEvent5_WdAssertion(v10);
  }
  if ( !*((_DWORD *)a4 + 8) || !*((_DWORD *)a4 + 9) )
  {
    v11 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v11 + 24) = 518LL;
    WdLogEvent5_WdAssertion(v11);
  }
  if ( !v7 )
    DpiInternal::CalculateMinMaxOverride(
      (DpiInternal *)*((unsigned int *)a4 + 3),
      *((_QWORD *)a4 + 4),
      (struct tagSIZE)((char *)a4 + 80),
      (int *)a4 + 22,
      a3,
      v12);
  if ( v8 )
  {
    *((_DWORD *)a4 + 21) = (v7 != 0) + 1234568;
    LODWORD(v9) = (100 * v8 + 48) / 0x60u;
  }
  else
  {
    v9 = (DpiInternal *)*((unsigned int *)a4 + 3);
    if ( !v7 )
      LODWORD(v9) = DpiInternal::AdjustDesktopScaleFactorForOverride(
                      v9,
                      *((_QWORD *)a4 + 4),
                      (struct tagSIZE)a3,
                      (const struct _DPI_SCALE_FACTOR_COLLECTION *)*((unsigned int *)a4 + 21),
                      (int)a5,
                      (int)v12);
  }
  *((_DWORD *)a4 + 2) = (_DWORD)v9;
}
