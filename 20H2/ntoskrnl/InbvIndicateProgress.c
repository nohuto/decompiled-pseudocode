/*
 * XREFs of InbvIndicateProgress @ 0x140A5DF88
 * Callers:
 *     IopInitializeSystemDrivers @ 0x140A5CBE8 (IopInitializeSystemDrivers.c)
 *     IopInitializeBuiltinDriver @ 0x140A5DAAC (IopInitializeBuiltinDriver.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 */

__int64 (*InbvIndicateProgress())(void)
{
  __int64 (*result)(void); // rax

  result = (__int64 (*)(void))qword_140C509E8;
  if ( qword_140C509E8 )
  {
    result = *(__int64 (**)(void))(qword_140C509E8 + 120);
    if ( result )
      return (__int64 (*)(void))result();
  }
  return result;
}
