/*
 * XREFs of InbvAcquireDisplayOwnership @ 0x1404F9450
 * Callers:
 *     KiDisplayBlueScreen @ 0x140512600 (KiDisplayBlueScreen.c)
 *     PopShutdownHandler @ 0x1409AE920 (PopShutdownHandler.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 */

__int64 (*InbvAcquireDisplayOwnership())(void)
{
  __int64 (*result)(void); // rax

  result = (__int64 (*)(void))qword_140C50A98;
  if ( qword_140C50A98 )
  {
    result = *(__int64 (**)(void))(qword_140C50A98 + 8);
    if ( result )
      return (__int64 (*)(void))result();
  }
  return result;
}
