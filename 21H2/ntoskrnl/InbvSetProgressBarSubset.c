/*
 * XREFs of InbvSetProgressBarSubset @ 0x1403B4724
 * Callers:
 *     Phase1Initialization @ 0x1407B3AA0 (Phase1Initialization.c)
 *     Phase1InitializationIoReady @ 0x140A4C104 (Phase1InitializationIoReady.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 */

__int64 (*InbvSetProgressBarSubset())(void)
{
  __int64 (*result)(void); // rax

  result = (__int64 (*)(void))qword_140C50B68;
  if ( qword_140C50B68 )
  {
    result = *(__int64 (**)(void))(qword_140C50B68 + 112);
    if ( result )
      return (__int64 (*)(void))result();
  }
  return result;
}
