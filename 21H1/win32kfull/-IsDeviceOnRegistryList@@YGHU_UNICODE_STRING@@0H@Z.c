/*
 * XREFs of ?IsDeviceOnRegistryList@@YGHU_UNICODE_STRING@@0H@Z @ 0xE6E1A
 * Callers:
 *     _IsMouseDeviceOnIgnoreList@4 @ 0xE6D1C (_IsMouseDeviceOnIgnoreList@4.c)
 *     ?IsMouseDeviceOnWhiteList@@YGHPAUDEVICEINFO@@PAU_DEVICE_OBJECT@@H@Z @ 0xF4210 (-IsMouseDeviceOnWhiteList@@YGHPAUDEVICEINFO@@PAU_DEVICE_OBJECT@@H@Z.c)
 * Callees:
 *     ?CompareDeviceVIDPID@@YGHU_UNICODE_STRING@@PAU_KEY_VALUE_FULL_INFORMATION@@K@Z @ 0x183A71 (-CompareDeviceVIDPID@@YGHU_UNICODE_STRING@@PAU_KEY_VALUE_FULL_INFORMATION@@K@Z.c)
 */

BOOL __userpurge IsDeviceOnRegistryList@<eax>(
        int a1@<ecx>,
        struct _UNICODE_STRING a2,
        struct _UNICODE_STRING ValueName,
        int a4)
{
  BOOL v5; // edi
  int v7; // esi
  ULONG v8; // ebx
  _DWORD *v9; // esi
  struct _KEY_VALUE_FULL_INFORMATION *v10; // [esp+0h] [ebp-38h]
  unsigned int v11; // [esp+4h] [ebp-34h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+Ch] [ebp-2Ch] BYREF
  int v13; // [esp+24h] [ebp-14h]
  NTSTATUS v14; // [esp+28h] [ebp-10h]
  ULONG Length; // [esp+2Ch] [ebp-Ch] BYREF
  ULONG ResultLength; // [esp+30h] [ebp-8h] BYREF
  void *KeyHandle; // [esp+34h] [ebp-4h] BYREF

  ObjectAttributes.Length = 24;
  ObjectAttributes.ObjectName = &a2;
  KeyHandle = 0;
  ResultLength = 0;
  ObjectAttributes.RootDirectory = 0;
  v5 = 0;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.SecurityDescriptor = 0;
  ObjectAttributes.SecurityQualityOfService = 0;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    if ( ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, 0, 0, &ResultLength) == -1073741772
      || !ResultLength )
    {
      if ( a1 && ValueName.Length >= 0x2Au )
      {
        v8 = 0;
        Length = 0;
        do
        {
          if ( v5 )
            break;
          v14 = ZwEnumerateValueKey(KeyHandle, v8, KeyValueFullInformation, 0, 0, &Length);
          if ( v14 != -1073741789 )
            break;
          v9 = (_DWORD *)Win32AllocPoolZInit(Length, 2019914581);
          if ( v9 )
          {
            v14 = ZwEnumerateValueKey(KeyHandle, v8, KeyValueFullInformation, v9, Length, &Length);
            if ( v14 >= 0 )
            {
              v13 = *((unsigned __int8 *)v9 + v9[2]);
              if ( (unsigned int)(v13 - 1) <= 1 && v9[1] == 4 && v9[4] >= 0x2Au && RtlCompareMemory(v9 + 5, L"HID", 1u) )
                v5 = CompareDeviceVIDPID(ValueName, v10, v11) != 0;
            }
            Win32FreePool(v9);
          }
          ++v8;
        }
        while ( v14 != -2147483622 );
      }
    }
    else
    {
      v7 = Win32AllocPool(ResultLength, 2019914581);
      if ( v7 )
      {
        if ( ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, (PVOID)v7, ResultLength, &ResultLength) >= 0
          && *(_DWORD *)(v7 + 4) == 4 )
        {
          v5 = (unsigned __int8)(*(_BYTE *)(v7 + 12) - 1) <= 2u;
        }
        Win32FreePool(v7);
      }
    }
    ZwClose(KeyHandle);
  }
  return v5;
}
