/*
 * XREFs of sub_1C005CB10 @ 0x1C005CB10
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C002E0B4 @ 0x1C002E0B4 (sub_1C002E0B4.c)
 */

int sub_1C005CB10()
{
  _UNKNOWN **v0; // rax

  v0 = &off_1C006B000;
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    LODWORD(v0) = sub_1C002E0B4((__int64)DeviceObject->DeviceExtension, 0, 1u, 0xAu, (__int64)&unk_1C0065528);
  if ( RegHandle )
  {
    LODWORD(v0) = EtwUnregister(RegHandle);
    RegHandle = 0LL;
  }
  return (int)v0;
}
