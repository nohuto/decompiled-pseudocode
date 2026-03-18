/*
 * XREFs of BgpFwDisplayBugCheckScreen @ 0x1405C3ED4
 * Callers:
 *     KiDisplayBlueScreen @ 0x140516580 (KiDisplayBlueScreen.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x140266AF0 (KeQueryPerformanceCounter.c)
 *     KeStallExecutionProcessor @ 0x140288CF0 (KeStallExecutionProcessor.c)
 *     BgpGxDrawRectangle @ 0x14039B5C8 (BgpGxDrawRectangle.c)
 *     BgpGetBitsPerPixel @ 0x14039B9B0 (BgpGetBitsPerPixel.c)
 *     IoSaveBugCheckProgress @ 0x140500C00 (IoSaveBugCheckProgress.c)
 *     BgpClearScreen @ 0x1405C2A44 (BgpClearScreen.c)
 *     BcpDisplayCriticalCharacter @ 0x1405C3050 (BcpDisplayCriticalCharacter.c)
 *     BcpDisplayCriticalString @ 0x1405C311C (BcpDisplayCriticalString.c)
 *     BcpDisplayErrorInformation @ 0x1405C3488 (BcpDisplayErrorInformation.c)
 *     BcpDisplayProgress @ 0x1405C3710 (BcpDisplayProgress.c)
 *     BcpGetComponentOffsets @ 0x1405C391C (BcpGetComponentOffsets.c)
 *     BcpGetDisplayType @ 0x1405C3AA8 (BcpGetDisplayType.c)
 *     BcpDisplayEarlyBugCheckScreen @ 0x140A9A658 (BcpDisplayEarlyBugCheckScreen.c)
 */

