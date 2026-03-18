/*
 * XREFs of PiSwDeviceOperationsAllowed @ 0x14075F348
 * Callers:
 *     PiSwIrpInterfaceRegister @ 0x140737A8C (PiSwIrpInterfaceRegister.c)
 *     PiSwIrpSetLifetime @ 0x14075F288 (PiSwIrpSetLifetime.c)
 *     PiSwIrpPropertySet @ 0x1407781C4 (PiSwIrpPropertySet.c)
 *     PiSwIrpInterfacePropertySet @ 0x1407AA6A4 (PiSwIrpInterfacePropertySet.c)
 *     PiSwIrpInterfaceSetState @ 0x1407BC26C (PiSwIrpInterfaceSetState.c)
 *     PiSwIrpGetLifetime @ 0x1408AB970 (PiSwIrpGetLifetime.c)
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
