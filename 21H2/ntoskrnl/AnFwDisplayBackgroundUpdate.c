/*
 * XREFs of AnFwDisplayBackgroundUpdate @ 0x140AAED7C
 * Callers:
 *     BgDisplayBackgroundUpdate @ 0x140AAED40 (BgDisplayBackgroundUpdate.c)
 * Callees:
 *     KeInitializeDpc @ 0x1402940D0 (KeInitializeDpc.c)
 *     KeSetCoalescableTimer @ 0x1402E2C60 (KeSetCoalescableTimer.c)
 *     KeInitializeTimerEx @ 0x1402F4820 (KeInitializeTimerEx.c)
 *     KeCancelTimer @ 0x140356EB0 (KeCancelTimer.c)
 *     DbgPrintEx @ 0x140369B90 (DbgPrintEx.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     BgpClearScreen @ 0x14064D4AC (BgpClearScreen.c)
 *     AnFwDisableBackgroundUpdateTimer @ 0x140AAB7B4 (AnFwDisableBackgroundUpdateTimer.c)
 *     BgpGxDrawBitmapImage @ 0x140AB17C4 (BgpGxDrawBitmapImage.c)
 */

__int64 __fastcall AnFwDisplayBackgroundUpdate(char a1)
{
  __int64 result; // rax
  unsigned __int64 v2; // kr00_8
  unsigned __int64 v3; // rax
  __int64 v4; // rsi
  int v5; // edi
  unsigned __int64 v6; // [rsp+48h] [rbp+10h] BYREF

  v6 = 0LL;
  if ( (dword_140C0DF90 & 0x4000000) == 0 )
    return 0LL;
  if ( !a1 )
  {
    AnFwDisableBackgroundUpdateTimer();
    return 0LL;
  }
  if ( byte_140D01570 )
    return 3221225473LL;
  v2 = ((__int64 (__fastcall *)(unsigned __int64 *))off_140C01E40)(&v6);
  if ( !is_mul_ok(v2, 0x3E8uLL) )
    return 3221225621LL;
  v3 = v2 * (unsigned __int128)0x3E8uLL / v6;
  v4 = v3 + qword_140C0E030;
  v5 = v3;
  if ( v3 + qword_140C0E030 < v3 )
    return 3221225621LL;
  DbgPrintEx(0x65u, 0, "BGFX Display Ready Time (ms): %d\n", v3);
  DbgPrintEx(0x65u, 0, "BGFX Secondary Logo Bitmap Display Time GOAL (ms): %d\n", v4);
  if ( (unsigned __int64)qword_140C0E030 >= 0x64 )
  {
    qword_140C0E030 = v4;
    KeInitializeTimerEx(&stru_140D03C40, NotificationTimer);
    KeInitializeDpc(&stru_140D03C80, AnFwpBackgroundUpdateTimer, 0LL);
    if ( KeSetCoalescableTimer(&stru_140D03C40, 0LL, 0x64u, 0, &stru_140D03C80) )
    {
      KeCancelTimer(&stru_140D03C40);
      byte_140D01570 = 0;
      return BgpClearScreen(HIDWORD(qword_140C0E110));
    }
    byte_140D01570 = 1;
    return 0LL;
  }
  BgpClearScreen(HIDWORD(qword_140C0E110));
  DbgPrintEx(0x65u, 0, "BGFX Secondary Logo Bitmap Display Time (ms): %d\n", v5);
  result = BgpGxDrawBitmapImage(qword_140C0DFD8, &qword_140C0DFEC);
  if ( (int)result < 0 )
    return BgpClearScreen(HIDWORD(qword_140C0E110));
  return result;
}
