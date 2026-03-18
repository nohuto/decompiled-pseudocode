/*
 * XREFs of InbvAcquireLock @ 0x1404F947C
 * Callers:
 *     DisplayBootBitmap @ 0x1403AB120 (DisplayBootBitmap.c)
 *     FinalizeBootLogo @ 0x1404F973C (FinalizeBootLogo.c)
 *     InbvRotateGuiBootDisplay @ 0x1404F9790 (InbvRotateGuiBootDisplay.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 */

__int64 (*InbvAcquireLock())(void)
{
  __int64 (*result)(void); // rax

  result = (__int64 (*)(void))qword_140C50A98;
  if ( qword_140C50A98 )
  {
    result = *(__int64 (**)(void))(qword_140C50A98 + 152);
    if ( result )
      return (__int64 (*)(void))result();
  }
  return result;
}
