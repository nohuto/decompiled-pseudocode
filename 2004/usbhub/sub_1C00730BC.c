/*
 * XREFs of sub_1C00730BC @ 0x1C00730BC
 * Callers:
 *     sub_1C0041468 @ 0x1C0041468 (sub_1C0041468.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D060 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_1C00730BC(__int64 a1, __int64 a2)
{
  struct _DEVICE_OBJECT *v4; // rbx
  void (__fastcall *v5)(struct _DRIVER_OBJECT *, _QWORD, __int64 (__fastcall *)(__int64, unsigned __int8, __int64 *, __int64), struct _DEVICE_OBJECT *, PVPB *); // rax

  if ( DeviceObject != &stru_1C006B480 )
  {
    DeviceObject = &stru_1C006B480;
    if ( dword_1C006B738 == 4 )
    {
      v4 = &stru_1C006B480;
      do
      {
        v5 = (void (__fastcall *)(struct _DRIVER_OBJECT *, _QWORD, __int64 (__fastcall *)(__int64, unsigned __int8, __int64 *, __int64), struct _DEVICE_OBJECT *, PVPB *))qword_1C006B720;
        v4->Vpb = 0LL;
        v5(v4->DriverObject, 0LL, sub_1C0044750, v4, &v4->Vpb);
        v4 = v4->NextDevice;
      }
      while ( v4 );
    }
    else if ( dword_1C006B738 == 2 )
    {
      *(_QWORD *)&stru_1C006B480.Type = sub_1C00732E0;
      IoWMIRegistrationControl(&stru_1C006B480, 0x80010001);
    }
    WppAutoLogStart(DeviceObject, a1, a2);
    off_1C006B000 = &stru_1C006B480;
  }
}
