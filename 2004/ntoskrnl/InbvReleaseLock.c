/*
 * XREFs of InbvReleaseLock @ 0x1404F9BFC
 * Callers:
 *     DisplayBootBitmap @ 0x1403B0DA0 (DisplayBootBitmap.c)
 *     FinalizeBootLogo @ 0x1404F9D8C (FinalizeBootLogo.c)
 *     InbvRotateGuiBootDisplay @ 0x1404F9DE0 (InbvRotateGuiBootDisplay.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 */

__int64 (*InbvReleaseLock())(void)
{
  __int64 (*result)(void); // rax

  result = (__int64 (*)(void))qword_140C50960;
  if ( qword_140C50960 )
  {
    result = *(__int64 (**)(void))(qword_140C50960 + 160);
    if ( result )
      return (__int64 (*)(void))result();
  }
  return result;
}
