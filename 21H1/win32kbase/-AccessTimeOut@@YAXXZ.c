/*
 * XREFs of ?AccessTimeOut@@YAXXZ @ 0x1C01894D0
 * Callers:
 *     ProcessKeyboardInputWorker @ 0x1C01B3480 (ProcessKeyboardInputWorker.c)
 * Callees:
 *     ApiSetEditionSetAccessibilityTimer @ 0x1C01D0384 (ApiSetEditionSetAccessibilityTimer.c)
 */

void AccessTimeOut(void)
{
  if ( gtmridAccessTimeOut )
  {
    if ( (qword_1C0251B94 & 1) != 0 )
      gtmridAccessTimeOut = ApiSetEditionSetAccessibilityTimer(
                              gtmridAccessTimeOut,
                              HIDWORD(qword_1C0251B94),
                              xxxAccessTimeOutTimer);
  }
}
