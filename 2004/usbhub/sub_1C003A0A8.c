/*
 * XREFs of sub_1C003A0A8 @ 0x1C003A0A8
 * Callers:
 *     sub_1C00162A8 @ 0x1C00162A8 (sub_1C00162A8.c)
 *     sub_1C001C580 @ 0x1C001C580 (sub_1C001C580.c)
 * Callees:
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C002E62C @ 0x1C002E62C (sub_1C002E62C.c)
 */

NTSTATUS __fastcall sub_1C003A0A8(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v7; // rdx
  _DWORD *v8; // rbx
  __int64 v9; // rcx
  NTSTATUS result; // eax
  __int64 v11; // rdx

  v8 = sub_1C0011220(a2);
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C002E62C((__int64)DeviceObject->DeviceExtension, v7, 3u, 0x52u, (__int64)"FKh&", a1);
  v9 = *((_QWORD *)v8 + 344);
  v8[687] = a3;
  v8[686] = a4;
  result = ExNotifyBootDeviceRemoval(v9);
  if ( (_BYTE)result )
    result = KeWaitForSingleObject(v8 + 690, Executive, 0, 0, 0LL);
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 )
  {
    if ( LOWORD(DeviceObject->DeviceType) )
      return sub_1C002E62C((__int64)DeviceObject->DeviceExtension, v11, 3u, 0x53u, (__int64)"FKh&", a1);
  }
  return result;
}
