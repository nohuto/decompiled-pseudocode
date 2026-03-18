/*
 * XREFs of BmlCompareTargetModesWithConstraint @ 0x1C01B5B6C
 * Callers:
 *     BmlCompareTargetModes @ 0x1C01B5A18 (BmlCompareTargetModes.c)
 * Callees:
 *     ?IsUnspecifiedFrequency@@YA_NAEBU_D3DDDI_RATIONAL@@@Z @ 0x1C001E50C (-IsUnspecifiedFrequency@@YA_NAEBU_D3DDDI_RATIONAL@@@Z.c)
 *     ??$DIFF@I@@YAIII@Z @ 0x1C001F68C (--$DIFF@I@@YAIII@Z.c)
 *     ?SupportVirtualRefreshRate@DMMVIDPNTARGETMODE@@QEBA_NXZ @ 0x1C01A965C (-SupportVirtualRefreshRate@DMMVIDPNTARGETMODE@@QEBA_NXZ.c)
 *     BmlCompareRegionsWithPivot @ 0x1C01B2A10 (BmlCompareRegionsWithPivot.c)
 *     ??$BmlCompareValues@I@@YA?AW4BML_COMPARISON_RESULT@@II@Z @ 0x1C01B2BD8 (--$BmlCompareValues@I@@YA-AW4BML_COMPARISON_RESULT@@II@Z.c)
 *     ?SupportVirtualRefreshRate@DMMVIDPNTARGETMODE@@QEBA_NAEBU_D3DDDI_RATIONAL@@I@Z @ 0x1C01B5CB4 (-SupportVirtualRefreshRate@DMMVIDPNTARGETMODE@@QEBA_NAEBU_D3DDDI_RATIONAL@@I@Z.c)
 *     BmlCompareTargetModeWithVirtualRefreshRate @ 0x1C01BC66C (BmlCompareTargetModeWithVirtualRefreshRate.c)
 *     ?DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAE@Z @ 0x1C01BE360 (-DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDE.c)
 *     BmlDoesTargetModeSupportWireFormat @ 0x1C01BE814 (BmlDoesTargetModeSupportWireFormat.c)
 *     ??$BmlCompareValues@_N@@YA?AW4BML_COMPARISON_RESULT@@_N0@Z @ 0x1C01E9110 (--$BmlCompareValues@_N@@YA-AW4BML_COMPARISON_RESULT@@_N0@Z.c)
 *     ?DmmCalculatePresentationVSync@@YAXPEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@PEAU_D3DDDI_RATIONAL@@@Z @ 0x1C01E9B80 (-DmmCalculatePresentationVSync@@YAXPEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@PEAU_D3DDDI_RATIONAL@@@Z.c)
 */

