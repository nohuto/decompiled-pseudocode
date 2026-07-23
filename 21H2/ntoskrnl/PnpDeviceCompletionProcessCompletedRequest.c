/*
 * XREFs of PnpDeviceCompletionProcessCompletedRequest @ 0x140746CB0
 * Callers:
 *     PnpStartDeviceNode @ 0x14073E0C4 (PnpStartDeviceNode.c)
 *     PnpDeviceCompletionProcessCompletedRequests @ 0x1407419DC (PnpDeviceCompletionProcessCompletedRequests.c)
 *     PipEnumerateDevice @ 0x140746FE8 (PipEnumerateDevice.c)
 * Callees:
 *     PnpDeviceCompletionRequestDestroy @ 0x14036FA94 (PnpDeviceCompletionRequestDestroy.c)
 *     PipSetDevNodeState @ 0x14036FB98 (PipSetDevNodeState.c)
 *     PoFxIdleDevice @ 0x14036FCE4 (PoFxIdleDevice.c)
 *     PipUpdatePostStartCharacteristics @ 0x14037E97C (PipUpdatePostStartCharacteristics.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     _PnpSetObjectProperty @ 0x140745DE4 (_PnpSetObjectProperty.c)
 *     PiSwProcessParentStartIrp @ 0x14076DF48 (PiSwProcessParentStartIrp.c)
 */

__int64 __fastcall PnpDeviceCompletionProcessCompletedRequest(__int64 a1)
{
  ULONG_PTR v2; // rbx
  int v3; // eax

  v2 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(v2 + 528) = *(_QWORD *)(a1 + 48);
  *(_DWORD *)(v2 + 392) = *(_DWORD *)(a1 + 40);
  PipSetDevNodeState(v2, *(_DWORD *)(a1 + 32));
  if ( *(int *)(a1 + 40) >= 0 )
  {
    v3 = *(_DWORD *)(a1 + 32);
    if ( v3 == 774 || v3 == 779 )
    {
      PipUpdatePostStartCharacteristics(*(_QWORD *)(v2 + 32));
      PnpSetObjectProperty(
        *(__int64 *)&PiPnpRtlCtx,
        *(_QWORD *)(v2 + 48),
        1u,
        0LL,
        0LL,
        (__int64)&DEVPKEY_Device_DriverProblemDesc,
        0,
        0LL,
        0,
        0);
      PiSwProcessParentStartIrp(*(PDEVICE_OBJECT *)(v2 + 32));
    }
  }
  if ( *(_DWORD *)(a1 + 32) == 781 )
  {
    if ( (*(_DWORD *)(v2 + 704) & 0x80u) == 0 )
      KeBugCheckEx(0xCAu, 0xDuLL, v2, 0x80uLL, 0LL);
    PoFxIdleDevice(*(_QWORD *)(v2 + 32));
    *(_DWORD *)(v2 + 704) &= ~0x80u;
  }
  PnpDeviceCompletionRequestDestroy(a1);
  return *(unsigned int *)(v2 + 392);
}
