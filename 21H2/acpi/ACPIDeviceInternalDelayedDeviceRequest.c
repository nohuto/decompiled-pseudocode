/*
 * XREFs of ACPIDeviceInternalDelayedDeviceRequest @ 0x1C0008A3C
 * Callers:
 *     ACPIBuildProcessDevicePhasePsc @ 0x1C0008DF0 (ACPIBuildProcessDevicePhasePsc.c)
 * Callees:
 *     ACPIDeviceInitializePowerRequest @ 0x1C0008B20 (ACPIDeviceInitializePowerRequest.c)
 *     WPP_RECORDER_SF_qdqss @ 0x1C000D718 (WPP_RECORDER_SF_qdqss.c)
 */

__int64 __fastcall ACPIDeviceInternalDelayedDeviceRequest(_QWORD *a1, unsigned int a2)
{
  char v3; // r10
  void *v4; // rcx
  void *v6; // r8
  __int64 v7; // rax
  __int64 result; // rax

  v3 = 0;
  v4 = &unk_1C006FB8B;
  v6 = &unk_1C006FB8B;
  if ( a1 )
  {
    v7 = a1[1];
    v3 = (char)a1;
    if ( (v7 & 0x200000000000LL) != 0 )
    {
      v4 = (void *)a1[76];
      if ( (v7 & 0x400000000000LL) != 0 )
        v6 = (void *)a1[77];
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qdqss(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      10,
      23,
      (__int64)&WPP_a8f7cd0141bb322231380cc24ac7ac02_Traceguids,
      0,
      a2 - 1,
      v3,
      (__int64)v4,
      (__int64)v6);
  result = ACPIDeviceInitializePowerRequest(a1, a2, 0LL, 0LL, 0, 0, 9);
  if ( (_DWORD)result == -1073741802 )
    return 259LL;
  return result;
}
