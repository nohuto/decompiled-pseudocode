/*
 * XREFs of _RtlpSetMachineUILanguagesImmediate@8 @ 0x4B35519D
 * Callers:
 *     _RtlpSetPreferredUILanguages@12 @ 0x4B3552F0 (_RtlpSetPreferredUILanguages@12.c)
 * Callees:
 *     _OpenGlobalizationUserSettingsKey@12 @ 0x4B2AD6F6 (_OpenGlobalizationUserSettingsKey@12.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwCreateKey@28 @ 0x4B2F2B50 (_ZwCreateKey@28.c)
 *     _ZwSetValueKey@24 @ 0x4B2F2F80 (_ZwSetValueKey@24.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 */

int __stdcall RtlpSetMachineUILanguagesImmediate(int a1, int a2)
{
  int Key; // esi
  int v4; // [esp+Ch] [ebp-2Ch] BYREF
  HANDLE v5; // [esp+10h] [ebp-28h]
  UNICODE_STRING *p_DestinationString; // [esp+14h] [ebp-24h]
  int v7; // [esp+18h] [ebp-20h]
  int v8; // [esp+1Ch] [ebp-1Ch]
  int v9; // [esp+20h] [ebp-18h]
  UNICODE_STRING DestinationString; // [esp+24h] [ebp-14h] BYREF
  HANDLE v11; // [esp+2Ch] [ebp-Ch] BYREF
  HANDLE v12; // [esp+30h] [ebp-8h] BYREF
  HANDLE Handle; // [esp+34h] [ebp-4h] BYREF

  v12 = 0;
  v11 = 0;
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings");
  v4 = 24;
  p_DestinationString = &DestinationString;
  v5 = 0;
  v7 = 64;
  v8 = 0;
  v9 = 0;
  Handle = 0;
  Key = ZwCreateKey((int)&Handle, 983103, (int)&v4, 0, 0, 0, 0);
  if ( Key >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"PreferredUILanguages");
    Key = ZwSetValueKey((int)Handle, (int)&DestinationString, 0, 7, a2, HIWORD(a1));
    if ( Key >= 0 && OpenGlobalizationUserSettingsKey((void *)0x2000000, (int)&v11) >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"Control Panel\\Desktop\\MuiCached");
      v5 = v11;
      p_DestinationString = &DestinationString;
      v4 = 24;
      v7 = 64;
      v8 = 0;
      v9 = 0;
      Key = ZwCreateKey((int)&v12, 983103, (int)&v4, 0, 0, 1, 0);
      if ( Key >= 0 )
      {
        RtlInitUnicodeString(&DestinationString, L"MachinePreferredUILanguages");
        Key = ZwSetValueKey((int)v12, (int)&DestinationString, 0, 7, a2, HIWORD(a1));
      }
    }
  }
  if ( Handle )
  {
    NtClose(Handle);
    Handle = 0;
  }
  if ( v12 )
  {
    NtClose(v12);
    v12 = 0;
  }
  if ( v11 )
    NtClose(v11);
  return Key;
}
