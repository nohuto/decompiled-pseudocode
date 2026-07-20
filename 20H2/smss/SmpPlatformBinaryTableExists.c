/*
 * XREFs of SmpPlatformBinaryTableExists @ 0x140014C28
 * Callers:
 *     SmpLoadDataFromRegistry @ 0x1400094D0 (SmpLoadDataFromRegistry.c)
 * Callees:
 *     __security_check_cookie @ 0x14000E4B0 (__security_check_cookie.c)
 */

bool SmpPlatformBinaryTableExists()
{
  ULONG ReturnLength; // [rsp+20h] [rbp-38h] BYREF
  _DWORD SystemInformation[6]; // [rsp+28h] [rbp-30h] BYREF

  SystemInformation[3] = 0;
  SystemInformation[0] = 1094930505;
  SystemInformation[1] = 1;
  SystemInformation[2] = 1414546007;
  return NtQuerySystemInformation(SystemFirmwareTableInformation, SystemInformation, 0x14u, &ReturnLength) == -1073741789;
}
