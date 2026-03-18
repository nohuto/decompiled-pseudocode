/*
 * XREFs of sub_1C000C5A8 @ 0x1C000C5A8
 * Callers:
 *     sub_1C000C494 @ 0x1C000C494 (sub_1C000C494.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0003170 (_guard_dispatch_icall_nop.c)
 */

void sub_1C000C5A8()
{
  PDEVICE_OBJECT v0; // rbx

  v0 = off_1C0007000;
  if ( off_1C0007000 != (PDEVICE_OBJECT)&off_1C0007000 )
  {
    if ( dword_1C0007318 == 4 )
    {
      if ( off_1C0007000 )
      {
        do
        {
          if ( v0->Vpb )
          {
            ((void (*)(void))qword_1C0007330)();
            v0->Vpb = 0LL;
          }
          v0 = v0->NextDevice;
        }
        while ( v0 );
      }
    }
    else if ( dword_1C0007318 == 2 )
    {
      IoWMIRegistrationControl(off_1C0007000, 0x80000002);
    }
    off_1C0007000 = (PDEVICE_OBJECT)&off_1C0007000;
  }
}
