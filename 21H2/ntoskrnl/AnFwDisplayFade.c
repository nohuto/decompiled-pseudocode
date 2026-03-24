/*
 * XREFs of AnFwDisplayFade @ 0x1409F1C00
 * Callers:
 *     BgDisplayFade @ 0x1409F161C (BgDisplayFade.c)
 * Callees:
 *     KeSetCoalescableTimer @ 0x14025FC70 (KeSetCoalescableTimer.c)
 *     KeInitializeTimerEx @ 0x140278AE0 (KeInitializeTimerEx.c)
 *     KeInitializeDpc @ 0x14027B6B0 (KeInitializeDpc.c)
 *     KeResetEvent @ 0x14027BC40 (KeResetEvent.c)
 *     BgpGxRectangleSize @ 0x14039BD48 (BgpGxRectangleSize.c)
 *     BgpFwFreeMemory @ 0x14039BD60 (BgpFwFreeMemory.c)
 *     BgpGetBitsPerPixel @ 0x14039C280 (BgpGetBitsPerPixel.c)
 *     BgpGxConvertRectangleEx @ 0x14039C46C (BgpGxConvertRectangleEx.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     memset @ 0x140414200 (memset.c)
 *     BgpClearScreen @ 0x1405C4274 (BgpClearScreen.c)
 *     BgpGxParseBitmap @ 0x1409F1880 (BgpGxParseBitmap.c)
 *     BgpGxReadRectangle @ 0x1409F19D0 (BgpGxReadRectangle.c)
 *     BgpGxRectangleDestroy @ 0x1409F2290 (BgpGxRectangleDestroy.c)
 *     BgpGxFindSubRectangle @ 0x1409F22B4 (BgpGxFindSubRectangle.c)
 *     LogFwStat @ 0x1409F27D8 (LogFwStat.c)
 *     BgpTxtGetRegionContext @ 0x1409F2944 (BgpTxtGetRegionContext.c)
 *     BgpGxRectangleCreate @ 0x1409F32C0 (BgpGxRectangleCreate.c)
 *     AnFwDisableBackgroundUpdateTimer @ 0x1409F34CC (AnFwDisableBackgroundUpdateTimer.c)
 *     AnFwpDisableProgressTimer @ 0x1409F34EC (AnFwpDisableProgressTimer.c)
 */

