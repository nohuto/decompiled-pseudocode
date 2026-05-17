/*
 * XREFs of _RtlpGetUserOrMachineUILanguage4NLS@12 @ 0x4B36A9A0
 * Callers:
 *     _RtlLcidToLocaleName@16 @ 0x4B2D5A10 (_RtlLcidToLocaleName@16.c)
 *     _RtlpMatchUILanguage@4 @ 0x4B36349D (_RtlpMatchUILanguage@4.c)
 * Callees:
 *     _LdrpQueryValueKey@24 @ 0x4B2AD60A (_LdrpQueryValueKey@24.c)
 *     _OpenGlobalizationUserSettingsKey@12 @ 0x4B2AD6F6 (_OpenGlobalizationUserSettingsKey@12.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwOpenKey@12 @ 0x4B2F2A80 (_ZwOpenKey@12.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 */

int __stdcall RtlpGetUserOrMachineUILanguage4NLS(int a1, void *a2, unsigned int *a3)
{
  int v3; // esi
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  unsigned int v7; // edi
  HANDLE Handle; // [esp+10h] [ebp-30h] BYREF
  HANDLE v10; // [esp+14h] [ebp-2Ch] BYREF
  int v11; // [esp+18h] [ebp-28h] BYREF
  int v12; // [esp+1Ch] [ebp-24h] BYREF
  UNICODE_STRING DestinationString; // [esp+20h] [ebp-20h] BYREF
  int v14; // [esp+28h] [ebp-18h] BYREF
  HANDLE v15; // [esp+2Ch] [ebp-14h]
  UNICODE_STRING *p_DestinationString; // [esp+30h] [ebp-10h]
  int v17; // [esp+34h] [ebp-Ch]
  int v18; // [esp+38h] [ebp-8h]
  int v19; // [esp+3Ch] [ebp-4h]

  v12 = 7;
  v10 = 0;
  Handle = 0;
  v11 = 0;
  v3 = OpenGlobalizationUserSettingsKey((void *)0x2000000, (int)&v10);
  if ( v3 < 0 )
    goto LABEL_18;
  if ( a1 == 1 )
  {
    RtlInitUnicodeString(&DestinationString, L"Control Panel\\Desktop");
    v14 = 24;
    v15 = v10;
  }
  else
  {
    RtlInitUnicodeString(&DestinationString, L"Control Panel\\Desktop\\MuiCached");
    v15 = v10;
    p_DestinationString = &DestinationString;
    v14 = 24;
    v17 = 64;
    v18 = 0;
    v19 = 0;
    v3 = ZwOpenKey((int)&Handle, 131097, (int)&v14);
    if ( v3 >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"MachinePreferredUILanguages");
      v3 = LdrpQueryValueKey((int)Handle, (int)&DestinationString, &v12, 0, (unsigned int *)&v11, v5);
      if ( v3 >= 0 )
        goto LABEL_10;
    }
    if ( v3 == -2147483643 )
      goto LABEL_10;
    NtClose(Handle);
    Handle = 0;
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings");
    Handle = 0;
    v14 = 24;
    v15 = 0;
  }
  v17 = 64;
  p_DestinationString = &DestinationString;
  v18 = 0;
  v19 = 0;
  v3 = ZwOpenKey((int)&Handle, 131097, (int)&v14);
  if ( v3 < 0 )
    goto LABEL_18;
  RtlInitUnicodeString(&DestinationString, L"PreferredUILanguages");
  v3 = LdrpQueryValueKey((int)Handle, (int)&DestinationString, &v12, 0, (unsigned int *)&v11, v6);
LABEL_10:
  if ( v3 != -1073741772 && v11 )
  {
    if ( v3 == -2147483643 )
    {
      v7 = (unsigned int)(v11 + 1) >> 1;
      if ( !a2 )
      {
        v3 = 0;
        *a3 = v7;
        goto LABEL_18;
      }
      if ( *a3 < v7 )
      {
        v3 = -1073741789;
LABEL_17:
        *a3 = v7;
        goto LABEL_18;
      }
      v3 = LdrpQueryValueKey((int)Handle, (int)&DestinationString, &v12, a2, (unsigned int *)&v11, v4);
      if ( v3 >= 0 )
      {
        if ( v12 == 7 )
          goto LABEL_17;
        v3 = -1073741772;
      }
    }
    else
    {
      v3 = -1073741772;
    }
  }
LABEL_18:
  if ( v10 )
  {
    NtClose(v10);
    v10 = 0;
  }
  if ( Handle )
    NtClose(Handle);
  return v3;
}
