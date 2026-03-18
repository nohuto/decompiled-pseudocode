/*
 * XREFs of InbvAcquireDisplayOwnership @ 0x1404FD330
 * Callers:
 *     KiDisplayBlueScreen @ 0x140516580 (KiDisplayBlueScreen.c)
 *     PopShutdownHandler @ 0x1409B56F0 (PopShutdownHandler.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 */

__int64 (*InbvAcquireDisplayOwnership())(void)
{
  __int64 (*result)(void); // rax

  result = (__int64 (*)(void))qword_140C509E8;
  if ( qword_140C509E8 )
  {
    result = *(__int64 (**)(void))(qword_140C509E8 + 8);
    if ( result )
      return (__int64 (*)(void))result();
  }
  return result;
}
