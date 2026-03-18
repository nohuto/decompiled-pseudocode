/*
 * XREFs of _ValidateHwndIAM@4 @ 0x25B92
 * Callers:
 *     ?ValidateHWNDIA@@YGHPAUHWND__@@PAPAUtagWND@@@Z @ 0x30032 (-ValidateHWNDIA@@YGHPAUHWND__@@PAPAUtagWND@@@Z.c)
 *     _NtUserSetBridgeWindowChild@8 @ 0x1687E3 (_NtUserSetBridgeWindowChild@8.c)
 * Callees:
 *     _IAMThreadAccessGranted@4 @ 0x26140 (_IAMThreadAccessGranted@4.c)
 */

// write access to const memory has been detected, the output may be wrong!
int __thiscall ValidateHwndIAM(void *this)
{
  if ( IAMThreadAccessGranted(_gptiCurrent) )
    _gbValidateHandleForIL = 0;
  return ValidateHwnd(this);
}
