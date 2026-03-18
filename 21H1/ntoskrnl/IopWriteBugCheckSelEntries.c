/*
 * XREFs of IopWriteBugCheckSelEntries @ 0x1404FF0FC
 * Callers:
 *     IoSaveBugCheckRecoveryStatus @ 0x1404FCDC0 (IoSaveBugCheckRecoveryStatus.c)
 * Callees:
 *     WheaLogInternalEvent @ 0x1403B6A80 (WheaLogInternalEvent.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
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
