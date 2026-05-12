/*
 * XREFs of RaidUnitLogSenseTemperatureSrb @ 0x1C004ACE4
 * Callers:
 *     RaUnitStorageQueryDeviceTemperaturePropertyIoctl @ 0x1C00495D0 (RaUnitStorageQueryDeviceTemperaturePropertyIoctl.c)
 * Callees:
 *     RaidUnitLogSenseCommandSrb @ 0x1C001DF50 (RaidUnitLogSenseCommandSrb.c)
 */

__int64 __fastcall RaidUnitLogSenseTemperatureSrb(__int64 a1, __int64 a2)
{
  _WORD *PoolWithTag; // rdi
  unsigned int v5; // ebx
  __int64 v7; // [rsp+50h] [rbp+18h] BYREF

  LODWORD(v7) = 256;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x100uLL, 0x72536152u);
  if ( PoolWithTag )
  {
    v5 = RaidUnitLogSenseCommandSrb(a1, a2, 13, 0, (unsigned int *)&v7, PoolWithTag);
    if ( (int)(v5 + 0x80000000) < 0 || v5 == -2147483643 )
    {
      PoolWithTag[1] = 0;
      v5 = -1073741668;
    }
    ExFreePoolWithTag(PoolWithTag, 0x72536152u);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v5;
}
