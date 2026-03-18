/*
 * XREFs of InbvSetProgressBarSubset @ 0x1403B31B0
 * Callers:
 *     Phase1Initialization @ 0x140793E90 (Phase1Initialization.c)
 *     Phase1InitializationIoReady @ 0x140A4AA48 (Phase1InitializationIoReady.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 */

__int64 (*InbvSetProgressBarSubset())(void)
{
  __int64 (*result)(void); // rax

  result = (__int64 (*)(void))qword_140C509E8;
  if ( qword_140C509E8 )
  {
    result = *(__int64 (**)(void))(qword_140C509E8 + 112);
    if ( result )
      return (__int64 (*)(void))result();
  }
  return result;
}
