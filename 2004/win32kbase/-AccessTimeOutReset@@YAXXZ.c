/*
 * XREFs of ?AccessTimeOutReset@@YAXXZ @ 0x1C002F010
 * Callers:
 *     xxxUpdatePerUserAccessPackSettings @ 0x1C002DD30 (xxxUpdatePerUserAccessPackSettings.c)
 *     ?SpiSetAccessTimeOut@@YAHKPEAXHHPEAH@Z @ 0x1C013CC24 (-SpiSetAccessTimeOut@@YAHKPEAXHHPEAH@Z.c)
 * Callees:
 *     ApiSetEditionKillAccessibilityTimer @ 0x1C01C8C60 (ApiSetEditionKillAccessibilityTimer.c)
 *     ApiSetEditionSetAccessibilityTimer @ 0x1C01CA404 (ApiSetEditionSetAccessibilityTimer.c)
 */

void AccessTimeOutReset(void)
{
  if ( gtmridAccessTimeOut )
    ApiSetEditionKillAccessibilityTimer();
  if ( (qword_1C024BB94 & 1) != 0 )
    gtmridAccessTimeOut = ApiSetEditionSetAccessibilityTimer(0LL, HIDWORD(qword_1C024BB94), xxxAccessTimeOutTimer);
}
