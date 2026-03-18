/*
 * XREFs of AnFwDisplayBackgroundUpdate @ 0x1409F7784
 * Callers:
 *     BgDisplayBackgroundUpdate @ 0x1409F7748 (BgDisplayBackgroundUpdate.c)
 * Callees:
 *     RtlULongLongMult @ 0x14022B2AC (RtlULongLongMult.c)
 *     KeSetCoalescableTimer @ 0x140247420 (KeSetCoalescableTimer.c)
 *     KeCancelTimer @ 0x1402479F0 (KeCancelTimer.c)
 *     KeInitializeTimerEx @ 0x1402D6620 (KeInitializeTimerEx.c)
 *     KeInitializeDpc @ 0x14033E040 (KeInitializeDpc.c)
 *     DbgPrintEx @ 0x14037EFE0 (DbgPrintEx.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     BgpClearScreen @ 0x1405C2A44 (BgpClearScreen.c)
 *     AnFwDisableBackgroundUpdateTimer @ 0x1409F64CC (AnFwDisableBackgroundUpdateTimer.c)
 *     BgpGxDrawBitmapImage @ 0x1409FA704 (BgpGxDrawBitmapImage.c)
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
  if ( (dword_140C13330 & 0x4000000) == 0 )
    return 0;
  if ( !a1 )
  {
    AnFwDisableBackgroundUpdateTimer();
    return 0;
  }
  if ( byte_140CF4EA0 )
    return -1073741823;
  v2 = ((__int64 (__fastcall *)(unsigned __int64 *))off_140C007F0)(&v6);
  result = RtlULongLongMult(v2, 0x3E8uLL, &pullResult);
  if ( result >= 0 )
  {
    v3 = pullResult / v6;
    if ( qword_140C133D0 + v3 < v3 )
      return -1073741675;
    v4 = v3 + qword_140C133D0;
    DbgPrintEx(0x65u, 0, "BGFX Display Ready Time (ms): %d\n", v3);
    DbgPrintEx(0x65u, 0, "BGFX Secondary Logo Bitmap Display Time GOAL (ms): %d\n", v4);
    if ( (unsigned __int64)qword_140C133D0 >= 0x64 )
    {
      qword_140C133D0 = v4;
      KeInitializeTimerEx(&stru_140CF9560, NotificationTimer);
      KeInitializeDpc(&stru_140CF95A0, AnFwpBackgroundUpdateTimer, 0LL);
      if ( KeSetCoalescableTimer(&stru_140CF9560, 0LL, 0x64u, 0, &stru_140CF95A0) )
      {
        KeCancelTimer(&stru_140CF9560);
        byte_140CF4EA0 = 0;
        return BgpClearScreen(HIDWORD(qword_140C134B0));
      }
      byte_140CF4EA0 = 1;
      result = 0;
    }
    else
    {
      BgpClearScreen(HIDWORD(qword_140C134B0));
      DbgPrintEx(0x65u, 0, "BGFX Secondary Logo Bitmap Display Time (ms): %d\n", v3);
      result = BgpGxDrawBitmapImage(qword_140C13378, &qword_140C1338C);
    }
    if ( result < 0 )
      return BgpClearScreen(HIDWORD(qword_140C134B0));
  }
  return result;
}