__int64 __fastcall BgpFwDisplayBugCheckScreen(unsigned int a1, __int64 a2, __int64 a3, _QWORD *a4, char a5)
{
  unsigned int v8; // ebx
  __int64 DisplayType; // rbx
  __int64 v11; // rax
  unsigned int v12; // ecx
  __int64 v13; // r8
  int *v14; // rax
  int v15; // ecx
  __int64 *v16; // rcx
  int v17; // edx
  int v18; // r9d
  __int64 v19; // r8
  UNICODE_STRING *v20; // rcx
  __int16 v21; // cx
  __int64 v22; // r8
  char v23; // r14
  UNICODE_STRING *v24; // rcx
  UNICODE_STRING *v25; // rdx
  int v26; // r9d
  unsigned int BitsPerPixel; // eax
  __int64 v28; // r8
  int ComponentOffsets; // r15d
  __int64 v30; // r8
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER PerformanceFrequency; // [rsp+30h] [rbp-48h] BYREF
  __int64 v33; // [rsp+38h] [rbp-40h] BYREF
  _DWORD v34[4]; // [rsp+40h] [rbp-38h] BYREF

  v33 = 0LL;
  PerformanceFrequency.QuadPart = 0LL;
  if ( (dword_140C13330 & 4) != 0 )
  {
    if ( (dword_140C13330 & 0x400000) == 0 )
    {
      v8 = BcpDisplayEarlyBugCheckScreen(a1, a2, a4);
      IoSaveBugCheckProgress(131);
      return v8;
    }
    goto LABEL_43;
  }
  if ( (dword_140C13330 & 0x400000) != 0 || (dword_140C13330 & 0x10) == 0 )
  {
LABEL_43:
    BgpClearScreen(0xFF000000);
    IoSaveBugCheckProgress(132);
    return 0LL;
  }
  v34[0] = DWORD2(BgInternal);
  v34[1] = DWORD1(BgInternal);
  v34[2] = HIDWORD(BgInternal);
  DisplayType = (int)BcpGetDisplayType(v34);
  v11 = *(_QWORD *)(qword_140C53D70 + 24);
  if ( a1 == 456 )
  {
    v12 = -16777216;
    *(_DWORD *)(v11 + 40) = -16777216;
  }
  else
  {
    v12 = *(_DWORD *)(v11 + 40);
  }
  BgpClearScreen(v12);
  IoSaveBugCheckProgress(133);
  LODWORD(BcpCursor) = dword_140C10E90[18 * DisplayType + 4];
  v14 = &dword_140C10E90[18 * DisplayType + 5];
  v15 = *v14;
  HIDWORD(BcpCursor) = *v14;
  if ( v14 )
    dword_140C4C448 = v15;
  if ( (dword_140C13330 & 0x20000) == 0 )
  {
    v16 = &qword_1400058C0;
    if ( a1 == 456 )
      v16 = &qword_1400098F8;
    BcpDisplayCriticalString(
      (unsigned __int16 *)v16,
      dword_140C10E90[18 * DisplayType + 3],
      v13,
      (unsigned int)DisplayType);
  }
  v17 = dword_140C10E90[18 * DisplayType + 8];
  v18 = dword_140C10E90[18 * DisplayType + 4];
  v19 = (unsigned int)dword_140C10E90[18 * DisplayType + 2];
  HIDWORD(BcpCursor) = dword_140C4C448 + dword_140C10E90[18 * DisplayType + 9];
  if ( a1 == 456 )
  {
    LODWORD(BcpCursor) = v18 + v17;
    v20 = &stru_140C53D40;
  }
  else
  {
    v20 = &stru_140C53D30;
    LODWORD(BcpCursor) = v18 + v17;
    if ( (dword_140C13330 & 0x10000000) == 0 )
      v20 = &stru_140C53C50;
  }
  BcpDisplayCriticalString(&v20->Length, v19, v19, (unsigned int)DisplayType);
  BcpDisplayCriticalCharacter(v21, dword_140C10E90[18 * DisplayType + 2]);
  v23 = 1;
  if ( a1 == 456 )
  {
    v24 = &stru_140C53D50;
  }
  else
  {
    if ( (a5 & 1) != 0 )
      goto LABEL_28;
    if ( (a5 & 2) != 0 )
    {
      v25 = &stru_140C53C80;
      v24 = &stru_140C53CA0;
    }
    else
    {
      v24 = &stru_140C53C90;
      v25 = &stru_140C53C70;
    }
    if ( (a5 & 4) == 0 )
      v24 = v25;
  }
  BcpDisplayCriticalString(&v24->Length, dword_140C10E90[18 * DisplayType + 2], v22, (unsigned int)DisplayType);
LABEL_28:
  v26 = 0;
  if ( !qword_140C133B8
    || (BitsPerPixel = BgpGetBitsPerPixel(), *(_DWORD *)(v28 + 8) < BitsPerPixel) && (dword_140C13330 & 0xC00) != 0 )
  {
    v23 = 0;
  }
  else
  {
    v26 = *(_DWORD *)(v28 + 4);
  }
  ComponentOffsets = BcpGetComponentOffsets(
                       &BcpProgressOffset,
                       &BcpErrorMessageOffset,
                       (int *)&v33,
                       DisplayType,
                       v26,
                       (a5 & 4) == 0);
  if ( ComponentOffsets >= 0 )
  {
    BcpCursor = BcpErrorMessageOffset;
    dword_140C4C448 = dword_140C13238;
    if ( a1 != 456 )
    {
      BcpDisplayErrorInformation(DisplayType, a1, a2, a3, (__int64)a4, a5);
      if ( v23 )
        BgpGxDrawRectangle((_BYTE *)qword_140C133B8, (__int64)&v33);
    }
    IoSaveBugCheckProgress(134);
    if ( (a5 & 4) != 0 )
    {
      if ( (a5 & 2) == 0 )
      {
        KeQueryPerformanceCounter(&PerformanceFrequency);
        KeStallExecutionProcessor(10000000 * PerformanceFrequency.QuadPart / PerformanceFrequency.QuadPart);
      }
    }
    else
    {
      BcpCursor = BcpProgressOffset;
      dword_140C4C448 = dword_140C13288;
      BcpDisplayProgress(0, DisplayType, v30);
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      BcpLastProgressDisplayed = 0;
      BcpStartTicks = PerformanceCounter.QuadPart;
      BcpLastProgressUpdateTicks = PerformanceCounter.QuadPart;
    }
    *a4 = &stru_140C53C50;
    a4[1] = &stru_140C53C60;
  }
  return (unsigned int)ComponentOffsets;
}