__int64 AnFwDisplayFade()
{
  __int64 v0; // rdi
  int *v1; // r12
  int *v2; // r13
  __int64 v3; // rsi
  int SubRectangle; // r14d
  unsigned int v5; // r15d
  __int64 RegionContext; // r14
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  _DWORD *v10; // r9
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // r8
  _DWORD *v14; // r9
  int v15; // eax
  int v16; // r8d
  int v17; // eax
  int v18; // eax
  unsigned int v19; // r9d
  unsigned int v20; // r10d
  unsigned int v21; // edx
  unsigned int v22; // r11d
  unsigned int v23; // r11d
  unsigned int v24; // eax
  int v25; // eax
  int v26; // ecx
  int v27; // edx
  int v28; // eax
  int v29; // eax
  int v30; // eax
  __int64 v31; // rsi
  int v32; // edi
  unsigned int v33; // ecx
  unsigned int v34; // ecx
  _QWORD *v35; // rsi
  __int64 v36; // r15
  unsigned int v38; // edx
  char v39; // [rsp+38h] [rbp-49h] BYREF
  char v40; // [rsp+39h] [rbp-48h]
  char v41; // [rsp+3Ah] [rbp-47h]
  char v42; // [rsp+3Bh] [rbp-46h]
  unsigned int v43; // [rsp+3Ch] [rbp-45h]
  unsigned int BitsPerPixel; // [rsp+40h] [rbp-41h]
  __int64 v45; // [rsp+48h] [rbp-39h] BYREF
  int *v46; // [rsp+50h] [rbp-31h] BYREF
  int *v47; // [rsp+58h] [rbp-29h]
  int *v48; // [rsp+60h] [rbp-21h] BYREF
  __int64 v49; // [rsp+68h] [rbp-19h] BYREF
  int *v50; // [rsp+70h] [rbp-11h] BYREF
  int v51; // [rsp+78h] [rbp-9h] BYREF
  int v52; // [rsp+7Ch] [rbp-5h]
  int v53; // [rsp+80h] [rbp-1h]
  __int64 v54; // [rsp+88h] [rbp+7h] BYREF
  __int64 v55; // [rsp+90h] [rbp+Fh] BYREF
  int *v56; // [rsp+98h] [rbp+17h] BYREF
  _OWORD v57[2]; // [rsp+A0h] [rbp+1Fh] BYREF

  v53 = 0;
  v0 = 0LL;
  v54 = 0LL;
  v1 = 0LL;
  v55 = 0LL;
  v2 = 0LL;
  v43 = 0;
  v3 = 0LL;
  v45 = 0LL;
  v48 = 0LL;
  SubRectangle = 0;
  v5 = 0;
  v39 = 0;
  v47 = 0LL;
  v46 = 0LL;
  v50 = 0LL;
  v56 = 0LL;
  v49 = 0LL;
  memset(v57, 0, sizeof(v57));
  if ( (dword_140C134F0 & 0x2000) != 0 )
    return (unsigned int)SubRectangle;
  if ( (dword_140C134F0 & 0x200000) != 0 )
    goto LABEL_69;
  RegionContext = BgpTxtGetRegionContext(qword_140C135B0);
  v7 = BgpTxtGetRegionContext(qword_140C135B8);
  v11 = v7;
  if ( !RegionContext || !v7 )
  {
    SubRectangle = -1073741670;
    goto LABEL_36;
  }
  xmmword_140C10EA0 = *(_OWORD *)RegionContext;
  qword_140C10EB0 = *(_QWORD *)(RegionContext + 16);
  dword_140C10EB8 = *(_DWORD *)(RegionContext + 24);
  xmmword_140C10ED8 = *(_OWORD *)v7;
  qword_140C10EE8 = *(_QWORD *)(v7 + 16);
  dword_140C10EF0 = *(_DWORD *)(v7 + 24);
  BgpFwFreeMemory(RegionContext, v8, v9, v10);
  BgpFwFreeMemory(v11, v12, v13, v14);
  AnFwpDisableProgressTimer();
  AnFwDisableBackgroundUpdateTimer();
  v40 = 0;
  v41 = 0;
  BitsPerPixel = BgpGetBitsPerPixel();
  LogFwStat(1LL, 5LL, 0LL);
  if ( !qword_140C13538 )
  {
    v42 = 1;
    goto LABEL_13;
  }
  v42 = 0;
  v15 = BgpGxParseBitmap((__int64)qword_140C13538, &v50);
  v1 = v50;
  SubRectangle = v15;
  if ( v15 < 0 )
    goto LABEL_41;
  v16 = v50[2];
  if ( BitsPerPixel != v16 )
  {
    v17 = BgpGxRectangleSize(*v50, v50[1], v16);
    v50 = 0LL;
    v5 = ((v17 + 15) & 0xFFFFFFF0) + 32;
    SubRectangle = BgpGxConvertRectangleEx((__int64)v1, BitsPerPixel, &v50, 0);
    if ( SubRectangle >= 0 )
    {
      *(_QWORD *)&v57[0] = v1;
      v1 = v50;
      v43 = 1;
      goto LABEL_10;
    }
LABEL_41:
    v3 = v49;
LABEL_69:
    AnFwpDisableProgressTimer();
    AnFwDisableBackgroundUpdateTimer();
    SubRectangle = BgpClearScreen(0xFF000000);
    if ( v0 )
      BgpGxRectangleDestroy(v0);
    if ( v54 )
      BgpGxRectangleDestroy(v54);
    if ( v1 )
      BgpGxRectangleDestroy(v1);
    if ( v55 )
      BgpGxRectangleDestroy(v55);
    if ( v2 )
      BgpGxRectangleDestroy(v2);
    if ( v3 )
      BgpGxRectangleDestroy(v3);
    return (unsigned int)SubRectangle;
  }
LABEL_10:
  v18 = BgpGxRectangleSize(*v1, v1[1], BitsPerPixel);
  v19 = qword_140C1354C + dword_140C13554;
  v20 = HIDWORD(qword_140C1354C) + dword_140C13558;
  v21 = xmmword_140C10EA0 + DWORD2(xmmword_140C10EA0);
  v5 += ((v18 + 15) & 0xFFFFFFF0) + 32 + 2 * (((v18 + 15) & 0xFFFFFFF0) + 32);
  v22 = DWORD1(xmmword_140C10EA0) + HIDWORD(xmmword_140C10EA0);
  if ( (unsigned int)xmmword_140C10EA0 <= (int)qword_140C1354C + dword_140C13554
    && (unsigned int)xmmword_140C10EA0 >= (unsigned int)qword_140C1354C
    && DWORD1(xmmword_140C10EA0) >= HIDWORD(qword_140C1354C)
    && DWORD1(xmmword_140C10EA0) <= v20 )
  {
    if ( v21 < (unsigned int)qword_140C1354C || v21 > v19 || v22 < HIDWORD(qword_140C1354C) || v22 > v20 )
      goto LABEL_51;
    v40 = 1;
  }
  v23 = xmmword_140C10ED8 + DWORD2(xmmword_140C10ED8);
  v24 = DWORD1(xmmword_140C10ED8) + HIDWORD(xmmword_140C10ED8);
  if ( (unsigned int)xmmword_140C10ED8 >= (unsigned int)qword_140C1354C
    && (unsigned int)xmmword_140C10ED8 <= v19
    && DWORD1(xmmword_140C10ED8) >= HIDWORD(qword_140C1354C)
    && DWORD1(xmmword_140C10ED8) <= v20 )
  {
    if ( v23 >= (unsigned int)qword_140C1354C && v23 <= v19 && v24 >= HIDWORD(qword_140C1354C) && v24 <= v20 )
    {
      v41 = 1;
      goto LABEL_12;
    }
LABEL_51:
    SubRectangle = -1073741823;
    goto LABEL_36;
  }
LABEL_12:
  if ( !v40 )
  {
LABEL_13:
    v25 = BgpGxReadRectangle(&v46, (__int64)&xmmword_140C10EA0);
    v0 = (__int64)v46;
    SubRectangle = v25;
    if ( v25 < 0 )
      goto LABEL_36;
    v26 = *v46;
    v27 = v46[1];
    v47 = v46;
    v28 = BgpGxRectangleSize(v26, v27, BitsPerPixel);
    v5 += 2 * (((v28 + 15) & 0xFFFFFFF0) + 32) + ((v28 + 15) & 0xFFFFFFF0) + 32;
  }
  if ( !v41 )
  {
    v29 = BgpGxReadRectangle(&v56, (__int64)&xmmword_140C10ED8);
    v2 = v56;
    SubRectangle = v29;
    if ( v29 < 0 )
      goto LABEL_36;
    v30 = BgpGxRectangleSize(*v56, v56[1], BitsPerPixel);
    v5 += 2 * (((v30 + 15) & 0xFFFFFFF0) + 32) + ((v30 + 15) & 0xFFFFFFF0) + 32;
  }
  v31 = qword_140C1354C;
  v32 = HIDWORD(qword_140C13670);
  v46 = (int *)qword_140C1354C;
  if ( !v42 )
  {
    SubRectangle = BgpGxFindSubRectangle(
                     (_DWORD)v1,
                     HIDWORD(qword_140C13670),
                     (unsigned int)&v48,
                     (unsigned int)&v45,
                     (__int64)&v39);
    if ( SubRectangle >= 0 )
    {
      v33 = v43;
      *((_QWORD *)v57 + v43) = v1;
      v43 = v33 + 1;
      if ( v39 )
      {
        v42 = 1;
        v1 = 0LL;
      }
      else
      {
        LODWORD(v46) = v45 + (_DWORD)v46;
        HIDWORD(v46) += HIDWORD(v45);
        v31 = (__int64)v46;
        v1 = v48;
      }
    }
  }
  if ( !v40 )
  {
    SubRectangle = BgpGxFindSubRectangle((_DWORD)v47, v32, (unsigned int)&v48, (unsigned int)&v45, (__int64)&v39);
    if ( SubRectangle >= 0 )
    {
      v38 = v43;
      *((_QWORD *)v57 + v43) = v47;
      v43 = v38 + 1;
      if ( v39 )
      {
        v47 = 0LL;
        v40 = 1;
      }
      else
      {
        v47 = v48;
        LODWORD(xmmword_140C10EA0) = v45 + xmmword_140C10EA0;
        DWORD1(xmmword_140C10EA0) += HIDWORD(v45);
      }
    }
  }
  if ( !v41 )
  {
    SubRectangle = BgpGxFindSubRectangle((_DWORD)v2, v32, (unsigned int)&v48, (unsigned int)&v45, (__int64)&v39);
    if ( SubRectangle >= 0 )
    {
      v34 = v43;
      *((_QWORD *)v57 + v43) = v2;
      v43 = v34 + 1;
      if ( v39 )
      {
        v41 = 1;
        v2 = 0LL;
      }
      else
      {
        LODWORD(xmmword_140C10ED8) = v45 + xmmword_140C10ED8;
        DWORD1(xmmword_140C10ED8) += HIDWORD(v45);
        v2 = v48;
      }
    }
  }
  if ( !v42 )
  {
    v51 = v1[1];
    v52 = *v1;
    SubRectangle = BgpGxRectangleCreate(&v51, BitsPerPixel, &v55);
    if ( SubRectangle < 0 )
    {
      v0 = (__int64)v47;
      goto LABEL_36;
    }
    memset(*(void **)(v55 + 24), 0, *(unsigned int *)(v55 + 12));
  }
  v0 = (__int64)v47;
  if ( !v40 )
  {
    v51 = v47[1];
    v52 = *v47;
    SubRectangle = BgpGxRectangleCreate(&v51, BitsPerPixel, &v54);
    if ( SubRectangle < 0 )
      goto LABEL_36;
    memset(*(void **)(v54 + 24), 0, *(unsigned int *)(v54 + 12));
  }
  if ( v41 )
    goto LABEL_35;
  v51 = v2[1];
  v52 = *v2;
  SubRectangle = BgpGxRectangleCreate(&v51, BitsPerPixel, &v49);
  if ( SubRectangle >= 0 )
  {
    memset(*(void **)(v49 + 24), 0, *(unsigned int *)(v49 + 12));
LABEL_35:
    LogFwStat(0LL, 5LL, 0LL);
    dword_140C10E84 = 0;
    byte_140C10E90 = v40;
    byte_140C10E91 = v41;
    byte_140C10E92 = v42;
    qword_140C10EC0 = v54;
    qword_140C10ED0 = v55;
    qword_140C10F00 = v49;
    dword_140C10E80 = 100;
    qword_140C10E88 = v31;
    qword_140C10E98 = v0;
    qword_140C10EC8 = (__int64)v1;
    qword_140C10EF8 = (__int64)v2;
    KeResetEvent(&stru_140CF3300);
    KeInitializeTimerEx(&stru_140CF32C0, NotificationTimer);
    KeInitializeDpc(&stru_140CF3240, AnFwpFadeAnimationTimer, 0LL);
    byte_140CDB161 = 1;
    LogFwStat(1LL, 7LL, 0LL);
    KeSetCoalescableTimer(&stru_140CF32C0, 0LL, 0x1Eu, 0, &stru_140CF3240);
    dword_140C134F0 |= 0x2000u;
    dword_140C1350C = v5;
  }
LABEL_36:
  if ( v43 )
  {
    v35 = v57;
    v36 = v43;
    do
    {
      BgpGxRectangleDestroy(*v35++);
      --v36;
    }
    while ( v36 );
  }
  if ( SubRectangle < 0 )
    goto LABEL_41;
  return (unsigned int)SubRectangle;
}
