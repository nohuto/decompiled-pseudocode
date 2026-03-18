/*
 * XREFs of ?CanHitTestInDwm@@YG_NXZ @ 0xA13B0
 * Callers:
 *     _xxxSpeedHitTest@24 @ 0xF3E36 (_xxxSpeedHitTest@24.c)
 *     _xxxPointerSpeedHitTest@20 @ 0x17C2EC (_xxxPointerSpeedHitTest@20.c)
 * Callees:
 *     <none>
 */

bool __stdcall CanHitTestInDwm()
{
  char v0; // bl

  v0 = 0;
  if ( !_gbNoMoreDITHitTest && (unsigned __int8)IsInputThread() && (unsigned __int8)IsInputProcessingActivated() )
    return (*(_BYTE *)(_gptiCurrent + 264) & 1) == 0;
  return v0;
}