__int64 __fastcall BmlCompareTargetModesWithConstraint(__int64 a1, unsigned __int16 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r10d
  __int64 v5; // r13
  __int64 v9; // r14
  bool refreshed; // di
  bool v11; // al
  __int64 v12; // rdx
  __int64 v13; // rcx
  bool v14; // r8
  char v15; // r8
  unsigned int v17; // esi
  unsigned int v18; // ebx
  unsigned int v19; // edi
  unsigned int v20; // ebx
  unsigned int v21; // eax
  unsigned int v22; // eax
  unsigned int v23; // ecx
  unsigned int v24; // edx
  unsigned int v25; // r10d
  unsigned int v26; // eax
  unsigned int v27; // r9d
  bool v28; // bl
  __int64 v29; // rdx
  __int64 v30; // rcx
  char DoesTargetModeSupportWireFormat; // bl
  __int64 v32; // rdx
  __int64 v33; // rcx
  struct _D3DDDI_RATIONAL v34; // [rsp+20h] [rbp-38h] BYREF
  struct _D3DDDI_RATIONAL v35; // [rsp+60h] [rbp+8h] BYREF

  v4 = 0;
  v5 = 120LL * a2;
  v9 = *(_QWORD *)(a1 + v5 + 16);
  if ( (*(_BYTE *)v9 & 1) == 0
    || (v4 = BmlCompareRegionsWithPivot(
               (struct _D3DKMDT_2DREGION *)(a3 + 84),
               (struct _D3DKMDT_2DREGION *)(a4 + 84),
               (struct _D3DKMDT_2DREGION *)(v9 + 44))) == 0 )
  {
    if ( (*(_DWORD *)v9 & 0x1000000) == 0 || IsUnspecifiedFrequency((const struct _D3DDDI_RATIONAL *)(v9 + 224)) )
      goto LABEL_34;
    refreshed = DMMVIDPNTARGETMODE::SupportVirtualRefreshRate(
                  (DMMVIDPNTARGETMODE *)a3,
                  (const struct _D3DDDI_RATIONAL *)(v9 + 224),
                  *(_DWORD *)(v9 + 240));
    v11 = DMMVIDPNTARGETMODE::SupportVirtualRefreshRate(
            (DMMVIDPNTARGETMODE *)a4,
            (const struct _D3DDDI_RATIONAL *)(v9 + 224),
            *(_DWORD *)(v9 + 240));
    v14 = v11;
    if ( !refreshed && !v11 && *(_DWORD *)(v9 + 240) != 1 )
    {
      refreshed = DMMVIDPNTARGETMODE::SupportVirtualRefreshRate(
                    (DMMVIDPNTARGETMODE *)a3,
                    (const struct _D3DDDI_RATIONAL *)(v9 + 224),
                    1u);
      v14 = DMMVIDPNTARGETMODE::SupportVirtualRefreshRate(
              (DMMVIDPNTARGETMODE *)a4,
              (const struct _D3DDDI_RATIONAL *)(v9 + 224),
              1u);
    }
    LOBYTE(v12) = v14;
    LOBYTE(v13) = refreshed;
    v4 = BmlCompareValues<bool>(v13, v12);
    if ( !v4
      && (refreshed
       || v15
       || (v4 = BmlCompareTargetModeWithVirtualRefreshRate(
                  (struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(a3 + 72),
                  (struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(a4 + 72))) == 0) )
    {
LABEL_34:
      if ( (*(_BYTE *)v9 & 2) == 0
        || !*(_DWORD *)(v9 + 56)
        || !*(_DWORD *)(v9 + 52)
        || IsUnspecifiedFrequency((const struct _D3DDDI_RATIONAL *)(a3 + 92))
        || IsUnspecifiedFrequency((const struct _D3DDDI_RATIONAL *)(a4 + 92)) )
      {
        goto LABEL_35;
      }
      v35 = 0LL;
      DmmCalculatePresentationVSync((const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(a3 + 72), &v35);
      v34 = 0LL;
      DmmCalculatePresentationVSync((const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(a4 + 72), &v34);
      v17 = DmmMapVSyncFromRationalToInteger(
              (const struct _D3DDDI_RATIONAL *)(v9 + 52),
              (enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING)((int)(*(_DWORD *)(a3 + 120) << 29) >> 29),
              0LL);
      v18 = DmmMapVSyncFromRationalToInteger(
              &v35,
              (enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING)((int)(*(_DWORD *)(a3 + 120) << 29) >> 29),
              0LL);
      v19 = DmmMapVSyncFromRationalToInteger(
              (const struct _D3DDDI_RATIONAL *)(v9 + 52),
              (enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING)((int)(*(_DWORD *)(a4 + 120) << 29) >> 29),
              0LL);
      v20 = DIFF<unsigned int>(v18, v17);
      v21 = DmmMapVSyncFromRationalToInteger(
              &v34,
              (enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING)((int)(*(_DWORD *)(a4 + 120) << 29) >> 29),
              0LL);
      v22 = DIFF<unsigned int>(v21, v19);
      v4 = BmlCompareValues<unsigned int>(v22, v20);
      if ( !v4 )
      {
        if ( ((*(_DWORD *)(v9 + 80) >> 3) & 0x3F) == 0 )
          goto LABEL_35;
        v23 = (*(_DWORD *)(a3 + 120) >> 3) & 0x3F;
        if ( !v23 )
          v23 = 1;
        DIFF<unsigned int>(v23, (*(_DWORD *)(v9 + 80) >> 3) & 0x3F);
        v26 = DIFF<unsigned int>(v25, v24);
        v4 = BmlCompareValues<unsigned int>(v26, v27);
        if ( !v4 )
        {
LABEL_35:
          if ( (*(_DWORD *)v9 & 0x1000000) != 0
            || (*(_DWORD *)(a1 + v5 + 128) & 1) == 0
            || (v28 = DMMVIDPNTARGETMODE::SupportVirtualRefreshRate((DMMVIDPNTARGETMODE *)a3),
                LOBYTE(v29) = DMMVIDPNTARGETMODE::SupportVirtualRefreshRate((DMMVIDPNTARGETMODE *)a4),
                LOBYTE(v30) = v28,
                (v4 = BmlCompareValues<bool>(v30, v29)) == 0) )
          {
            if ( (*(_BYTE *)v9 & 8) != 0 )
            {
              DoesTargetModeSupportWireFormat = BmlDoesTargetModeSupportWireFormat(a3, *(unsigned int *)(v9 + 204));
              LOBYTE(v32) = BmlDoesTargetModeSupportWireFormat(a4, *(unsigned int *)(v9 + 204));
              LOBYTE(v33) = DoesTargetModeSupportWireFormat;
              return (unsigned int)BmlCompareValues<bool>(v33, v32);
            }
          }
        }
      }
    }
  }
  return v4;
}
