/*
 * XREFs of PipProcessStartPhase1 @ 0x1407491FC
 * Callers:
 *     PipProcessDevNodeTree @ 0x140777578 (PipProcessDevNodeTree.c)
 * Callees:
 *     McTemplateK0dz_EtwWriteTransfer @ 0x1405643B8 (McTemplateK0dz_EtwWriteTransfer.c)
 *     IopUncacheInterfaceInformation @ 0x1407490C0 (IopUncacheInterfaceInformation.c)
 *     PiDmaGuardProcessPreStart @ 0x1407491AC (PiDmaGuardProcessPreStart.c)
 *     PnpStartDeviceNode @ 0x140749C4C (PnpStartDeviceNode.c)
 *     PpProfileBeginHardwareProfileTransition @ 0x14094FB70 (PpProfileBeginHardwareProfileTransition.c)
 *     PpProfileIncludeInHardwareProfileTransition @ 0x14094FE24 (PpProfileIncludeInHardwareProfileTransition.c)
 *     PpProfileQueryHardwareProfileChange @ 0x14094FF34 (PpProfileQueryHardwareProfileChange.c)
 */

__int64 __fastcall PipProcessStartPhase1(ULONG_PTR MaxDataSize, unsigned int a2, __int64 a3)
{
  int v3; // edi
  int started; // edi
  int v8; // [rsp+50h] [rbp+18h] BYREF

  v8 = 0;
  v3 = a3;
  if ( (byte_140C0DD4B & 0x10) != 0 )
    McTemplateK0dz_EtwWriteTransfer(
      MaxDataSize,
      (const EVENT_DESCRIPTOR *)KMPnPEvt_ProcessDeviceStart_Start,
      a3,
      1,
      *(const wchar_t **)(MaxDataSize + 48));
  if ( v3 && (*(_DWORD *)(MaxDataSize + 396) & 0x400000) != 0 )
  {
    started = -1073741267;
  }
  else
  {
    IopUncacheInterfaceInformation(*(_QWORD *)(MaxDataSize + 32), 1);
    if ( !*(_DWORD *)(MaxDataSize + 568)
      || (PpProfileBeginHardwareProfileTransition(0LL),
          PpProfileIncludeInHardwareProfileTransition(MaxDataSize, 2LL),
          started = PpProfileQueryHardwareProfileChange(0LL, 2LL, &v8, 0LL),
          started >= 0) )
    {
      PiDmaGuardProcessPreStart(MaxDataSize);
      started = PnpStartDeviceNode(MaxDataSize, 0LL, a2);
    }
  }
  if ( (byte_140C0DD4B & 0x10) != 0 )
    McTemplateK0dz_EtwWriteTransfer(
      MaxDataSize,
      (const EVENT_DESCRIPTOR *)KMPnPEvt_ProcessDeviceStart_Stop,
      a3,
      1,
      *(const wchar_t **)(MaxDataSize + 48));
  return (unsigned int)started;
}
