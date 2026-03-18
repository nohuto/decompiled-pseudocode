/*
 * XREFs of ACPIDeviceInternalDeviceRequest @ 0x1C00052A4
 * Callers:
 *     ACPIInitStartDevice @ 0x1C00050B0 (ACPIInitStartDevice.c)
 *     ACPIFanControl @ 0x1C00549C0 (ACPIFanControl.c)
 *     ACPIThermalStartDevice @ 0x1C008F060 (ACPIThermalStartDevice.c)
 *     ACPIFanStartDevice @ 0x1C0090820 (ACPIFanStartDevice.c)
 *     ACPIInitStopDevice @ 0x1C00AEFEC (ACPIInitStopDevice.c)
 * Callees:
 *     ACPIDeviceInitializePowerRequest @ 0x1C0008B20 (ACPIDeviceInitializePowerRequest.c)
 *     WPP_RECORDER_SF_qdqss @ 0x1C000D718 (WPP_RECORDER_SF_qdqss.c)
 */

__int64 __fastcall ACPIDeviceInternalDeviceRequest(_QWORD *a1, unsigned int a2, __int64 a3, __int64 a4, int a5)
{
  char v6; // r11
  void *v7; // rcx
  void *v9; // r10
  __int64 v12; // rax
  __int64 result; // rax

  v6 = 0;
  v7 = &unk_1C006FB8B;
  v9 = &unk_1C006FB8B;
  if ( a1 )
  {
    v12 = a1[1];
    v6 = (char)a1;
    if ( (v12 & 0x200000000000LL) != 0 )
    {
      v7 = (void *)a1[76];
      if ( (v12 & 0x400000000000LL) != 0 )
        v9 = (void *)a1[77];
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qdqss(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      10,
      24,
      (__int64)&WPP_a8f7cd0141bb322231380cc24ac7ac02_Traceguids,
      a4,
      a2 - 1,
      v6,
      (__int64)v7,
      (__int64)v9);
  result = ACPIDeviceInitializePowerRequest(a1, a2, a3, a4, 0, 0, a5);
  if ( (_DWORD)result == -1073741802 )
    return 259LL;
  return result;
}
