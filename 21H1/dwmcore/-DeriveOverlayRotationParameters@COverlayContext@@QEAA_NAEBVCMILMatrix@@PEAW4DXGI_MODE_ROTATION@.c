/*
 * XREFs of ?DeriveOverlayRotationParameters@COverlayContext@@QEAA_NAEBVCMILMatrix@@PEAW4DXGI_MODE_ROTATION@@PEAIPEA_N@Z @ 0x18017FF80
 * Callers:
 *     ?CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisual@@PEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@PEBVCMILMatrix@@PEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x1801872B4 (-CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisu.c)
 * Callees:
 *     ??$IsTranslateAndScale@$00@CMILMatrix@@AEBA_NXZ @ 0x1800182CC (--$IsTranslateAndScale@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?IsQualcommRotationWorkaroundNeeded@COverlayContext@@AEAA_NPEBVCMILMatrix@@@Z @ 0x180180F88 (-IsQualcommRotationWorkaroundNeeded@COverlayContext@@AEAA_NPEBVCMILMatrix@@@Z.c)
 */

bool __fastcall COverlayContext::DeriveOverlayRotationParameters(
        COverlayContext *this,
        const struct CMILMatrix *a2,
        enum DXGI_MODE_ROTATION *a3,
        unsigned int *a4,
        bool *a5)
{
  int v5; // edi
  enum DXGI_MODE_ROTATION v7; // ebx
  int v8; // r14d
  bool v10; // r15
  int v11; // r10d
  __int64 v12; // r11
  float v13; // xmm2_4
  int v14; // eax
  int v15; // xmm1_4
  float v16; // xmm6_4
  int v17; // xmm5_4
  __int128 v18; // xmm0
  int v19; // xmm1_4
  __int128 v20; // xmm0
  int v21; // xmm1_4
  float v22; // xmm5_4
  int v23; // eax
  _DWORD v25[6]; // [rsp+20h] [rbp-60h] BYREF
  __int128 v26; // [rsp+38h] [rbp-48h]
  __int128 v27; // [rsp+48h] [rbp-38h]
  int v28; // [rsp+58h] [rbp-28h]
  int v29; // [rsp+5Ch] [rbp-24h]
  int v30; // [rsp+60h] [rbp-20h]

  v5 = *((_DWORD *)this + 15);
  v7 = DXGI_MODE_ROTATION_IDENTITY;
  v8 = v5 & 6;
  v10 = 1;
  if ( CMILMatrix::IsTranslateAndScale<1>((__int64)a2) )
  {
    v13 = *(float *)v12;
    if ( *(float *)v12 >= 0.0 && *(float *)(v12 + 20) >= 0.0 )
      goto LABEL_31;
    if ( v8 == 6 )
    {
      if ( v13 < 0.0 )
        v11 = 2;
      v14 = v11;
      v11 |= 1u;
      if ( *(float *)(v12 + 20) >= 0.0 )
        v11 = v14;
      goto LABEL_31;
    }
    if ( (v5 & 0x8001) != 0
      && v13 < 0.0
      && *(float *)(v12 + 20) < 0.0
      && !COverlayContext::IsQualcommRotationWorkaroundNeeded(this, (const struct CMILMatrix *)v12) )
    {
      v7 = DXGI_MODE_ROTATION_ROTATE180;
LABEL_30:
      v10 = (v5 & 1) != 0;
LABEL_31:
      *a4 = v11;
      LOBYTE(v11) = 1;
      *a3 = v7;
      *a5 = v10;
    }
  }
  else if ( (v5 & 0x8001) != 0 )
  {
    v15 = *(_DWORD *)(v12 + 8);
    v16 = *(float *)(v12 + 4);
    v17 = *(_DWORD *)(v12 + 16);
    v25[1] = *(_DWORD *)v12;
    v25[3] = *(_DWORD *)(v12 + 12);
    v18 = *(_OWORD *)(v12 + 24);
    v30 = v11;
    v25[2] = v15;
    v19 = *(_DWORD *)(v12 + 20);
    v26 = v18;
    v20 = *(_OWORD *)(v12 + 40);
    v25[4] = v19;
    v21 = *(_DWORD *)(v12 + 60);
    v27 = v20;
    v28 = *(_DWORD *)(v12 + 56);
    *(float *)v25 = v16;
    v25[5] = v17;
    v29 = v21;
    if ( CMILMatrix::IsTranslateAndScale<1>((__int64)v25)
      && !COverlayContext::IsQualcommRotationWorkaroundNeeded(this, (const struct CMILMatrix *)v25) )
    {
      if ( v8 == 6 )
      {
        v23 = 2;
        v7 = DXGI_MODE_ROTATION_ROTATE90;
        if ( v22 <= 0.0 )
          v23 = v11;
        v11 = v23 | 1;
        if ( v16 >= 0.0 )
          v11 = v23;
        goto LABEL_30;
      }
      if ( v22 > 0.0 && v16 < 0.0 )
      {
        v7 = DXGI_MODE_ROTATION_ROTATE270;
        goto LABEL_30;
      }
      if ( v22 < 0.0 && v16 > 0.0 )
      {
        v7 = DXGI_MODE_ROTATION_ROTATE90;
        goto LABEL_30;
      }
    }
  }
  return v11;
}
