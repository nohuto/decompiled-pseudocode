/*
 * XREFs of _RtlGetPersistedStateLocation@28 @ 0x4B2E5BB0
 * Callers:
 *     _GetOverlayRootFolder@12 @ 0x4B2D1DAC (_GetOverlayRootFolder@12.c)
 *     _RtlpGetTimeZoneInfoHandle@8 @ 0x4B2F1584 (_RtlpGetTimeZoneInfoHandle@8.c)
 *     _LdrpAppxGetRemediationRegistryKey@12 @ 0x4B32C6BD (_LdrpAppxGetRemediationRegistryKey@12.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x4B38B10C (OpenGlobalizationUserSettingsKey_ForMua.c)
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlExpandEnvironmentStrings@24 @ 0x4B2DC3A0 (_RtlExpandEnvironmentStrings@24.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwOpenKey@12 @ 0x4B2F2A80 (_ZwOpenKey@12.c)
 *     _ZwQueryValueKey@24 @ 0x4B2F2AD0 (_ZwQueryValueKey@24.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 */

NTSTATUS __cdecl RtlGetPersistedStateLocation(
        PCWSTR SourceID,
        PCWSTR CustomValue,
        PCWSTR DefaultPath,
        STATE_LOCATION_TYPE StateLocationType,
        PWCHAR TargetPath,
        ULONG BufferLengthIn,
        PULONG BufferLengthOut)
{
  char *v7; // edi
  NTSTATUS v8; // esi
  unsigned int v9; // kr00_4
  unsigned int v10; // ecx
  NTSTATUS v12; // eax
  NTSTATUS v13; // eax
  const WCHAR *v14; // eax
  char *Heap; // eax
  NTSTATUS v16; // eax
  ULONG v17; // ecx
  char *v18; // edx
  char *v19; // ecx
  __int16 v20; // ax
  NTSTATUS v21; // eax
  SIZE_T v22; // [esp-10h] [ebp-50h]
  size_t v23; // [esp-4h] [ebp-44h]
  SIZE_T v24; // [esp-4h] [ebp-44h]
  ULONG_PTR *v25; // [esp+4h] [ebp-3Ch]
  ULONG ResultLength; // [esp+Ch] [ebp-34h] BYREF
  HANDLE KeyHandle; // [esp+10h] [ebp-30h] BYREF
  HANDLE Handle; // [esp+14h] [ebp-2Ch] BYREF
  int v29; // [esp+18h] [ebp-28h]
  _DWORD DestinationLength[3]; // [esp+1Ch] [ebp-24h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+28h] [ebp-18h] BYREF

  v29 = 0;
  KeyHandle = 0;
  Handle = 0;
  v7 = 0;
  if ( (unsigned int)StateLocationType > LocationTypeFileSystem )
    return -1073741583;
  if ( byte_4B3A6618 )
  {
    v8 = -1073741772;
    goto LABEL_4;
  }
  ObjectAttributes.Length = 24;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&dword_4B281750[2 * StateLocationType];
  ObjectAttributes.RootDirectory = 0;
  ObjectAttributes.Attributes = 64;
  ObjectAttributes.SecurityDescriptor = 0;
  ObjectAttributes.SecurityQualityOfService = 0;
  v12 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  v8 = v12;
  if ( v12 == -1073741772 )
  {
    byte_4B3A6618 = 1;
    goto LABEL_4;
  }
  if ( v12 >= 0 )
  {
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationLength[1], SourceID);
    ObjectAttributes.RootDirectory = KeyHandle;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&DestinationLength[1];
    ObjectAttributes.Length = 24;
    ObjectAttributes.Attributes = 64;
    ObjectAttributes.SecurityDescriptor = 0;
    ObjectAttributes.SecurityQualityOfService = 0;
    v13 = ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes);
    v8 = v13;
    if ( v13 == -1073741772 )
    {
LABEL_4:
      if ( DefaultPath )
      {
        v9 = wcslen((const unsigned __int16 *)DefaultPath);
        v10 = 2 * (v9 + 1);
        ResultLength = v10;
        if ( v10 < v9 + 1 )
        {
          v8 = -1073741675;
        }
        else
        {
          v8 = BufferLengthIn < v10 ? 0x80000005 : 0;
          if ( BufferLengthOut )
            *BufferLengthOut = v10;
          if ( v10 <= BufferLengthIn )
          {
            LODWORD(v23) = 2 * (v9 + 1);
            memcpy(TargetPath, DefaultPath, v23);
          }
        }
      }
      goto LABEL_10;
    }
    if ( v13 >= 0 )
    {
      v14 = CustomValue;
      if ( !CustomValue )
        v14 = (const WCHAR *)L"TargetPath";
      RtlInitUnicodeString((PUNICODE_STRING)&DestinationLength[1], v14);
      if ( BufferLengthIn + 16 >= BufferLengthIn )
      {
        LODWORD(v23) = BufferLengthIn + 16;
        Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v23);
        v7 = Heap;
        if ( Heap )
        {
          v16 = ZwQueryValueKey(
                  Handle,
                  (PUNICODE_STRING)&DestinationLength[1],
                  KeyValuePartialInformation,
                  Heap,
                  BufferLengthIn + 16,
                  &ResultLength);
          v8 = v16;
          if ( v16 < 0 )
          {
            if ( v16 != -2147483643 )
              goto LABEL_10;
          }
          else if ( *((_DWORD *)v7 + 1) != 1 && *((_DWORD *)v7 + 1) != 2 )
          {
            v8 = -1073741788;
            goto LABEL_10;
          }
          v17 = *((_DWORD *)v7 + 2);
          v18 = v7 + 12;
          ResultLength = v17;
          if ( v16 < 0 )
            goto LABEL_50;
          if ( *(_WORD *)&v18[2 * (v17 >> 1) - 2] )
          {
            v17 += 2;
            ResultLength = v17;
            if ( BufferLengthIn < v17 )
            {
              v8 = -2147483643;
            }
            else
            {
              *(_WORD *)&v18[2 * (v17 >> 1) - 2] = 0;
              v17 = ResultLength;
            }
          }
          if ( v8 >= 0 && *((_DWORD *)v7 + 1) == 2 )
          {
            v19 = v7 + 12;
            do
            {
              v20 = *(_WORD *)v19;
              v19 += 2;
            }
            while ( v20 != (_WORD)v29 );
            LODWORD(v24) = DestinationLength;
            HIDWORD(v22) = TargetPath;
            LODWORD(v22) = (v19 - (v7 + 14)) >> 1;
            v21 = RtlExpandEnvironmentStrings(0, (PCWSTR)v7 + 6, v22, (PWSTR)(BufferLengthIn >> 1), v24, v25);
            v8 = v21;
            if ( v21 >= 0 || v21 == -1073741789 )
            {
              if ( BufferLengthOut )
                *BufferLengthOut = 2 * DestinationLength[0];
              if ( v21 == -1073741789 )
                v8 = -2147483643;
            }
          }
          else
          {
LABEL_50:
            if ( BufferLengthOut )
              *BufferLengthOut = v17;
            if ( v8 >= 0 )
            {
              LODWORD(v24) = v17;
              memcpy(TargetPath, v7 + 12, v24);
            }
          }
          goto LABEL_10;
        }
        v8 = -1073741801;
      }
      else
      {
        v8 = -1073741675;
      }
    }
  }
LABEL_10:
  if ( KeyHandle )
    NtClose(KeyHandle);
  if ( Handle )
    NtClose(Handle);
  if ( v7 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v7);
  return v8;
}
