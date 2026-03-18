/*
 * XREFs of PpmPostProcessMediaBuffering @ 0x1408F8648
 * Callers:
 *     PpmApplyProfile @ 0x1408F831C (PpmApplyProfile.c)
 * Callees:
 *     KeSubtractAffinityEx @ 0x1402EACC0 (KeSubtractAffinityEx.c)
 *     PoCopyDeepIdleMask @ 0x14030D750 (PoCopyDeepIdleMask.c)
 *     PopExecuteOnTargetProcessors @ 0x14033E6D0 (PopExecuteOnTargetProcessors.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memset @ 0x140411300 (memset.c)
 *     PpmCheckApplyResetNotification @ 0x1405751F0 (PpmCheckApplyResetNotification.c)
 */

__int64 PpmPostProcessMediaBuffering()
{
  __int64 result; // rax
  unsigned __int16 v1[88]; // [rsp+20h] [rbp-178h] BYREF
  _BYTE v2[176]; // [rsp+D0h] [rbp-C8h] BYREF

  memset(v2, 0, 0xA8uLL);
  memset(v1, 0, 0xA8uLL);
  result = PpmCheckApplyResetNotification();
  if ( PpmPlatformStates )
  {
    PoCopyDeepIdleMask(v1);
    result = KeSubtractAffinityEx((unsigned __int16 *)KeActiveProcessors, v1, v2);
    if ( (_DWORD)result )
      return PopExecuteOnTargetProcessors((__int64)v2, (__int64)PpmResetInterruptRate, 0LL, 0LL);
  }
  return result;
}
