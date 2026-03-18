/*
 * XREFs of InbvEnableBootDriver @ 0x1404F94E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 */

__int64 (*InbvEnableBootDriver())(void)
{
  __int64 (*result)(void); // rax

  result = (__int64 (*)(void))qword_140C50A98;
  if ( qword_140C50A98 )
  {
    result = *(__int64 (**)(void))(qword_140C50A98 + 48);
    if ( result )
      return (__int64 (*)(void))result();
  }
  return result;
}
