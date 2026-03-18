/*
 * XREFs of PiSwDeviceOperationsAllowed @ 0x140763000
 * Callers:
 *     PiSwIrpPropertySet @ 0x140762C04 (PiSwIrpPropertySet.c)
 *     PiSwIrpSetLifetime @ 0x140762F18 (PiSwIrpSetLifetime.c)
 *     PiSwIrpInterfaceRegister @ 0x14076308C (PiSwIrpInterfaceRegister.c)
 *     PiSwIrpInterfacePropertySet @ 0x14084F808 (PiSwIrpInterfacePropertySet.c)
 *     PiSwIrpInterfaceSetState @ 0x140860758 (PiSwIrpInterfaceSetState.c)
 *     PiSwIrpGetLifetime @ 0x140953894 (PiSwIrpGetLifetime.c)
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
