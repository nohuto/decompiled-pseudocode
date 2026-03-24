/*
 * XREFs of AnFwDisplayBackgroundUpdate @ 0x1409F4784
 * Callers:
 *     BgDisplayBackgroundUpdate @ 0x1409F4748 (BgDisplayBackgroundUpdate.c)
 * Callees:
 *     RtlULongLongMult @ 0x14024ED98 (RtlULongLongMult.c)
 *     KeSetCoalescableTimer @ 0x14025FC70 (KeSetCoalescableTimer.c)
 *     KeCancelTimer @ 0x140260240 (KeCancelTimer.c)
 *     KeInitializeTimerEx @ 0x140278AE0 (KeInitializeTimerEx.c)
 *     KeInitializeDpc @ 0x14027B6B0 (KeInitializeDpc.c)
 *     DbgPrintEx @ 0x14037F820 (DbgPrintEx.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     BgpClearScreen @ 0x1405C4274 (BgpClearScreen.c)
 *     AnFwDisableBackgroundUpdateTimer @ 0x1409F34CC (AnFwDisableBackgroundUpdateTimer.c)
 *     BgpGxDrawBitmapImage @ 0x1409F7704 (BgpGxDrawBitmapImage.c)
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
  if ( byte_140CF5340 )
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
      KeInitializeTimerEx(&stru_140CF9A20, NotificationTimer);
      KeInitializeDpc(&stru_140CF9A60, AnFwpBackgroundUpdateTimer, 0LL);
      if ( KeSetCoalescableTimer(&stru_140CF9A20, 0LL, 0x64u, 0, &stru_140CF9A60) )
      {
        KeCancelTimer(&stru_140CF9A20);
        byte_140CF5340 = 0;
        return BgpClearScreen(HIDWORD(qword_140C13670));
      }
      byte_140CF5340 = 1;
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
