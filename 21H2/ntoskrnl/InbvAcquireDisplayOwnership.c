/*
 * XREFs of InbvAcquireDisplayOwnership @ 0x1404FEE50
 * Callers:
 *     KiDisplayBlueScreen @ 0x140518300 (KiDisplayBlueScreen.c)
 *     PopShutdownHandler @ 0x1409B3520 (PopShutdownHandler.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 (*InbvAcquireDisplayOwnership())(void)
{
  __int64 (*result)(void); // rax

  result = (__int64 (*)(void))qword_140C50BA8;
  if ( qword_140C50BA8 )
  {
    result = *(__int64 (**)(void))(qword_140C50BA8 + 8);
    if ( result )
      return (__int64 (*)(void))result();
  }
  return result;
}
