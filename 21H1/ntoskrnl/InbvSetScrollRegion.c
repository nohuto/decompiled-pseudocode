/*
 * XREFs of InbvSetScrollRegion @ 0x1404F9610
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 */

__int64 (*InbvSetScrollRegion())(void)
{
  __int64 (*result)(void); // rax

  result = (__int64 (*)(void))qword_140C50A98;
  if ( qword_140C50A98 )
  {
    result = *(__int64 (**)(void))(qword_140C50A98 + 72);
    if ( result )
      return (__int64 (*)(void))result();
  }
  return result;
}
