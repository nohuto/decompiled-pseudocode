/*
 * XREFs of ?RegisterStrokeOnHost@CSuperWetInkManager@@AEAAJPEAUVailSuperWetStroke@1@PEA_N@Z @ 0x180196B7C
 * Callers:
 *     ?ScheduleScribblesForRenderTarget@CSuperWetInkManager@@QEAAJPEAVIVailRenderTarget@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x180196E9C (-ScheduleScribblesForRenderTarget@CSuperWetInkManager@@QEAAJPEAVIVailRenderTarget@@AEBV-$TMilRec.c)
 *     ?TryRegisterSuperWetForDrawHost@CSuperWetInkManager@@AEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@_NPEA_N@Z @ 0x180197244 (-TryRegisterSuperWetForDrawHost@CSuperWetInkManager@@AEAAJPEAVCSuperWetSource@@PEAVCDrawingConte.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18014FC08 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CheckHostComputeScribbleSupport@CSuperWetInkManager@@AEAAJAEBUVailSuperWetStroke@1@PEA_N@Z @ 0x1801960EC (-CheckHostComputeScribbleSupport@CSuperWetInkManager@@AEAAJAEBUVailSuperWetStroke@1@PEA_N@Z.c)
 *     ?SendMessageToHostForCreation@CSuperWetSource@@QEAAJ_K@Z @ 0x1801C4FE8 (-SendMessageToHostForCreation@CSuperWetSource@@QEAAJ_K@Z.c)
 */

__int64 __fastcall CSuperWetInkManager::RegisterStrokeOnHost(
        struct ID3D12Device *this,
        struct CSuperWetInkManager::VailSuperWetStroke *a2,
        bool *a3)
{
  int v5; // esi
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a3 = 0;
  v5 = CSuperWetInkManager::CheckHostComputeScribbleSupport(this, a2, a3);
  if ( v5 < 0 )
  {
    v6 = 656LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\superwetinkmanager.cpp",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  if ( *a3 )
  {
    if ( *((_BYTE *)a2 + 80) )
    {
      v5 = CSuperWetSource::SendMessageToHostForCreation(*(CSuperWetSource **)a2, *((_QWORD *)a2 + 2));
      if ( v5 < 0 )
      {
        v6 = 664LL;
        goto LABEL_3;
      }
      *((_BYTE *)a2 + 80) = 1;
    }
    *a3 = 1;
  }
  return 0LL;
}
