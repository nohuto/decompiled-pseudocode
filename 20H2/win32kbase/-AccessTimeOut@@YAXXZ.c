/*
 * XREFs of ?AccessTimeOut@@YAXXZ @ 0x1C0181290
 * Callers:
 *     ProcessKeyboardInputWorker @ 0x1C01AB3A0 (ProcessKeyboardInputWorker.c)
 * Callees:
 *     ApiSetEditionSetAccessibilityTimer @ 0x1C01C8084 (ApiSetEditionSetAccessibilityTimer.c)
 */

void AccessTimeOut(void)
{
  if ( gtmridAccessTimeOut )
  {
    if ( (qword_1C0249B94 & 1) != 0 )
      gtmridAccessTimeOut = ApiSetEditionSetAccessibilityTimer(
                              gtmridAccessTimeOut,
                              HIDWORD(qword_1C0249B94),
                              xxxAccessTimeOutTimer);
  }
}
