/*
 * XREFs of PpmPostProcessMediaBuffering @ 0x1408F1748
 * Callers:
 *     PpmApplyProfile @ 0x1408F141C (PpmApplyProfile.c)
 * Callees:
 *     PopExecuteOnTargetProcessors @ 0x140204F30 (PopExecuteOnTargetProcessors.c)
 *     KeSubtractAffinityEx @ 0x1402791F0 (KeSubtractAffinityEx.c)
 *     PoCopyDeepIdleMask @ 0x140326950 (PoCopyDeepIdleMask.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 *     PpmCheckApplyResetNotification @ 0x140571170 (PpmCheckApplyResetNotification.c)
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
