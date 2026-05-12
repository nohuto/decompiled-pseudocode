/*
 * XREFs of RaidResumeAndRestartAdapterQueues @ 0x1C0031CC8
 * Callers:
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C000D3A0 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaidAdapterDeviceReset @ 0x1C002B55C (RaidAdapterDeviceReset.c)
 *     RaidAdapterResetBus @ 0x1C002D2B8 (RaidAdapterResetBus.c)
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x1C002E2D8 (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     RaidAdapterStartDevice @ 0x1C002E9CC (RaidAdapterStartDevice.c)
 *     RaUnitStartResetIo @ 0x1C0047DE8 (RaUnitStartResetIo.c)
 *     RaidUnitCompleteResetRequest @ 0x1C00495B0 (RaidUnitCompleteResetRequest.c)
 * Callees:
 *     DbgLogRequest @ 0x1C00104E8 (DbgLogRequest.c)
 *     RaidAdapterRestartQueues @ 0x1C00120DC (RaidAdapterRestartQueues.c)
 */

__int64 __fastcall RaidResumeAndRestartAdapterQueues(__int64 a1)
{
  signed __int32 v2; // ebx
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v2 = _InterlockedDecrement((volatile signed __int32 *)(a1 + 876));
  if ( (qword_1C0068350 & 0x200) != 0 )
    DbgLogRequest(a1, 7, retaddr, v2, a1, *(unsigned int *)(a1 + 56), 0LL);
  if ( !v2 )
    RaidAdapterRestartQueues(a1);
  return (unsigned int)v2;
}
