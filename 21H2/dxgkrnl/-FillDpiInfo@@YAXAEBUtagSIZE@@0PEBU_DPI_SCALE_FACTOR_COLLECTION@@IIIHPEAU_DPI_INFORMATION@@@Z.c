/*
 * XREFs of ?FillDpiInfo@@YAXAEBUtagSIZE@@0PEBU_DPI_SCALE_FACTOR_COLLECTION@@IIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C001969C
 * Callers:
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHIPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C01D4AE8 (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHIPEAU_GDIINFO@@PEAU_DPI_INFORMATIO.c)
 * Callees:
 *     ?FillOverridesAndAdjustedScaleFactor@DpiInternal@@YAXIHPEBU_DPI_SCALE_FACTOR_COLLECTION@@PEAU_DPI_INFORMATION@@H@Z @ 0x1C001980C (-FillOverridesAndAdjustedScaleFactor@DpiInternal@@YAXIHPEBU_DPI_SCALE_FACTOR_COLLECTION@@PEAU_DP.c)
 *     ?SatisfyMinResolutionBarForScaleIdx@DpiInternal@@YAKHHUtagSIZE@@QEBU_DPI_SCALE_FACTOR_COLLECTION@@H@Z @ 0x1C0019948 (-SatisfyMinResolutionBarForScaleIdx@DpiInternal@@YAKHHUtagSIZE@@QEBU_DPI_SCALE_FACTOR_COLLECTION.c)
 *     ?FindPlateauIndexForScaleFactor@DpiInternal@@YAIIPEBU_DPI_SCALE_FACTOR_COLLECTION@@@Z @ 0x1C00199CC (-FindPlateauIndexForScaleFactor@DpiInternal@@YAIIPEBU_DPI_SCALE_FACTOR_COLLECTION@@@Z.c)
 *     ?CalcDpiOverride@DpiInternal@@YA?AUtagSIZE@@AEBU2@0@Z @ 0x1C0019A10 (-CalcDpiOverride@DpiInternal@@YA-AUtagSIZE@@AEBU2@0@Z.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0046D24 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     ?CalcDpi@DpiInternal@@YA?AUtagSIZE@@AEBU2@0@Z @ 0x1C004F218 (-CalcDpi@DpiInternal@@YA-AUtagSIZE@@AEBU2@0@Z.c)
 *     ?RoundToNearestScaleFactor@@YAKIPEBU_DPI_SCALE_FACTOR_COLLECTION@@@Z @ 0x1C004F368 (-RoundToNearestScaleFactor@@YAKIPEBU_DPI_SCALE_FACTOR_COLLECTION@@@Z.c)
 */

void __fastcall FillDpiInfo(
        const struct tagSIZE *a1,
        struct tagSIZE *this,
        const struct tagSIZE *a3,
        int a4,
        DpiInternal *a5,
        unsigned int a6,
        unsigned int a7,
        struct _DPI_INFORMATION *a8)
{
  int v8; // ebx
  struct tagSIZE v14; // rax
  unsigned __int64 v15; // r8
  unsigned int v16; // edx
  unsigned int PlateauIndexForScaleFactor; // eax
  unsigned int v18; // eax
  unsigned int v19; // edx
  bool v20; // zf
  int v21; // eax
  int v22; // edx
  int v23; // ecx
  struct _DPI_SCALE_FACTOR_COLLECTION *v24; // [rsp+20h] [rbp-68h]
  int v25; // [rsp+28h] [rbp-60h]
  struct _DPI_SCALE_FACTOR_COLLECTION *v26; // [rsp+C8h] [rbp+40h]

