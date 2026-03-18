/*
 * XREFs of ACPICMButtonStart @ 0x1C009058C
 * Callers:
 *     ACPICMPowerButtonStart @ 0x1C00903D0 (ACPICMPowerButtonStart.c)
 *     ACPICMExperienceButtonStart @ 0x1C00ADFD0 (ACPICMExperienceButtonStart.c)
 *     ACPICMLidStart @ 0x1C00AE120 (ACPICMLidStart.c)
 *     ACPICMSleepButtonStart @ 0x1C00AE140 (ACPICMSleepButtonStart.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0002980 (ACPIInternalGetDeviceExtension.c)
 *     ACPIInitStartDevice @ 0x1C000D5A8 (ACPIInitStartDevice.c)
 */

__int64 __fastcall ACPICMButtonStart(ULONG_PTR a1, __int64 a2, int a3)
{
  __int64 DeviceExtension; // rbx
  __int64 result; // rax

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  KeInitializeSpinLock((PKSPIN_LOCK)(DeviceExtension + 184));
  *(_DWORD *)(DeviceExtension + 200) = a3;
  result = ACPIInitStartDevice(
             a1,
             0LL,
             (void (__fastcall *)(_QWORD *, __int64, _QWORD))ACPICMButtonStartCompletion,
             a2,
             a2);
  if ( (int)result >= 0 )
    return 259LL;
  return result;
}
