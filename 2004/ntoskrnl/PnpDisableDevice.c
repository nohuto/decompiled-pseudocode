/*
 * XREFs of PnpDisableDevice @ 0x14089EC8C
 * Callers:
 *     PiProcessNewDeviceNode @ 0x140724960 (PiProcessNewDeviceNode.c)
 *     PnpIsDeviceInstanceEnabled @ 0x14073D14C (PnpIsDeviceInstanceEnabled.c)
 * Callees:
 *     PiIrpQueryRemoveDevice @ 0x1407221AC (PiIrpQueryRemoveDevice.c)
 *     PipClearDevNodeProblem @ 0x14073015C (PipClearDevNodeProblem.c)
 *     IopReleaseDeviceResources @ 0x1407322A4 (IopReleaseDeviceResources.c)
 *     IopRemoveDevice @ 0x140732450 (IopRemoveDevice.c)
 *     PipSetDevNodeProblem @ 0x140733048 (PipSetDevNodeProblem.c)
 */

void __fastcall PnpDisableDevice(__int64 a1, int a2)
{
  int v2; // eax

  v2 = *(_DWORD *)(a1 + 300);
  if ( v2 >= 769 )
  {
    if ( v2 <= 770 )
      goto LABEL_6;
    if ( v2 > 781 )
      goto LABEL_7;
    if ( (int)PiIrpQueryRemoveDevice(*(PDEVICE_OBJECT *)(a1 + 32), 0LL) >= 0 )
    {
LABEL_6:
      IopRemoveDevice(*(PDEVICE_OBJECT *)(a1 + 32), 2);
      IopReleaseDeviceResources(a1, 1);
    }
    else
    {
      IopRemoveDevice(*(PDEVICE_OBJECT *)(a1 + 32), 3);
    }
  }
LABEL_7:
  if ( (*(_DWORD *)(a1 + 396) & 0x6000) != 0 )
    PipClearDevNodeProblem(a1);
  PipSetDevNodeProblem(a1, a2, 0);
}
