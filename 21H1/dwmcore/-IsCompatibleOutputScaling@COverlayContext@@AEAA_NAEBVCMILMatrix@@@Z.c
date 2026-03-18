/*
 * XREFs of ?IsCompatibleOutputScaling@COverlayContext@@AEAA_NAEBVCMILMatrix@@@Z @ 0x18006D18C
 * Callers:
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCDirtyRegion@@@Z @ 0x18006B030 (-EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCDirtyRegion@@@Z.c)
 * Callees:
 *     ??$IsTranslateAndScale@$00@CMILMatrix@@AEBA_NXZ @ 0x1800182CC (--$IsTranslateAndScale@$00@CMILMatrix@@AEBA_NXZ.c)
 */

char __fastcall COverlayContext::IsCompatibleOutputScaling(COverlayContext *this, const struct CMILMatrix *a2)
{
  char v2; // r10
  float *v4; // r11
  float v5; // xmm2_4

  if ( (CCommonRegistryData::m_dwOverlayTestMode == 5 || *((_DWORD *)this + 12) <= 1u) && !*((_DWORD *)this + 18) )
    return 0;
  if ( CCommonRegistryData::UniformSpaceDpiMode )
    return 0;
  if ( *((_BYTE *)this + 11417) )
    return 0;
  if ( *((_BYTE *)this + 11419) )
    return 0;
  if ( !CMILMatrix::IsTranslateAndScale<1>((__int64)a2) )
    return 0;
  if ( v4[10] != 1.0 )
    return 0;
  if ( *v4 < 1.0 )
    return 0;
  v5 = v4[5];
  if ( v5 < 1.0 || *v4 <= 1.0 && v5 <= 1.0 )
    return 0;
  return v2;
}
