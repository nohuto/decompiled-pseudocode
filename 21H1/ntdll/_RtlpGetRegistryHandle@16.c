/*
 * XREFs of _RtlpGetRegistryHandle@16 @ 0x4B2EB2C1
 * Callers:
 *     _RtlpGetDynamicTimeZoneInfoHandle@8 @ 0x4B2EAC1B (_RtlpGetDynamicTimeZoneInfoHandle@8.c)
 *     _RtlpQueryRegistryValues@24 @ 0x4B2EAEA8 (_RtlpQueryRegistryValues@24.c)
 *     _RtlpGetTimeZoneInfoHandle@8 @ 0x4B2F1584 (_RtlpGetTimeZoneInfoHandle@8.c)
 *     _RtlCheckRegistryKey@8 @ 0x4B3510F0 (_RtlCheckRegistryKey@8.c)
 *     _RtlCreateRegistryKey@8 @ 0x4B351130 (_RtlCreateRegistryKey@8.c)
 *     _RtlDeleteRegistryValue@12 @ 0x4B351170 (_RtlDeleteRegistryValue@12.c)
 *     _RtlWriteRegistryValue@24 @ 0x4B3513B0 (_RtlWriteRegistryValue@24.c)
 * Callees:
 *     _RtlDeleteBoundaryDescriptor@4 @ 0x4B2ABA40 (_RtlDeleteBoundaryDescriptor@4.c)
 *     _RtlAppendUnicodeToString@8 @ 0x4B2BFE00 (_RtlAppendUnicodeToString@8.c)
 *     _RtlFreeAnsiString@4 @ 0x4B2C3B40 (_RtlFreeAnsiString@4.c)
 *     _NtdllpAllocateStringRoutine@4 @ 0x4B2C5D10 (_NtdllpAllocateStringRoutine@4.c)
 *     _RtlAppendUnicodeStringToString@8 @ 0x4B2D10A0 (_RtlAppendUnicodeStringToString@8.c)
 *     _RtlFormatCurrentUserKeyPath@4 @ 0x4B2D3860 (_RtlFormatCurrentUserKeyPath@4.c)
 *     _ZwOpenKey@12 @ 0x4B2F2A80 (_ZwOpenKey@12.c)
 *     _ZwCreateKey@28 @ 0x4B2F2B50 (_ZwCreateKey@28.c)
 */

int __fastcall RtlpGetRegistryHandle(int a1, const WCHAR *a2, char a3, PHANDLE KeyHandle)
{
  unsigned int v4; // esi
  NTSTATUS appended; // esi
  NTSTATUS v8; // eax
  _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+10h] [ebp-28h] BYREF
  _UNICODE_STRING CurrentUserKeyPath; // [esp+28h] [ebp-10h] BYREF
  _UNICODE_STRING Destination; // [esp+30h] [ebp-8h] BYREF

  v4 = a1;
  if ( (a1 & 0x40000000) != 0 )
  {
    *KeyHandle = (HANDLE)a2;
    return 0;
  }
  else
  {
    if ( a1 < 0 )
      v4 = a1 & 0x7FFFFFFF;
    if ( v4 >= 6 )
    {
      return -1073741811;
    }
    else
    {
      Destination.Buffer = (wchar_t *)NtdllpAllocateStringRoutine(524);
      if ( Destination.Buffer )
      {
        *(_DWORD *)&Destination.Length = 34340864;
        if ( !v4 )
          goto LABEL_12;
        if ( v4 == 5 && RtlFormatCurrentUserKeyPath(&CurrentUserKeyPath) >= 0 )
        {
          appended = RtlAppendUnicodeStringToString(&Destination, &CurrentUserKeyPath);
          RtlFreeAnsiString(&CurrentUserKeyPath);
        }
        else
        {
          appended = RtlAppendUnicodeToString(&Destination, (&RtlpRegistryPaths)[v4]);
        }
        if ( appended >= 0 )
        {
          appended = RtlAppendUnicodeToString(&Destination, L"\\");
          if ( appended >= 0 )
          {
LABEL_12:
            appended = RtlAppendUnicodeToString(&Destination, a2);
            if ( appended >= 0 )
            {
              ObjectAttributes.Length = 24;
              ObjectAttributes.RootDirectory = 0;
              ObjectAttributes.ObjectName = &Destination;
              ObjectAttributes.Attributes = 576;
              ObjectAttributes.SecurityDescriptor = 0;
              ObjectAttributes.SecurityQualityOfService = 0;
              if ( a3 )
                v8 = ZwCreateKey(KeyHandle, 0x40000000u, &ObjectAttributes, 0, 0, 0, 0);
              else
                v8 = ZwOpenKey(KeyHandle, 0x82000000, &ObjectAttributes);
              appended = v8;
            }
          }
        }
        RtlDeleteBoundaryDescriptor((POBJECT_BOUNDARY_DESCRIPTOR)Destination.Buffer);
        return appended;
      }
      else
      {
        return -1073741801;
      }
    }
  }
}
