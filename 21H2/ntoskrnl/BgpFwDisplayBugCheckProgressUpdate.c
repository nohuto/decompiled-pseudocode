/*
 * XREFs of BgpFwDisplayBugCheckProgressUpdate @ 0x14064E7FC
 * Callers:
 *     KiBugCheckProgress @ 0x140567390 (KiBugCheckProgress.c)
 *     BgpFwDisplayBugCheckProgressUpdate @ 0x14064E7FC (BgpFwDisplayBugCheckProgressUpdate.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     KeStallExecutionProcessor @ 0x140303560 (KeStallExecutionProcessor.c)
 *     BcpConvertProgressToString @ 0x14064DA4C (BcpConvertProgressToString.c)
 *     BcpDisplayProgress @ 0x14064E1FC (BcpDisplayProgress.c)
 *     BcpGetDisplayType @ 0x14064E594 (BcpGetDisplayType.c)
 *     BgpFwDisplayBugCheckProgressUpdate @ 0x14064E7FC (BgpFwDisplayBugCheckProgressUpdate.c)
 */

__int64 __fastcall BgpFwDisplayBugCheckProgressUpdate(unsigned int a1, UNICODE_STRING **a2, char a3)
{
  unsigned int v3; // esi
  LARGE_INTEGER v7; // rax
  LARGE_INTEGER v8; // rbx
  LARGE_INTEGER v9; // r8
  LONGLONG v10; // rax
  LARGE_INTEGER v11; // r8
  LONGLONG v12; // rcx
  LARGE_INTEGER v13; // rbp
  __int64 v14; // rdi
  unsigned int DisplayType; // eax
  __int64 v16; // r8
  LARGE_INTEGER v17; // rax
  LARGE_INTEGER v18; // r8
  UNICODE_STRING *v19; // rax
  UNICODE_STRING *v20; // rcx
  UNICODE_STRING *v21; // rax
  _DWORD v23[14]; // [rsp+20h] [rbp-38h] BYREF
  LARGE_INTEGER v24; // [rsp+78h] [rbp+20h] BYREF

  v3 = 0;
  v24.QuadPart = 0LL;
  if ( (dword_140C0DF90 & 0x400000) != 0 || (dword_140C0DF90 & 0x10) == 0 )
    return 0LL;
  v7 = KeQueryPerformanceCounter(&v24);
  v8 = v24;
  v9 = v7;
  v10 = v7.QuadPart - BcpStartTicks;
  v11.QuadPart = v9.QuadPart - BcpLastProgressUpdateTicks;
  v12 = 10 * v24.QuadPart;
  v13.QuadPart = 2 * v24.QuadPart;
  if ( a3 && v10 < v12 )
    v14 = 100 * v10 / v12;
  else
    LODWORD(v14) = 100;
  if ( a1 <= (unsigned int)v14 )
    LODWORD(v14) = a1;
  if ( v11.QuadPart < v13.QuadPart || (unsigned int)v14 < BcpLastProgressDisplayed )
  {
    LODWORD(v14) = BcpLastProgressDisplayed;
  }
  else
  {
    v23[0] = DWORD2(BgInternal);
    v23[1] = DWORD1(BgInternal);
    v23[2] = HIDWORD(BgInternal);
    DisplayType = BcpGetDisplayType(v23);
    dword_140C4EF80 = dword_140C0DEB8;
    BcpCursor = BcpProgressOffset;
    BcpDisplayProgress(v14, DisplayType, v16);
    BcpLastProgressUpdateTicks = KeQueryPerformanceCounter(0LL).QuadPart;
    BcpLastProgressDisplayed = v14;
  }
  if ( a1 != 100 || (_DWORD)v14 == 100 )
  {
    v19 = &stru_140C5A730;
    if ( !a3 )
      v19 = &stru_140C5A740;
    *a2 = v19;
    BcpConvertProgressToString(v14, (__int64)(a2 + 3));
    v20 = &stru_140C5A780;
    if ( a1 != 1 )
      v20 = &stru_140C5A7A0;
    v21 = &stru_140C5A770;
    if ( a1 != 1 )
      v21 = &stru_140C5A790;
    a2[1] = v21;
    a2[2] = v20;
  }
  else
  {
    v17.QuadPart = *(_QWORD *)&KeQueryPerformanceCounter(0LL) - BcpLastProgressUpdateTicks;
    if ( v17.QuadPart < v13.QuadPart )
      KeStallExecutionProcessor(1000000 * (v13.QuadPart - v17.QuadPart) / v8.QuadPart);
    LOBYTE(v18.LowPart) = a3;
    return (unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))BgpFwDisplayBugCheckProgressUpdate)(
                           100LL,
                           a2,
                           (LARGE_INTEGER)v18.QuadPart);
  }
  return v3;
}
