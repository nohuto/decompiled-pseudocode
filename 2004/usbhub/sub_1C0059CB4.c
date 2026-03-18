/*
 * XREFs of sub_1C0059CB4 @ 0x1C0059CB4
 * Callers:
 *     sub_1C002CA30 @ 0x1C002CA30 (sub_1C002CA30.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C002E0B4 @ 0x1C002E0B4 (sub_1C002E0B4.c)
 */

NTSTATUS __fastcall sub_1C0059CB4(PDEVICE_OBJECT DeviceObject)
{
  PVOID *v2; // rbx
  NTSTATUS result; // eax

  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(::DeviceObject->DeviceType) )
    sub_1C002E0B4((__int64)::DeviceObject->DeviceExtension, 0, 1u, 0x15u, (__int64)&unk_1C0062110);
  v2 = (PVOID *)sub_1C000F050((__int64)DeviceObject);
  result = PoRegisterPowerSettingCallback(DeviceObject, &SettingGuid, (PPOWER_SETTING_CALLBACK)Callback, v2, v2 + 656);
  if ( result >= 0 )
    *((_DWORD *)v2 + 1310) = 1;
  return result;
}
