/*
 * XREFs of sub_1C0048BA0 @ 0x1C0048BA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D060 (_guard_dispatch_icall_nop.c)
 */

NTSTATUS __fastcall sub_1C0048BA0(
        PDEVICE_OBJECT DeviceObject,
        PIRP Irp,
        unsigned int a3,
        __int64 a4,
        int a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int *a8)
{
  unsigned int *v8; // rsi
  NTSTATUS v12; // ebx
  __int64 v13; // r15
  ULONG BufferUsed; // [rsp+70h] [rbp+18h] BYREF

  v8 = a8;
  BufferUsed = 0;
  v12 = -1073741163;
  sub_1C000FD80((__int64)DeviceObject, 64, 1466788173, (__int64)Irp, (__int64)a8);
  v13 = a7;
  sub_1C000FD80((__int64)DeviceObject, 64, 1466788145, a7, a6);
  sub_1C000FD80((__int64)DeviceObject, 64, 1466788146, a3, 0LL);
  if ( sub_1C000F050((__int64)DeviceObject)[340] == 5 )
  {
    if ( !a3 )
    {
      BufferUsed = 4;
      if ( a7 >= 4 )
      {
        if ( *v8 <= 0xB )
        {
          sub_1C000FD80((__int64)DeviceObject, 64, 2003651889, (__int64)v8, v13);
          sub_1C000FD80((__int64)DeviceObject, 64, 2003651890, (__int64)v8, (int)*v8);
          v12 = off_1C005F738[2 * (int)*v8]((int)DeviceObject, a6, a7, (int)&BufferUsed, (__int64)v8);
        }
      }
      else
      {
        sub_1C000FD80((__int64)DeviceObject, 64, 2003659041, (__int64)Irp, v13);
        v12 = -1073741789;
      }
    }
  }
  else
  {
    v12 = -1073741810;
  }
  sub_1C000FD80((__int64)DeviceObject, 64, 1464682819, (__int64)Irp, v12);
  return WmiCompleteRequest(DeviceObject, Irp, v12, BufferUsed, 0);
}
