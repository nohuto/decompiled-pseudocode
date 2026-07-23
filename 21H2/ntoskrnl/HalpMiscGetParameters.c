/*
 * XREFs of HalpMiscGetParameters @ 0x140A6DF88
 * Callers:
 *     HalpMiscInitSystem @ 0x1409A2450 (HalpMiscInitSystem.c)
 * Callees:
 *     HalpInterruptModel @ 0x14037AEA4 (HalpInterruptModel.c)
 *     HalpIsMicrosoftCompatibleHvLoaded @ 0x1403A20E8 (HalpIsMicrosoftCompatibleHvLoaded.c)
 *     HalpIsHvPresent @ 0x1403A2128 (HalpIsHvPresent.c)
 *     HalpIsXboxNanovisorPresent @ 0x1403A2390 (HalpIsXboxNanovisorPresent.c)
 *     HalpIsPartitionCpuManager @ 0x1403A8F7C (HalpIsPartitionCpuManager.c)
 *     strstr @ 0x1403D19F0 (strstr.c)
 *     atoi @ 0x1403D1A70 (atoi.c)
 *     HalpInterruptSetMsiOverride @ 0x1404BCAF0 (HalpInterruptSetMsiOverride.c)
 *     HalpIsHvUsedForReboot @ 0x1404C2644 (HalpIsHvUsedForReboot.c)
 */

char __fastcall HalpMiscGetParameters(__int64 a1)
{
  char *v2; // rax
  __int64 v3; // rcx
  bool v4; // di
  const char *v5; // rcx
  __int64 v6; // rcx
  const char *v7; // rbx
  char *v8; // rax
  char v9; // cl
  int v10; // eax
  char *v11; // rax
  char v12; // cl
  int v13; // eax
  char v14; // cl
  __int64 v15; // rcx
  __int64 v16; // rcx
  char IsHvUsedForReboot; // al
  __int64 v18; // rcx
  char *v19; // rax
  char v20; // cl
  int v21; // eax

  LODWORD(v2) = HalpInterruptModel();
  if ( (_DWORD)v2 == 1 )
    HalpMiscDiscardLowMemory = 1;
  v4 = 0;
  if ( !a1 )
  {
LABEL_10:
    HalpInterruptBlockHyperthreading = v4;
    if ( !v4 )
      goto LABEL_14;
    goto LABEL_11;
  }
  v2 = *(char **)(a1 + 240);
  if ( (*((_DWORD *)v2 + 865) & 0x2000) == 0 || (LOBYTE(v2) = HalpIsPartitionCpuManager(v3), (_BYTE)v2) )
  {
    v5 = *(const char **)(a1 + 216);
    if ( v5 )
    {
      v2 = strstr(v5, "SMT=BLOCKED");
      if ( v2 )
      {
        LOBYTE(v2) = HalpIsPartitionCpuManager(v6);
        v4 = (_BYTE)v2 == 0;
      }
    }
    goto LABEL_10;
  }
  HalpInterruptBlockHyperthreading = 1;
LABEL_11:
  if ( !a1 )
    return (char)v2;
  v2 = *(char **)(a1 + 240);
  if ( (*((_DWORD *)v2 + 33) & 0x200) == 0 )
    HalpInterruptStartHyperthreadSiblings = 1;
LABEL_14:
  if ( !a1 )
    return (char)v2;
  v7 = *(const char **)(a1 + 216);
  if ( !v7 )
    return (char)v2;
  strstr(v7, "SAFEBOOT:");
  if ( strstr(v7, "ONECPU") )
    HalpInterruptProcessorCap = 1;
  if ( strstr(v7, "USEPHYSICALAPIC") )
    HalpInterruptPhysicalModeOnly = 1;
  if ( strstr(v7, "BREAK") )
    HalpMiscDebugBreakRequested = 1;
  v8 = strstr(v7, "MAXPROCSPERCLUSTER");
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
    HalpInterruptClusterModeForced = 1;
    if ( v10 )
      HalpInterruptMaxClusterSize = v10;
  }
  v11 = strstr(v7, "MAXAPICCLUSTER");
  if ( v11 )
  {
    while ( 1 )
    {
      v12 = *v11;
      if ( !*v11 || v12 == 32 || (unsigned __int8)(v12 - 48) <= 9u )
        break;
      ++v11;
    }
    v13 = atoi(v11);
    if ( v13 )
      LODWORD(HalpInterruptMaxCluster) = v13;
  }
  if ( strstr(v7, "X2APICPOLICY=ENABLE") )
    HalpInterruptX2ApicPolicy = 1;
  if ( strstr(v7, "X2APICPOLICY=DISABLE") )
    HalpInterruptX2ApicPolicy = 0;
  if ( strstr(v7, "USELEGACYAPICMODE") )
    HalpInterruptX2ApicPolicy = 0;
  if ( strstr(v7, "TSCSYNCPOLICY=LEGACY") )
    HalpTscSyncPolicy = 1;
  if ( strstr(v7, "TSCSYNCPOLICY=ENHANCED") )
    HalpTscSyncPolicy = 2;
  if ( strstr(v7, "SYSTEMWATCHDOGPOLICY=DISABLED") )
  {
    HalpTimerWatchdogDisable = 1;
  }
  else if ( strstr(v7, "SYSTEMWATCHDOGPOLICY=PHYSICALONLY") )
  {
    HalpTimerWatchdogPhysicalOnly = 1;
  }
  if ( strstr(v7, "CONFIGACCESSPOLICY=DISALLOWMMCONFIG") )
    HalpAvoidMmConfigAccessMethod = 1;
  if ( strstr(v7, "MSIPOLICY=FORCEDISABLE") )
  {
    v14 = 0;
LABEL_58:
    HalpInterruptSetMsiOverride(v14);
    goto LABEL_59;
  }
  if ( strstr(v7, "FORCEMSI") )
  {
    v14 = 1;
    goto LABEL_58;
  }
