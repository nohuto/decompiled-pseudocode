/*
 * XREFs of _CheckSessionPoolAllocations@0 @ 0xD46FE
 * Callers:
 *     <none>
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int __stdcall CheckSessionPoolAllocations()
{
  int result; // eax
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+Ch] [ebp-68h] BYREF
  _DWORD v2[2]; // [esp+24h] [ebp-50h] BYREF
  struct _UNICODE_STRING ValueName; // [esp+2Ch] [ebp-48h] BYREF
  struct _UNICODE_STRING DestinationString; // [esp+34h] [ebp-40h] BYREF
  int v5; // [esp+3Ch] [ebp-38h] BYREF
  int v6; // [esp+40h] [ebp-34h] BYREF
  int v7; // [esp+44h] [ebp-30h] BYREF
  void *KeyHandle; // [esp+48h] [ebp-2Ch] BYREF
  unsigned int v9; // [esp+4Ch] [ebp-28h] BYREF
  _BYTE Data[32]; // [esp+50h] [ebp-24h] BYREF

  v9 = 0;
  v5 = 0;
  memset(Data, 0, sizeof(Data));
  v6 = 0;
  v7 = 0;
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0;
  *(_DWORD *)&ValueName.Length = 0;
  ValueName.Buffer = 0;
  KeyHandle = 0;
  result = Win32ExtractSessionPoolTagInfo(_gSessionId, Data, 8, &v9, &v5, &v6, &v7, 0, 0);
  if ( result >= 0 && v7 )
  {
    if ( v9 > 8 )
      v9 = 8;
    RtlInitUnicodeString(
      &DestinationString,
      L"\\REGISTRY\\MACHINE\\SYSTEM\\CURRENTCONTROLSET\\CONTROL\\SESSION MANAGER\\MEMORY MANAGEMENT");
    ObjectAttributes.Length = 24;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = 0;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.SecurityDescriptor = 0;
    ObjectAttributes.SecurityQualityOfService = 0;
    if ( ZwOpenKey(&KeyHandle, 0x2001Fu, &ObjectAttributes) >= 0 )
    {
      RtlInitUnicodeString(&ValueName, L"SESSION_HAS_VALID_POOL_ON_EXIT");
      if ( ZwSetValueKey(KeyHandle, &ValueName, 0, 3u, Data, 4 * v9) >= 0 )
        ZwFlushKey(KeyHandle);
      ZwClose(KeyHandle);
    }
    v2[0] = Data;
    v2[1] = 4 * v9;
    return DbgkWerCaptureLiveKernelDump(
             L"win32k.sys",
             171,
             _gSessionId,
             v5,
             v6,
             v7,
             v2,
             Win32kLeakTrackingLiveDumpCallback,
             0);
  }
  return result;
}
