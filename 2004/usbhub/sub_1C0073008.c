/*
 * XREFs of sub_1C0073008 @ 0x1C0073008
 * Callers:
 *     sub_1C0042560 @ 0x1C0042560 (sub_1C0042560.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D060 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_1C0073008(__int64 a1)
{
  PDEVICE_OBJECT v1; // rbx

  v1 = DeviceObject;
  if ( DeviceObject != (PDEVICE_OBJECT)&DeviceObject )
  {
    if ( dword_1C006B738 == 4 )
    {
      while ( v1 )
      {
        if ( v1->Vpb )
        {
          ((void (*)(void))qword_1C006B748)();
          v1->Vpb = 0LL;
        }
        v1 = v1->NextDevice;
      }
    }
    else if ( dword_1C006B738 == 2 )
    {
      IoWMIRegistrationControl(DeviceObject, 0x80000002);
    }
    WppAutoLogStop(DeviceObject, a1);
    DeviceObject = (PDEVICE_OBJECT)&DeviceObject;
    off_1C006B000 = &off_1C006B000;
  }
}
