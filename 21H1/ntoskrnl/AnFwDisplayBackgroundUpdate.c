/*
 * XREFs of AnFwDisplayBackgroundUpdate @ 0x1409F1784
 * Callers:
 *     BgDisplayBackgroundUpdate @ 0x1409F1748 (BgDisplayBackgroundUpdate.c)
 * Callees:
 *     KeInitializeDpc @ 0x140204F10 (KeInitializeDpc.c)
 *     KeSetCoalescableTimer @ 0x140236170 (KeSetCoalescableTimer.c)
 *     KeCancelTimer @ 0x1402364D0 (KeCancelTimer.c)
 *     RtlULongLongMult @ 0x1402C1CCC (RtlULongLongMult.c)
 *     KeInitializeTimerEx @ 0x140355110 (KeInitializeTimerEx.c)
 *     DbgPrintEx @ 0x14037C640 (DbgPrintEx.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     BgpClearScreen @ 0x1405BE6A4 (BgpClearScreen.c)
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
  if ( (dword_140C132D0 & 0x4000000) == 0 )
    return 0;
  if ( !a1 )
  {
    AnFwDisableBackgroundUpdateTimer();
    return 0;
  }
  if ( byte_140CF4F10 )
    return -1073741823;
  v2 = ((__int64 (__fastcall *)(unsigned __int64 *))off_140C007F0)(&v6);
  result = RtlULongLongMult(v2, 0x3E8uLL, &pullResult);
  if ( result >= 0 )
  {
    v3 = pullResult / v6;
    if ( qword_140C13370 + v3 < v3 )
      return -1073741675;
    v4 = v3 + qword_140C13370;
    DbgPrintEx(0x65u, 0, "BGFX Display Ready Time (ms): %d\n", v3);
    DbgPrintEx(0x65u, 0, "BGFX Secondary Logo Bitmap Display Time GOAL (ms): %d\n", v4);
    if ( (unsigned __int64)qword_140C13370 >= 0x64 )
    {
      qword_140C13370 = v4;
      KeInitializeTimerEx(&stru_140CF95A0, NotificationTimer);
      KeInitializeDpc(&stru_140CF95E0, AnFwpBackgroundUpdateTimer, 0LL);
      if ( KeSetCoalescableTimer(&stru_140CF95A0, 0LL, 0x64u, 0, &stru_140CF95E0) )
      {
        KeCancelTimer(&stru_140CF95A0);
        byte_140CF4F10 = 0;
        return BgpClearScreen(HIDWORD(qword_140C13450));
      }
      byte_140CF4F10 = 1;
      result = 0;
    }
    else
    {
      BgpClearScreen(HIDWORD(qword_140C13450));
      DbgPrintEx(0x65u, 0, "BGFX Secondary Logo Bitmap Display Time (ms): %d\n", v3);
      result = BgpGxDrawBitmapImage(qword_140C13318, &qword_140C1332C);
    }
    if ( result < 0 )
      return BgpClearScreen(HIDWORD(qword_140C13450));
  }
  return result;
}
