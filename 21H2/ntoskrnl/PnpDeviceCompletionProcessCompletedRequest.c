/*
 * XREFs of PnpDeviceCompletionProcessCompletedRequest @ 0x1407730FC
 * Callers:
 *     PnpStartDeviceNode @ 0x140749C4C (PnpStartDeviceNode.c)
 *     PipEnumerateDevice @ 0x14074B420 (PipEnumerateDevice.c)
 *     PnpDeviceCompletionProcessCompletedRequests @ 0x140777B74 (PnpDeviceCompletionProcessCompletedRequests.c)
 * Callees:
 *     PipUpdatePostStartCharacteristics @ 0x14025A078 (PipUpdatePostStartCharacteristics.c)
 *     PoFxIdleDevice @ 0x1402D25CC (PoFxIdleDevice.c)
 *     PnpDeviceCompletionRequestDestroy @ 0x1402DE684 (PnpDeviceCompletionRequestDestroy.c)
 *     PipSetDevNodeState @ 0x1402DE844 (PipSetDevNodeState.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     PiSwProcessParentStartIrp @ 0x1406E4E14 (PiSwProcessParentStartIrp.c)
 *     _PnpSetObjectProperty @ 0x14077198C (_PnpSetObjectProperty.c)
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
    if ( v3 == 776 || v3 == 781 )
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
  if ( *(_DWORD *)(a1 + 32) == 783 )
  {
    if ( (*(_DWORD *)(v2 + 704) & 0x80u) == 0 )
      KeBugCheckEx(0xCAu, 0xDuLL, v2, 0x80uLL, 0LL);
    PoFxIdleDevice(*(_QWORD *)(v2 + 32));
    *(_DWORD *)(v2 + 704) &= ~0x80u;
  }
  PnpDeviceCompletionRequestDestroy(a1);
  return *(unsigned int *)(v2 + 392);
}
