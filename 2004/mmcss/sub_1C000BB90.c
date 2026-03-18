/*
 * XREFs of sub_1C000BB90 @ 0x1C000BB90
 * Callers:
 *     sub_1C000D150 @ 0x1C000D150 (sub_1C000D150.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0003170 (_guard_dispatch_icall_nop.c)
 */

void sub_1C000BB90()
{
  struct _DEVICE_OBJECT *v0; // rbx
  void (__fastcall *v1)(struct _DRIVER_OBJECT *, _QWORD, void (__fastcall *)(__int64, unsigned __int8, __int64 *, __int64), struct _DEVICE_OBJECT *, PVPB *); // rax

  v0 = &DeviceObject;
  if ( off_1C0007000 != &DeviceObject )
  {
    off_1C0007000 = &DeviceObject;
    if ( dword_1C0007318 == 4 )
    {
      do
      {
        v1 = (void (__fastcall *)(struct _DRIVER_OBJECT *, _QWORD, void (__fastcall *)(__int64, unsigned __int8, __int64 *, __int64), struct _DEVICE_OBJECT *, PVPB *))qword_1C0007328;
        v0->Vpb = 0LL;
        v1(v0->DriverObject, 0LL, sub_1C0004700, v0, &v0->Vpb);
        v0 = v0->NextDevice;
      }
      while ( v0 );
    }
    else if ( dword_1C0007318 == 2 )
    {
      *(_QWORD *)&DeviceObject.Type = sub_1C000C630;
      IoWMIRegistrationControl(&DeviceObject, 0x80010001);
    }
  }
}
