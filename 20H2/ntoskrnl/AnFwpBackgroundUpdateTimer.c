/*
 * XREFs of AnFwpBackgroundUpdateTimer @ 0x1409FA1B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlULongLongMult @ 0x14022B2AC (RtlULongLongMult.c)
 *     DbgPrintEx @ 0x14037EFE0 (DbgPrintEx.c)
 *     BgpFwReleaseLock @ 0x14039B9D8 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x14039BA28 (BgpFwAcquireLock.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     BgpClearScreen @ 0x1405C2A44 (BgpClearScreen.c)
 *     AnFwDisableBackgroundUpdateTimer @ 0x1409F64CC (AnFwDisableBackgroundUpdateTimer.c)
 *     AnFwpDisableProgressTimer @ 0x1409F64EC (AnFwpDisableProgressTimer.c)
 *     BgpGxDrawBitmapImage @ 0x1409FA704 (BgpGxDrawBitmapImage.c)
 */

void __fastcall AnFwpBackgroundUpdateTimer(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  ULONGLONG v4; // rax
  NTSTATUS v5; // edi
  ULONGLONG v6; // rbx
  _BOOL8 v7; // rcx
  ULONGLONG pullResult; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int64 v9; // [rsp+28h] [rbp-10h] BYREF

  pullResult = 0LL;
  v9 = 0LL;
  v4 = ((__int64 (__fastcall *)(unsigned __int64 *, PVOID, PVOID, PVOID))off_140C007F0)(
         &v9,
         DeferredContext,
         SystemArgument1,
         SystemArgument2);
  v5 = RtlULongLongMult(v4, 0x3E8uLL, &pullResult);
  if ( v5 >= 0 )
  {
    v6 = pullResult / v9;
    BgpFwAcquireLock();
    if ( v6 >= qword_140C133D0 )
    {
      if ( byte_140CF4EA0 )
      {
        AnFwpDisableProgressTimer(v7);
        DbgPrintEx(0x65u, 0, "BGFX Secondary Logo Bitmap Display Time (ms): %d\n", v6);
        if ( qword_140C13378 )
        {
          BgpClearScreen(HIDWORD(qword_140C134B0));
          v5 = BgpGxDrawBitmapImage(qword_140C13378, &qword_140C1338C);
        }
        if ( v5 < 0 )
          BgpClearScreen(HIDWORD(qword_140C134B0));
      }
      AnFwDisableBackgroundUpdateTimer();
    }
    BgpFwReleaseLock();
  }
}
