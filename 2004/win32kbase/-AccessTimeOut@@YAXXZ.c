/*
 * XREFs of ?AccessTimeOut@@YAXXZ @ 0x1C01837D0
 * Callers:
 *     ProcessKeyboardInputWorker @ 0x1C01AD720 (ProcessKeyboardInputWorker.c)
 * Callees:
 *     ApiSetEditionSetAccessibilityTimer @ 0x1C01CA404 (ApiSetEditionSetAccessibilityTimer.c)
 */

void AccessTimeOut(void)
{
  if ( gtmridAccessTimeOut )
  {
    if ( (qword_1C024BB94 & 1) != 0 )
      gtmridAccessTimeOut = ApiSetEditionSetAccessibilityTimer(
                              gtmridAccessTimeOut,
                              HIDWORD(qword_1C024BB94),
                              xxxAccessTimeOutTimer);
  }
}
