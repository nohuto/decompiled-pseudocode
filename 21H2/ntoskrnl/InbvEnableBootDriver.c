/*
 * XREFs of InbvEnableBootDriver @ 0x140550BD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 (*InbvEnableBootDriver())(void)
{
  __int64 (*result)(void); // rax

  result = (__int64 (*)(void))qword_140C54D10;
  if ( qword_140C54D10 )
  {
    result = *(__int64 (**)(void))(qword_140C54D10 + 48);
    if ( result )
      return (__int64 (*)(void))result();
  }
  return result;
}
