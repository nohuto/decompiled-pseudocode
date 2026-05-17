/*
 * XREFs of _RtlSystemTimeToLocalTime@8 @ 0x4B344DF0
 * Callers:
 *     <none>
 * Callees:
 *     _NtQuerySystemInformation@16 @ 0x4B2F2CE0 (_NtQuerySystemInformation@16.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

NTSTATUS __stdcall RtlSystemTimeToLocalTime(_DWORD *a1, _DWORD *a2)
{
  NTSTATUS result; // eax
  int v3; // ecx
  _BYTE SystemInformation[16]; // [esp+4h] [ebp-34h] BYREF
  __int64 v5; // [esp+14h] [ebp-24h]

  result = NtQuerySystemInformation(SystemTimeOfDayInformation, SystemInformation, 0x30u, 0);
  if ( result >= 0 )
  {
    v3 = *a1 - v5;
    a2[1] = (unsigned __int64)(*(_QWORD *)a1 - v5) >> 32;
    result = 0;
    *a2 = v3;
  }
  return result;
}
