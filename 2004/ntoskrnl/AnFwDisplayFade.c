/*
 * XREFs of AnFwDisplayFade @ 0x1409EEC00
 * Callers:
 *     BgDisplayFade @ 0x1409EE524 (BgDisplayFade.c)
 * Callees:
 *     KeResetEvent @ 0x140297C10 (KeResetEvent.c)
 *     KeSetCoalescableTimer @ 0x1402C8FA0 (KeSetCoalescableTimer.c)
 *     KeInitializeDpc @ 0x1402E3AC0 (KeInitializeDpc.c)
 *     KeInitializeTimerEx @ 0x1402F9130 (KeInitializeTimerEx.c)
 *     BgpGxRectangleSize @ 0x140398FB8 (BgpGxRectangleSize.c)
 *     BgpFwFreeMemory @ 0x140398FD0 (BgpFwFreeMemory.c)
 *     BgpGetBitsPerPixel @ 0x1403994F0 (BgpGetBitsPerPixel.c)
 *     BgpGxConvertRectangleEx @ 0x1403996DC (BgpGxConvertRectangleEx.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memset @ 0x14040A280 (memset.c)
 *     BgpClearScreen @ 0x1405BEDC4 (BgpClearScreen.c)
 *     BgpGxParseBitmap @ 0x1409EE880 (BgpGxParseBitmap.c)
 *     BgpGxReadRectangle @ 0x1409EE9D0 (BgpGxReadRectangle.c)
 *     BgpGxRectangleDestroy @ 0x1409EF290 (BgpGxRectangleDestroy.c)
 *     BgpGxFindSubRectangle @ 0x1409EF2B4 (BgpGxFindSubRectangle.c)
 *     LogFwStat @ 0x1409EF7D8 (LogFwStat.c)
 *     BgpTxtGetRegionContext @ 0x1409EF944 (BgpTxtGetRegionContext.c)
 *     BgpGxRectangleCreate @ 0x1409F02C0 (BgpGxRectangleCreate.c)
 *     AnFwDisableBackgroundUpdateTimer @ 0x1409F04CC (AnFwDisableBackgroundUpdateTimer.c)
 *     AnFwpDisableProgressTimer @ 0x1409F04EC (AnFwpDisableProgressTimer.c)
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
  __int64 v8; // rsi
  int v9; // eax
  int v10; // r8d
  int v11; // eax
  int v12; // eax
  unsigned int v13; // r9d
  unsigned int v14; // r10d
  unsigned int v15; // edx
  unsigned int v16; // r11d
  unsigned int v17; // r11d
  unsigned int v18; // eax
  int v19; // eax
  int v20; // ecx
  int v21; // edx
  int v22; // eax
  int v23; // eax
  int v24; // eax
  __int64 v25; // rsi
  int v26; // edi
  unsigned int v27; // ecx
  unsigned int v28; // ecx
  _QWORD *v29; // rsi
  __int64 v30; // r15
  unsigned int v32; // edx
  char v33; // [rsp+38h] [rbp-49h] BYREF
  char v34; // [rsp+39h] [rbp-48h]
  char v35; // [rsp+3Ah] [rbp-47h]
  char v36; // [rsp+3Bh] [rbp-46h]
  unsigned int v37; // [rsp+3Ch] [rbp-45h]
  unsigned int BitsPerPixel; // [rsp+40h] [rbp-41h]
  __int64 v39; // [rsp+48h] [rbp-39h] BYREF
  int *v40; // [rsp+50h] [rbp-31h] BYREF
  int *v41; // [rsp+58h] [rbp-29h]
  int *v42; // [rsp+60h] [rbp-21h] BYREF
  __int64 v43; // [rsp+68h] [rbp-19h] BYREF
  int *v44; // [rsp+70h] [rbp-11h] BYREF
  int v45; // [rsp+78h] [rbp-9h] BYREF
  int v46; // [rsp+7Ch] [rbp-5h]
  int v47; // [rsp+80h] [rbp-1h]
  __int64 v48; // [rsp+88h] [rbp+7h] BYREF
  __int64 v49; // [rsp+90h] [rbp+Fh] BYREF
  int *v50; // [rsp+98h] [rbp+17h] BYREF
  _OWORD v51[2]; // [rsp+A0h] [rbp+1Fh] BYREF

  v47 = 0;
  v0 = 0LL;
  v48 = 0LL;
  v1 = 0LL;
  v49 = 0LL;
  v2 = 0LL;
  v37 = 0;
  v3 = 0LL;
  v39 = 0LL;
  v42 = 0LL;
  SubRectangle = 0;
  v5 = 0;
  v33 = 0;
  v41 = 0LL;
  v40 = 0LL;
  v44 = 0LL;
  v50 = 0LL;
  v43 = 0LL;
  memset(v51, 0, sizeof(v51));
  if ( (dword_140C13310 & 0x2000) != 0 )
    return (unsigned int)SubRectangle;
  if ( (dword_140C13310 & 0x200000) != 0 )
    goto LABEL_69;
  RegionContext = BgpTxtGetRegionContext(qword_140C133D0);
  v7 = BgpTxtGetRegionContext(qword_140C133D8);
  v8 = v7;
  if ( !RegionContext || !v7 )
  {
    SubRectangle = -1073741670;
    goto LABEL_36;
  }
  xmmword_140C10E00 = *(_OWORD *)RegionContext;
  qword_140C10E10 = *(_QWORD *)(RegionContext + 16);
  dword_140C10E18 = *(_DWORD *)(RegionContext + 24);
  xmmword_140C10E38 = *(_OWORD *)v7;
  qword_140C10E48 = *(_QWORD *)(v7 + 16);
  dword_140C10E50 = *(_DWORD *)(v7 + 24);
  BgpFwFreeMemory(RegionContext);
  BgpFwFreeMemory(v8);
  AnFwpDisableProgressTimer();
  AnFwDisableBackgroundUpdateTimer();
  v34 = 0;
  v35 = 0;
  BitsPerPixel = BgpGetBitsPerPixel();
  LogFwStat(1LL, 5LL, 0LL);
  if ( !qword_140C13358 )
  {
    v36 = 1;
    goto LABEL_13;
  }
  v36 = 0;
  v9 = BgpGxParseBitmap((__int64)qword_140C13358, &v44);
  v1 = v44;
  SubRectangle = v9;
  if ( v9 < 0 )
    goto LABEL_41;
  v10 = v44[2];
  if ( BitsPerPixel != v10 )
  {
    v11 = BgpGxRectangleSize(*v44, v44[1], v10);
    v44 = 0LL;
    v5 = ((v11 + 15) & 0xFFFFFFF0) + 32;
    SubRectangle = BgpGxConvertRectangleEx((__int64)v1, BitsPerPixel, &v44, 0);
    if ( SubRectangle >= 0 )
    {
      *(_QWORD *)&v51[0] = v1;
      v1 = v44;
      v37 = 1;
      goto LABEL_10;
    }
LABEL_41:
    v3 = v43;
LABEL_69:
    AnFwpDisableProgressTimer();
    AnFwDisableBackgroundUpdateTimer();
    SubRectangle = BgpClearScreen(0xFF000000);
    if ( v0 )
      BgpGxRectangleDestroy(v0);
    if ( v48 )
      BgpGxRectangleDestroy(v48);
    if ( v1 )
      BgpGxRectangleDestroy(v1);
    if ( v49 )
      BgpGxRectangleDestroy(v49);
    if ( v2 )
      BgpGxRectangleDestroy(v2);
    if ( v3 )
      BgpGxRectangleDestroy(v3);
    return (unsigned int)SubRectangle;
  }
LABEL_10:
  v12 = BgpGxRectangleSize(*v1, v1[1], BitsPerPixel);
  v13 = qword_140C1336C + dword_140C13374;
  v14 = HIDWORD(qword_140C1336C) + dword_140C13378;
  v15 = xmmword_140C10E00 + DWORD2(xmmword_140C10E00);
  v5 += ((v12 + 15) & 0xFFFFFFF0) + 32 + 2 * (((v12 + 15) & 0xFFFFFFF0) + 32);
  v16 = DWORD1(xmmword_140C10E00) + HIDWORD(xmmword_140C10E00);
  if ( (unsigned int)xmmword_140C10E00 <= (int)qword_140C1336C + dword_140C13374
    && (unsigned int)xmmword_140C10E00 >= (unsigned int)qword_140C1336C
    && DWORD1(xmmword_140C10E00) >= HIDWORD(qword_140C1336C)
    && DWORD1(xmmword_140C10E00) <= v14 )
  {
    if ( v15 < (unsigned int)qword_140C1336C || v15 > v13 || v16 < HIDWORD(qword_140C1336C) || v16 > v14 )
      goto LABEL_51;
    v34 = 1;
  }
  v17 = xmmword_140C10E38 + DWORD2(xmmword_140C10E38);
  v18 = DWORD1(xmmword_140C10E38) + HIDWORD(xmmword_140C10E38);
  if ( (unsigned int)xmmword_140C10E38 >= (unsigned int)qword_140C1336C
    && (unsigned int)xmmword_140C10E38 <= v13
    && DWORD1(xmmword_140C10E38) >= HIDWORD(qword_140C1336C)
    && DWORD1(xmmword_140C10E38) <= v14 )
  {
    if ( v17 >= (unsigned int)qword_140C1336C && v17 <= v13 && v18 >= HIDWORD(qword_140C1336C) && v18 <= v14 )
    {
      v35 = 1;
      goto LABEL_12;
    }
LABEL_51:
    SubRectangle = -1073741823;
    goto LABEL_36;
  }
LABEL_12:
  if ( !v34 )
  {
LABEL_13:
    v19 = BgpGxReadRectangle(&v40, (__int64)&xmmword_140C10E00);
    v0 = (__int64)v40;
    SubRectangle = v19;
    if ( v19 < 0 )
      goto LABEL_36;
    v20 = *v40;
    v21 = v40[1];
    v41 = v40;
    v22 = BgpGxRectangleSize(v20, v21, BitsPerPixel);
    v5 += 2 * (((v22 + 15) & 0xFFFFFFF0) + 32) + ((v22 + 15) & 0xFFFFFFF0) + 32;
  }
  if ( !v35 )
  {
    v23 = BgpGxReadRectangle(&v50, (__int64)&xmmword_140C10E38);
    v2 = v50;
    SubRectangle = v23;
    if ( v23 < 0 )
      goto LABEL_36;
    v24 = BgpGxRectangleSize(*v50, v50[1], BitsPerPixel);
    v5 += 2 * (((v24 + 15) & 0xFFFFFFF0) + 32) + ((v24 + 15) & 0xFFFFFFF0) + 32;
  }
  v25 = qword_140C1336C;
  v26 = HIDWORD(qword_140C13490);
  v40 = (int *)qword_140C1336C;
  if ( !v36 )
  {
    SubRectangle = BgpGxFindSubRectangle(
                     (_DWORD)v1,
                     HIDWORD(qword_140C13490),
                     (unsigned int)&v42,
                     (unsigned int)&v39,
                     (__int64)&v33);
    if ( SubRectangle >= 0 )
    {
      v27 = v37;
      *((_QWORD *)v51 + v37) = v1;
      v37 = v27 + 1;
      if ( v33 )
      {
        v36 = 1;
        v1 = 0LL;
      }
      else
      {
        LODWORD(v40) = v39 + (_DWORD)v40;
        HIDWORD(v40) += HIDWORD(v39);
        v25 = (__int64)v40;
        v1 = v42;
      }
    }
  }
  if ( !v34 )
  {
    SubRectangle = BgpGxFindSubRectangle((_DWORD)v41, v26, (unsigned int)&v42, (unsigned int)&v39, (__int64)&v33);
    if ( SubRectangle >= 0 )
    {
      v32 = v37;
      *((_QWORD *)v51 + v37) = v41;
      v37 = v32 + 1;
      if ( v33 )
      {
        v41 = 0LL;
        v34 = 1;
      }
      else
      {
        v41 = v42;
        LODWORD(xmmword_140C10E00) = v39 + xmmword_140C10E00;
        DWORD1(xmmword_140C10E00) += HIDWORD(v39);
      }
    }
  }
  if ( !v35 )
  {
    SubRectangle = BgpGxFindSubRectangle((_DWORD)v2, v26, (unsigned int)&v42, (unsigned int)&v39, (__int64)&v33);
    if ( SubRectangle >= 0 )
    {
      v28 = v37;
      *((_QWORD *)v51 + v37) = v2;
      v37 = v28 + 1;
      if ( v33 )
      {
        v35 = 1;
        v2 = 0LL;
      }
      else
      {
        LODWORD(xmmword_140C10E38) = v39 + xmmword_140C10E38;
        DWORD1(xmmword_140C10E38) += HIDWORD(v39);
        v2 = v42;
      }
    }
  }
  if ( !v36 )
  {
    v45 = v1[1];
    v46 = *v1;
    SubRectangle = BgpGxRectangleCreate(&v45, BitsPerPixel, &v49);
    if ( SubRectangle < 0 )
    {
      v0 = (__int64)v41;
      goto LABEL_36;
    }
    memset(*(void **)(v49 + 24), 0, *(unsigned int *)(v49 + 12));
  }
  v0 = (__int64)v41;
  if ( !v34 )
  {
    v45 = v41[1];
    v46 = *v41;
    SubRectangle = BgpGxRectangleCreate(&v45, BitsPerPixel, &v48);
    if ( SubRectangle < 0 )
      goto LABEL_36;
    memset(*(void **)(v48 + 24), 0, *(unsigned int *)(v48 + 12));
  }
  if ( v35 )
    goto LABEL_35;
  v45 = v2[1];
  v46 = *v2;
  SubRectangle = BgpGxRectangleCreate(&v45, BitsPerPixel, &v43);
  if ( SubRectangle >= 0 )
  {
    memset(*(void **)(v43 + 24), 0, *(unsigned int *)(v43 + 12));
LABEL_35:
    LogFwStat(0LL, 5LL, 0LL);
    dword_140C10DE4 = 0;
    byte_140C10DF0 = v34;
    byte_140C10DF1 = v35;
    byte_140C10DF2 = v36;
    qword_140C10E20 = v48;
    qword_140C10E30 = v49;
    qword_140C10E60 = v43;
    dword_140C10DE0 = 100;
    qword_140C10DE8 = v25;
    qword_140C10DF8 = v0;
    qword_140C10E28 = (__int64)v1;
    qword_140C10E58 = (__int64)v2;
    KeResetEvent(&stru_140CF2F40);
    KeInitializeTimerEx(&stru_140CF2F00, NotificationTimer);
    KeInitializeDpc(&stru_140CF2E80, AnFwpFadeAnimationTimer, 0LL);
    byte_140CDAF61 = 1;
    LogFwStat(1LL, 7LL, 0LL);
    KeSetCoalescableTimer(&stru_140CF2F00, 0LL, 0x1Eu, 0, &stru_140CF2E80);
    dword_140C13310 |= 0x2000u;
    dword_140C1332C = v5;
  }
LABEL_36:
  if ( v37 )
  {
    v29 = v51;
    v30 = v37;
    do
    {
      BgpGxRectangleDestroy(*v29++);
      --v30;
    }
    while ( v30 );
  }
  if ( SubRectangle < 0 )
    goto LABEL_41;
  return (unsigned int)SubRectangle;
}
