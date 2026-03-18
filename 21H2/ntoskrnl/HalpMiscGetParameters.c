/*
 * XREFs of HalpMiscGetParameters @ 0x140B27364
 * Callers:
 *     HalpMiscInitSystem @ 0x140A5B550 (HalpMiscInitSystem.c)
 * Callees:
 *     HalpInterruptModel @ 0x14036FA84 (HalpInterruptModel.c)
 *     HalpIsMicrosoftCompatibleHvLoaded @ 0x1403B37B0 (HalpIsMicrosoftCompatibleHvLoaded.c)
 *     HalpIsHvPresent @ 0x1403B37F0 (HalpIsHvPresent.c)
 *     HalpIsXboxNanovisorPresent @ 0x1403B3A6C (HalpIsXboxNanovisorPresent.c)
 *     HalpIsPartitionCpuManager @ 0x1403BAEA4 (HalpIsPartitionCpuManager.c)
 *     strstr @ 0x1403E0C40 (strstr.c)
 *     atoi @ 0x1403E0CC0 (atoi.c)
 *     HalpInterruptSetMsiOverride @ 0x140509464 (HalpInterruptSetMsiOverride.c)
 *     HalpIsHvUsedForReboot @ 0x14050E854 (HalpIsHvUsedForReboot.c)
 */

char __fastcall HalpMiscGetParameters(__int64 a1)
{
  char *v2; // rax
  const char *v3; // rcx
  const char *v4; // rbx
  char *v5; // rax
  char v6; // cl
  int v7; // eax
  char *v8; // rax
  char v9; // cl
  int v10; // eax
  char v11; // cl
  char IsHvUsedForReboot; // al
  char *v13; // rax
  char v14; // cl

  LODWORD(v2) = HalpInterruptModel();
  if ( (_DWORD)v2 == 1 )
    HalpMiscDiscardLowMemory = 1;
  if ( a1
    && ((v2 = *(char **)(a1 + 240), (*((_DWORD *)v2 + 873) & 0x2000) != 0)
     && (LOBYTE(v2) = HalpIsPartitionCpuManager(), !(_BYTE)v2)
     || (v3 = *(const char **)(a1 + 216)) != 0LL
     && (v2 = strstr(v3, "SMT=BLOCKED")) != 0LL
     && (LOBYTE(v2) = HalpIsPartitionCpuManager(), !(_BYTE)v2)) )
  {
    HalpInterruptBlockHyperthreading = 1;
    v2 = *(char **)(a1 + 240);
    if ( (*((_DWORD *)v2 + 33) & 0x200) == 0 )
      HalpInterruptStartHyperthreadSiblings = 1;
  }
  else
  {
    HalpInterruptBlockHyperthreading = 0;
    if ( !a1 )
      return (char)v2;
  }
  v4 = *(const char **)(a1 + 216);
  if ( !v4 )
    return (char)v2;
  strstr(*(const char **)(a1 + 216), "SAFEBOOT:");
  if ( strstr(v4, "ONECPU") )
    HalpInterruptProcessorCap = 1;
  if ( strstr(v4, "USEPHYSICALAPIC") )
    HalpInterruptPhysicalModeOnly = 1;
  if ( strstr(v4, "BREAK") )
    HalpMiscDebugBreakRequested = 1;
  v5 = strstr(v4, "MAXPROCSPERCLUSTER");
  if ( v5 )
  {
    while ( 1 )
    {
      v6 = *v5;
      if ( !*v5 || v6 == 32 || (unsigned __int8)(v6 - 48) <= 9u )
        break;
      ++v5;
    }
    v7 = atoi(v5);
    HalpInterruptClusterModeForced = 1;
    if ( v7 )
      HalpInterruptMaxClusterSize = v7;
  }
  v8 = strstr(v4, "MAXAPICCLUSTER");
  if ( v8 )
  {
    while ( 1 )
    {
      v9 = *v8;
      if ( !*v8 || v9 == 32 || (unsigned __int8)(v9 - 48) <= 9u )
        break;
      ++v8;
    }
    v10 = atoi(v8);
    if ( v10 )
      LODWORD(HalpInterruptMaxCluster) = v10;
  }
  if ( strstr(v4, "X2APICPOLICY=ENABLE") )
    HalpInterruptX2ApicPolicy = 1;
  if ( strstr(v4, "X2APICPOLICY=DISABLE") )
    HalpInterruptX2ApicPolicy = 0;
  if ( strstr(v4, "USELEGACYAPICMODE") )
    HalpInterruptX2ApicPolicy = 0;
  if ( strstr(v4, "SYSTEMWATCHDOGPOLICY=DISABLED") )
  {
    HalpTimerWatchdogDisable = 1;
  }
  else if ( strstr(v4, "SYSTEMWATCHDOGPOLICY=PHYSICALONLY") )
  {
    HalpTimerWatchdogPhysicalOnly = 1;
  }
  if ( strstr(v4, "CONFIGACCESSPOLICY=DISALLOWMMCONFIG") )
    HalpAvoidMmConfigAccessMethod = 1;
  if ( strstr(v4, "MSIPOLICY=FORCEDISABLE") )
  {
    v11 = 0;
LABEL_51:
    HalpInterruptSetMsiOverride(v11);
    goto LABEL_52;
  }
  if ( strstr(v4, "FORCEMSI") )
  {
    v11 = 1;
    goto LABEL_51;
  }
LABEL_52:
  if ( HalpIsHvPresent() )
  {
    HalpHvPresent = 1;
    if ( HalpIsPartitionCpuManager() )
      HalpHvCpuManager = 1;
    IsHvUsedForReboot = HalpIsHvUsedForReboot();
  }
  else
  {
    IsHvUsedForReboot = HalpIsXboxNanovisorPresent();
  }
  if ( IsHvUsedForReboot )
    HalpHvUsedForReboot = 1;
  if ( strstr(v4, "FIRSTMEGABYTEPOLICY=USEALL") || HalpIsMicrosoftCompatibleHvLoaded() && !HalpHvCpuManager )
    HalpMiscDiscardLowMemory = 0;
  if ( strstr(v4, "USEPLATFORMCLOCK") )
    HalpTimerPlatformSourceForced = 1;
  if ( strstr(v4, "USEPLATFORMTICK") )
    HalpTimerPlatformClockSourceForced = 1;
  v13 = strstr(v4, "GROUPSIZE");
  if ( v13 )
  {
    while ( 1 )
    {
      v14 = *v13;
      if ( !*v13 || v14 == 32 || (unsigned __int8)(v14 - 48) <= 9u )
        break;
      ++v13;
    }
    HalpMaximumGroupSize = atoi(v13);
    if ( (unsigned int)(HalpMaximumGroupSize - 1) > 0x3F )
      HalpMaximumGroupSize = 64;
  }
  HalpSplitLargeNumaNodes = (*(_DWORD *)(*(_QWORD *)(a1 + 240) + 132LL) & 0x20000) != 0;
  strstr(v4, "HALTPROFILINGPOLICY=BLOCKED");
  strstr(v4, "HALTPROFILINGPOLICY=RELAXED");
  LOBYTE(v2) = (unsigned __int8)strstr(v4, "HALTPROFILINGPOLICY=RESTRICTED");
  return (char)v2;
}
