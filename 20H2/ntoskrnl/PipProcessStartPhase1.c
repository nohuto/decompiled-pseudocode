/*
 * XREFs of PipProcessStartPhase1 @ 0x14073B388
 * Callers:
 *     PipProcessDevNodeTree @ 0x140735A50 (PipProcessDevNodeTree.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x1403CBE58 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     McTemplateK0dz_EtwWriteTransfer @ 0x14050E358 (McTemplateK0dz_EtwWriteTransfer.c)
 *     PnpStartDeviceNode @ 0x14073AFA8 (PnpStartDeviceNode.c)
 *     IopUncacheInterfaceInformation @ 0x14073B440 (IopUncacheInterfaceInformation.c)
 *     PpProfileBeginHardwareProfileTransition @ 0x1408ADDA8 (PpProfileBeginHardwareProfileTransition.c)
 *     PpProfileIncludeInHardwareProfileTransition @ 0x1408AE05C (PpProfileIncludeInHardwareProfileTransition.c)
 *     PpProfileQueryHardwareProfileChange @ 0x1408AE16C (PpProfileQueryHardwareProfileChange.c)
 *     PiIommuUnblockDevice @ 0x1408B6EEC (PiIommuUnblockDevice.c)
 */

__int64 __fastcall PipProcessStartPhase1(ULONG_PTR MaxDataSize, int a2, __int64 a3)
{
  int v3; // edi
  int started; // edi
  int v8; // eax
  ULONG_PTR v9; // rsi
  __int64 v10; // rax
  int v11; // [rsp+60h] [rbp+18h] BYREF

  v3 = a3;
  v11 = 0;
  if ( (byte_140C130BB & 0x10) != 0 )
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
    IopUncacheInterfaceInformation(*(_QWORD *)(MaxDataSize + 32), 1LL);
    if ( !*(_DWORD *)(MaxDataSize + 568)
      || (PpProfileBeginHardwareProfileTransition(0LL),
          PpProfileIncludeInHardwareProfileTransition(MaxDataSize, 2LL),
          started = PpProfileQueryHardwareProfileChange(0LL, 2LL, &v11, 0LL),
          started >= 0) )
    {
      if ( PipHalIommuSecurityEnabled )
      {
        if ( *(_QWORD *)(MaxDataSize + 720) )
        {
          v8 = PiIommuUnblockDevice();
          v9 = v8;
          if ( v8 < 0 )
          {
            IoAddTriageDumpDataBlock(MaxDataSize, (PVOID)0x310);
            if ( *(_WORD *)(MaxDataSize + 40) )
            {
              IoAddTriageDumpDataBlock(MaxDataSize + 40, (PVOID)2);
              IoAddTriageDumpDataBlock(*(_QWORD *)(MaxDataSize + 48), (PVOID)*(unsigned __int16 *)(MaxDataSize + 40));
            }
            if ( *(_WORD *)(MaxDataSize + 56) )
            {
              IoAddTriageDumpDataBlock(MaxDataSize + 56, (PVOID)2);
              IoAddTriageDumpDataBlock(*(_QWORD *)(MaxDataSize + 64), (PVOID)*(unsigned __int16 *)(MaxDataSize + 56));
            }
            v10 = *(_QWORD *)(MaxDataSize + 16);
            if ( v10 && *(_WORD *)(v10 + 56) )
            {
              IoAddTriageDumpDataBlock(v10 + 56, (PVOID)2);
              IoAddTriageDumpDataBlock(
                *(_QWORD *)(*(_QWORD *)(MaxDataSize + 16) + 64LL),
                (PVOID)*(unsigned __int16 *)(*(_QWORD *)(MaxDataSize + 16) + 56LL));
            }
            KeBugCheckEx(0xCAu, 0x13uLL, 0x1000uLL, v9, MaxDataSize);
          }
        }
      }
      started = PnpStartDeviceNode(MaxDataSize, 0, a2);
    }
  }
  if ( (byte_140C130BB & 0x10) != 0 )
    McTemplateK0dz_EtwWriteTransfer(
      MaxDataSize,
      (const EVENT_DESCRIPTOR *)KMPnPEvt_ProcessDeviceStart_Stop,
      a3,
      1,
      *(const wchar_t **)(MaxDataSize + 48));
  return (unsigned int)started;
}
