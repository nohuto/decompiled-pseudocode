/*
 * XREFs of InbvReleaseResources @ 0x1403D82CC
 * Callers:
 *     DisplayBootBitmap @ 0x1403D8274 (DisplayBootBitmap.c)
 *     InbvRotateGuiBootDisplay @ 0x140550E80 (InbvRotateGuiBootDisplay.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 (*InbvReleaseResources())(void)
{
  __int64 (*result)(void); // rax

  result = (__int64 (*)(void))qword_140C54D10;
  if ( qword_140C54D10 )
  {
    result = *(__int64 (**)(void))(qword_140C54D10 + 168);
    if ( result )
      return (__int64 (*)(void))result();
  }
  return result;
}
