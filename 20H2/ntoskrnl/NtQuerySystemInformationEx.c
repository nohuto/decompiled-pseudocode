/*
 * XREFs of NtQuerySystemInformationEx @ 0x1406BE140
 * Callers:
 *     <none>
 * Callees:
 *     ExpQuerySystemInformation @ 0x140608060 (ExpQuerySystemInformation.c)
 *     ExRaiseDatatypeMisalignment @ 0x140777E40 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtQuerySystemInformationEx(
        SYSTEM_INFORMATION_CLASS SystemInformationClass,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID SystemInformation,
        ULONG SystemInformationLength,
        PULONG ReturnLength)
{
  __int32 v8; // ecx
  __int64 v9; // rdx
  char *v10; // rcx
  __int32 v12; // ecx
  __int32 v13; // ecx
  __int32 v14; // ecx
  __int32 v15; // ecx
  __int32 v16; // ecx
  __int32 v17; // ecx
  __int32 v18; // ecx
  __int32 v19; // ecx
  __int32 v20; // ecx

  if ( !InputBuffer || !InputBufferLength )
    return -1073741811;
  if ( SystemInformationClass <= SystemNodeDistanceInformation )
  {
    if ( SystemInformationClass != SystemNodeDistanceInformation )
    {
      if ( SystemInformationClass <= SystemLogicalProcessorInformation )
      {
        if ( SystemInformationClass != SystemLogicalProcessorInformation
          && SystemInformationClass != SystemProcessorPerformanceInformation
          && SystemInformationClass != SystemInterruptInformation
          && SystemInformationClass != SystemProcessorIdleInformation
          && SystemInformationClass != SystemProcessorPowerInformation )
        {
          if ( SystemInformationClass != SystemWatchdogTimerInformation )
            return -1073741821;
          goto LABEL_19;
        }
      }
      else
      {
        v12 = SystemInformationClass - 83;
        if ( v12 )
        {
          v13 = v12 - 17;
          if ( v13 )
          {
            v14 = v13 - 7;
            if ( !v14 )
              goto LABEL_19;
            if ( v14 != 1 )
              return -1073741821;
          }
        }
      }
    }
    goto LABEL_25;
  }
  if ( SystemInformationClass <= SystemInterruptSteeringInformation )
  {
    if ( SystemInformationClass == SystemInterruptSteeringInformation )
      goto LABEL_19;
    v17 = SystemInformationClass - 141;
    if ( v17 )
    {
      v18 = v17 - 19;
      if ( v18 )
      {
        v19 = v18 - 5;
        if ( v19 )
        {
          v20 = v19 - 10;
          if ( v20 )
          {
            if ( v20 != 3 )
              return -1073741821;
          }
        }
        goto LABEL_6;
      }
    }
LABEL_25:
    v9 = 1LL;
    goto LABEL_7;
  }
  v8 = SystemInformationClass - 181;
  if ( v8 )
  {
    v15 = v8 - 28;
    if ( v15 )
    {
      v16 = v15 - 1;
      if ( v16 )
      {
        if ( v16 != 1 )
          return -1073741821;
        goto LABEL_6;
      }
LABEL_19:
      v9 = 3LL;
      goto LABEL_7;
    }
  }
LABEL_6:
  v9 = 7LL;
LABEL_7:
  if ( KeGetCurrentThread()->PreviousMode )
  {
    if ( (v9 & (unsigned __int64)InputBuffer) != 0 )
      ExRaiseDatatypeMisalignment();
    v10 = (char *)InputBuffer + InputBufferLength;
    if ( (unsigned __int64)v10 > 0x7FFFFFFF0000LL || v10 < InputBuffer )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  return ExpQuerySystemInformation(
           SystemInformationClass,
           (__int64)InputBuffer,
           InputBufferLength,
           (__int64)SystemInformation,
           SystemInformationLength,
           ReturnLength);
}
