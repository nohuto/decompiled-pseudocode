/*
 * XREFs of InbvReleaseResources @ 0x1403B3768
 * Callers:
 *     DisplayBootBitmap @ 0x1403B3710 (DisplayBootBitmap.c)
 *     InbvRotateGuiBootDisplay @ 0x1404FD670 (InbvRotateGuiBootDisplay.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 */

__int64 (*InbvReleaseResources())(void)
{
  __int64 (*result)(void); // rax

  result = (__int64 (*)(void))qword_140C509E8;
  if ( qword_140C509E8 )
  {
    result = *(__int64 (**)(void))(qword_140C509E8 + 168);
    if ( result )
      return (__int64 (*)(void))result();
  }
  return result;
}
