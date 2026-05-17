/*
 * XREFs of _EtwpGetCpuSpeedFromRegistry@4 @ 0x4B2F0DF4
 * Callers:
 *     _EtwpAddLogHeaderToLogFile@16 @ 0x4B2F085E (_EtwpAddLogHeaderToLogFile@16.c)
 *     _EtwpGetCpuSpeed@4 @ 0x4B307AB0 (_EtwpGetCpuSpeed@4.c)
 * Callees:
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwOpenKey@12 @ 0x4B2F2A80 (_ZwOpenKey@12.c)
 *     _ZwQueryValueKey@24 @ 0x4B2F2AD0 (_ZwQueryValueKey@24.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 */

int __thiscall EtwpGetCpuSpeedFromRegistry(_DWORD *this)
{
  int result; // eax
  int v3; // esi
  UNICODE_STRING v4; // [esp+Ch] [ebp-44h] BYREF
  UNICODE_STRING DestinationString; // [esp+14h] [ebp-3Ch] BYREF
  _BYTE v6[4]; // [esp+1Ch] [ebp-34h] BYREF
  _DWORD v7[6]; // [esp+20h] [ebp-30h] BYREF
  HANDLE Handle; // [esp+38h] [ebp-18h] BYREF
  _BYTE v9[12]; // [esp+3Ch] [ebp-14h] BYREF
  int v10; // [esp+48h] [ebp-8h]

  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\HARDWARE\\DESCRIPTION\\System\\CentralProcessor\\0");
  v7[0] = 24;
  v7[2] = &DestinationString;
  v7[1] = 0;
  v7[3] = 64;
  v7[4] = 0;
  v7[5] = 0;
  result = ZwOpenKey(&Handle, 131097, v7);
  if ( result >= 0 )
  {
    RtlInitUnicodeString(&v4, L"~MHz");
    v3 = ZwQueryValueKey(Handle, &v4, 2, v9, 16, v6);
    if ( v3 >= 0 )
      *this = v10;
    NtClose(Handle);
    return v3;
  }
  return result;
}
