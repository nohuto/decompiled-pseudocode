/*
 * XREFs of SymCryptFatalEnvWindowsKernelmodeWin8_1nLater @ 0x1403E7BC0
 * Callers:
 *     SymCryptFatal @ 0x14050F468 (SymCryptFatal.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x1403974F0 (xHalTimerWatchdogStop.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 */

void __fastcall __noreturn SymCryptFatalEnvWindowsKernelmodeWin8_1nLater(ULONG_PTR BugCheckParameter1)
{
  unsigned int v1; // ebx

  v1 = BugCheckParameter1;
  xHalTimerWatchdogStop();
  KeBugCheckEx(0x171u, v1, 0LL, 0LL, 0LL);
}
