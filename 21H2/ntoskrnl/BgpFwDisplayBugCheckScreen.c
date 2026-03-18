/*
 * XREFs of BgpFwDisplayBugCheckScreen @ 0x14064E9C0
 * Callers:
 *     KiDisplayBlueScreen @ 0x140567874 (KiDisplayBlueScreen.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     KeStallExecutionProcessor @ 0x140303560 (KeStallExecutionProcessor.c)
 *     BgpGxDrawRectangle @ 0x1403A7F70 (BgpGxDrawRectangle.c)
 *     BgpGetBitsPerPixel @ 0x1403A8368 (BgpGetBitsPerPixel.c)
 *     IoSaveBugCheckProgress @ 0x140552B40 (IoSaveBugCheckProgress.c)
 *     BgpClearScreen @ 0x14064D4AC (BgpClearScreen.c)
 *     BcpDisplayCriticalCharacter @ 0x14064DB50 (BcpDisplayCriticalCharacter.c)
 *     BcpDisplayCriticalString @ 0x14064DC1C (BcpDisplayCriticalString.c)
 *     BcpDisplayErrorInformation @ 0x14064DF74 (BcpDisplayErrorInformation.c)
 *     BcpDisplayProgress @ 0x14064E1FC (BcpDisplayProgress.c)
 *     BcpGetComponentOffsets @ 0x14064E408 (BcpGetComponentOffsets.c)
 *     BcpGetDisplayType @ 0x14064E594 (BcpGetDisplayType.c)
 *     BcpDisplayEarlyBugCheckScreen @ 0x140B572D0 (BcpDisplayEarlyBugCheckScreen.c)
 */

__int64 __fastcall BgpFwDisplayBugCheckScreen(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, char a5)
{
  int v7; // ebp
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
  v7 = a1;
  if ( (dword_140C0DF90 & 4) != 0 && (dword_140C0DF90 & 0x400000) == 0 )
  {
    v8 = BcpDisplayEarlyBugCheckScreen(a1, a2, a4);
    IoSaveBugCheckProgress(131);
    return v8;
  }
  if ( (dword_140C0DF90 & 0x400000) != 0 || (dword_140C0DF90 & 0x10) == 0 )
  {
    BgpClearScreen(0xFF000000);
    IoSaveBugCheckProgress(132);
    return 0LL;
  }
  v34[0] = DWORD2(BgInternal);
  v34[1] = DWORD1(BgInternal);
  v34[2] = HIDWORD(BgInternal);
  DisplayType = (int)BcpGetDisplayType(v34);
  v11 = *(_QWORD *)(qword_140C5A830 + 24);
  if ( v7 == 456 )
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
  LODWORD(BcpCursor) = dword_140C0B2E0[18 * DisplayType + 4];
  v14 = &dword_140C0B2E0[18 * DisplayType + 5];
  v15 = *v14;
  HIDWORD(BcpCursor) = *v14;
  if ( v14 )
    dword_140C4EF80 = v15;
  if ( (dword_140C0DF90 & 0x20000) == 0 )
  {
    v16 = &qword_140005FF8;
    if ( v7 == 456 )
      v16 = &qword_14000AD38;
    BcpDisplayCriticalString(
      (unsigned __int16 *)v16,
      dword_140C0B2E0[18 * DisplayType + 3],
      v13,
      (unsigned int)DisplayType);
  }
  v17 = dword_140C0B2E0[18 * DisplayType + 8];
  v18 = dword_140C0B2E0[18 * DisplayType + 4];
  v19 = (unsigned int)dword_140C0B2E0[18 * DisplayType + 2];
  HIDWORD(BcpCursor) = dword_140C4EF80 + dword_140C0B2E0[18 * DisplayType + 9];
  if ( v7 == 456 )
  {
    LODWORD(BcpCursor) = v18 + v17;
    v20 = &stru_140C5A800;
  }
  else
  {
    v20 = &stru_140C5A7F0;
    LODWORD(BcpCursor) = v18 + v17;
    if ( (dword_140C0DF90 & 0x10000000) == 0 )
      v20 = &stru_140C5A710;
  }
  BcpDisplayCriticalString(&v20->Length, v19, v19, (unsigned int)DisplayType);
  BcpDisplayCriticalCharacter(v21, dword_140C0B2E0[18 * DisplayType + 2]);
  v23 = 1;
  if ( v7 == 456 )
  {
    v24 = &stru_140C5A810;
  }
  else
  {
    if ( (a5 & 1) != 0 )
      goto LABEL_28;
    if ( (a5 & 2) != 0 )
    {
      v25 = &stru_140C5A740;
      v24 = &stru_140C5A760;
    }
    else
    {
      v24 = &stru_140C5A750;
      v25 = &stru_140C5A730;
    }
    if ( (a5 & 4) == 0 )
      v24 = v25;
  }
  BcpDisplayCriticalString(&v24->Length, dword_140C0B2E0[18 * DisplayType + 2], v22, (unsigned int)DisplayType);
LABEL_28:
  v26 = 0;
  if ( !qword_140C0E018
    || (BitsPerPixel = BgpGetBitsPerPixel(), *(_DWORD *)(v28 + 8) < BitsPerPixel) && (dword_140C0DF90 & 0xC00) != 0 )
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
    dword_140C4EF80 = dword_140C0DEF8;
    if ( v7 != 456 )
    {
      BcpDisplayErrorInformation(DisplayType, v7, a2, a3, (__int64)a4, a5);
      if ( v23 )
        BgpGxDrawRectangle((_BYTE *)qword_140C0E018, (__int64)&v33);
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
      dword_140C4EF80 = dword_140C0DEB8;
      BcpDisplayProgress(0, DisplayType, v30);
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      BcpLastProgressDisplayed = 0;
      BcpStartTicks = PerformanceCounter.QuadPart;
      BcpLastProgressUpdateTicks = PerformanceCounter.QuadPart;
    }
    *a4 = &stru_140C5A710;
    a4[1] = &stru_140C5A720;
  }
  return (unsigned int)ComponentOffsets;
}
