/*
 * XREFs of InbvSetProgressBarSubset @ 0x1403B4894
 * Callers:
 *     Phase1Initialization @ 0x1407B3C40 (Phase1Initialization.c)
 *     Phase1InitializationIoReady @ 0x140A4D104 (Phase1InitializationIoReady.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 (*InbvSetProgressBarSubset())(void)
{
  __int64 (*result)(void); // rax

  result = (__int64 (*)(void))qword_140C50BA8;
  if ( qword_140C50BA8 )
  {
    result = *(__int64 (**)(void))(qword_140C50BA8 + 112);
    if ( result )
      return (__int64 (*)(void))result();
  }
  return result;
}
