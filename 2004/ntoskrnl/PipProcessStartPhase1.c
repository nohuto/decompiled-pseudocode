/*
 * XREFs of PipProcessStartPhase1 @ 0x14072C90C
 * Callers:
 *     PipProcessDevNodeTree @ 0x140726FC0 (PipProcessDevNodeTree.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x1403C9218 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     McTemplateK0dz_EtwWriteTransfer @ 0x14050AA28 (McTemplateK0dz_EtwWriteTransfer.c)
 *     PnpStartDeviceNode @ 0x14072C52C (PnpStartDeviceNode.c)
 *     IopUncacheInterfaceInformation @ 0x14072C9C4 (IopUncacheInterfaceInformation.c)
 *     PpProfileBeginHardwareProfileTransition @ 0x1408A8278 (PpProfileBeginHardwareProfileTransition.c)
 *     PpProfileIncludeInHardwareProfileTransition @ 0x1408A852C (PpProfileIncludeInHardwareProfileTransition.c)
 *     PpProfileQueryHardwareProfileChange @ 0x1408A863C (PpProfileQueryHardwareProfileChange.c)
 */

__int64 __fastcall PipProcessStartPhase1(ULONG_PTR MaxDataSize, int a2, __int64 a3)
{
  int v3; // edi
  int started; // edi
  __int64 v8; // rdi
  int v9; // eax
  ULONG_PTR v10; // rsi
  __int64 v11; // rax
  int v12; // [rsp+60h] [rbp+18h] BYREF

  v3 = a3;
  v12 = 0;
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
          started = PpProfileQueryHardwareProfileChange(0LL, 2LL, &v12, 0LL),
          started >= 0) )
    {
      if ( PipHalIommuSecurityEnabled )
      {
        v8 = *(_QWORD *)(MaxDataSize + 720);
        if ( v8 )
        {
          if ( (*(_BYTE *)(v8 + 16) & 1) == 0 )
          {
            v9 = ((__int64 (__fastcall *)(_QWORD, __int64))off_140C009C8[0])(*(_QWORD *)v8, v8 + 8);
            v10 = v9;
            if ( v9 < 0 )
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
              v11 = *(_QWORD *)(MaxDataSize + 16);
              if ( v11 && *(_WORD *)(v11 + 56) )
              {
                IoAddTriageDumpDataBlock(v11 + 56, (PVOID)2);
                IoAddTriageDumpDataBlock(
                  *(_QWORD *)(*(_QWORD *)(MaxDataSize + 16) + 64LL),
                  (PVOID)*(unsigned __int16 *)(*(_QWORD *)(MaxDataSize + 16) + 56LL));
              }
              KeBugCheckEx(0xCAu, 0x13uLL, 0x1000uLL, v10, MaxDataSize);
            }
            *(_BYTE *)(v8 + 16) |= 2u;
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
