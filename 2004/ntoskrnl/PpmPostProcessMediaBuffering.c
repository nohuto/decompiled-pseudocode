/*
 * XREFs of PpmPostProcessMediaBuffering @ 0x1408F2A38
 * Callers:
 *     PpmApplyProfile @ 0x1408F270C (PpmApplyProfile.c)
 * Callees:
 *     KeSubtractAffinityEx @ 0x1402201A0 (KeSubtractAffinityEx.c)
 *     PoCopyDeepIdleMask @ 0x1402E1850 (PoCopyDeepIdleMask.c)
 *     PopExecuteOnTargetProcessors @ 0x1402E3AE0 (PopExecuteOnTargetProcessors.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memset @ 0x14040A280 (memset.c)
 *     PpmCheckApplyResetNotification @ 0x1405717C0 (PpmCheckApplyResetNotification.c)
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
