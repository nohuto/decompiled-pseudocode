/*
 * XREFs of ValidateHwndIAM @ 0x1C008EFA0
 * Callers:
 *     ?ValidateHWNDIA@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1C0092D78 (-ValidateHWNDIA@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z.c)
 *     NtUserSetBridgeWindowChild @ 0x1C0201230 (NtUserSetBridgeWindowChild.c)
 * Callees:
 *     IAMThreadAccessGranted @ 0x1C008F634 (IAMThreadAccessGranted.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 ValidateHwndIAM()
{
  __int64 v0; // r8

  if ( (unsigned int)IAMThreadAccessGranted(gptiCurrent) )
    gbValidateHandleForIL = 0;
  return ValidateHwnd(v0);
}
