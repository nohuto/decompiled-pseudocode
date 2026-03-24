/*
 * XREFs of InbvReleaseResources @ 0x1403B4DA8
 * Callers:
 *     DisplayBootBitmap @ 0x1403B4D50 (DisplayBootBitmap.c)
 *     InbvRotateGuiBootDisplay @ 0x1404FF210 (InbvRotateGuiBootDisplay.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 */

__int64 (*InbvReleaseResources())(void)
{
  __int64 (*result)(void); // rax

  result = (__int64 (*)(void))qword_140C50B68;
  if ( qword_140C50B68 )
  {
    result = *(__int64 (**)(void))(qword_140C50B68 + 168);
    if ( result )
      return (__int64 (*)(void))result();
  }
  return result;
}
