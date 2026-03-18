/*
 * XREFs of ValidateHwndIAM @ 0x1C00629D0
 * Callers:
 *     ?ValidateHWNDIA@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1C006A178 (-ValidateHWNDIA@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z.c)
 *     NtUserSetBridgeWindowChild @ 0x1C02020A0 (NtUserSetBridgeWindowChild.c)
 * Callees:
 *     IAMThreadAccessGranted @ 0x1C0066514 (IAMThreadAccessGranted.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 ValidateHwndIAM()
{
  __int64 v0; // r8

  if ( (unsigned int)IAMThreadAccessGranted(gptiCurrent) )
    gbValidateHandleForIL = 0;
  return ValidateHwnd(v0);
}
