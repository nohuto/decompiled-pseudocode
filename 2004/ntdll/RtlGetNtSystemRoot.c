/*
 * XREFs of RtlGetNtSystemRoot @ 0x180016BB0
 * Callers:
 *     LdrpGetModuleName @ 0x1800010E8 (LdrpGetModuleName.c)
 *     LdrpBuildSystem32FileName @ 0x18001A838 (LdrpBuildSystem32FileName.c)
 *     RtlQueryResourcePolicy @ 0x1800446F0 (RtlQueryResourcePolicy.c)
 *     IsOverlaySupportedPath @ 0x18004D048 (IsOverlaySupportedPath.c)
 *     RtlpAssemblyStorageMapResolutionDefaultCallback @ 0x180081C50 (RtlpAssemblyStorageMapResolutionDefaultCallback.c)
 *     RtlpDiskSpeedInitialize @ 0x18008B240 (RtlpDiskSpeedInitialize.c)
 *     LdrpInitializeProcess @ 0x1800D1D20 (LdrpInitializeProcess.c)
 *     AVrfpLoadAndInitializeProvider @ 0x1800DAC58 (AVrfpLoadAndInitializeProvider.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 */

PWSTR RtlGetNtSystemRoot(void)
{
  if ( RtlGetCurrentServiceSessionId() )
    return (PWSTR)((char *)NtCurrentPeb()->SharedData + 30);
  else
    return (PWSTR)2147352624;
}
