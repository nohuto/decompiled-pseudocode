/*
 * XREFs of sub_1C005BC84 @ 0x1C005BC84
 * Callers:
 *     sub_1C0042340 @ 0x1C0042340 (sub_1C0042340.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C002E0B4 @ 0x1C002E0B4 (sub_1C002E0B4.c)
 *     sub_1C005A828 @ 0x1C005A828 (sub_1C005A828.c)
 *     sub_1C005A9D0 @ 0x1C005A9D0 (sub_1C005A9D0.c)
 *     sub_1C005B184 @ 0x1C005B184 (sub_1C005B184.c)
 */

__int64 __fastcall sub_1C005BC84(__int64 a1)
{
  PDEVICE_OBJECT v2; // rcx
  _DWORD *v3; // rdi
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  void *KeyHandle; // [rsp+88h] [rbp+18h] BYREF

  v3 = sub_1C000F050(a1);
  KeyHandle = 0LL;
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 )
  {
    v2 = DeviceObject;
    if ( LOWORD(DeviceObject->DeviceType) )
      sub_1C002E0B4((__int64)DeviceObject->DeviceExtension, 0, 1u, 0x23u, (__int64)&unk_1C00654F0);
  }
  sub_1C005A9D0((__int64)v2, v3 + 1294);
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\registry\\machine\\system\\currentcontrolset\\services\\usbhub\\uxd_control\\devices\\");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes) >= 0 )
  {
    sub_1C005A828(a1, (WCHAR *)KeyHandle);
    ZwClose(KeyHandle);
  }
  KeyHandle = 0LL;
  if ( (int)sub_1C005B184(a1, &KeyHandle) >= 0 )
  {
    sub_1C005A828(a1, (WCHAR *)KeyHandle);
    ZwClose(KeyHandle);
  }
  return 0LL;
}
