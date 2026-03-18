/*
 * XREFs of WheapGetErrorSource @ 0x1405B5E04
 * Callers:
 *     HalpMcaReportError @ 0x1404B54D0 (HalpMcaReportError.c)
 *     HalHandleNMI @ 0x1404B8180 (HalHandleNMI.c)
 *     WheapReportBootError @ 0x1405B51E8 (WheapReportBootError.c)
 *     WheaGetErrorSource @ 0x1405B5420 (WheaGetErrorSource.c)
 *     WheaReportHwError @ 0x1405B5450 (WheaReportHwError.c)
 *     WheapAttemptArchitecturalErrorRecovery @ 0x1405B5B10 (WheapAttemptArchitecturalErrorRecovery.c)
 *     WheaAddHwErrorReportSectionDeviceDriver @ 0x1405B5FE0 (WheaAddHwErrorReportSectionDeviceDriver.c)
 *     WheaHwErrorReportSubmitDeviceDriver @ 0x1405B62B0 (WheaHwErrorReportSubmitDeviceDriver.c)
 *     WheapFreeDriverPacketBuffer @ 0x1405B669C (WheapFreeDriverPacketBuffer.c)
 *     WheapGetPreallocatedPacketBuffer @ 0x1405B6700 (WheapGetPreallocatedPacketBuffer.c)
 *     WheapInitErrorReportDeviceDriver @ 0x1405B67B0 (WheapInitErrorReportDeviceDriver.c)
 *     WheapWmiExecuteErrorSourceMethod @ 0x1405B7CC8 (WheapWmiExecuteErrorSourceMethod.c)
 *     WheaRemoveErrorSource @ 0x140958560 (WheaRemoveErrorSource.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall WheapGetErrorSource(__int64 a1, int a2)
{
  int v2; // r9d
  int v3; // r8d
  __int64 *result; // rax

  if ( *(_DWORD *)a1 != 1279410516 )
    return 0LL;
  v2 = *(_DWORD *)(a1 + 4);
  v3 = 0;
  result = *(__int64 **)(a1 + 16);
  if ( v2 <= 0 )
    return 0LL;
  while ( *((_DWORD *)result + 31) != a2 || *((_BYTE *)result + 88) || *((_DWORD *)result + 27) != 2 )
  {
    result = (__int64 *)*result;
    if ( ++v3 >= v2 )
      return 0LL;
  }
  return result;
}
