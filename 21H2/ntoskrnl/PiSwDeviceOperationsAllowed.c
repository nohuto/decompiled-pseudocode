/*
 * XREFs of PiSwDeviceOperationsAllowed @ 0x14074D08C
 * Callers:
 *     PiSwIrpSetLifetime @ 0x14074CFCC (PiSwIrpSetLifetime.c)
 *     PiSwIrpInterfaceRegister @ 0x14074D118 (PiSwIrpInterfaceRegister.c)
 *     PiSwIrpPropertySet @ 0x14078A5A4 (PiSwIrpPropertySet.c)
 *     PiSwIrpInterfacePropertySet @ 0x1407BD244 (PiSwIrpInterfacePropertySet.c)
 *     PiSwIrpInterfaceSetState @ 0x1407CEDBC (PiSwIrpInterfaceSetState.c)
 *     PiSwIrpGetLifetime @ 0x1408AEA70 (PiSwIrpGetLifetime.c)
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
