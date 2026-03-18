/*
 * XREFs of sub_1C000DED0 @ 0x1C000DED0
 * Callers:
 *     sub_1C000D150 @ 0x1C000D150 (sub_1C000D150.c)
 * Callees:
 *     sub_1C00044F8 @ 0x1C00044F8 (sub_1C00044F8.c)
 *     sub_1C0004588 @ 0x1C0004588 (sub_1C0004588.c)
 */

NTSTATUS __fastcall sub_1C000DED0(struct _DRIVER_OBJECT *a1)
{
  NTSTATUS result; // eax
  NTSTATUS v2; // ebx
  __int64 DeviceCharacteristics; // [rsp+20h] [rbp-28h]

  a1->FastIoDispatch = (PFAST_IO_DISPATCH)&unk_1C0006A50;
  a1->MajorFunction[0] = (PDRIVER_DISPATCH)sub_1C000A010;
  a1->MajorFunction[18] = (PDRIVER_DISPATCH)sub_1C000B500;
  a1->MajorFunction[2] = (PDRIVER_DISPATCH)sub_1C000B440;
  a1->DriverUnload = (PDRIVER_UNLOAD)sub_1C000C430;
  result = IoCreateDevice(a1, 0, (PUNICODE_STRING)0x1C000F020LL, 0x22u, 0x20000u, 0, &qword_1C0007288);
  v2 = result;
  if ( result >= 0 )
  {
    if ( (HIDWORD(off_1C0007000->Timer) & 1) != 0 && BYTE1(off_1C0007000->Timer) >= 4u )
      sub_1C0004588((__int64)off_1C0007000->AttachedDevice);
    return v2;
  }
  if ( (HIDWORD(off_1C0007000->Timer) & 1) != 0 && BYTE1(off_1C0007000->Timer) >= 2u )
  {
    LODWORD(DeviceCharacteristics) = result;
    sub_1C00044F8(
      (__int64)off_1C0007000->AttachedDevice,
      0x14u,
      (__int64)&unk_1C00053E8,
      (const wchar_t *)0x1C000F020LL,
      DeviceCharacteristics);
    return v2;
  }
  return result;
}
