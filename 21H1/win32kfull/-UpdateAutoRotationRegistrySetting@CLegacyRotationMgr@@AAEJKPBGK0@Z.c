/*
 * XREFs of ?UpdateAutoRotationRegistrySetting@CLegacyRotationMgr@@AAEJKPBGK0@Z @ 0xAC6E8
 * Callers:
 *     ?CacheRotationInfo@CLegacyRotationMgr@@UAEXXZ @ 0xAC666 (-CacheRotationInfo@CLegacyRotationMgr@@UAEXXZ.c)
 *     ?AutoRotationUpdateRegistry@CLegacyRotationMgr@@UAEXXZ @ 0xD1612 (-AutoRotationUpdateRegistry@CLegacyRotationMgr@@UAEXXZ.c)
 *     ?xxxSetAutoRotationStateInternal@CLegacyRotationMgr@@AAEJH@Z @ 0x1412C3 (-xxxSetAutoRotationStateInternal@CLegacyRotationMgr@@AAEJH@Z.c)
 *     ?xxxSetSensorPresence@CLegacyRotationMgr@@UAEXH@Z @ 0x141347 (-xxxSetSensorPresence@CLegacyRotationMgr@@UAEXH@Z.c)
 *     ?xxxSetSlateAutoRotationState@CLegacyRotationMgr@@AAEJH@Z @ 0x1413BE (-xxxSetSlateAutoRotationState@CLegacyRotationMgr@@AAEJH@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __thiscall CLegacyRotationMgr::UpdateAutoRotationRegistrySetting(
        CLegacyRotationMgr *this,
        char Data,
        PCWSTR a3,
        ULONG CreateOptions,
        const unsigned __int16 *SourceString)
{
  NTSTATUS v5; // esi
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+Ch] [ebp-2Ch] BYREF
  struct _UNICODE_STRING ValueName; // [esp+24h] [ebp-14h] BYREF
  struct _UNICODE_STRING DestinationString; // [esp+2Ch] [ebp-Ch] BYREF
  void *KeyHandle; // [esp+34h] [ebp-4h] BYREF

  KeyHandle = 0;
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0;
  *(_DWORD *)&ValueName.Length = 0;
  ValueName.Buffer = 0;
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.Length = 24;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.SecurityDescriptor = 0;
  ObjectAttributes.SecurityQualityOfService = 0;
  v5 = ZwCreateKey(&KeyHandle, 0x2000000u, &ObjectAttributes, 0, 0, CreateOptions, 0);
  if ( v5 >= 0 )
  {
    RtlInitUnicodeString(&ValueName, a3);
    v5 = ZwSetValueKey(KeyHandle, &ValueName, 0, 4u, &Data, 4u);
    ZwClose(KeyHandle);
  }
  return v5;
}
