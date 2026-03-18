/*
 * XREFs of _PaintScreenBackground@0 @ 0xEBE5C
 * Callers:
 *     <none>
 * Callees:
 *     _FillRect@12 @ 0x7226C (_FillRect@12.c)
 */

int __stdcall PaintScreenBackground()
{
  const RECT *v1; // [esp+0h] [ebp-18h]
  HBRUSH v2; // [esp+4h] [ebp-14h]

  if ( _gdwInAtomicOperation && (_gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, _gdwInAtomicOperation, 0, 0, 0);
  EnterRenderBlock();
  UserSessionSwitchLeaveCrit();
  EnterSharedCrit(0, 1);
  EnterSharedRenderCrit();
  FillRect(*(HDC *)(_gpsi + 4296), v1, v2);
  LeaveRenderBlock();
  LeaveRenderCrit();
  UserSessionSwitchLeaveCrit();
  return EnterCrit(0, 1);
}
