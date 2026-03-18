/*
 * XREFs of HalpRegisterKdSupportFunctions @ 0x140AF3174
 * Callers:
 *     HalpDbgInitSystem @ 0x140A54B30 (HalpDbgInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 *HalpRegisterKdSupportFunctions()
{
  __int64 *result; // rax

  off_140C01C60[0] = (__int64 (__fastcall *)())HalpCheckPowerButton;
  off_140C01C48[0] = (__int64 (__fastcall *)())HalpKdSetupDebuggingDevice;
  off_140C01C58[0] = (__int64 (__fastcall *)())HalAcpiGetTable;
  off_140C01C70[0] = (__int64 (__fastcall *)())HalpMapPhysicalMemoryWriteThrough64;
  off_140C01C78 = (__int64 (__fastcall *)())HalpUnmapVirtualAddress;
  qword_140C01C80 = (__int64)HalpKdReadPCIConfig;
  qword_140C01C88 = (__int64)HalpKdWritePCIConfig;
  off_140C01E78[0] = (__int64 (__fastcall *)())HalpKdEnumerateDebuggingDevices;
  off_140C01C50[0] = (__int64 (__fastcall *)())HalpKdReleaseDebuggingDevice;
  off_140C01D58 = (__int64 (__fastcall *)())HalpKdReleaseDebuggingDevice;
  off_140C01FA8[0] = (__int64 (__fastcall *)())HalpWatchdogDelayExpiration;
  result = &qword_140C4A188;
  qword_140C4A190 = (__int64)&qword_140C4A188;
  qword_140C4A188 = (__int64)&qword_140C4A188;
  off_140C01D50[0] = (__int64 (__fastcall *)())HalpKdSetupDebuggingDevice;
  return result;
}
