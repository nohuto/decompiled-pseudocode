/*
 * XREFs of InbvSetProgressBarSubset @ 0x1403CFCF0
 * Callers:
 *     Phase1Initialization @ 0x14084C160 (Phase1Initialization.c)
 *     Phase1InitializationIoReady @ 0x140B020A4 (Phase1InitializationIoReady.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 (*InbvSetProgressBarSubset())(void)
{
  __int64 (*result)(void); // rax

  result = (__int64 (*)(void))qword_140C54D10;
  if ( qword_140C54D10 )
  {
    result = *(__int64 (**)(void))(qword_140C54D10 + 112);
    if ( result )
      return (__int64 (*)(void))result();
  }
  return result;
}
