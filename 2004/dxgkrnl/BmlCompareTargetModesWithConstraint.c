/*
 * XREFs of BmlCompareTargetModesWithConstraint @ 0x1C0137F8C
 * Callers:
 *     BmlCompareTargetModes @ 0x1C0137E44 (BmlCompareTargetModes.c)
 * Callees:
 *     ??$DIFF@I@@YAIII@Z @ 0x1C000B220 (--$DIFF@I@@YAIII@Z.c)
 *     ?IsUnspecifiedFrequency@DMMVIDEOSIGNALMODE@@QEBA_NXZ @ 0x1C000B238 (-IsUnspecifiedFrequency@DMMVIDEOSIGNALMODE@@QEBA_NXZ.c)
 *     ?DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAE@Z @ 0x1C011D6E0 (-DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDE.c)
 *     BmlCompareRegionsWithPivot @ 0x1C01362C8 (BmlCompareRegionsWithPivot.c)
 *     ??$BmlCompareValues@I@@YA?AW4BML_COMPARISON_RESULT@@II@Z @ 0x1C0136388 (--$BmlCompareValues@I@@YA-AW4BML_COMPARISON_RESULT@@II@Z.c)
 *     ?DmmCalculatePresentationVSync@@YAXPEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@PEAU_D3DDDI_RATIONAL@@@Z @ 0x1C01380F4 (-DmmCalculatePresentationVSync@@YAXPEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@PEAU_D3DDDI_RATIONAL@@@Z.c)
 *     BmlDoesTargetModeSupportWireFormat @ 0x1C014B3CC (BmlDoesTargetModeSupportWireFormat.c)
 */

__int64 __fastcall BmlCompareTargetModesWithConstraint(__int64 a1, unsigned __int16 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rsi
  unsigned int v7; // edx
  unsigned int v8; // ebx
  unsigned int v9; // eax
  unsigned int v10; // edi
  unsigned int v11; // ebx
  unsigned int v12; // eax
  unsigned int v13; // eax
  unsigned int v15; // ecx
  unsigned int v16; // edx
  unsigned int v17; // r10d
  unsigned int v18; // eax
  unsigned int v19; // r9d
  char DoesTargetModeSupportWireFormat; // bl
  char v21; // al
  struct _D3DDDI_RATIONAL v22; // [rsp+20h] [rbp-38h] BYREF
  struct _D3DDDI_RATIONAL v23; // [rsp+60h] [rbp+8h] BYREF

  v6 = *(_QWORD *)(104LL * a2 + a1 + 16);
  v7 = 0;
  if ( (*(_BYTE *)v6 & 1) == 0
    || (v7 = BmlCompareRegionsWithPivot(
               (struct _D3DKMDT_2DREGION *)(a3 + 84),
               (struct _D3DKMDT_2DREGION *)(a4 + 84),
               (struct _D3DKMDT_2DREGION *)(v6 + 44))) == 0 )
  {
    if ( (*(_BYTE *)v6 & 2) == 0
      || !*(_DWORD *)(v6 + 56)
      || !*(_DWORD *)(v6 + 52)
      || DMMVIDEOSIGNALMODE::IsUnspecifiedFrequency((DMMVIDEOSIGNALMODE *)(a3 + 72))
      || DMMVIDEOSIGNALMODE::IsUnspecifiedFrequency((DMMVIDEOSIGNALMODE *)(a4 + 72)) )
    {
      goto LABEL_10;
    }
    v23 = 0LL;
    DmmCalculatePresentationVSync((const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(a3 + 72), &v23);
    v22 = 0LL;
    DmmCalculatePresentationVSync((const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(a4 + 72), &v22);
    v8 = DmmMapVSyncFromRationalToInteger(
           (const struct _D3DDDI_RATIONAL *)(v6 + 52),
           (unsigned int)((int)(*(_DWORD *)(a3 + 120) << 29) >> 29),
           0LL);
    v9 = DmmMapVSyncFromRationalToInteger(&v23, (unsigned int)((int)(*(_DWORD *)(a3 + 120) << 29) >> 29), 0LL);
    v10 = DIFF<unsigned int>(v9, v8);
    v11 = DmmMapVSyncFromRationalToInteger(
            (const struct _D3DDDI_RATIONAL *)(v6 + 52),
            (unsigned int)((int)(*(_DWORD *)(a4 + 120) << 29) >> 29),
            0LL);
    v12 = DmmMapVSyncFromRationalToInteger(&v22, (unsigned int)((int)(*(_DWORD *)(a4 + 120) << 29) >> 29), 0LL);
    v13 = DIFF<unsigned int>(v12, v11);
    v7 = BmlCompareValues<unsigned int>(v13, v10);
    if ( !v7 )
    {
      if ( ((*(_DWORD *)(v6 + 80) >> 3) & 0x3F) == 0 )
        goto LABEL_10;
      v15 = (*(_DWORD *)(a3 + 120) >> 3) & 0x3F;
      if ( !v15 )
        v15 = 1;
      DIFF<unsigned int>(v15, (*(_DWORD *)(v6 + 80) >> 3) & 0x3F);
      v18 = DIFF<unsigned int>(v17, v16);
      v7 = BmlCompareValues<unsigned int>(v18, v19);
      if ( !v7 )
      {
LABEL_10:
        if ( (*(_BYTE *)v6 & 8) != 0 )
        {
          DoesTargetModeSupportWireFormat = BmlDoesTargetModeSupportWireFormat(a3, *(unsigned int *)(v6 + 204));
          v21 = BmlDoesTargetModeSupportWireFormat(a4, *(unsigned int *)(v6 + 204));
          if ( DoesTargetModeSupportWireFormat == v21 )
          {
            return 0;
          }
          else
          {
            v7 = -1;
            if ( DoesTargetModeSupportWireFormat == 1 )
              return 1;
          }
        }
      }
    }
  }
  return v7;
}
