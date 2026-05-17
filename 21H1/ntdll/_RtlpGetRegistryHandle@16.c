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

int __fastcall RtlpGetRegistryHandle(int a1, const unsigned __int16 *a2, char a3, const unsigned __int16 **a4)
{
  unsigned int v4; // esi
  int appended; // esi
  int Key; // eax
  _DWORD v9[6]; // [esp+10h] [ebp-28h] BYREF
  UNICODE_STRING UnicodeString; // [esp+28h] [ebp-10h] BYREF
  int v11; // [esp+30h] [ebp-8h] BYREF
  int StringRoutine; // [esp+34h] [ebp-4h]

  v4 = a1;
  if ( (a1 & 0x40000000) != 0 )
  {
    *a4 = a2;
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
      StringRoutine = NtdllpAllocateStringRoutine(524);
      if ( StringRoutine )
      {
        v11 = 34340864;
        if ( !v4 )
          goto LABEL_12;
        if ( v4 == 5 && RtlFormatCurrentUserKeyPath(&UnicodeString) >= 0 )
        {
          appended = RtlAppendUnicodeStringToString((unsigned __int16 *)&v11, (const void **)&UnicodeString);
          RtlFreeAnsiString(&UnicodeString);
        }
        else
        {
          appended = RtlAppendUnicodeToString(
                       (unsigned __int16 *)&v11,
                       *((const unsigned __int16 **)&RtlpRegistryPaths + v4));
        }
        if ( appended >= 0 )
        {
          appended = RtlAppendUnicodeToString((unsigned __int16 *)&v11, L"\\");
          if ( appended >= 0 )
          {
LABEL_12:
            appended = RtlAppendUnicodeToString((unsigned __int16 *)&v11, a2);
            if ( appended >= 0 )
            {
              v9[0] = 24;
              v9[1] = 0;
              v9[2] = &v11;
              v9[3] = 576;
              v9[4] = 0;
              v9[5] = 0;
              if ( a3 )
                Key = ZwCreateKey(a4, 0x40000000, v9, 0, 0, 0, 0);
              else
                Key = ZwOpenKey(a4, -2113929216, v9);
              appended = Key;
            }
          }
        }
        RtlDeleteBoundaryDescriptor(StringRoutine);
        return appended;
      }
      else
      {
        return -1073741801;
      }
    }
  }
}
