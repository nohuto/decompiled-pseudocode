/*
 * XREFs of _RtlpLoadInstallLanguageFallback@12 @ 0x4B2ACC28
 * Callers:
 *     __RtlpMuiRegLoadInstalled@16 @ 0x4B2AC2C1 (__RtlpMuiRegLoadInstalled@16.c)
 *     _RtlpGetSystemDefaultUILanguage@8 @ 0x4B2D5D90 (_RtlpGetSystemDefaultUILanguage@8.c)
 *     __RtlpMuiRegPopulateBaseLanguages@20 @ 0x4B36C81E (__RtlpMuiRegPopulateBaseLanguages@20.c)
 * Callees:
 *     _LdrpQueryValueKey@24 @ 0x4B2AD60A (_LdrpQueryValueKey@24.c)
 *     _MuiRegAllocArray @ 0x4B2AD7D8 (_MuiRegAllocArray.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlCultureNameToLCID@8 @ 0x4B2D56B0 (_RtlCultureNameToLCID@8.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwOpenKey@12 @ 0x4B2F2A80 (_ZwOpenKey@12.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 */

NTSTATUS __fastcall RtlpLoadInstallLanguageFallback(int a1, _WORD *a2, _WORD *a3)
{
  WCHAR *v4; // ebx
  WCHAR *v5; // eax
  NTSTATUS v6; // esi
  int v7; // ecx
  const WCHAR *v9; // edi
  WCHAR v10; // cx
  WCHAR *v11; // eax
  size_t v12; // [esp-4h] [ebp-44h]
  HANDLE KeyHandle; // [esp+Ch] [ebp-34h] BYREF
  DWORD Lcid; // [esp+10h] [ebp-30h] BYREF
  int v15; // [esp+14h] [ebp-2Ch] BYREF
  _WORD *v16; // [esp+18h] [ebp-28h]
  int v17; // [esp+1Ch] [ebp-24h] BYREF
  _UNICODE_STRING DestinationString; // [esp+20h] [ebp-20h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+28h] [ebp-18h] BYREF

  v16 = a2;
  v4 = 0;
  KeyHandle = 0;
  if ( a1 && a2 && a3 )
  {
    v5 = (WCHAR *)MuiRegAllocArray();
    v4 = v5;
    if ( v5 )
    {
      LODWORD(v12) = 344;
      memset(v5, 0, v12);
      v15 = 0;
      *a2 = 0;
      *a3 = 0;
      RtlInitUnicodeString(
        &DestinationString,
        L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NLS\\Language");
      ObjectAttributes.Length = 24;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.RootDirectory = 0;
      ObjectAttributes.Attributes = 64;
      ObjectAttributes.SecurityDescriptor = 0;
      ObjectAttributes.SecurityQualityOfService = 0;
      v6 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
      if ( v6 >= 0 )
      {
        RtlInitUnicodeString(&DestinationString, L"InstallLanguageFallback");
        v17 = 4;
        v6 = LdrpQueryValueKey(KeyHandle, &DestinationString, &v15, v4, &v17, v7);
        if ( v6 >= 0 )
        {
          if ( v15 != 1 )
            goto LABEL_18;
          v9 = v4;
          v10 = *v4;
          if ( *v4 )
          {
            while ( 1 )
            {
              v11 = (WCHAR *)(v9 + 1);
              if ( v10 == 44 )
                break;
              ++v9;
              v10 = *v11;
              if ( !*v11 )
                goto LABEL_23;
            }
            *v9++ = 0;
            v10 = *v11;
          }
          if ( v10 )
          {
            do
            {
              if ( v10 != 32 )
                break;
              v10 = *++v9;
            }
            while ( *v9 );
          }
LABEL_23:
          RtlInitUnicodeString(&DestinationString, v4);
          if ( RtlCultureNameToLCID(&DestinationString, &Lcid) )
          {
            *v16 = Lcid;
            if ( *v9 )
            {
              RtlInitUnicodeString(&DestinationString, v9);
              if ( RtlCultureNameToLCID(&DestinationString, &Lcid) )
              {
                *a3 = Lcid;
              }
              else
              {
                v6 = -1073741823;
                *v16 = 0;
              }
            }
          }
          else
          {
LABEL_18:
            v6 = -1073741823;
          }
        }
      }
    }
    else
    {
      v6 = -1073741801;
    }
  }
  else
  {
    v6 = -1073741811;
  }
  if ( KeyHandle )
    NtClose(KeyHandle);
  if ( v4 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v4);
  return v6;
}
