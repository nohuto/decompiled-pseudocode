/*
 * XREFs of IopWriteBugCheckSelEntries @ 0x1404FF74C
 * Callers:
 *     IoSaveBugCheckRecoveryStatus @ 0x1404FD410 (IoSaveBugCheckRecoveryStatus.c)
 * Callees:
 *     WheaLogInternalEvent @ 0x1403B78B0 (WheaLogInternalEvent.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 */

LONG IopWriteBugCheckSelEntries()
{
  _DWORD Src[8]; // [rsp+20h] [rbp-38h] BYREF

  Src[3] = 0;
  Src[7] = 0;
  Src[0] = 1733060695;
  Src[1] = 1;
  Src[2] = 32;
  Src[5] = -2147483601;
  Src[4] = 1280201291;
  Src[6] = 8;
  return WheaLogInternalEvent(Src);
}
