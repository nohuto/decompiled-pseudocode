/*
 * XREFs of PopEnableSystemSleepCheckpoint @ 0x1407FE8C0
 * Callers:
 *     PopIssueActionRequest @ 0x1407FF888 (PopIssueActionRequest.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x140303490 (RtlGetInterruptTimePrecise.c)
 *     PopIsDetailedSleepReliabilityDiagEnabled @ 0x1407FF3EC (PopIsDetailedSleepReliabilityDiagEnabled.c)
 *     PopTraceSleepCheckpointInitFailure @ 0x140994078 (PopTraceSleepCheckpointInitFailure.c)
 *     NtQueryEnvironmentVariableInfoEx @ 0x140A00D00 (NtQueryEnvironmentVariableInfoEx.c)
 *     PopCheckpointSystemSleepUnsafe @ 0x140A6BEC8 (PopCheckpointSystemSleepUnsafe.c)
 */

__int64 PopEnableSystemSleepCheckpoint()
{
  char v0; // di
  int v1; // ebx
  __int32 v3; // eax
  __int32 v4; // ecx
  __int64 InterruptTimePrecise; // rsi
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // [rsp+40h] [rbp+8h] BYREF
  LARGE_INTEGER v8; // [rsp+48h] [rbp+10h] BYREF
  __int64 v9; // [rsp+50h] [rbp+18h] BYREF
  __int64 v10; // [rsp+58h] [rbp+20h] BYREF

  v9 = 0LL;
  v0 = 0;
  v10 = 0LL;
  v7 = 0LL;
  v8.QuadPart = 0LL;
  PopCheckpointSystemSleepEnabled = 0;
  _InterlockedExchange(&PopSleepCheckpointStatus, 0);
  if ( PopCheckpointSystemSleepEnabledReg )
    goto LABEL_7;
  if ( (unsigned __int8)PopIsDetailedSleepReliabilityDiagEnabled() )
  {
    v0 = 1;
LABEL_7:
    v3 = 4;
    goto LABEL_10;
  }
  if ( !byte_140C23414 || (BYTE8(PopBsdPowerTransitionAtBoot) & 0xF0) == 0 )
    return (unsigned int)-1073741271;
  v3 = 1;
LABEL_10:
  _InterlockedExchange(&PopSleepCheckpointStatus, v3);
  if ( dword_140C15C70 != 2 )
  {
    v1 = -1073741822;
    v4 = 8;
LABEL_20:
    _InterlockedExchange(&PopSleepCheckpointStatus, v4);
    PopTraceSleepCheckpointInitFailure((unsigned int)v1);
    return (unsigned int)v1;
  }
  v1 = NtQueryEnvironmentVariableInfoEx(1LL, &v10, &v7, &v9);
  if ( v1 < 0 )
    goto LABEL_19;
  if ( v7 <= 0x400 )
  {
    v1 = -1073740716;
    v4 = 9;
    goto LABEL_20;
  }
  InterruptTimePrecise = RtlGetInterruptTimePrecise(&v8);
  v1 = PopCheckpointSystemSleepUnsafe(0LL);
  if ( v1 < 0 )
  {
LABEL_19:
    v4 = 15;
    goto LABEL_20;
  }
  v6 = RtlGetInterruptTimePrecise(&v8) - InterruptTimePrecise;
  if ( v0 && v6 > 0x186A0 )
  {
    v1 = 258;
    _InterlockedExchange(&PopSleepCheckpointStatus, 10);
  }
  else
  {
    PopCheckpointSystemSleepEnabled = 1;
    return 0;
  }
  return (unsigned int)v1;
}
