/*
 * XREFs of sub_1C00469A4 @ 0x1C00469A4
 * Callers:
 *     sub_1C003246C @ 0x1C003246C (sub_1C003246C.c)
 *     sub_1C0046920 @ 0x1C0046920 (sub_1C0046920.c)
 *     sub_1C0046960 @ 0x1C0046960 (sub_1C0046960.c)
 *     sub_1C0046AF0 @ 0x1C0046AF0 (sub_1C0046AF0.c)
 *     sub_1C0046B28 @ 0x1C0046B28 (sub_1C0046B28.c)
 *     sub_1C0046BC0 @ 0x1C0046BC0 (sub_1C0046BC0.c)
 *     sub_1C0049BA0 @ 0x1C0049BA0 (sub_1C0049BA0.c)
 *     sub_1C00554E0 @ 0x1C00554E0 (sub_1C00554E0.c)
 *     NetpGetPrivilege @ 0x1C0057A60 (NetpGetPrivilege.c)
 * Callees:
 *     sub_1C002E62C @ 0x1C002E62C (sub_1C002E62C.c)
 *     sub_1C003B2A0 @ 0x1C003B2A0 (sub_1C003B2A0.c)
 */

__int64 __fastcall sub_1C00469A4(
        PDEVICE_OBJECT DeviceObject,
        PCWSTR SourceString,
        ULONG Type,
        PVOID Data,
        ULONG DataSize)
{
  NTSTATUS v9; // ebx
  void *DeviceRegKey; // [rsp+30h] [rbp-38h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-30h] BYREF

  DeviceRegKey = 0LL;
  DestinationString = 0LL;
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 )
  {
    if ( LOWORD(::DeviceObject->DeviceType) )
      sub_1C002E62C(
        (__int64)::DeviceObject->DeviceExtension,
        (__int64)SourceString,
        1u,
        0x59u,
        (__int64)&unk_1C0063940,
        DeviceObject,
        DeviceRegKey,
        *(_QWORD *)&DestinationString.Length,
        DestinationString.Buffer);
    if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(::DeviceObject->DeviceType) )
      sub_1C003B2A0(
        ::DeviceObject->DeviceExtension,
        (_DWORD)SourceString,
        Type,
        90,
        (__int64)&unk_1C0063940,
        (__int64)SourceString);
  }
  RtlInitUnicodeString(&DestinationString, SourceString);
  v9 = IoOpenDeviceRegistryKey(DeviceObject, 1u, 0x1F0000u, &DeviceRegKey);
  if ( v9 >= 0 )
  {
    v9 = ZwSetValueKey(DeviceRegKey, &DestinationString, 0, Type, Data, DataSize);
    ZwClose(DeviceRegKey);
  }
  return (unsigned int)v9;
}
