/*
 * XREFs of RaidAdapterStorageResetBusIoctl @ 0x1C002EDF0
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C000B8F8 (RaUnitDeviceControlIrp.c)
 *     RaidAdapterDeviceControlIrp @ 0x1C000C248 (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0009950 (RaidCompleteRequestEx.c)
 *     RaidAdapterResetBus @ 0x1C002CD08 (RaidAdapterResetBus.c)
 */

__int64 __fastcall RaidAdapterStorageResetBusIoctl(__int64 a1, __int64 a2)
{
  unsigned int v3; // r8d

  if ( *(_DWORD *)(*(_QWORD *)(a2 + 184) + 16LL) )
    v3 = RaidAdapterResetBus(a1, **(_BYTE **)(a2 + 24));
  else
    v3 = -1073741811;
  return RaidCompleteRequestEx((PIRP)a2, 0, v3);
}
