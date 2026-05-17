/*
 * XREFs of _RtlpLoadLanguageConfigList@12 @ 0x4B2ACFED
 * Callers:
 *     _RtlpMuiRegLoadRegistryInfo@8 @ 0x4B2ACDB0 (_RtlpMuiRegLoadRegistryInfo@8.c)
 *     _InitializeTEBUserLangList@8 @ 0x4B2D3E35 (_InitializeTEBUserLangList@8.c)
 *     _RtlpInitializeUserList@4 @ 0x4B2D6661 (_RtlpInitializeUserList@4.c)
 * Callees:
 *     _OpenGlobalizationUserSettingsKey@12 @ 0x4B2AD6F6 (_OpenGlobalizationUserSettingsKey@12.c)
 *     _RtlpPopulateLanguageConfigList@12 @ 0x4B2AD962 (_RtlpPopulateLanguageConfigList@12.c)
 *     _RtlpMuiRegCreateLanguageConfigList@4 @ 0x4B2ADA68 (_RtlpMuiRegCreateLanguageConfigList@4.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwOpenKey@12 @ 0x4B2F2A80 (_ZwOpenKey@12.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 *     _RtlpHasMachineUILock@8 @ 0x4B36ABB1 (_RtlpHasMachineUILock@8.c)
 *     _RtlpLoadPolicyLanguageSpec@16 @ 0x4B36AC26 (_RtlpLoadPolicyLanguageSpec@16.c)
 */

int __fastcall RtlpLoadLanguageConfigList(int a1, int *a2, int a3)
{
  int v5; // eax
  int v6; // esi
  bool v7; // zf
  int LanguageConfigList; // eax
  int v10; // eax
  int v11; // eax
  int v12; // ebx
  HANDLE Handle; // [esp+Ch] [ebp-9Ch] BYREF
  char v14; // [esp+13h] [ebp-95h] BYREF
  HANDLE v15; // [esp+14h] [ebp-94h] BYREF
  char v16; // [esp+1Bh] [ebp-8Dh] BYREF
  HANDLE v17; // [esp+1Ch] [ebp-8Ch] BYREF
  UNICODE_STRING DestinationString; // [esp+20h] [ebp-88h] BYREF
  char v19[4]; // [esp+28h] [ebp-80h] BYREF
  int v20; // [esp+2Ch] [ebp-7Ch]
  _DWORD v21[6]; // [esp+30h] [ebp-78h] BYREF
  _DWORD v22[6]; // [esp+48h] [ebp-60h] BYREF
  _DWORD v23[6]; // [esp+60h] [ebp-48h] BYREF
  _DWORD v24[6]; // [esp+78h] [ebp-30h] BYREF
  _DWORD v25[6]; // [esp+90h] [ebp-18h] BYREF

  v20 = 0;
  Handle = 0;
  v17 = 0;
  v15 = 0;
  if ( a2 && a3 )
  {
    v20 = *a2;
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\Software\\Policies\\Microsoft\\MUI\\Settings");
    v21[0] = 24;
    v21[2] = &DestinationString;
    v21[1] = 0;
    v21[3] = 64;
    v21[4] = 0;
    v21[5] = 0;
    if ( (int)ZwOpenKey(&Handle, 131097, v21) >= 0 )
    {
      v6 = RtlpLoadPolicyLanguageSpec(&v16, v19);
      if ( v6 >= 0 )
        goto LABEL_13;
      if ( a1 == 8 )
      {
        v14 = 0;
        if ( !RtlpHasMachineUILock(Handle, &v14) && v14 == 1 )
          a1 = 4;
      }
      NtClose(Handle);
      Handle = 0;
    }
    if ( (int)OpenGlobalizationUserSettingsKey(&v15) < 0 )
      v15 = 0;
    if ( a1 != 8 )
    {
      if ( a1 == 4 )
      {
        if ( v15 )
        {
          RtlInitUnicodeString(&DestinationString, L"Control Panel\\Desktop\\MuiCached\\MachineLanguageConfiguration");
          Handle = 0;
          v24[4] = 0;
          v24[5] = 0;
          v24[1] = v15;
          v24[2] = &DestinationString;
          v24[0] = 24;
          v24[3] = 64;
          v10 = ZwOpenKey(&Handle, 131097, v24);
        }
        else
        {
          v10 = -1073741772;
        }
        if ( v10 < 0 )
        {
          RtlInitUnicodeString(
            &DestinationString,
            L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings\\LanguageConfiguration");
          Handle = 0;
          v25[1] = 0;
          v25[4] = 0;
          v25[5] = 0;
          v25[2] = &DestinationString;
          v25[0] = 24;
          v25[3] = 64;
          v11 = ZwOpenKey(&Handle, 131097, v25);
          v6 = v11;
          if ( v11 < 0 )
          {
            v7 = v11 == -1073741772;
LABEL_11:
            if ( !v7 )
              goto LABEL_13;
            goto LABEL_12;
          }
        }
      }
      goto LABEL_28;
    }
    if ( !v15 )
    {
LABEL_12:
      v6 = 0;
      goto LABEL_13;
    }
    RtlInitUnicodeString(&DestinationString, L"Software\\Policies\\Microsoft\\Control Panel\\Desktop");
    v22[4] = 0;
    v22[5] = 0;
    v22[1] = v15;
    v22[2] = &DestinationString;
    v22[0] = 24;
    v22[3] = 64;
    if ( (int)ZwOpenKey(&v17, 131097, v22) < 0 || (v6 = RtlpLoadPolicyLanguageSpec(&v16, v19), v6 < 0) )
    {
      RtlInitUnicodeString(&DestinationString, L"Control Panel\\Desktop\\LanguageConfiguration");
      Handle = 0;
      v23[4] = 0;
      v23[5] = 0;
      v23[1] = v15;
      v23[2] = &DestinationString;
      v23[0] = 24;
      v23[3] = 64;
      v5 = ZwOpenKey(&Handle, 131097, v23);
      v6 = v5;
      if ( v5 < 0 )
      {
        v7 = v5 == -1073741772;
        goto LABEL_11;
      }
LABEL_28:
      v6 = RtlpPopulateLanguageConfigList(a3);
    }
  }
  else
  {
    v6 = -1073741811;
  }
LABEL_13:
  if ( Handle )
    NtClose(Handle);
  if ( v17 )
    NtClose(v17);
  if ( v15 )
    NtClose(v15);
  if ( v6 >= 0 )
  {
    if ( *a2 )
      return v6;
    LanguageConfigList = RtlpMuiRegCreateLanguageConfigList(1);
    *a2 = LanguageConfigList;
    if ( LanguageConfigList )
      return v6;
    v12 = v20;
    v6 = -1073741801;
LABEL_45:
    *a2 = v12;
    return v6;
  }
  if ( a2 )
  {
    v12 = v20;
    if ( *a2 != v20 )
    {
      if ( *a2 )
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, *a2);
      goto LABEL_45;
    }
  }
  return v6;
}
