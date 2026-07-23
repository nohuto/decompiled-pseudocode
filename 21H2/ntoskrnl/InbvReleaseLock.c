/*
 * XREFs of InbvReleaseLock @ 0x1404FEFAC
 * Callers:
 *     DisplayBootBitmap @ 0x1403B4EC0 (DisplayBootBitmap.c)
 *     FinalizeBootLogo @ 0x1404FF13C (FinalizeBootLogo.c)
 *     InbvRotateGuiBootDisplay @ 0x1404FF190 (InbvRotateGuiBootDisplay.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 (*InbvReleaseLock())(void)
{
  __int64 (*result)(void); // rax

  result = (__int64 (*)(void))qword_140C50BA8;
  if ( qword_140C50BA8 )
  {
    result = *(__int64 (**)(void))(qword_140C50BA8 + 160);
    if ( result )
      return (__int64 (*)(void))result();
  }
  return result;
}