LABEL_59:
  if ( HalpIsHvPresent() )
  {
    HalpHvPresent = 1;
    if ( HalpIsPartitionCpuManager(v15) )
      HalpHvCpuManager = 1;
    IsHvUsedForReboot = HalpIsHvUsedForReboot(v16);
  }
  else
  {
    IsHvUsedForReboot = HalpIsXboxNanovisorPresent();
  }
  if ( IsHvUsedForReboot )
    HalpHvUsedForReboot = 1;
  if ( strstr(v7, "FIRSTMEGABYTEPOLICY=USEALL") || HalpIsMicrosoftCompatibleHvLoaded(v18) && !HalpHvCpuManager )
    HalpMiscDiscardLowMemory = 0;
  if ( strstr(v7, "USEPLATFORMCLOCK") )
    HalpTimerPlatformSourceForced = 1;
  if ( strstr(v7, "USEPLATFORMTICK") )
    HalpTimerPlatformClockSourceForced = 1;
  v19 = strstr(v7, "GROUPSIZE");
  if ( v19 )
  {
    while ( 1 )
    {
      v20 = *v19;
      if ( !*v19 || v20 == 32 || (unsigned __int8)(v20 - 48) <= 9u )
        break;
      ++v19;
    }
    v21 = atoi(v19);
    HalpMaximumGroupSize = v21;
    if ( (unsigned int)(v21 - 1) > 0x3F || ((v21 - 1) & v21) != 0 )
      HalpMaximumGroupSize = 64;
  }
  strstr(v7, "HALTPROFILINGPOLICY=BLOCKED");
  strstr(v7, "HALTPROFILINGPOLICY=RELAXED");
  LOBYTE(v2) = (unsigned __int8)strstr(v7, "HALTPROFILINGPOLICY=RESTRICTED");
  return (char)v2;
}
