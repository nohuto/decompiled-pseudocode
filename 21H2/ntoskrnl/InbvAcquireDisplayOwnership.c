/*
 * XREFs of InbvAcquireDisplayOwnership @ 0x1404FEED0
 * Callers:
 *     KiDisplayBlueScreen @ 0x1405180C0 (KiDisplayBlueScreen.c)
 *     PopShutdownHandler @ 0x1409B25F0 (PopShutdownHandler.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 */

__int64 (*InbvAcquireDisplayOwnership())(void)
{
  __int64 (*result)(void); // rax

  result = (__int64 (*)(void))qword_140C50B68;
  if ( qword_140C50B68 )
  {
    result = *(__int64 (**)(void))(qword_140C50B68 + 8);
    if ( result )
      return (__int64 (*)(void))result();
  }
  return result;
}
