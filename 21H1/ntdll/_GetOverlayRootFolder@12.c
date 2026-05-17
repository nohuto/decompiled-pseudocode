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

int __fastcall GetOverlayRootFolder(void *a1, unsigned int *a2, _WORD *a3)
{
  unsigned int v4; // eax
  int appended; // esi
  int RegistryValue; // eax
  unsigned int v8; // ecx
  HANDLE Handle; // [esp+Ch] [ebp-43Ch] BYREF
  int v10[2]; // [esp+10h] [ebp-438h] BYREF
  unsigned int v11; // [esp+18h] [ebp-430h]
  void *v12; // [esp+1Ch] [ebp-42Ch] BYREF
  _DWORD v13[6]; // [esp+20h] [ebp-428h] BYREF
  UNICODE_STRING DestinationString; // [esp+38h] [ebp-410h] BYREF
  unsigned __int16 Src[256]; // [esp+40h] [ebp-408h] BYREF
  char v16; // [esp+240h] [ebp-208h] BYREF

  v12 = a1;
  if ( !a2 || !a1 )
    return -1073741811;
  v4 = *a2;
  Handle = 0;
  v11 = v4;
  RtlInitUnicodeString(&DestinationString, L"Latest");
  v10[0] = 0x2000000;
  v10[1] = (int)&v16;
  appended = RtlAppendUnicodeToString((unsigned __int16 *)v10, L"\\Registry\\Machine\\");
  if ( appended >= 0 )
  {
    appended = RtlGetPersistedStateLocation(
                 L"LanguageOverlayKeyName",
                 0,
                 L"Software\\Microsoft\\LanguageOverlay",
                 0,
                 Src,
                 512,
                 0);
    if ( appended >= 0 )
    {
      appended = RtlAppendUnicodeToString((unsigned __int16 *)v10, Src);
      if ( appended >= 0 )
      {
        appended = RtlAppendUnicodeToString((unsigned __int16 *)v10, L"\\");
        if ( appended >= 0 )
        {
          appended = RtlAppendUnicodeToString((unsigned __int16 *)v10, L"OverlayPackages");
          if ( appended >= 0 )
          {
            appended = RtlAppendUnicodeToString((unsigned __int16 *)v10, L"\\");
            if ( appended >= 0 )
            {
              appended = RtlAppendUnicodeToString((unsigned __int16 *)v10, (const unsigned __int16 *)v12);
              if ( appended >= 0 )
              {
                v13[0] = 24;
                v13[2] = v10;
                v13[1] = 0;
                v13[3] = 64;
                v13[4] = 0;
                v13[5] = 0;
                appended = NtOpenKey(&Handle, 131097, v13);
                if ( appended >= 0 )
                {
                  RegistryValue = QueryRegistryValue((int)&v12, a3, (int)a2);
                  v8 = v11;
                  appended = RegistryValue;
                  if ( RegistryValue >= 0 )
                  {
                    if ( v12 == (void *)1 )
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
  if ( Handle )
    NtClose(Handle);
  return appended;
}
