/*
 * XREFs of RaIsDeviceDFxPoweredDown @ 0x1C000CB58
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C000BEE8 (RaUnitDeviceControlIrp.c)
 *     RaidAdapterDeviceControlIrp @ 0x1C000C838 (RaidAdapterDeviceControlIrp.c)
 *     RaDriverSystemControlIrp @ 0x1C0074110 (RaDriverSystemControlIrp.c)
 * Callees:
 *     <none>
 */

bool __fastcall RaIsDeviceDFxPoweredDown(__int64 a1)
{
  __int64 v1; // rax
  bool v2; // zf

  v1 = *(_QWORD *)(a1 + 64);
  if ( *(_DWORD *)v1 )
  {
    if ( *(_DWORD *)v1 != 1 )
      return 0;
    v2 = (*(_BYTE *)(v1 + 451) & 2) == 0;
  }
  else
  {
    v2 = (*(_BYTE *)(v1 + 110) & 0x20) == 0;
  }
  return !v2;
}
