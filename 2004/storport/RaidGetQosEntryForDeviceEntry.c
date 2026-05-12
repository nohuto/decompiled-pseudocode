/*
 * XREFs of RaidGetQosEntryForDeviceEntry @ 0x1C0033A8C
 * Callers:
 *     StorRemoveIoGatewayItem @ 0x1C0009CC0 (StorRemoveIoGatewayItem.c)
 *     RaidStartIoPacket @ 0x1C000AD20 (RaidStartIoPacket.c)
 *     RiNormalizeDeviceQueue @ 0x1C000BA3C (RiNormalizeDeviceQueue.c)
 *     RiEnqueueDeviceQueue @ 0x1C000BB50 (RiEnqueueDeviceQueue.c)
 *     StorSubmitIoGatewayItem @ 0x1C000BC34 (StorSubmitIoGatewayItem.c)
 *     RaidAdapterRestartQueues @ 0x1C00120DC (RaidAdapterRestartQueues.c)
 *     RaidRemovePendingDeviceQueue @ 0x1C0018D80 (RaidRemovePendingDeviceQueue.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidGetQosEntryForDeviceEntry(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rax

  v1 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8LL);
  if ( *(_BYTE *)(v1 + 2) == 40 )
    v2 = *(_QWORD *)(v1 + 96);
  else
    v2 = *(_QWORD *)(v1 + 48);
  return v2 + 24;
}
