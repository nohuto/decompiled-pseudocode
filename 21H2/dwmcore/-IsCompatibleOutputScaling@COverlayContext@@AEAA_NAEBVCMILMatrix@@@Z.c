/*
 * XREFs of ?IsCompatibleOutputScaling@COverlayContext@@AEAA_NAEBVCMILMatrix@@@Z @ 0x1800B9C44
 * Callers:
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@AEBVCDirtyRegion@@@Z @ 0x1800B9510 (-EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@AEBVCDirtyRegion@@@Z.c)
 * Callees:
 *     ??$IsTranslateAndScale@$00@CMILMatrix@@AEBA_NXZ @ 0x1800AD824 (--$IsTranslateAndScale@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?OverlaysEnabled@COverlayContext@@AEBA_NXZ @ 0x1800B9CC8 (-OverlaysEnabled@COverlayContext@@AEBA_NXZ.c)
 */

char __fastcall COverlayContext::IsCompatibleOutputScaling(COverlayContext *this, const struct CMILMatrix *a2)
{
  __int64 v3; // rcx
  char v4; // bl
  float v6; // xmm2_4

  v4 = 0;
  if ( (COverlayContext::OverlaysEnabled(this) || *(_DWORD *)(v3 + 68))
    && !*(_BYTE *)(v3 + 11297)
    && !*(_BYTE *)(v3 + 11300) )
  {
    if ( CMILMatrix::IsTranslateAndScale<1>((__int64)a2) )
    {
      if ( *((float *)a2 + 10) == 1.0 && *(float *)a2 >= 1.0 )
      {
        v6 = *((float *)a2 + 5);
        if ( v6 >= 1.0 && (*(float *)a2 > 1.0 || v6 > 1.0) )
          return 1;
      }
    }
  }
  return v4;
}
