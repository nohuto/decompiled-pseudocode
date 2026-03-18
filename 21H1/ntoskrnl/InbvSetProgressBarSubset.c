/*
 * XREFs of InbvSetProgressBarSubset @ 0x1403B9820
 * Callers:
 *     Phase1Initialization @ 0x14079B780 (Phase1Initialization.c)
 *     Phase1InitializationIoReady @ 0x140A3EF44 (Phase1InitializationIoReady.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 */

__int64 (*InbvSetProgressBarSubset())(void)
{
  __int64 (*result)(void); // rax

  result = (__int64 (*)(void))qword_140C50A98;
  if ( qword_140C50A98 )
  {
    result = *(__int64 (**)(void))(qword_140C50A98 + 112);
    if ( result )
      return (__int64 (*)(void))result();
  }
  return result;
}
