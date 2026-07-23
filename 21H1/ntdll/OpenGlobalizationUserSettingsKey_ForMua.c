/*
 * XREFs of OpenGlobalizationUserSettingsKey_ForMua @ 0x4B38B10C
 * Callers:
 *     _OpenGlobalizationUserSettingsKey@12 @ 0x4B2AD6F6 (_OpenGlobalizationUserSettingsKey@12.c)
 * Callees:
 *     _RtlAppendUnicodeToString@8 @ 0x4B2BFE00 (_RtlAppendUnicodeToString@8.c)
 *     _RtlFreeAnsiString@4 @ 0x4B2C3B40 (_RtlFreeAnsiString@4.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlAppendUnicodeStringToString@8 @ 0x4B2D10A0 (_RtlAppendUnicodeStringToString@8.c)
 *     _RtlConvertSidToUnicodeString@12 @ 0x4B2D3990 (_RtlConvertSidToUnicodeString@12.c)
 *     _RtlGetPersistedStateLocation@28 @ 0x4B2E5BB0 (_RtlGetPersistedStateLocation@28.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwOpenKey@12 @ 0x4B2F2A80 (_ZwOpenKey@12.c)
 *     _ZwQueryInformationToken@20 @ 0x4B2F2B90 (_ZwQueryInformationToken@20.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x4B38B3AF (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 */

NTSTATUS __thiscall OpenGlobalizationUserSettingsKey_ForMua(void *this, HANDLE *a2, _DWORD *a3)
{
  int v3; // edi
  int *Heap; // ebx
  NTSTATUS PersistedStateLocation; // esi
  unsigned __int8 v6; // al
  unsigned __int16 v7; // si
  wchar_t *v8; // edi
  SIZE_T v10; // [esp-4h] [ebp-264h]
  SIZE_T v11; // [esp-4h] [ebp-264h]
  ULONG ReturnLength; // [esp+Ch] [ebp-254h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+10h] [ebp-250h] BYREF
  _UNICODE_STRING UnicodeString; // [esp+28h] [ebp-238h] BYREF
  HANDLE KeyHandle; // [esp+30h] [ebp-230h] BYREF
  ACCESS_MASK DesiredAccess; // [esp+34h] [ebp-22Ch]
  PHANDLE v17; // [esp+38h] [ebp-228h]
  ULONG BufferLengthOut; // [esp+3Ch] [ebp-224h] BYREF
  _UNICODE_STRING Destination; // [esp+40h] [ebp-220h] BYREF
  int v20; // [esp+48h] [ebp-218h]
  _DWORD *v21; // [esp+4Ch] [ebp-214h]
  WCHAR TargetPath[262]; // [esp+50h] [ebp-210h] BYREF

  v17 = a2;
  v3 = 0;
  v20 = 0;
  v21 = a3;
  LODWORD(v10) = 76;
  DesiredAccess = (ACCESS_MASK)this;
  Heap = (int *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v10);
  if ( Heap )
  {
    PersistedStateLocation = ZwQueryInformationToken((HANDLE)0xFFFFFFFA, 1u, Heap, 0x4Cu, &ReturnLength);
    if ( PersistedStateLocation < 0 )
      goto LABEL_26;
    v3 = *Heap;
  }
  else
  {
    PersistedStateLocation = -1073741801;
  }
  if ( PersistedStateLocation >= 0 )
  {
    v6 = *(_BYTE *)(v3 + 1);
    if ( v6 < 2u || v6 == 5 && *(_DWORD *)(v3 + 8) == 21 && *(_DWORD *)(v3 + 24) == 503 )
    {
      PersistedStateLocation = -1073741514;
      v20 = 1;
      *v21 = 0;
    }
    if ( PersistedStateLocation >= 0 )
    {
      PersistedStateLocation = RtlConvertSidToUnicodeString(&UnicodeString, (PSID)v3, 1u);
      if ( PersistedStateLocation >= 0 )
      {
        BufferLengthOut = 0;
        PersistedStateLocation = RtlGetPersistedStateLocation(
                                   L"GlobalizationUserSettings",
                                   L"TargetNtPath",
                                   L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\International",
                                   LocationTypeRegistry,
                                   TargetPath,
                                   0x208u,
                                   &BufferLengthOut);
        if ( PersistedStateLocation >= 0 )
        {
          v7 = BufferLengthOut + 4 + UnicodeString.Length;
          LODWORD(v11) = v7;
          v8 = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v11);
          if ( v8 )
          {
            Destination.Length = 0;
            Destination.MaximumLength = v7;
            Destination.Buffer = v8;
            PersistedStateLocation = RtlAppendUnicodeToString(&Destination, TargetPath);
            if ( PersistedStateLocation >= 0 )
            {
              PersistedStateLocation = RtlAppendUnicodeToString(&Destination, L"\\");
              if ( PersistedStateLocation >= 0 )
              {
                PersistedStateLocation = RtlAppendUnicodeStringToString(&Destination, &UnicodeString);
                if ( PersistedStateLocation >= 0 )
                {
                  ObjectAttributes.Length = 24;
                  ObjectAttributes.ObjectName = &Destination;
                  ObjectAttributes.RootDirectory = 0;
                  ObjectAttributes.Attributes = 576;
                  ObjectAttributes.SecurityDescriptor = 0;
                  ObjectAttributes.SecurityQualityOfService = 0;
                  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) < 0 )
                  {
                    v20 = 1;
                    *v21 = 1;
                  }
                  else
                  {
                    ZwClose(KeyHandle);
                    *v21 = 2;
                    PersistedStateLocation = ZwOpenKey(v17, DesiredAccess, &ObjectAttributes);
                  }
                }
              }
            }
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v8);
          }
          else
          {
            PersistedStateLocation = -1073741801;
          }
        }
        RtlFreeAnsiString(&UnicodeString);
      }
    }
    if ( v20 )
      PersistedStateLocation = OpenGlobalizationUserSettingsKey_ForSingleUserModel(DesiredAccess, v17);
  }
LABEL_26:
  if ( Heap )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  return PersistedStateLocation;
}
