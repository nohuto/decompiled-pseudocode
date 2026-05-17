/*
 * XREFs of EtwpCheckForEnoughStackSpace @ 0x180110DD4
 * Callers:
 *     EtwpWriteToPrivateBuffers @ 0x18005064C (EtwpWriteToPrivateBuffers.c)
 * Callees:
 *     __security_check_cookie @ 0x18008C940 (__security_check_cookie.c)
 *     RtlResetStackOverflow @ 0x1800DE804 (RtlResetStackOverflow.c)
 */

char EtwpCheckForEnoughStackSpace()
{
  void *v0; // rsp

  v0 = alloca(2176LL);
  return 1;
}
