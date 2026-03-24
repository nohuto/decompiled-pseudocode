/*
 * XREFs of HalpRegisterKdSupportFunctions @ 0x140A38FA0
 * Callers:
 *     HalpDbgInitSystem @ 0x1409A1610 (HalpDbgInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 *HalpRegisterKdSupportFunctions()
{
  __int64 *result; // rax

  off_140C00610[0] = (__int64 (__fastcall *)())HalpCheckPowerButton;
  off_140C005F8[0] = (__int64 (__fastcall *)())HalpKdSetupDebuggingDevice;
  off_140C00608[0] = (__int64 (__fastcall *)())HalAcpiGetTable;
  off_140C00620[0] = (__int64 (__fastcall *)())HalpMapPhysicalMemoryWriteThrough64;
  off_140C00628 = (__int64 (__fastcall *)())HalpUnmapVirtualAddress;
  qword_140C00630 = (__int64)HalpKdReadPCIConfig;
  qword_140C00638 = (__int64)HalpKdWritePCIConfig;
  off_140C00828[0] = (__int64 (__fastcall *)())HalpKdEnumerateDebuggingDevices;
  off_140C00600[0] = (__int64 (__fastcall *)())HalpKdReleaseDebuggingDevice;
  off_140C00708 = (__int64 (__fastcall *)())HalpKdReleaseDebuggingDevice;
  off_140C00958[0] = (__int64 (__fastcall *)())HalpWatchdogDelayExpiration;
  result = &qword_140C48D68;
  qword_140C48D70 = (__int64)&qword_140C48D68;
  qword_140C48D68 = (__int64)&qword_140C48D68;
  off_140C00700[0] = (__int64 (__fastcall *)())HalpKdSetupDebuggingDevice;
  return result;
}
