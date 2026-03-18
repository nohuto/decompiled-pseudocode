/*
 * XREFs of PiProfileUpdateDeviceTreeCallback @ 0x1408ADAB0
 * Callers:
 *     <none>
 * Callees:
 *     IoInvalidateDeviceRelations @ 0x14036E6C0 (IoInvalidateDeviceRelations.c)
 *     PnpRestartDeviceNode @ 0x14072D508 (PnpRestartDeviceNode.c)
 *     PipClearDevNodeProblem @ 0x14073F500 (PipClearDevNodeProblem.c)
 *     PipSetDevNodeProblem @ 0x1407424D8 (PipSetDevNodeProblem.c)
 *     PnpRequestDeviceRemoval @ 0x140742898 (PnpRequestDeviceRemoval.c)
 *     PnpIsDeviceInstanceEnabled @ 0x14074C05C (PnpIsDeviceInstanceEnabled.c)
 */

__int64 __fastcall PiProfileUpdateDeviceTreeCallback(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 300);
  if ( v1 == 776 )
  {
    if ( !(unsigned int)PnpIsDeviceInstanceEnabled(0LL, (unsigned __int16 *)(a1 + 40), 0) )
      PnpRequestDeviceRemoval(a1, 0, 22, 0);
  }
  else if ( ((v1 - 770) & 0xFFFFFFEF) == 0 && (*(_DWORD *)(a1 + 396) & 0x2000) != 0 && *(_DWORD *)(a1 + 404) == 22 )
  {
    PipClearDevNodeProblem(a1);
    if ( (unsigned int)PnpIsDeviceInstanceEnabled(0LL, (unsigned __int16 *)(a1 + 40), 0) )
    {
      PnpRestartDeviceNode(a1);
      IoInvalidateDeviceRelations(*(PDEVICE_OBJECT *)(*(_QWORD *)(a1 + 16) + 32LL), BusRelations);
    }
    else
    {
      PipSetDevNodeProblem(a1, 22, 0);
    }
  }
  return 0LL;
}
