/*
 * XREFs of _ZwDeviceIoControlFile@40 @ 0x4B2F29D0
 * Callers:
 *     _GetProcessIptTrace@12 @ 0x4B3898E3 (_GetProcessIptTrace@12.c)
 *     _GetProcessIptTraceSize@8 @ 0x4B3899B0 (_GetProcessIptTraceSize@8.c)
 *     _RtlQueryVolumeDiskSpeedPolicy@8 @ 0x4B389AA1 (_RtlQueryVolumeDiskSpeedPolicy@8.c)
 *     _RtlpQueryDiskWriteConstraintPolicyByHandle@8 @ 0x4B389E27 (_RtlpQueryDiskWriteConstraintPolicyByHandle@8.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

int __stdcall ZwDeviceIoControlFile(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
  return Wow64SystemServiceCall();
}
