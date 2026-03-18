/*
 * XREFs of InbvSetScrollRegion @ 0x1404F9C60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 */

__int64 (*InbvSetScrollRegion())(void)
{
  __int64 (*result)(void); // rax

  result = (__int64 (*)(void))qword_140C50960;
  if ( qword_140C50960 )
  {
    result = *(__int64 (**)(void))(qword_140C50960 + 72);
    if ( result )
      return (__int64 (*)(void))result();
  }
  return result;
}
