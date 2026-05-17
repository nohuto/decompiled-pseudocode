/*
 * XREFs of _RtlpGetDeviceFamilyInfoEnum@12 @ 0x4B2EB980
 * Callers:
 *     _RtlGetDeviceFamilyInfoEnum@12 @ 0x4B2EB970 (_RtlGetDeviceFamilyInfoEnum@12.c)
 *     _RtlConvertDeviceFamilyInfoToString@16 @ 0x4B334FA0 (_RtlConvertDeviceFamilyInfoToString@16.c)
 * Callees:
 *     _RtlGetVersion@4 @ 0x4B2AFEF0 (_RtlGetVersion@4.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwOpenKey@12 @ 0x4B2F2A80 (_ZwOpenKey@12.c)
 *     _NtQueryLicenseValue@20 @ 0x4B2F3EB0 (_NtQueryLicenseValue@20.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 *     ReadUlongFromKey @ 0x4B334F29 (ReadUlongFromKey.c)
 */

NTSTATUS __stdcall RtlpGetDeviceFamilyInfoEnum(_QWORD *a1, int *a2, int *a3)
{
  NTSTATUS result; // eax
  unsigned __int64 v4; // rax
  int v5; // [esp+10h] [ebp-158h] BYREF
  HANDLE Handle; // [esp+14h] [ebp-154h] BYREF
  UNICODE_STRING DestinationString; // [esp+18h] [ebp-150h] BYREF
  int v8; // [esp+20h] [ebp-148h] BYREF
  _QWORD *v9; // [esp+24h] [ebp-144h] BYREF
  int v10; // [esp+28h] [ebp-140h] BYREF
  int v11; // [esp+2Ch] [ebp-13Ch]
  UNICODE_STRING *p_DestinationString; // [esp+30h] [ebp-138h]
  int v13; // [esp+34h] [ebp-134h]
  int v14; // [esp+38h] [ebp-130h]
  int v15; // [esp+3Ch] [ebp-12Ch]
  _DWORD v16[3]; // [esp+40h] [ebp-128h] BYREF
  unsigned int v17; // [esp+4Ch] [ebp-11Ch]

  result = (NTSTATUS)a1;
  v9 = a1;
  if ( a1 )
  {
    *(_DWORD *)&DestinationString.Length = 0;
    DestinationString.Buffer = 0;
    Handle = 0;
    v8 = 0;
    v5 = 0;
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion");
    v10 = 24;
    p_DestinationString = &DestinationString;
    v11 = 0;
    v13 = 64;
    v14 = 0;
    v15 = 0;
    if ( (int)ZwOpenKey(&Handle, 131353, &v10) >= 0 )
    {
      if ( ReadUlongFromKey(Handle, L"UBR", &v8) >= 0 )
        v5 = v8;
      NtClose(Handle);
    }
    v16[0] = 284;
    RtlGetVersion((int)v16);
    v4 = (unsigned __int64)v17 << 16;
    result = (NTSTATUS)v9;
    *v9 = (unsigned int)v5 + __PAIR64__(HIDWORD(v4) + v16[2] + (v16[1] << 16), v17 << 16);
  }
  if ( a2 )
  {
    *(_DWORD *)&DestinationString.Length = 0;
    DestinationString.Buffer = 0;
    v5 = 3;
    RtlInitUnicodeString(&DestinationString, L"Kernel-OneCore-DeviceFamilyID");
    NtQueryLicenseValue(&DestinationString, &v8, &v5, 4, &v9);
    result = v5;
    *a2 = v5;
  }
  if ( a3 )
  {
    *(_DWORD *)&DestinationString.Length = 0;
    DestinationString.Buffer = 0;
    Handle = 0;
    v5 = 0;
    *a3 = 0;
    RtlInitUnicodeString(
      &DestinationString,
      L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\OEM");
    v10 = 24;
    p_DestinationString = &DestinationString;
    v11 = 0;
    v13 = 64;
    v14 = 0;
    v15 = 0;
    result = ZwOpenKey(&Handle, 131353, &v10);
    if ( result >= 0 )
    {
      if ( ReadUlongFromKey(Handle, L"DeviceForm", &v5) >= 0 )
        *a3 = v5;
      return NtClose(Handle);
    }
  }
  return result;
}
