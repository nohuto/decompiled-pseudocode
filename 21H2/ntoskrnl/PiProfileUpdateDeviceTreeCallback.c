/*
 * XREFs of PiProfileUpdateDeviceTreeCallback @ 0x14094F860
 * Callers:
 *     <none>
 * Callees:
 *     IoInvalidateDeviceRelations @ 0x1402DCE90 (IoInvalidateDeviceRelations.c)
 *     PnpRestartDeviceNode @ 0x14066044C (PnpRestartDeviceNode.c)
 *     PipClearDevNodeProblem @ 0x140764FE4 (PipClearDevNodeProblem.c)
 *     PipSetDevNodeProblem @ 0x140765114 (PipSetDevNodeProblem.c)
 *     PnpRequestDeviceRemoval @ 0x140765430 (PnpRequestDeviceRemoval.c)
 *     PnpIsDeviceInstanceEnabled @ 0x14076B030 (PnpIsDeviceInstanceEnabled.c)
 */

__int64 __fastcall PiProfileUpdateDeviceTreeCallback(__int64 a1)
{
  int v2; // ecx

  v2 = *(_DWORD *)(a1 + 300);
  if ( v2 == 778 )
  {
    if ( !(unsigned int)PnpIsDeviceInstanceEnabled(0LL, a1 + 40, 0) )
      PnpRequestDeviceRemoval(a1, 0, 22, 0);
  }
  else if ( ((v2 - 771) & 0xFFFFFFEE) == 0
         && v2 != 787
         && (*(_DWORD *)(a1 + 396) & 0x2000) != 0
         && *(_DWORD *)(a1 + 404) == 22 )
  {
    PipClearDevNodeProblem(a1);
    if ( (unsigned int)PnpIsDeviceInstanceEnabled(0LL, a1 + 40, 0) )
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
