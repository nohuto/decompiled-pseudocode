/*
 * XREFs of InbvIndicateProgress @ 0x140A4EFEC
 * Callers:
 *     IopInitializeSystemDrivers @ 0x140A4DC4C (IopInitializeSystemDrivers.c)
 *     IopInitializeBuiltinDriver @ 0x140A4EB10 (IopInitializeBuiltinDriver.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 */

__int64 (*InbvIndicateProgress())(void)
{
  __int64 (*result)(void); // rax

  result = (__int64 (*)(void))qword_140C50960;
  if ( qword_140C50960 )
  {
    result = *(__int64 (**)(void))(qword_140C50960 + 120);
    if ( result )
      return (__int64 (*)(void))result();
  }
  return result;
}
