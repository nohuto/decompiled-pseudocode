/*
 * XREFs of PnpCancelRemoveLockedDeviceNode @ 0x1409473F0
 * Callers:
 *     PnpDeleteLockedDeviceNode @ 0x140766834 (PnpDeleteLockedDeviceNode.c)
 * Callees:
 *     PipRestoreDevNodeState @ 0x14025B96C (PipRestoreDevNodeState.c)
 *     PipClearDevNodeUserFlags @ 0x14074A08C (PipClearDevNodeUserFlags.c)
 *     IopRemoveDevice @ 0x140766C3C (IopRemoveDevice.c)
 *     PipSetDevNodeUserFlags @ 0x140767220 (PipSetDevNodeUserFlags.c)
 *     PnpStartedDeviceNodeDependencyCheck @ 0x14076AC70 (PnpStartedDeviceNodeDependencyCheck.c)
 */

__int64 __fastcall PnpCancelRemoveLockedDeviceNode(__int64 a1)
{
  __int64 result; // rax

  if ( *(_DWORD *)(a1 + 300) == 786 )
  {
    PipSetDevNodeUserFlags(a1, 512);
    IopRemoveDevice(*(PDEVICE_OBJECT *)(a1 + 32), 3);
    PipClearDevNodeUserFlags(a1, 512);
    PipRestoreDevNodeState(a1);
    return PnpStartedDeviceNodeDependencyCheck(a1);
  }
  return result;
}
