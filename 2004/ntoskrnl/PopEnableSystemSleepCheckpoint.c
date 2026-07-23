/*
 * XREFs of PopEnableSystemSleepCheckpoint @ 0x1407624E4
 * Callers:
 *     PopIssueActionRequest @ 0x140763448 (PopIssueActionRequest.c)
 * Callees:
 *     KeQueryInterruptTimePrecise @ 0x14034C9E0 (KeQueryInterruptTimePrecise.c)
 *     Feature_SleepReliabilityDetailedDiagnostics__private_IsEnabled @ 0x14038075C (Feature_SleepReliabilityDetailedDiagnostics__private_IsEnabled.c)
 *     PopTraceSleepCheckpointInitFailure @ 0x1408E92A8 (PopTraceSleepCheckpointInitFailure.c)
 *     NtQueryEnvironmentVariableInfoEx @ 0x1409513B0 (NtQueryEnvironmentVariableInfoEx.c)
 *     PopCheckpointSystemSleepUnsafe @ 0x1409AF874 (PopCheckpointSystemSleepUnsafe.c)
 */

__int64 PopEnableSystemSleepCheckpoint()
{
  char v0; // di
  int v1; // ebx
  __int32 v3; // eax
  __int32 v4; // eax
  LARGE_INTEGER v5; // rsi
  LONGLONG v6; // rax
  unsigned __int64 v7; // [rsp+40h] [rbp+8h] BYREF
  LARGE_INTEGER v8; // [rsp+48h] [rbp+10h] BYREF
  __int64 v9; // [rsp+50h] [rbp+18h] BYREF
  __int64 v10; // [rsp+58h] [rbp+20h] BYREF

  v9 = 0LL;
  v10 = 0LL;
  v7 = 0LL;
  v8.QuadPart = 0LL;
  PopSleepReliabilityDetailedDiagEnabled = (unsigned int)Feature_SleepReliabilityDetailedDiagnostics__private_IsEnabled() != 0;
  PopCheckpointSystemSleepEnabled = 0;
  v0 = 0;
  _InterlockedExchange(&PopSleepCheckpointStatus, 0);
  if ( PopCheckpointSystemSleepEnabledReg )
    goto LABEL_7;
  if ( PopSleepReliabilityDetailedDiagEnabled )
  {
    v0 = 1;
LABEL_7:
    v3 = 4;
    goto LABEL_10;
  }
  if ( !byte_140C23A74 || (BYTE8(PopBsdPowerTransitionAtBoot) & 0xF0) == 0 )
    return (unsigned int)-1073741271;
  v3 = 1;
LABEL_10:
  _InterlockedExchange(&PopSleepCheckpointStatus, v3);
  if ( dword_140C19590 != 2 )
  {
    v1 = -1073741822;
    v4 = 8;
LABEL_13:
    _InterlockedExchange(&PopSleepCheckpointStatus, v4);
LABEL_23:
    PopTraceSleepCheckpointInitFailure((unsigned int)v1);
    return (unsigned int)v1;
  }
  v1 = NtQueryEnvironmentVariableInfoEx(1LL, &v10, &v7, &v9);
  if ( v1 < 0 )
    goto LABEL_20;
  if ( v7 <= 0x400 )
  {
    v1 = -1073740716;
    v4 = 9;
    goto LABEL_13;
  }
  v5 = KeQueryInterruptTimePrecise(&v8);
  v1 = PopCheckpointSystemSleepUnsafe(0LL);
  if ( v1 < 0 )
  {
LABEL_20:
    _InterlockedExchange(&PopSleepCheckpointStatus, 15);
  }
  else
  {
    v6 = *(_QWORD *)&KeQueryInterruptTimePrecise(&v8) - v5.QuadPart;
    if ( v0 && (unsigned __int64)v6 > 0x186A0 )
    {
      v1 = 258;
      _InterlockedExchange(&PopSleepCheckpointStatus, 10);
      return (unsigned int)v1;
    }
    PopCheckpointSystemSleepEnabled = 1;
    v1 = 0;
  }
  if ( v1 < 0 )
    goto LABEL_23;
  return (unsigned int)v1;
}
