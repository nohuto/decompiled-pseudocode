/*
 * XREFs of NdisIMGetCurrentPacketStack @ 0x1C00C1890
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PNDIS_PACKET_STACK __stdcall NdisIMGetCurrentPacketStack(PNDIS_PACKET Packet, BOOLEAN *StacksRemaining)
{
  BOOLEAN v2; // r8
  unsigned int v3; // r10d
  PNDIS_PACKET_STACK result; // rax

  v2 = 0;
  if ( *(_MDL **)((char *)&Packet[1].Private.Head + Packet->Private.NdisPacketOobOffset)
    || (v3 = *(_DWORD *)&Packet[-1].ProtocolReserved[4], v3 >= ndisPacketStackSize) )
  {
    result = 0LL;
  }
  else
  {
    result = (PNDIS_PACKET_STACK)((char *)Packet + 48 * (v3 - (unsigned __int64)ndisPacketStackSize) - 16);
    v2 = ndisPacketStackSize - v3 != 1;
  }
  *StacksRemaining = v2;
  return result;
}
