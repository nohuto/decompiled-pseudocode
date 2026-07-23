/*
 * XREFs of HalpKdReleaseDebuggingDevice @ 0x1409B7430
 * Callers:
 *     <none>
 * Callees:
 *     HalpFindDevice @ 0x1409B7158 (HalpFindDevice.c)
 */

__int64 __fastcall HalpKdReleaseDebuggingDevice(__int64 a1)
{
  __int64 *Device; // rax
  __int64 v2; // rcx
  __int64 **v3; // rdx

  if ( *(_DWORD *)(a1 + 220) != 3 )
  {
    Device = HalpFindDevice(a1);
    if ( Device )
    {
      v2 = *Device;
      if ( *(__int64 **)(*Device + 8) != Device || (v3 = (__int64 **)Device[1], *v3 != Device) )
        __fastfail(3u);
      *v3 = (__int64 *)v2;
      *(_QWORD *)(v2 + 8) = v3;
      --DevicesList;
    }
  }
  return 0LL;
}
