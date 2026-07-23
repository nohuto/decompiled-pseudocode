/*
 * XREFs of PiSwDeviceOperationsAllowed @ 0x14074D24C
 * Callers:
 *     PiSwIrpSetLifetime @ 0x14074D18C (PiSwIrpSetLifetime.c)
 *     PiSwIrpInterfaceRegister @ 0x14074D2D8 (PiSwIrpInterfaceRegister.c)
 *     PiSwIrpPropertySet @ 0x14078A764 (PiSwIrpPropertySet.c)
 *     PiSwIrpInterfacePropertySet @ 0x1407BD9D4 (PiSwIrpInterfacePropertySet.c)
 *     PiSwIrpInterfaceSetState @ 0x1407CEF2C (PiSwIrpInterfaceSetState.c)
 *     PiSwIrpGetLifetime @ 0x1408AEBD0 (PiSwIrpGetLifetime.c)
 * Callees:
 *     <none>
 */

char __fastcall PiSwDeviceOperationsAllowed(__int64 a1)
{
  char v1; // dl

  v1 = 1;
  if ( !a1 || !*(_QWORD *)(a1 + 80) || (*(_DWORD *)(a1 + 4) & 4) == 0 || *(_QWORD *)(a1 + 88) )
    return 0;
  return v1;
}
