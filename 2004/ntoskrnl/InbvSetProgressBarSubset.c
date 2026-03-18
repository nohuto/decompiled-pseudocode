/*
 * XREFs of InbvSetProgressBarSubset @ 0x1403B0840
 * Callers:
 *     Phase1Initialization @ 0x140786180 (Phase1Initialization.c)
 *     Phase1InitializationIoReady @ 0x140A447A8 (Phase1InitializationIoReady.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 */

__int64 (*InbvSetProgressBarSubset())(void)
{
  __int64 (*result)(void); // rax

  result = (__int64 (*)(void))qword_140C50960;
  if ( qword_140C50960 )
  {
    result = *(__int64 (**)(void))(qword_140C50960 + 112);
    if ( result )
      return (__int64 (*)(void))result();
  }
  return result;
}
