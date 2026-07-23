/*
 * XREFs of _GetOverlayRootFolder@12 @ 0x4B2D1DAC
 * Callers:
 *     _BuildOverlayFilePath@20 @ 0x4B2B8CDD (_BuildOverlayFilePath@20.c)
 * Callees:
 *     _RtlAppendUnicodeToString@8 @ 0x4B2BFE00 (_RtlAppendUnicodeToString@8.c)
 *     _RtlGetPersistedStateLocation@28 @ 0x4B2E5BB0 (_RtlGetPersistedStateLocation@28.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwOpenKey@12 @ 0x4B2F2A80 (_ZwOpenKey@12.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 *     _QueryRegistryValue@20 @ 0x4B38B5D1 (_QueryRegistryValue@20.c)
 */

int __fastcall GetOverlayRootFolder(const WCHAR *a1, unsigned int *a2, _WORD *a3)
{
  unsigned int v4; // eax
  NTSTATUS appended; // esi
  int RegistryValue; // eax
  unsigned int v8; // ecx
  HANDLE KeyHandle; // [esp+Ch] [ebp-43Ch] BYREF
  _UNICODE_STRING Destination; // [esp+10h] [ebp-438h] BYREF
  unsigned int v11; // [esp+18h] [ebp-430h]
  PCWSTR Source; // [esp+1Ch] [ebp-42Ch] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+20h] [ebp-428h] BYREF
  _UNICODE_STRING DestinationString; // [esp+38h] [ebp-410h] BYREF
  WCHAR TargetPath[256]; // [esp+40h] [ebp-408h] BYREF
  char v16; // [esp+240h] [ebp-208h] BYREF

  Source = a1;
  if ( !a2 || !a1 )
    return -1073741811;
  v4 = *a2;
  KeyHandle = 0;
  v11 = v4;
  RtlInitUnicodeString(&DestinationString, L"Latest");
  *(_DWORD *)&Destination.Length = 0x2000000;
  Destination.Buffer = (wchar_t *)&v16;
  appended = RtlAppendUnicodeToString(&Destination, L"\\Registry\\Machine\\");
  if ( appended >= 0 )
  {
    appended = RtlGetPersistedStateLocation(
                 L"LanguageOverlayKeyName",
                 0,
                 L"Software\\Microsoft\\LanguageOverlay",
                 LocationTypeRegistry,
                 TargetPath,
                 0x200u,
                 0);
    if ( appended >= 0 )
    {
      appended = RtlAppendUnicodeToString(&Destination, TargetPath);
      if ( appended >= 0 )
      {
        appended = RtlAppendUnicodeToString(&Destination, L"\\");
        if ( appended >= 0 )
        {
          appended = RtlAppendUnicodeToString(&Destination, L"OverlayPackages");
          if ( appended >= 0 )
          {
            appended = RtlAppendUnicodeToString(&Destination, L"\\");
            if ( appended >= 0 )
            {
              appended = RtlAppendUnicodeToString(&Destination, Source);
              if ( appended >= 0 )
              {
                ObjectAttributes.Length = 24;
                ObjectAttributes.ObjectName = &Destination;
                ObjectAttributes.RootDirectory = 0;
                ObjectAttributes.Attributes = 64;
                ObjectAttributes.SecurityDescriptor = 0;
                ObjectAttributes.SecurityQualityOfService = 0;
                appended = NtOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
                if ( appended >= 0 )
                {
                  RegistryValue = QueryRegistryValue((int)&Source, a3, (int)a2);
                  v8 = v11;
                  appended = RegistryValue;
                  if ( RegistryValue >= 0 )
                  {
                    if ( Source == (PCWSTR)1 )
                    {
                      if ( *a2 > v11 )
                        appended = -1073741789;
                      else
                        a3[(*a2 >> 1) - 1] = 0;
                      if ( appended >= 0 )
                        goto LABEL_11;
                    }
                    else
                    {
                      appended = -1073741476;
                    }
                  }
                  if ( a3 && v8 >= 2 )
                    *a3 = 0;
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_11:
  if ( KeyHandle )
    NtClose(KeyHandle);
  return appended;
}
