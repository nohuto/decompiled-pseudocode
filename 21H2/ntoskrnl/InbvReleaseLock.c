/*
 * XREFs of InbvReleaseLock @ 0x1404FF02C
 * Callers:
 *     DisplayBootBitmap @ 0x1403B4D50 (DisplayBootBitmap.c)
 *     FinalizeBootLogo @ 0x1404FF1BC (FinalizeBootLogo.c)
 *     InbvRotateGuiBootDisplay @ 0x1404FF210 (InbvRotateGuiBootDisplay.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 */

__int64 (*InbvReleaseLock())(void)
{
  __int64 (*result)(void); // rax

  result = (__int64 (*)(void))qword_140C50B68;
  if ( qword_140C50B68 )
  {
    result = *(__int64 (**)(void))(qword_140C50B68 + 160);
    if ( result )
      return (__int64 (*)(void))result();
  }
  return result;
}
