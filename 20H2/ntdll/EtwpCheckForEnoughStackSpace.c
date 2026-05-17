/*
 * XREFs of EtwpCheckForEnoughStackSpace @ 0x180110F34
 * Callers:
 *     EtwpWriteToPrivateBuffers @ 0x18004F53C (EtwpWriteToPrivateBuffers.c)
 * Callees:
 *     __security_check_cookie @ 0x18008C340 (__security_check_cookie.c)
 *     RtlResetStackOverflow @ 0x1800DEA54 (RtlResetStackOverflow.c)
 */

char EtwpCheckForEnoughStackSpace()
{
  void *v0; // rsp

  v0 = alloca(2176LL);
  return 1;
}
