/*
 * XREFs of PipProcessStartPhase2 @ 0x1407436E8
 * Callers:
 *     PipProcessDevNodeTree @ 0x140735A50 (PipProcessDevNodeTree.c)
 * Callees:
 *     PipSetDevNodeState @ 0x14036D418 (PipSetDevNodeState.c)
 *     IoRequestDeviceEject @ 0x14050AE60 (IoRequestDeviceEject.c)
 *     McTemplateK0dz_EtwWriteTransfer @ 0x14050E358 (McTemplateK0dz_EtwWriteTransfer.c)
 *     PnpRequestDeviceRemoval @ 0x140742898 (PnpRequestDeviceRemoval.c)
 *     IopDoDeferredSetInterfaceState @ 0x14074379C (IopDoDeferredSetInterfaceState.c)
 *     PnpUpdateRebootRequiredReason @ 0x1408A4B34 (PnpUpdateRebootRequiredReason.c)
 *     PpProfileCancelHardwareProfileTransition @ 0x1408ADDD8 (PpProfileCancelHardwareProfileTransition.c)
 *     PpProfileCommitTransitioningDock @ 0x1408ADF0C (PpProfileCommitTransitioningDock.c)
 *     IopAllocateLegacyBootResources @ 0x140A69F6C (IopAllocateLegacyBootResources.c)
 */

__int64 __fastcall PipProcessStartPhase2(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // edi
  __int64 v5; // r8
  __int64 v7; // rcx
  int v8; // esi

  if ( (byte_140C130BB & 0x10) != 0 )
    McTemplateK0dz_EtwWriteTransfer(
      a1,
      (const EVENT_DESCRIPTOR *)KMPnPEvt_ProcessDeviceStart_Start,
      a3,
      2,
      *(const wchar_t **)(a1 + 48));
  v4 = *(_DWORD *)(a1 + 392);
  if ( *(_DWORD *)(a1 + 568) )
  {
    if ( v4 < 0 )
      PpProfileCancelHardwareProfileTransition();
    else
      PpProfileCommitTransitioningDock(a1);
  }
  if ( v4 < 0 )
  {
    if ( v4 == -1073741102 )
    {
      v8 = 14;
      PnpUpdateRebootRequiredReason(*(_QWORD *)(a1 + 48), a2, 0x40000000LL);
    }
    else
    {
      v8 = 10;
    }
    PnpRequestDeviceRemoval(a1, 0, v8, v4);
    if ( *(_DWORD *)(a1 + 568) )
      IoRequestDeviceEject(*(PDEVICE_OBJECT *)(a1 + 32));
  }
  else
  {
    IopDoDeferredSetInterfaceState(a1);
    if ( !IopBootConfigsReserved )
    {
      v7 = *(unsigned int *)(a1 + 448);
      if ( (_DWORD)v7 != -1 )
      {
        if ( (_DWORD)v7 == 1 )
        {
          IopAllocateLegacyBootResources(2LL, *(unsigned int *)(a1 + 452));
          v7 = *(unsigned int *)(a1 + 448);
        }
        IopAllocateLegacyBootResources(v7, *(unsigned int *)(a1 + 452));
      }
    }
    PipSetDevNodeState(a1, 775);
  }
  if ( (byte_140C130BB & 0x10) != 0 )
    McTemplateK0dz_EtwWriteTransfer(
      *(_QWORD *)(a1 + 48),
      (const EVENT_DESCRIPTOR *)KMPnPEvt_ProcessDeviceStart_Stop,
      v5,
      2,
      *(const wchar_t **)(a1 + 48));
  return (unsigned int)v4;
}
