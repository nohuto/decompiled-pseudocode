/*
 * XREFs of ReadPointerDeviceCfgDWORDSetting @ 0x1C0010BD0
 * Callers:
 *     GetDWORDSettingValuesEx @ 0x1C0010A70 (GetDWORDSettingValuesEx.c)
 * Callees:
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C008D7C0 (Win32AllocPool.c)
 */

__int64 __fastcall ReadPointerDeviceCfgDWORDSetting(HANDLE KeyHandle, __int64 a2)
{
  const WCHAR *v3; // rdx
  _DWORD *v5; // rbx
  NTSTATUS v6; // edi
  struct _UNICODE_STRING ValueName; // [rsp+30h] [rbp-18h] BYREF
  ULONG Length; // [rsp+58h] [rbp+10h] BYREF

  Length = 16;
  v3 = *(const WCHAR **)a2;
  ValueName = 0LL;
  RtlInitUnicodeString(&ValueName, v3);
  v5 = (_DWORD *)Win32AllocPool(Length, 2020635477LL);
  if ( v5 )
  {
    v6 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, v5, Length, &Length);
    if ( v6 >= 0 && v5[1] == 4 )
      *(_DWORD *)(a2 + 12) = v5[3];
    Win32FreePool(v5);
  }
  else
  {
    return (unsigned int)-1073741595;
  }
  return (unsigned int)v6;
}
