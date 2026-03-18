/*
 * XREFs of PnpDeleteLockedDeviceNode @ 0x140741474
 * Callers:
 *     PnpDeleteLockedDeviceNodes @ 0x140741100 (PnpDeleteLockedDeviceNodes.c)
 *     PnpCancelRemoveOnHungDevices @ 0x1408A4CB0 (PnpCancelRemoveOnHungDevices.c)
 * Callees:
 *     PoFxIdleDevice @ 0x14036D564 (PoFxIdleDevice.c)
 *     PoFxActivateDevice @ 0x14036D6E4 (PoFxActivateDevice.c)
 *     PnpRemoveLockedDeviceNode @ 0x14036F2E0 (PnpRemoveLockedDeviceNode.c)
 *     PipRestoreDevNodeState @ 0x14037E510 (PipRestoreDevNodeState.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     PnpQueryRemoveLockedDeviceNode @ 0x1407301CC (PnpQueryRemoveLockedDeviceNode.c)
 *     PnpStartedDeviceNodeDependencyCheck @ 0x14073AB28 (PnpStartedDeviceNodeDependencyCheck.c)
 *     IopRemoveDevice @ 0x1407417F8 (IopRemoveDevice.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x14076AA54 (PnpSurpriseRemoveLockedDeviceNode.c)
 */

__int64 __fastcall PnpDeleteLockedDeviceNode(
        ULONG_PTR BugCheckParameter2,
        int a2,
        unsigned int a3,
        unsigned int a4,
        _DWORD *a5,
        UNICODE_STRING *a6)
{
  unsigned int v6; // edi
  int v10; // edx
  int v11; // edx

  v6 = 0;
  if ( a2 )
  {
    v10 = a2 - 1;
    if ( v10 )
    {
      v11 = v10 - 1;
      if ( v11 )
      {
        if ( v11 == 1 )
        {
          PoFxActivateDevice(*(_QWORD *)(BugCheckParameter2 + 32));
          *(_DWORD *)(BugCheckParameter2 + 704) |= 8u;
          PnpSurpriseRemoveLockedDeviceNode(BugCheckParameter2);
        }
      }
      else
      {
        PoFxActivateDevice(*(_QWORD *)(BugCheckParameter2 + 32));
        *(_DWORD *)(BugCheckParameter2 + 704) |= 0x10u;
        PnpRemoveLockedDeviceNode(BugCheckParameter2, a3, a4);
      }
    }
    else
    {
      if ( (*(_DWORD *)(BugCheckParameter2 + 704) & 4) == 0 )
        KeBugCheckEx(0xCAu, 0xDuLL, BugCheckParameter2, 4uLL, 0LL);
      PoFxIdleDevice(*(_QWORD *)(BugCheckParameter2 + 32));
      *(_DWORD *)(BugCheckParameter2 + 704) &= ~4u;
      if ( *(_DWORD *)(BugCheckParameter2 + 300) == 784 )
      {
        IopRemoveDevice(*(PDEVICE_OBJECT *)(BugCheckParameter2 + 32));
        PipRestoreDevNodeState(BugCheckParameter2);
        PnpStartedDeviceNodeDependencyCheck(BugCheckParameter2);
      }
    }
  }
  else
  {
    PoFxActivateDevice(*(_QWORD *)(BugCheckParameter2 + 32));
    *(_DWORD *)(BugCheckParameter2 + 704) |= 4u;
    return (unsigned int)PnpQueryRemoveLockedDeviceNode(BugCheckParameter2, a3, a5, a6);
  }
  return v6;
}
