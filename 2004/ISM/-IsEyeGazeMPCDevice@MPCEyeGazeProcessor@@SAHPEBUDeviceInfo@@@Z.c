/*
 * XREFs of ?IsEyeGazeMPCDevice@MPCEyeGazeProcessor@@SAHPEBUDeviceInfo@@@Z @ 0x180197470
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MPCEyeGazeProcessor::IsEyeGazeMPCDevice(const struct DeviceInfo *a1)
{
  return (*((_DWORD *)a1 + 1) >> 21) & 1;
}
