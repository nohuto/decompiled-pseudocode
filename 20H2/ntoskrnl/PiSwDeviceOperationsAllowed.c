/*
 * XREFs of PiSwDeviceOperationsAllowed @ 0x14076D9B8
 * Callers:
 *     PiSwIrpInterfaceRegister @ 0x140746F1C (PiSwIrpInterfaceRegister.c)
 *     PiSwIrpSetLifetime @ 0x14076D8F8 (PiSwIrpSetLifetime.c)
 *     PiSwIrpPropertySet @ 0x1407867C4 (PiSwIrpPropertySet.c)
 *     PiSwIrpInterfacePropertySet @ 0x1407B85E4 (PiSwIrpInterfacePropertySet.c)
 *     PiSwIrpInterfaceSetState @ 0x1407CAAFC (PiSwIrpInterfaceSetState.c)
 *     PiSwIrpGetLifetime @ 0x1408B14A0 (PiSwIrpGetLifetime.c)
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
