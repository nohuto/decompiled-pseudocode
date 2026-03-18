/*
 * XREFs of _InitClipFormatExceptionList@0 @ 0xE8670
 * Callers:
 *     <none>
 * Callees:
 *     _WPP_RECORDER_SF_@20 @ 0x1B668 (_WPP_RECORDER_SF_@20.c)
 */

// write access to const memory has been detected, the output may be wrong!
int __stdcall InitClipFormatExceptionList()
{
  ULONG v0; // esi
  _DWORD *v1; // edi
  _DWORD *v2; // ebx
  int result; // eax
  NTSTATUS v4; // eax
  unsigned int v5; // eax
  int v6; // eax
  unsigned __int16 v7; // ax
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+Ch] [ebp-28h] BYREF
  struct _UNICODE_STRING DestinationString; // [esp+24h] [ebp-10h] BYREF
  void *KeyHandle; // [esp+2Ch] [ebp-8h] BYREF
  ULONG ResultLength; // [esp+30h] [ebp-4h] BYREF

  v0 = 0;
  ResultLength = 0;
  v1 = 0;
  KeyHandle = 0;
  v2 = 0;
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\System\\UIPI\\Clipboard\\ExceptionFormats");
  ObjectAttributes.Length = 24;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.SecurityDescriptor = 0;
  ObjectAttributes.SecurityQualityOfService = 0;
  result = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( result < 0 )
    return result;
  v4 = ZwQueryKey(KeyHandle, KeyFullInformation, 0, 0, &ResultLength);
  if ( v4 != -1073741789 && v4 != -2147483643
    || (v1 = (_DWORD *)Win32AllocPool(ResultLength, 1650684757)) == 0
    || ZwQueryKey(KeyHandle, KeyFullInformation, v1, ResultLength, &ResultLength) < 0
    || (v5 = v1[8]) == 0
    || (gcClipFormatExceptionList = v1[8], v5 > 0x1FFF)
    || (_gpClipFormatExceptionList = Win32AllocPool(4 * v5, 1650684757)) == 0
    || v1[10] >= 0xFFFFFFF0
    || (v2 = (_DWORD *)Win32AllocPool(v1[10] + 16, 1650684757)) == 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(17, 11, &WPP_163528e29d493e69e95520b3b68f976c_Traceguids);
    if ( _gpClipFormatExceptionList )
    {
      Win32FreePool(_gpClipFormatExceptionList);
      _gpClipFormatExceptionList = 0;
    }
LABEL_21:
    gcClipFormatExceptionList = v0;
    goto LABEL_15;
  }
  if ( gcClipFormatExceptionList )
  {
    while ( ZwEnumerateValueKey(KeyHandle, v0, KeyValuePartialInformation, v2, v1[10] + 16, &ResultLength) >= 0 )
    {
      v6 = v2[1];
      if ( v6 == 4 )
      {
        *(_DWORD *)(_gpClipFormatExceptionList + 4 * v0) = v2[3];
      }
      else if ( v6 == 1 )
      {
        *((_WORD *)v2 + v2[2] + 6) = 0;
        v7 = UserAddAtomEx(v2 + 3, 1, 2);
        if ( !v7 )
          goto LABEL_21;
        *(_DWORD *)(_gpClipFormatExceptionList + 4 * v0) = v7;
      }
      if ( ++v0 >= gcClipFormatExceptionList )
        goto LABEL_15;
    }
    goto LABEL_21;
  }
LABEL_15:
  if ( v2 )
    Win32FreePool(v2);
  if ( v1 )
    Win32FreePool(v1);
  return ZwClose(KeyHandle);
}
