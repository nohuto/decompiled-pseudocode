/*
 * XREFs of ?FillDpiInfo@@YAXAEBUtagSIZE@@0PEBU_DPI_SCALE_FACTOR_COLLECTION@@IIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C00CA6E4
 * Callers:
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0011E88 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 * Callees:
 *     ?CalcDpiOverride@DpiInternal@@YA?AUtagSIZE@@AEBU2@0@Z @ 0x1C00CA85C (-CalcDpiOverride@DpiInternal@@YA-AUtagSIZE@@AEBU2@0@Z.c)
 *     ?CalcDpi@DpiInternal@@YA?AUtagSIZE@@AEBU2@0@Z @ 0x1C00CA938 (-CalcDpi@DpiInternal@@YA-AUtagSIZE@@AEBU2@0@Z.c)
 *     ?RoundToNearestScaleFactor@@YAKIPEBU_DPI_SCALE_FACTOR_COLLECTION@@@Z @ 0x1C0146F60 (-RoundToNearestScaleFactor@@YAKIPEBU_DPI_SCALE_FACTOR_COLLECTION@@@Z.c)
 *     ?SatisfyMinResolutionBarForScaleIdx@DpiInternal@@YAKHHUtagSIZE@@QEBU_DPI_SCALE_FACTOR_COLLECTION@@H@Z @ 0x1C014700C (-SatisfyMinResolutionBarForScaleIdx@DpiInternal@@YAKHHUtagSIZE@@QEBU_DPI_SCALE_FACTOR_COLLECTION.c)
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
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned int v16; // eax
  unsigned int cy; // edx
  __int64 v18; // rax
  DpiInternal *v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  const struct _DPI_SCALE_FACTOR_COLLECTION *v22; // [rsp+20h] [rbp-18h]
  int v23; // [rsp+28h] [rbp-10h]
  struct _DPI_INFORMATION *v24; // [rsp+78h] [rbp+40h]

  v8 = a1->cx == 0;
  a8[3] = *a1;
  a8[4] = *this;
  if ( !v8 && a1->cy )
    a8[5] = DpiInternal::CalcDpi((DpiInternal *)this, a1, *(const struct tagSIZE **)&a3);
  v13 = DpiInternal::CalcDpiOverride((DpiInternal *)this, a1, *(const struct tagSIZE **)&a3);
  if ( !v13.cx || !v13.cy )
    v13 = a8[5];
  a8[6] = v13;
  a8[8].cx = 200;
  LODWORD(v24) = 20000 * a8[5].cx / 0x6900u;
  HIDWORD(v24) = 20000 * a8[5].cy / 0x6900u;
  a8[7] = (struct tagSIZE)v24;
  v14 = (unsigned int)(((int)v24 + HIDWORD(v24)) >> 31);
  if ( a5 )
  {
    if ( !a6 )
      goto LABEL_8;
  }
  else if ( a6 )
  {
LABEL_26:
    v16 = RoundToNearestScaleFactor(a6, *(const struct _DPI_SCALE_FACTOR_COLLECTION **)&a3);
    a8[7].cy = a6;
    a8[7].cx = a6;
    goto LABEL_10;
  }
  LODWORD(v14) = ((int)v24 + HIDWORD(v24)) % 2;
  v18 = WdLogNewEntry5_WdAssertion(2LL, v14);
  WdLogEvent5_WdAssertion(v18);
LABEL_8:
  if ( a5 )
  {
    v15 = 100 * a5 + 48;
    LODWORD(v14) = (2863311531u * (unsigned __int64)(unsigned int)v15) >> 32;
    v16 = (unsigned int)v15 / 0x60;
    goto LABEL_10;
  }
  if ( a6 )
    goto LABEL_26;
  v19 = 0LL;
  if ( *(_DWORD *)(*(_QWORD *)&a3 + 8LL) != 1 )
  {
    do
    {
      if ( (unsigned int)(((int)v24 + HIDWORD(v24)) / 2) < *(_DWORD *)(*(_QWORD *)(*(_QWORD *)&a3 + 24LL)
                                                                     + 4LL * (_QWORD)v19) )
        break;
      v19 = (DpiInternal *)(unsigned int)((_DWORD)v19 + 1);
    }
    while ( (unsigned int)v19 < *(_DWORD *)(*(_QWORD *)&a3 + 8LL) - 1 );
  }
  LODWORD(v22) = 0;
  v16 = DpiInternal::SatisfyMinResolutionBarForScaleIdx(v19, 0, (int)*this, a3, v22, v23);
LABEL_10:
  a8[1].cy = v16;
  if ( !v16 )
  {
    v20 = WdLogNewEntry5_WdAssertion(v15, v14);
    WdLogEvent5_WdAssertion(v20);
  }
  if ( !a8[4].cx || !a8[4].cy )
  {
    v21 = WdLogNewEntry5_WdAssertion(v15, v14);
    WdLogEvent5_WdAssertion(v21);
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
