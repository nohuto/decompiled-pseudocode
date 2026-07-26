/*
 * XREFs of NdisAllocatePacketPool @ 0x1C00C0F60
 * Callers:
 *     ?ndisVerifierAllocatePacketPool@@YAXPEAHPEAPEAXII@Z @ 0x1C00ABCC0 (-ndisVerifierAllocatePacketPool@@YAXPEAHPEAPEAXII@Z.c)
 * Callees:
 *     NdisAllocatePacketPoolEx @ 0x1C00326B0 (NdisAllocatePacketPoolEx.c)
 */

void __stdcall NdisAllocatePacketPool(
        PNDIS_STATUS Status,
        PNDIS_HANDLE PoolHandle,
        UINT NumberOfDescriptors,
        UINT ProtocolReservedLength)
{
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]

  NdisAllocatePacketPoolEx(Status, PoolHandle, NumberOfDescriptors, 0, ProtocolReservedLength);
  if ( !*Status )
    *((_QWORD *)*PoolHandle + 3) = retaddr;
}
