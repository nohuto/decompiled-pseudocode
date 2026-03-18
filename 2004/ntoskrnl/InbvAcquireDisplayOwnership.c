/*
 * XREFs of InbvAcquireDisplayOwnership @ 0x1404F9AA0
 * Callers:
 *     KiDisplayBlueScreen @ 0x140512C50 (KiDisplayBlueScreen.c)
 *     PopShutdownHandler @ 0x1409AF780 (PopShutdownHandler.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 */

__int64 (*InbvAcquireDisplayOwnership())(void)
{
  __int64 (*result)(void); // rax

  result = (__int64 (*)(void))qword_140C50960;
  if ( qword_140C50960 )
  {
    result = *(__int64 (**)(void))(qword_140C50960 + 8);
    if ( result )
      return (__int64 (*)(void))result();
  }
  return result;
}
