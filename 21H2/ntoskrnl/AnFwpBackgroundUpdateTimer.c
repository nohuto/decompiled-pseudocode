/*
 * XREFs of AnFwpBackgroundUpdateTimer @ 0x140AB1400
 * Callers:
 *     <none>
 * Callees:
 *     DbgPrintEx @ 0x140369B90 (DbgPrintEx.c)
 *     BgpFwReleaseLock @ 0x1403A7BF0 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x1403A7C40 (BgpFwAcquireLock.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     BgpClearScreen @ 0x14064D4AC (BgpClearScreen.c)
 *     AnFwDisableBackgroundUpdateTimer @ 0x140AAB7B4 (AnFwDisableBackgroundUpdateTimer.c)
 *     AnFwpDisableProgressTimer @ 0x140AABA70 (AnFwpDisableProgressTimer.c)
 *     BgpGxDrawBitmapImage @ 0x140AB17C4 (BgpGxDrawBitmapImage.c)
 */

void __fastcall AnFwpBackgroundUpdateTimer(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  unsigned __int64 v4; // kr00_8
  unsigned __int64 v5; // rbx
  _BOOL8 v6; // rcx
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF

  v7[0] = 0LL;
  v4 = ((__int64 (__fastcall *)(_QWORD *, PVOID, PVOID, PVOID))off_140C01E40)(
         v7,
         DeferredContext,
         SystemArgument1,
         SystemArgument2);
  if ( is_mul_ok(v4, 0x3E8uLL) )
  {
    v5 = v4 * (unsigned __int128)0x3E8uLL / v7[0];
    BgpFwAcquireLock();
    if ( v5 >= qword_140C0E030 )
    {
      if ( byte_140D01570 )
      {
        AnFwpDisableProgressTimer(v6);
        DbgPrintEx(0x65u, 0, "BGFX Secondary Logo Bitmap Display Time (ms): %d\n", v5);
        if ( qword_140C0DFD8 )
        {
          BgpClearScreen(HIDWORD(qword_140C0E110));
          if ( (int)BgpGxDrawBitmapImage(qword_140C0DFD8, &qword_140C0DFEC) < 0 )
            BgpClearScreen(HIDWORD(qword_140C0E110));
        }
      }
      AnFwDisableBackgroundUpdateTimer();
    }
    BgpFwReleaseLock();
  }
}