  v8 = 0;
  *((struct tagSIZE *)a8 + 3) = *a1;
  *((struct tagSIZE *)a8 + 4) = *this;
  if ( a1->cx && a1->cy )
    *((struct tagSIZE *)a8 + 5) = DpiInternal::CalcDpi((DpiInternal *)this, a1, a3);
  v14 = DpiInternal::CalcDpiOverride((DpiInternal *)this, a1, a3);
  if ( !v14.cx || !v14.cy )
    v14 = (struct tagSIZE)*((_QWORD *)a8 + 5);
  *((struct tagSIZE *)a8 + 6) = v14;
  *((_DWORD *)a8 + 16) = a4;
  if ( a4 == 0xFFFF )
  {
    v15 = (unsigned int)(a3[1].cx - 1);
    if ( a3[1].cx != 1 )
    {
      do
      {
        if ( (unsigned int)(100 * *((_DWORD *)a8 + 9)) / *(_DWORD *)(*(_QWORD *)&a3[2] + 4 * v15) >= 0x2D0 )
          break;
        v20 = (_DWORD)v15 == 1;
        v15 = (unsigned int)(v15 - 1);
      }
      while ( !v20 );
    }
    v21 = 100;
    if ( (_DWORD)v15 )
      v21 = *(_DWORD *)(*(_QWORD *)&a3[3] + 4LL * (unsigned int)(v15 - 1)) + 1;
    LODWORD(v26) = v21;
    HIDWORD(v26) = v21;
  }
  else
  {
    LODWORD(v26) = 100 * a4 * *((_DWORD *)a8 + 10) / 0x6900u;
    v15 = 100 * a4 * *((_DWORD *)a8 + 11) / 0x6900u;
    HIDWORD(v26) = 100 * a4 * *((_DWORD *)a8 + 11) / 0x6900u;
  }
  *((_QWORD *)a8 + 7) = v26;
  if ( a7 )
  {
    if ( (_DWORD)a5 )
    {
      if ( !a6 )
      {
LABEL_24:
        v19 = (100 * (int)a5 + 48) / 0x60u;
        goto LABEL_10;
      }
    }
    else if ( a6 )
    {
      goto LABEL_32;
    }
    WdLogSingleEntry1(1LL, 885LL);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
      McTemplateK0zqqzxxxxx_EtwWriteTransfer(
        v23,
        v22,
        v15,
        0,
        2,
        -1,
        (__int64)L"((Win8StyleDpiOverride != 0) && (PreferredScaleFactor == 0)) || ((Win8StyleDpiOverride == 0) && (Prefer"
                  "redScaleFactor != 0))");
    if ( (_DWORD)a5 )
      goto LABEL_24;
    if ( !a6 )
    {
      v16 = (unsigned int)a3;
      goto LABEL_8;
    }
LABEL_32:
    v18 = RoundToNearestScaleFactor(a6, (const struct _DPI_SCALE_FACTOR_COLLECTION *)a3);
    *((_DWORD *)a8 + 15) = a6;
    *((_DWORD *)a8 + 14) = a6;
    goto LABEL_9;
  }
  v16 = (unsigned int)a3;
  if ( a6 )
  {
    v18 = RoundToNearestScaleFactor(a6, (const struct _DPI_SCALE_FACTOR_COLLECTION *)a3);
    goto LABEL_9;
  }
LABEL_8:
  PlateauIndexForScaleFactor = DpiInternal::FindPlateauIndexForScaleFactor(
                                 (DpiInternal *)(unsigned int)((HIDWORD(v26) + (int)v26) / 2),
                                 v16,
                                 (const struct _DPI_SCALE_FACTOR_COLLECTION *)v15);
  LODWORD(v24) = 0;
  v18 = DpiInternal::SatisfyMinResolutionBarForScaleIdx(
          (DpiInternal *)PlateauIndexForScaleFactor,
          0,
          (int)*this,
          (struct tagSIZE)a3,
          v24,
          v25);
LABEL_9:
  v19 = v18;
LABEL_10:
  *((_DWORD *)a8 + 3) = v19;
  LOBYTE(v8) = a6 != 0;
  LODWORD(v24) = v8;
  DpiInternal::FillOverridesAndAdjustedScaleFactor((DpiInternal *)(unsigned int)a5, a7, (int)a3, a8, v24, v25);
}
