/*
 * XREFs of _RtlLocalTimeToSystemTime@8 @ 0x4B344D10
 * Callers:
 *     <none>
 * Callees:
 *     _NtQuerySystemInformation@16 @ 0x4B2F2CE0 (_NtQuerySystemInformation@16.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

NTSTATUS __stdcall RtlLocalTimeToSystemTime(PLARGE_INTEGER LocalTime, PLARGE_INTEGER SystemTime)
{
  NTSTATUS result; // eax
  unsigned int v3; // ecx
  _BYTE SystemInformation[16]; // [esp+4h] [ebp-34h] BYREF
  __int64 v5; // [esp+14h] [ebp-24h]

  result = NtQuerySystemInformation(SystemTimeOfDayInformation, SystemInformation, 0x30u, 0);
  if ( result >= 0 )
  {
    v3 = v5 + LocalTime->LowPart;
    SystemTime->HighPart = (unsigned __int64)(v5 + LocalTime->QuadPart) >> 32;
    result = 0;
    SystemTime->LowPart = v3;
  }
  return result;
}
