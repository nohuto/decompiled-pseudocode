/*
 * XREFs of NdisRetreatNetBufferDataStart @ 0x1C00083D0
 * Callers:
 *     NdisRetreatNetBufferListDataStart @ 0x1C00ACA70 (NdisRetreatNetBufferListDataStart.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C003F3E0 (_guard_dispatch_icall_nop.c)
 */

NDIS_STATUS __stdcall NdisRetreatNetBufferDataStart(
        PNET_BUFFER NetBuffer,
        ULONG DataOffsetDelta,
        ULONG DataBackFill,
        NET_BUFFER_ALLOCATE_MDL_HANDLER AllocateMdlHandler)
{
  NDIS_STATUS v5; // edi
  unsigned int DataOffset; // ecx
  unsigned int v8; // ecx
  _MDL *MdlChain; // rdx
  ULONG ByteCount; // eax
  NET_BUFFER_ALLOCATE_MDL_HANDLER v12; // rax
  ULONG v13; // ecx
  ULONG v14; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0;
  DataOffset = NetBuffer->DataOffset;
  if ( DataOffset < DataOffsetDelta )
  {
    v14 = DataBackFill + DataOffsetDelta - DataOffset;
    v12 = ndisAllocateMdlInternal;
    if ( AllocateMdlHandler )
      v12 = AllocateMdlHandler;
    MdlChain = (_MDL *)((__int64 (__fastcall *)(ULONG *))v12)(&v14);
    if ( !MdlChain )
      return -1073741670;
    MdlChain->Next = NetBuffer->MdlChain;
    v13 = v14 - DataOffsetDelta;
    NetBuffer->MdlChain = MdlChain;
    NetBuffer->DataOffset += v13;
    NetBuffer->DataLength += DataOffsetDelta;
    v8 = NetBuffer->DataOffset;
  }
  else
  {
    v8 = DataOffset - DataOffsetDelta;
    NetBuffer->DataLength += DataOffsetDelta;
    MdlChain = NetBuffer->MdlChain;
    NetBuffer->DataOffset = v8;
    while ( MdlChain )
    {
      ByteCount = MdlChain->ByteCount;
      if ( v8 < ByteCount )
        break;
      MdlChain = MdlChain->Next;
      v8 -= ByteCount;
    }
  }
  NetBuffer->Link.Region = (unsigned __int64)MdlChain;
  NetBuffer->CurrentMdlOffset = v8;
  return v5;
}
