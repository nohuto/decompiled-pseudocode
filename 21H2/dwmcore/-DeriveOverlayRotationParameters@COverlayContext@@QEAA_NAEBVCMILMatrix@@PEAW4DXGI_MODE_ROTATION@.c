/*
 * XREFs of ?DeriveOverlayRotationParameters@COverlayContext@@QEAA_NAEBVCMILMatrix@@PEAW4DXGI_MODE_ROTATION@@PEAIPEA_N@Z @ 0x180007D58
 * Callers:
 *     ?CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisual@@PEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@PEBVCMILMatrix@@PEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x180006CA8 (-CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisu.c)
 * Callees:
 *     ??$IsTranslateAndScale@$00@CMILMatrix@@AEBA_NXZ @ 0x1800AD824 (--$IsTranslateAndScale@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?IsQualcommRotationWorkaroundNeeded@COverlayContext@@AEAA_NPEBVCMILMatrix@@@Z @ 0x1801B8270 (-IsQualcommRotationWorkaroundNeeded@COverlayContext@@AEAA_NPEBVCMILMatrix@@@Z.c)
 */

bool __fastcall COverlayContext::DeriveOverlayRotationParameters(
        COverlayContext *this,
        const struct CMILMatrix *a2,
        enum DXGI_MODE_ROTATION *a3,
        unsigned int *a4,
        bool *a5)
{
  int v5; // r14d
  enum DXGI_MODE_ROTATION v6; // esi
  int v7; // r12d
  unsigned int v9; // ebx
  bool v10; // r13
  float v11; // xmm2_4
  unsigned int v13; // eax
  int v14; // xmm0_4
  int v15; // xmm1_4
  int v16; // xmm0_4
  __int128 v17; // xmm1
  int v18; // xmm0_4
  __int128 v19; // xmm1
  int v20; // xmm0_4
  int v21; // xmm0_4
  float v22; // xmm2_4
  unsigned int v23; // eax
  _DWORD v24[6]; // [rsp+20h] [rbp-50h] BYREF
  __int128 v25; // [rsp+38h] [rbp-38h]
  __int128 v26; // [rsp+48h] [rbp-28h]
  int v27; // [rsp+58h] [rbp-18h]
  int v28; // [rsp+5Ch] [rbp-14h]
  int v29; // [rsp+60h] [rbp-10h]

  v5 = *((_DWORD *)this + 14);
  v6 = DXGI_MODE_ROTATION_IDENTITY;
  v7 = v5 & 6;
  v9 = 0;
  v10 = 1;
  if ( (unsigned __int8)CMILMatrix::IsTranslateAndScale<1>(a2) )
  {
    v11 = *(float *)a2;
    if ( *(float *)a2 >= 0.0 && *((float *)a2 + 5) >= 0.0 )
      goto LABEL_4;
    if ( v7 == 6 )
    {
      if ( v11 < 0.0 )
        v9 = 2;
      v13 = v9;
      v9 |= 1u;
      if ( *((float *)a2 + 5) >= 0.0 )
        v9 = v13;
      goto LABEL_4;
    }
    if ( (v5 & 0x8001) != 0
      && v11 < 0.0
      && *((float *)a2 + 5) < 0.0
      && !COverlayContext::IsQualcommRotationWorkaroundNeeded(this, a2) )
    {
      v6 = DXGI_MODE_ROTATION_ROTATE180;
LABEL_32:
      v10 = (v5 & 1) != 0;
LABEL_4:
      *a3 = v6;
      *a4 = v9;
      LOBYTE(v9) = 1;
      *a5 = v10;
    }
  }
  else if ( (v5 & 0x8001) != 0 )
  {
    v14 = *((_DWORD *)a2 + 1);
    v24[1] = *(_DWORD *)a2;
    v15 = *((_DWORD *)a2 + 3);
    v24[0] = v14;
    v16 = *((_DWORD *)a2 + 2);
    v24[3] = v15;
    v17 = *(_OWORD *)((char *)a2 + 24);
    v29 = 0;
    v24[2] = v16;
    v18 = *((_DWORD *)a2 + 5);
    v25 = v17;
    v19 = *(_OWORD *)((char *)a2 + 40);
    v24[4] = v18;
    v20 = *((_DWORD *)a2 + 4);
    v26 = v19;
    LODWORD(v19) = *((_DWORD *)a2 + 14);
    v24[5] = v20;
    v21 = *((_DWORD *)a2 + 15);
    v27 = v19;
    v28 = v21;
    if ( (unsigned __int8)CMILMatrix::IsTranslateAndScale<1>(v24) )
    {
      if ( !COverlayContext::IsQualcommRotationWorkaroundNeeded(this, (const struct CMILMatrix *)v24) )
      {
        v22 = *((float *)a2 + 4);
        if ( v7 == 6 )
        {
          v6 = DXGI_MODE_ROTATION_ROTATE90;
          if ( v22 > 0.0 )
            v9 = 2;
          v23 = v9;
          v9 |= 1u;
          if ( *((float *)a2 + 1) >= 0.0 )
            v9 = v23;
          goto LABEL_32;
        }
        if ( v22 > 0.0 && *((float *)a2 + 1) < 0.0 )
        {
          v6 = DXGI_MODE_ROTATION_ROTATE270;
          goto LABEL_32;
        }
        if ( v22 < 0.0 && *((float *)a2 + 1) > 0.0 )
        {
          v6 = DXGI_MODE_ROTATION_ROTATE90;
          goto LABEL_32;
        }
      }
    }
  }
  return v9;
}
