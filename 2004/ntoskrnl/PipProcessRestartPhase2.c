/*
 * XREFs of PipProcessRestartPhase2 @ 0x1408B2230
 * Callers:
 *     PipProcessDevNodeTree @ 0x140726FC0 (PipProcessDevNodeTree.c)
 * Callees:
 *     PipSetDevNodeState @ 0x14036B438 (PipSetDevNodeState.c)
 *     PoFxIdleDevice @ 0x14036B584 (PoFxIdleDevice.c)
 *     IoRequestDeviceEject @ 0x140507530 (IoRequestDeviceEject.c)
 *     McTemplateK0dz_EtwWriteTransfer @ 0x14050AA28 (McTemplateK0dz_EtwWriteTransfer.c)
 *     PnpStartedDeviceNodeDependencyCheck @ 0x14072C098 (PnpStartedDeviceNodeDependencyCheck.c)
 *     PnpRequestDeviceRemoval @ 0x140733408 (PnpRequestDeviceRemoval.c)
 *     PnpUpdateRebootRequiredReason @ 0x14089F004 (PnpUpdateRebootRequiredReason.c)
 */

__int64 __fastcall PipProcessRestartPhase2(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // edi
  int v5; // esi
  __int64 v6; // r8

  if ( (byte_140C130BB & 0x10) != 0 )
    McTemplateK0dz_EtwWriteTransfer(
      a1,
      (const EVENT_DESCRIPTOR *)KMPnPEvt_ProcessDeviceRestart_Start,
      a3,
      2,
      *(const wchar_t **)(a1 + 48));
  v4 = *(_DWORD *)(a1 + 392);
  if ( v4 >= 0 )
  {
    PipSetDevNodeState(a1, 776);
    if ( (*(_DWORD *)(a1 + 704) & 0x20) != 0 )
    {
      PoFxIdleDevice(*(_QWORD *)(a1 + 32));
      *(_DWORD *)(a1 + 704) &= ~0x20u;
    }
    PnpStartedDeviceNodeDependencyCheck(a1);
  }
  else
  {
    if ( v4 == -1073741102 )
    {
      v5 = 14;
      PnpUpdateRebootRequiredReason(*(_QWORD *)(a1 + 48), a2, 0x80000000LL);
    }
    else
    {
      v5 = 10;
    }
    PnpRequestDeviceRemoval(a1, 0, v5, v4);
    if ( *(_DWORD *)(a1 + 568) )
      IoRequestDeviceEject(*(PDEVICE_OBJECT *)(a1 + 32));
  }
  if ( (byte_140C130BB & 0x10) != 0 )
    McTemplateK0dz_EtwWriteTransfer(
      *(_QWORD *)(a1 + 48),
      (const EVENT_DESCRIPTOR *)KMPnPEvt_ProcessDeviceRestart_Stop,
      v6,
      2,
      *(const wchar_t **)(a1 + 48));
  return (unsigned int)v4;
}
