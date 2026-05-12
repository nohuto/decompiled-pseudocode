/*
 * XREFs of RaidPauseAdapterQueue @ 0x1C001393C
 * Callers:
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C0003014 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaidAdapterPowerDownDevice @ 0x1C0013810 (RaidAdapterPowerDownDevice.c)
 *     RaidAdapterDeviceReset @ 0x1C002C3B0 (RaidAdapterDeviceReset.c)
 *     RaidAdapterResetBus @ 0x1C002E120 (RaidAdapterResetBus.c)
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x1C002F13C (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     StorPortCompleteRequest @ 0x1C0038C50 (StorPortCompleteRequest.c)
 *     StorPortPause @ 0x1C0039780 (StorPortPause.c)
 *     StorPortAdapterIdleCondition @ 0x1C0040750 (StorPortAdapterIdleCondition.c)
 *     RaUnitStartResetIo @ 0x1C0048BF8 (RaUnitStartResetIo.c)
 *     RaidAdapterStopDeviceIrp @ 0x1C0079184 (RaidAdapterStopDeviceIrp.c)
 * Callees:
 *     DbgLogRequest @ 0x1C0002BF8 (DbgLogRequest.c)
 */

__int64 __fastcall RaidPauseAdapterQueue(__int64 a1)
{
  signed __int32 v1; // ebx
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v1 = _InterlockedIncrement((volatile signed __int32 *)(a1 + 876));
  if ( (qword_1C0069310 & 0x200) != 0 )
    DbgLogRequest(a1, 6, retaddr, v1, a1, *(unsigned int *)(a1 + 56), 0LL);
  return (unsigned int)v1;
}
