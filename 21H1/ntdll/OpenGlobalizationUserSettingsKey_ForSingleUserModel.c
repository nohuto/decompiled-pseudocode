/*
 * XREFs of OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x4B38B3AF
 * Callers:
 *     _OpenGlobalizationUserSettingsKey@12 @ 0x4B2AD6F6 (_OpenGlobalizationUserSettingsKey@12.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x4B38B10C (OpenGlobalizationUserSettingsKey_ForMua.c)
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlCopyUnicodeString@8 @ 0x4B2D5EF0 (_RtlCopyUnicodeString@8.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwOpenKey@12 @ 0x4B2F2A80 (_ZwOpenKey@12.c)
 *     _ZwQueryValueKey@24 @ 0x4B2F2AD0 (_ZwQueryValueKey@24.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 */

NTSTATUS __fastcall OpenGlobalizationUserSettingsKey_ForSingleUserModel(ACCESS_MASK DesiredAccess, PHANDLE KeyHandle)
{
  NTSTATUS v4; // edi
  NTSTATUS v5; // eax
  wchar_t *Heap; // eax
  HANDLE v7; // eax
  SIZE_T v9; // [esp-4h] [ebp-9Ch]
  _UNICODE_STRING DestinationString; // [esp+10h] [ebp-88h] BYREF
  _OBJECT_ATTRIBUTES v11; // [esp+18h] [ebp-80h] BYREF
  _OBJECT_ATTRIBUTES v12; // [esp+30h] [ebp-68h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+48h] [ebp-50h] BYREF
  _UNICODE_STRING ValueName; // [esp+60h] [ebp-38h] BYREF
  _UNICODE_STRING v15; // [esp+68h] [ebp-30h] BYREF
  _UNICODE_STRING SourceString; // [esp+70h] [ebp-28h] BYREF
  HANDLE v17; // [esp+78h] [ebp-20h] BYREF
  ACCESS_MASK DesiredAccessa; // [esp+7Ch] [ebp-1Ch]
  _UNICODE_STRING v19; // [esp+80h] [ebp-18h] BYREF
  _UNICODE_STRING v20; // [esp+88h] [ebp-10h] BYREF
  ULONG ResultLength; // [esp+90h] [ebp-8h] BYREF
  HANDLE KeyHandlea; // [esp+94h] [ebp-4h] BYREF

  DesiredAccessa = DesiredAccess;
  if ( dword_4B3A8A50 )
  {
    RtlInitUnicodeString(&DestinationString, &word_4B3A6C68);
    ObjectAttributes.Length = 24;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = 0;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.SecurityDescriptor = 0;
    ObjectAttributes.SecurityQualityOfService = 0;
    return ZwOpenKey(KeyHandle, DesiredAccess, &ObjectAttributes);
  }
  KeyHandlea = 0;
  RtlInitUnicodeString(&v15, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\CommonGlobUserSettings\\");
  v12.Length = 24;
  v12.ObjectName = &v15;
  v12.RootDirectory = 0;
  v12.Attributes = 576;
  v12.SecurityDescriptor = 0;
  v12.SecurityQualityOfService = 0;
  v4 = ZwOpenKey(&KeyHandlea, DesiredAccess, &v12);
  if ( v4 >= 0 )
  {
    ResultLength = 0;
    RtlInitUnicodeString(&ValueName, L"RedirectedKey");
    v5 = ZwQueryValueKey(KeyHandlea, &ValueName, KeyValuePartialInformation, 0, 0, &ResultLength);
    if ( !ResultLength || v5 != -1073741789 && v5 != -2147483643 )
    {
      v20.Length = 0;
      v20.MaximumLength = 170;
      v20.Buffer = (wchar_t *)&word_4B3A6C68;
      if ( v15.Length <= 0xAAu )
      {
        RtlCopyUnicodeString(&v20, &v15);
        dword_4B3A8A50 = 1;
      }
      v4 = 0;
      *KeyHandle = KeyHandlea;
      KeyHandlea = 0;
      goto LABEL_21;
    }
    LODWORD(v9) = ResultLength;
    Heap = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v9);
    v20.Buffer = Heap;
    if ( Heap )
    {
      v4 = ZwQueryValueKey(KeyHandlea, &ValueName, KeyValuePartialInformation, Heap, ResultLength, &ResultLength);
      if ( v4 >= 0 )
      {
        if ( *((_DWORD *)v20.Buffer + 1) != 1 )
        {
          v7 = KeyHandlea;
          KeyHandlea = 0;
LABEL_15:
          *KeyHandle = v7;
          goto LABEL_16;
        }
        RtlInitUnicodeString(&SourceString, (PCWSTR)v20.Buffer + 6);
        v11.Length = 24;
        v11.ObjectName = &SourceString;
        v11.RootDirectory = 0;
        v11.Attributes = 576;
        v11.SecurityDescriptor = 0;
        v11.SecurityQualityOfService = 0;
        v4 = ZwOpenKey(&v17, DesiredAccessa, &v11);
        if ( v4 >= 0 )
        {
          v19.Length = 0;
          v19.MaximumLength = 170;
          v19.Buffer = (wchar_t *)&word_4B3A6C68;
          if ( SourceString.Length <= 0xAAu )
          {
            RtlCopyUnicodeString(&v19, &SourceString);
            dword_4B3A8A50 = 1;
          }
          v7 = v17;
          goto LABEL_15;
        }
      }
LABEL_16:
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v20.Buffer);
      goto LABEL_21;
    }
    v4 = -1073741801;
  }
LABEL_21:
  if ( KeyHandlea )
    ZwClose(KeyHandlea);
  return v4;
}
