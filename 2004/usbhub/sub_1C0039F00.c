/*
 * XREFs of sub_1C0039F00 @ 0x1C0039F00
 * Callers:
 *     sub_1C0001010 @ 0x1C0001010 (sub_1C0001010.c)
 *     sub_1C0036CFC @ 0x1C0036CFC (sub_1C0036CFC.c)
 *     sub_1C0039D88 @ 0x1C0039D88 (sub_1C0039D88.c)
 * Callees:
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0016CA0 @ 0x1C0016CA0 (sub_1C0016CA0.c)
 *     sub_1C002E0B4 @ 0x1C002E0B4 (sub_1C002E0B4.c)
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 *     sub_1C00341E8 @ 0x1C00341E8 (sub_1C00341E8.c)
 *     sub_1C00344AC @ 0x1C00344AC (sub_1C00344AC.c)
 *     sub_1C003A1BC @ 0x1C003A1BC (sub_1C003A1BC.c)
 *     sub_1C004A608 @ 0x1C004A608 (sub_1C004A608.c)
 */

__int64 __fastcall sub_1C0039F00(PDEVICE_OBJECT DeviceObject, __int64 a2, unsigned __int16 a3)
{
  int v3; // edi
  __int64 v6; // rax
  __int64 v7; // rbp
  struct _KEVENT *v8; // rbx
  int v9; // ebx

  v3 = a3;
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 )
  {
    if ( LOWORD(::DeviceObject->DeviceType) )
      sub_1C002E0B4((__int64)::DeviceObject->DeviceExtension, 0, 1u, 0x4Fu, (__int64)"FKh&");
    if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(::DeviceObject->DeviceType) )
      sub_1C002E188((__int64)::DeviceObject->DeviceExtension, 0, 1u, 0x50u, (__int64)"FKh&", v3);
  }
  v6 = sub_1C0016CA0((__int64)DeviceObject, v3);
  v7 = v6;
  if ( v6 )
  {
    v8 = (struct _KEVENT *)(v6 + 520);
    KeWaitForSingleObject((PVOID)(v6 + 520), Executive, 0, 0, 0LL);
    sub_1C00344AC((__int64)DeviceObject, a2, v3);
    sub_1C00341E8((__int64)DeviceObject, a2, v3);
    KeSetEvent(v8, 0, 0);
    sub_1C000FD80((__int64)DeviceObject, 16, 1347573624, 0LL, *(unsigned __int16 *)(v7 + 4));
    v9 = sub_1C003A1BC(DeviceObject);
    if ( v9 < 0 )
      sub_1C004A608((_DWORD)DeviceObject, (unsigned __int16)v3, 134, 0, 0, v9, 0, (__int64)aBusC, 7065, 0);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v9;
}
