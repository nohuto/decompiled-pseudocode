/*
 * XREFs of PnpDeleteLockedDeviceNode @ 0x140733DB4
 * Callers:
 *     PnpDeleteLockedDeviceNodes @ 0x140733A40 (PnpDeleteLockedDeviceNodes.c)
 *     PnpCancelRemoveOnHungDevices @ 0x14089DE60 (PnpCancelRemoveOnHungDevices.c)
 * Callees:
 *     PoFxIdleDevice @ 0x14036B4B4 (PoFxIdleDevice.c)
 *     PoFxActivateDevice @ 0x14036B634 (PoFxActivateDevice.c)
 *     PnpRemoveLockedDeviceNode @ 0x14036C538 (PnpRemoveLockedDeviceNode.c)
 *     PipRestoreDevNodeState @ 0x14036D6E8 (PipRestoreDevNodeState.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     PnpQueryRemoveLockedDeviceNode @ 0x1407201FC (PnpQueryRemoveLockedDeviceNode.c)
 *     PnpStartedDeviceNodeDependencyCheck @ 0x140730BEC (PnpStartedDeviceNodeDependencyCheck.c)
 *     IopRemoveDevice @ 0x140734134 (IopRemoveDevice.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x140736D5C (PnpSurpriseRemoveLockedDeviceNode.c)
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
