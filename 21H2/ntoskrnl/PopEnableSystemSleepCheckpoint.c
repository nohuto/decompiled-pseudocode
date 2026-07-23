/*
 * XREFs of PopEnableSystemSleepCheckpoint @ 0x140774B84
 * Callers:
 *     PopIssueActionRequest @ 0x140775BC8 (PopIssueActionRequest.c)
 * Callees:
 *     KeQueryInterruptTimePrecise @ 0x14023D5A0 (KeQueryInterruptTimePrecise.c)
 *     Feature_SleepReliabilityDetailedDiagnostics__private_IsEnabledDeviceUsage @ 0x1403F8354 (Feature_SleepReliabilityDetailedDiagnostics__private_IsEnabledDeviceUsage.c)
 *     PopTraceSleepCheckpointInitFailure @ 0x1408EC818 (PopTraceSleepCheckpointInitFailure.c)
 *     NtQueryEnvironmentVariableInfoEx @ 0x140954B10 (NtQueryEnvironmentVariableInfoEx.c)
 *     PopCheckpointSystemSleepUnsafe @ 0x1409B3614 (PopCheckpointSystemSleepUnsafe.c)
 */

__int64 PopEnableSystemSleepCheckpoint()
{
  char v0; // di
  __int32 v1; // eax
  int v2; // ebx
  __int32 v3; // eax
  LARGE_INTEGER v4; // rsi
  LONGLONG v5; // rax
  unsigned __int64 v7; // [rsp+40h] [rbp+8h] BYREF
  LARGE_INTEGER v8; // [rsp+48h] [rbp+10h] BYREF
  __int64 v9; // [rsp+50h] [rbp+18h] BYREF
  __int64 v10; // [rsp+58h] [rbp+20h] BYREF

  v9 = 0LL;
  v10 = 0LL;
  v7 = 0LL;
  v8.QuadPart = 0LL;
  PopSleepReliabilityDetailedDiagEnabled = (unsigned int)Feature_SleepReliabilityDetailedDiagnostics__private_IsEnabledDeviceUsage() != 0;
  PopCheckpointSystemSleepEnabled = 0;
  v0 = 0;
  _InterlockedExchange(&PopSleepCheckpointStatus, 0);
  if ( PopCheckpointSystemSleepEnabledReg )
    goto LABEL_2;
  if ( PopSleepReliabilityDetailedDiagEnabled )
  {
    v0 = 1;
LABEL_2:
    v1 = 4;
    goto LABEL_8;
  }
  if ( !byte_140C23434 || (BYTE8(PopBsdPowerTransitionAtBoot) & 0xF0) == 0 )
    return (unsigned int)-1073741271;
  v1 = 1;
LABEL_8:
  _InterlockedExchange(&PopSleepCheckpointStatus, v1);
  if ( dword_140C197B0 != 2 )
  {
    v2 = -1073741822;
    v3 = 8;
LABEL_10:
    _InterlockedExchange(&PopSleepCheckpointStatus, v3);
LABEL_21:
    PopTraceSleepCheckpointInitFailure((unsigned int)v2);
    return (unsigned int)v2;
  }
  v2 = NtQueryEnvironmentVariableInfoEx(1LL, &v10, &v7, &v9);
  if ( v2 < 0 )
    goto LABEL_12;
  if ( v7 <= 0x400 )
  {
    v2 = -1073740716;
    v3 = 9;
    goto LABEL_10;
  }
  v4 = KeQueryInterruptTimePrecise(&v8);
  v2 = PopCheckpointSystemSleepUnsafe(0LL);
  if ( v2 < 0 )
  {
LABEL_12:
    _InterlockedExchange(&PopSleepCheckpointStatus, 15);
  }
  else
  {
    v5 = *(_QWORD *)&KeQueryInterruptTimePrecise(&v8) - v4.QuadPart;
    if ( v0 && (unsigned __int64)v5 > 0x186A0 )
    {
      v2 = 258;
      _InterlockedExchange(&PopSleepCheckpointStatus, 10);
      return (unsigned int)v2;
    }
    PopCheckpointSystemSleepEnabled = 1;
    v2 = 0;
  }
  if ( v2 < 0 )
    goto LABEL_21;
  return (unsigned int)v2;
}
