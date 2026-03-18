/*
 * XREFs of PnpDeleteLockedDeviceNode @ 0x140766834
 * Callers:
 *     PnpDeleteLockedDeviceNodes @ 0x14076651C (PnpDeleteLockedDeviceNodes.c)
 * Callees:
 *     PoFxIdleDevice @ 0x1402D25CC (PoFxIdleDevice.c)
 *     PoFxActivateDevice @ 0x1402D2848 (PoFxActivateDevice.c)
 *     PnpRemoveLockedDeviceNode @ 0x1402DDAE4 (PnpRemoveLockedDeviceNode.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x14081059C (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PnpCancelRemoveLockedDeviceNode @ 0x1409473F0 (PnpCancelRemoveLockedDeviceNode.c)
 *     PnpQueryRemoveLockedDeviceNode @ 0x140947628 (PnpQueryRemoveLockedDeviceNode.c)
 */

__int64 __fastcall PnpDeleteLockedDeviceNode(
        ULONG_PTR BugCheckParameter2,
        int a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6)
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
      PnpCancelRemoveLockedDeviceNode(BugCheckParameter2);
    }
  }
  else
  {
    PoFxActivateDevice(*(_QWORD *)(BugCheckParameter2 + 32));
    *(_DWORD *)(BugCheckParameter2 + 704) |= 4u;
    return (unsigned int)PnpQueryRemoveLockedDeviceNode(BugCheckParameter2, a5, a6);
  }
  return v6;
}
