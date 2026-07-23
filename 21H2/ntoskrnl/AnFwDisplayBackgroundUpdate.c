/*
 * XREFs of AnFwDisplayBackgroundUpdate @ 0x1409F5784
 * Callers:
 *     BgDisplayBackgroundUpdate @ 0x1409F5748 (BgDisplayBackgroundUpdate.c)
 * Callees:
 *     KeInitializeTimerEx @ 0x140266A80 (KeInitializeTimerEx.c)
 *     KeInitializeDpc @ 0x140269650 (KeInitializeDpc.c)
 *     KeSetCoalescableTimer @ 0x1402813E0 (KeSetCoalescableTimer.c)
 *     KeCancelTimer @ 0x1402819B0 (KeCancelTimer.c)
 *     RtlULongLongMult @ 0x1402F35E8 (RtlULongLongMult.c)
 *     DbgPrintEx @ 0x14037F370 (DbgPrintEx.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     BgpClearScreen @ 0x1405C44A4 (BgpClearScreen.c)
 *     AnFwDisableBackgroundUpdateTimer @ 0x1409F44CC (AnFwDisableBackgroundUpdateTimer.c)
 *     BgpGxDrawBitmapImage @ 0x1409F8704 (BgpGxDrawBitmapImage.c)
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
  if ( (dword_140C134F0 & 0x4000000) == 0 )
    return 0;
  if ( !a1 )
  {
    AnFwDisableBackgroundUpdateTimer();
    return 0;
  }
  if ( byte_140CF53A0 )
    return -1073741823;
  v2 = ((__int64 (__fastcall *)(unsigned __int64 *))off_140C007F0)(&v6);
  result = RtlULongLongMult(v2, 0x3E8uLL, &pullResult);
  if ( result >= 0 )
  {
    v3 = pullResult / v6;
    if ( qword_140C13590 + v3 < v3 )
      return -1073741675;
    v4 = v3 + qword_140C13590;
    DbgPrintEx(0x65u, 0, "BGFX Display Ready Time (ms): %d\n", v3);
    DbgPrintEx(0x65u, 0, "BGFX Secondary Logo Bitmap Display Time GOAL (ms): %d\n", v4);
    if ( (unsigned __int64)qword_140C13590 >= 0x64 )
    {
      qword_140C13590 = v4;
      KeInitializeTimerEx(&stru_140CF9A60, NotificationTimer);
      KeInitializeDpc(&stru_140CF9AA0, AnFwpBackgroundUpdateTimer, 0LL);
      if ( KeSetCoalescableTimer(&stru_140CF9A60, 0LL, 0x64u, 0, &stru_140CF9AA0) )
      {
        KeCancelTimer(&stru_140CF9A60);
        byte_140CF53A0 = 0;
        return BgpClearScreen(HIDWORD(qword_140C13670));
      }
      byte_140CF53A0 = 1;
      result = 0;
    }
    else
    {
      BgpClearScreen(HIDWORD(qword_140C13670));
      DbgPrintEx(0x65u, 0, "BGFX Secondary Logo Bitmap Display Time (ms): %d\n", v3);
      result = BgpGxDrawBitmapImage(qword_140C13538, &qword_140C1354C);
    }
    if ( result < 0 )
      return BgpClearScreen(HIDWORD(qword_140C13670));
  }
  return result;
}
