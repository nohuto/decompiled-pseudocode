/*
 * XREFs of RtlpGetUserOrMachineUILanguage4NLS @ 0x180103AF0
 * Callers:
 *     RtlLcidToLocaleName @ 0x18003B2F0 (RtlLcidToLocaleName.c)
 *     RtlpMatchUILanguage @ 0x1800FD69C (RtlpMatchUILanguage.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x18003BA40 (RtlInitUnicodeString.c)
 *     LdrpQueryValueKey @ 0x18003F6C0 (LdrpQueryValueKey.c)
 *     OpenGlobalizationUserSettingsKey @ 0x18006F4B4 (OpenGlobalizationUserSettingsKey.c)
 *     NtClose @ 0x18009D290 (NtClose.c)
 *     NtOpenKey @ 0x18009D2F0 (NtOpenKey.c)
 */

__int64 __fastcall RtlpGetUserOrMachineUILanguage4NLS(int a1, void *a2, unsigned __int64 *a3)
{
  int v6; // ebx
  unsigned __int64 v7; // rax
  unsigned int v8; // edi
  int v10; // [rsp+30h] [rbp-19h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-11h]
  HANDLE v12; // [rsp+40h] [rbp-9h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-1h] BYREF
  int v14; // [rsp+58h] [rbp+Fh]
  HANDLE v15; // [rsp+60h] [rbp+17h]
  UNICODE_STRING *p_DestinationString; // [rsp+68h] [rbp+1Fh]
  int v17; // [rsp+70h] [rbp+27h]
  __int128 v18; // [rsp+78h] [rbp+2Fh]
  unsigned int v19; // [rsp+C8h] [rbp+7Fh] BYREF

  v12 = 0LL;
  Handle = 0LL;
  v19 = 0;
  v10 = 7;
  v6 = OpenGlobalizationUserSettingsKey(0x2000000u, (__int64)a2, (__int64)&v12);
  if ( v6 < 0 )
    goto LABEL_21;
  if ( a1 == 1 )
  {
    RtlInitUnicodeString(&DestinationString, L"Control Panel\\Desktop");
    v15 = v12;
  }
  else
  {
    RtlInitUnicodeString(&DestinationString, L"Control Panel\\Desktop\\MuiCached");
    v15 = v12;
    v14 = 48;
    p_DestinationString = &DestinationString;
    v17 = 64;
    v18 = 0LL;
    v6 = NtOpenKey();
    if ( v6 >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"MachinePreferredUILanguages");
      v6 = LdrpQueryValueKey((__int64)Handle, (__int64)&DestinationString, &v10, 0LL, &v19);
      if ( v6 >= 0 )
        goto LABEL_10;
    }
    if ( v6 == -2147483643 )
      goto LABEL_10;
    NtClose(Handle);
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings");
    Handle = 0LL;
    v15 = 0LL;
  }
  v14 = 48;
  p_DestinationString = &DestinationString;
  v17 = 64;
  v18 = 0LL;
  v6 = NtOpenKey();
  if ( v6 < 0 )
    goto LABEL_21;
  RtlInitUnicodeString(&DestinationString, L"PreferredUILanguages");
  v6 = LdrpQueryValueKey((__int64)Handle, (__int64)&DestinationString, &v10, 0LL, &v19);
LABEL_10:
  if ( v6 != -1073741772 && v19 )
  {
    if ( v6 != -2147483643 )
    {
LABEL_20:
      v6 = -1073741772;
      goto LABEL_21;
    }
    v7 = v19 + 1;
    v8 = (unsigned int)v7 >> 1;
    if ( !a2 )
    {
      v6 = 0;
LABEL_15:
      *a3 = v8;
      goto LABEL_21;
    }
    if ( *a3 < v7 >> 1 )
    {
      v6 = -1073741789;
      goto LABEL_15;
    }
    v6 = LdrpQueryValueKey((__int64)Handle, (__int64)&DestinationString, &v10, a2, &v19);
    if ( v6 >= 0 )
    {
      if ( v10 == 7 )
        goto LABEL_15;
      goto LABEL_20;
    }
  }
LABEL_21:
  if ( v12 )
  {
    NtClose(v12);
    v12 = 0LL;
  }
  if ( Handle )
    NtClose(Handle);
  return (unsigned int)v6;
}
