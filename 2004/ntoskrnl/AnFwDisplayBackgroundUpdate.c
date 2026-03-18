/*
 * XREFs of AnFwDisplayBackgroundUpdate @ 0x1409F1784
 * Callers:
 *     BgDisplayBackgroundUpdate @ 0x1409F1748 (BgDisplayBackgroundUpdate.c)
 * Callees:
 *     KeSetCoalescableTimer @ 0x1402C8FA0 (KeSetCoalescableTimer.c)
 *     KeCancelTimer @ 0x1402C9300 (KeCancelTimer.c)
 *     KeInitializeDpc @ 0x1402E3AC0 (KeInitializeDpc.c)
 *     KeInitializeTimerEx @ 0x1402F9130 (KeInitializeTimerEx.c)
 *     RtlULongLongMult @ 0x1402FE7AC (RtlULongLongMult.c)
 *     DbgPrintEx @ 0x14037D2B0 (DbgPrintEx.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     BgpClearScreen @ 0x1405BEDC4 (BgpClearScreen.c)
 *     AnFwDisableBackgroundUpdateTimer @ 0x1409F04CC (AnFwDisableBackgroundUpdateTimer.c)
 *     BgpGxDrawBitmapImage @ 0x1409F4704 (BgpGxDrawBitmapImage.c)
 */

NTSTATUS __fastcall AnFwDisplayBackgroundUpdate(char a1)
{
  NTSTATUS result; // eax
  ULONGLONG v2; // rax
  ULONGLONG v3; // rdi
  __int64 v4; // rsi
  ULONGLONG pullResult; // [rsp+48h] [rbp+10h] BYREF
  unsigned __int64 v6; // [rsp+50h] [rbp+18h] BYREF

  pullResult = 0LL;
  v6 = 0LL;
  if ( (dword_140C13310 & 0x4000000) == 0 )
    return 0;
  if ( !a1 )
  {
    AnFwDisableBackgroundUpdateTimer();
    return 0;
  }
  if ( byte_140CF4DC0 )
    return -1073741823;
  v2 = ((__int64 (__fastcall *)(unsigned __int64 *))off_140C007F0)(&v6);
  result = RtlULongLongMult(v2, 0x3E8uLL, &pullResult);
  if ( result >= 0 )
  {
    v3 = pullResult / v6;
    if ( qword_140C133B0 + v3 < v3 )
      return -1073741675;
    v4 = v3 + qword_140C133B0;
    DbgPrintEx(0x65u, 0, "BGFX Display Ready Time (ms): %d\n", v3);
    DbgPrintEx(0x65u, 0, "BGFX Secondary Logo Bitmap Display Time GOAL (ms): %d\n", v4);
    if ( (unsigned __int64)qword_140C133B0 >= 0x64 )
    {
      qword_140C133B0 = v4;
      KeInitializeTimerEx(&stru_140CF94A0, NotificationTimer);
      KeInitializeDpc(&stru_140CF94E0, AnFwpBackgroundUpdateTimer, 0LL);
      if ( KeSetCoalescableTimer(&stru_140CF94A0, 0LL, 0x64u, 0, &stru_140CF94E0) )
      {
        KeCancelTimer(&stru_140CF94A0);
        byte_140CF4DC0 = 0;
        return BgpClearScreen(HIDWORD(qword_140C13490));
      }
      byte_140CF4DC0 = 1;
      result = 0;
    }
    else
    {
      BgpClearScreen(HIDWORD(qword_140C13490));
      DbgPrintEx(0x65u, 0, "BGFX Secondary Logo Bitmap Display Time (ms): %d\n", v3);
      result = BgpGxDrawBitmapImage(qword_140C13358, &qword_140C1336C);
    }
    if ( result < 0 )
      return BgpClearScreen(HIDWORD(qword_140C13490));
  }
  return result;
}
