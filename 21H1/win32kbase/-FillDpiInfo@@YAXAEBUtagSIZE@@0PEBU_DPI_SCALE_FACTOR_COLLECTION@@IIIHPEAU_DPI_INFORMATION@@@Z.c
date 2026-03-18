/*
 * XREFs of ?FillDpiInfo@@YAXAEBUtagSIZE@@0PEBU_DPI_SCALE_FACTOR_COLLECTION@@IIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C00CADFC
 * Callers:
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00AE554 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 * Callees:
 *     ?CalcDpiOverride@DpiInternal@@YA?AUtagSIZE@@AEBU2@0@Z @ 0x1C00CAF74 (-CalcDpiOverride@DpiInternal@@YA-AUtagSIZE@@AEBU2@0@Z.c)
 *     ?CalcDpi@DpiInternal@@YA?AUtagSIZE@@AEBU2@0@Z @ 0x1C00CB050 (-CalcDpi@DpiInternal@@YA-AUtagSIZE@@AEBU2@0@Z.c)
 *     ?RoundToNearestScaleFactor@@YAKIPEBU_DPI_SCALE_FACTOR_COLLECTION@@@Z @ 0x1C014F780 (-RoundToNearestScaleFactor@@YAKIPEBU_DPI_SCALE_FACTOR_COLLECTION@@@Z.c)
 *     ?SatisfyMinResolutionBarForScaleIdx@DpiInternal@@YAKHHUtagSIZE@@QEBU_DPI_SCALE_FACTOR_COLLECTION@@H@Z @ 0x1C014F82C (-SatisfyMinResolutionBarForScaleIdx@DpiInternal@@YAKHHUtagSIZE@@QEBU_DPI_SCALE_FACTOR_COLLECTION.c)
 */

void __fastcall FillDpiInfo(
        const struct tagSIZE *a1,
        struct tagSIZE *this,
        struct tagSIZE a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6,
        int a7,
        struct tagSIZE *a8)
{
  bool v8; // zf
  struct tagSIZE v13; // rax
  __int64 v14; // r9
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned int v18; // eax
  unsigned int cy; // edx
  __int64 v20; // rax
  DpiInternal *v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rax
  const struct _DPI_SCALE_FACTOR_COLLECTION *v24; // [rsp+20h] [rbp-18h]
  int v25; // [rsp+28h] [rbp-10h]
  struct _DPI_INFORMATION *v26; // [rsp+78h] [rbp+40h]

  v8 = a1->cx == 0;
  a8[3] = *a1;
  a8[4] = *this;
  if ( !v8 && a1->cy )
    a8[5] = DpiInternal::CalcDpi((DpiInternal *)this, a1, *(const struct tagSIZE **)&a3);
  v13 = DpiInternal::CalcDpiOverride((DpiInternal *)this, a1, *(const struct tagSIZE **)&a3);
  if ( !v13.cx || !v13.cy )
    v13 = a8[5];
  v14 = 940802361LL;
  a8[6] = v13;
  a8[8].cx = 200;
  LODWORD(v26) = 20000 * a8[5].cx / 0x6900u;
  v15 = (unsigned int)v26;
  HIDWORD(v26) = 20000 * a8[5].cy / 0x6900u;
  a8[7] = (struct tagSIZE)v26;
  v16 = (unsigned int)(((int)v26 + HIDWORD(v26)) >> 31);
  if ( a5 )
  {
    if ( !a6 )
      goto LABEL_8;
  }
  else if ( a6 )
  {
LABEL_26:
    v18 = RoundToNearestScaleFactor(a6, *(const struct _DPI_SCALE_FACTOR_COLLECTION **)&a3);
    a8[7].cy = a6;
    a8[7].cx = a6;
    goto LABEL_10;
  }
  LODWORD(v16) = ((int)v26 + HIDWORD(v26)) % 2;
  v20 = WdLogNewEntry5_WdAssertion(2LL, v16, (unsigned int)v26, 940802361LL);
  WdLogEvent5_WdAssertion(v20);
LABEL_8:
  if ( a5 )
  {
    v17 = 100 * a5 + 48;
    LODWORD(v16) = (2863311531u * (unsigned __int64)(unsigned int)v17) >> 32;
    v18 = (unsigned int)v17 / 0x60;
    goto LABEL_10;
  }
  if ( a6 )
    goto LABEL_26;
  v21 = 0LL;
  if ( *(_DWORD *)(*(_QWORD *)&a3 + 8LL) != 1 )
  {
    do
    {
      if ( (unsigned int)(((int)v26 + HIDWORD(v26)) / 2) < *(_DWORD *)(*(_QWORD *)(*(_QWORD *)&a3 + 24LL)
                                                                     + 4LL * (_QWORD)v21) )
        break;
      v21 = (DpiInternal *)(unsigned int)((_DWORD)v21 + 1);
    }
    while ( (unsigned int)v21 < *(_DWORD *)(*(_QWORD *)&a3 + 8LL) - 1 );
  }
  LODWORD(v24) = 0;
  v18 = DpiInternal::SatisfyMinResolutionBarForScaleIdx(v21, 0, (int)*this, a3, v24, v25);
LABEL_10:
  a8[1].cy = v18;
  if ( !v18 )
  {
    v22 = WdLogNewEntry5_WdAssertion(v17, v16, v15, v14);
    WdLogEvent5_WdAssertion(v22);
  }
  if ( !a8[4].cx || !a8[4].cy )
  {
    v23 = WdLogNewEntry5_WdAssertion(v17, v16, v15, v14);
    WdLogEvent5_WdAssertion(v23);
  }
  if ( a5 )
  {
    a8[10].cy = 1234569;
    cy = (100 * a5 + 48) / 0x60;
  }
  else
  {
    cy = a8[1].cy;
  }
  a8[1].cx = cy;
}
