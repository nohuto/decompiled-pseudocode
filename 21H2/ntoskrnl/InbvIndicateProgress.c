/*
 * XREFs of InbvIndicateProgress @ 0x140A5FAF4
 * Callers:
 *     IopInitializeSystemDrivers @ 0x140A5E754 (IopInitializeSystemDrivers.c)
 *     IopInitializeBuiltinDriver @ 0x140A5F618 (IopInitializeBuiltinDriver.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 (*InbvIndicateProgress())(void)
{
  __int64 (*result)(void); // rax

  result = (__int64 (*)(void))qword_140C50BA8;
  if ( qword_140C50BA8 )
  {
    result = *(__int64 (**)(void))(qword_140C50BA8 + 120);
    if ( result )
      return (__int64 (*)(void))result();
  }
  return result;
}
