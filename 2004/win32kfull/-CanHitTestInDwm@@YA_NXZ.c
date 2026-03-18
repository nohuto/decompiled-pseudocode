/*
 * XREFs of ?CanHitTestInDwm@@YA_NXZ @ 0x1C00B0C94
 * Callers:
 *     xxxSpeedHitTest @ 0x1C00B0B54 (xxxSpeedHitTest.c)
 *     xxxPointerSpeedHitTest @ 0x1C021843C (xxxPointerSpeedHitTest.c)
 * Callees:
 *     <none>
 */

char CanHitTestInDwm(void)
{
  char v0; // cl

  if ( gbNoMoreDITHitTest )
    return 0;
  if ( !(unsigned __int8)IsInputThread() )
    return 0;
  if ( !(unsigned __int8)IsInputProcessingActivated() )
    return 0;
  v0 = 1;
  if ( (*(_DWORD *)(gptiCurrent + 480LL) & 1) != 0 )
    return 0;
  return v0;
}
