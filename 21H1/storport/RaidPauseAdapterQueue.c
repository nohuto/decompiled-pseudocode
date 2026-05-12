/*
 * XREFs of RaidPauseAdapterQueue @ 0x1C0010574
 * Callers:
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C000CDB0 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaidAdapterPowerDownDevice @ 0x1C0010448 (RaidAdapterPowerDownDevice.c)
 *     RaidAdapterDeviceReset @ 0x1C002AFBC (RaidAdapterDeviceReset.c)
 *     RaidAdapterResetBus @ 0x1C002CD08 (RaidAdapterResetBus.c)
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x1C002DD28 (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     StorPortCompleteRequest @ 0x1C0037860 (StorPortCompleteRequest.c)
 *     StorPortPause @ 0x1C0038350 (StorPortPause.c)
 *     StorPortAdapterIdleCondition @ 0x1C003F260 (StorPortAdapterIdleCondition.c)
 *     RaUnitStartResetIo @ 0x1C00476D8 (RaUnitStartResetIo.c)
 *     RaidAdapterStopDeviceIrp @ 0x1C0077D68 (RaidAdapterStopDeviceIrp.c)
 * Callees:
 *     DbgLogRequest @ 0x1C000E728 (DbgLogRequest.c)
 */

__int64 __fastcall RaidPauseAdapterQueue(__int64 a1)
{
  signed __int32 v1; // ebx
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v1 = _InterlockedIncrement((volatile signed __int32 *)(a1 + 876));
  if ( (qword_1C0068350 & 0x200) != 0 )
    DbgLogRequest(a1, 6, retaddr, v1, a1, *(unsigned int *)(a1 + 56), 0LL);
  return (unsigned int)v1;
}
