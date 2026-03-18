/*
 * XREFs of PnpCancelStopDeviceNode @ 0x1408B3EC4
 * Callers:
 *     PnpCancelStopDeviceSubtree @ 0x1408B3F54 (PnpCancelStopDeviceSubtree.c)
 *     PnpQueryRebalanceWorker @ 0x1408B4158 (PnpQueryRebalanceWorker.c)
 * Callees:
 *     PoFxIdleDevice @ 0x14036B4B4 (PoFxIdleDevice.c)
 *     PipRestoreDevNodeState @ 0x14036D6E8 (PipRestoreDevNodeState.c)
 *     PnpUnlockMountableDevice @ 0x140390978 (PnpUnlockMountableDevice.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     PipClearDevNodeFlags @ 0x14072C104 (PipClearDevNodeFlags.c)
 *     IopQueryReconfiguration @ 0x1408AE900 (IopQueryReconfiguration.c)
 */

__int64 __fastcall PnpCancelStopDeviceNode(ULONG_PTR BugCheckParameter2)
{
  struct _DEVICE_OBJECT *v2; // rdx
  __int64 result; // rax

  if ( *(_DWORD *)(BugCheckParameter2 + 300) == 777 )
  {
    if ( (*(_DWORD *)(BugCheckParameter2 + 704) & 0x20) == 0 )
      KeBugCheckEx(0xCAu, 0xDuLL, BugCheckParameter2, 0x20uLL, 0LL);
    PoFxIdleDevice(*(_QWORD *)(BugCheckParameter2 + 32));
    v2 = *(struct _DEVICE_OBJECT **)(BugCheckParameter2 + 32);
    *(_DWORD *)(BugCheckParameter2 + 704) &= ~0x20u;
    IopQueryReconfiguration(6, v2);
    result = PipRestoreDevNodeState(BugCheckParameter2);
    if ( (*(_DWORD *)(BugCheckParameter2 + 396) & 0x1000000) != 0 )
    {
      PnpUnlockMountableDevice(*(_QWORD *)(BugCheckParameter2 + 32));
      return PipClearDevNodeFlags(BugCheckParameter2, 0x1000000);
    }
  }
  return result;
}
