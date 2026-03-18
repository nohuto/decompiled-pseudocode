/*
 * XREFs of HalpMiscGetParameters @ 0x140A69688
 * Callers:
 *     HalpMiscInitSystem @ 0x14099DC00 (HalpMiscInitSystem.c)
 * Callees:
 *     HalpInterruptModel @ 0x1403793D4 (HalpInterruptModel.c)
 *     HalpIsMicrosoftCompatibleHvLoaded @ 0x14039F208 (HalpIsMicrosoftCompatibleHvLoaded.c)
 *     HalpIsHvPresent @ 0x14039F248 (HalpIsHvPresent.c)
 *     HalpIsXboxNanovisorPresent @ 0x14039F4B0 (HalpIsXboxNanovisorPresent.c)
 *     HalpIsPartitionCpuManager @ 0x1403ABC6C (HalpIsPartitionCpuManager.c)
 *     strstr @ 0x1403CE280 (strstr.c)
 *     atoi @ 0x1403CE300 (atoi.c)
 *     HalpInterruptSetMsiOverride @ 0x1404B79D0 (HalpInterruptSetMsiOverride.c)
 *     HalpIsHvUsedForReboot @ 0x1404BD514 (HalpIsHvUsedForReboot.c)
 *     HalpProcIsSmtDisabled @ 0x140A69914 (HalpProcIsSmtDisabled.c)
 */

char *__fastcall HalpMiscGetParameters(__int64 a1)
{
  char *result; // rax
  const char *v3; // rbx
  char *v4; // rax
  char *v5; // rax
  __int64 v6; // rcx
  char IsHvUsedForReboot; // al
  __int64 v8; // rcx
  char *v9; // rax
  char v10; // cl
  int v11; // eax
  char v12; // cl
  int v13; // eax
  char v14; // cl
  __int64 v15; // rcx
  char v16; // cl
  int v17; // eax

  if ( (unsigned int)HalpInterruptModel() == 1 )
    HalpMiscDiscardLowMemory = 1;
  result = (char *)HalpProcIsSmtDisabled(a1);
  HalpInterruptBlockHyperthreading = (char)result;
  if ( (_BYTE)result )
  {
    if ( !a1 )
      return result;
    result = *(char **)(a1 + 240);
    if ( (*((_DWORD *)result + 33) & 0x200) == 0 )
      HalpInterruptStartHyperthreadSiblings = 1;
  }
  if ( a1 )
  {
    v3 = *(const char **)(a1 + 216);
    if ( v3 )
    {
      strstr(v3, "SAFEBOOT:");
      if ( strstr(v3, "ONECPU") )
        HalpInterruptProcessorCap = 1;
      if ( strstr(v3, "USEPHYSICALAPIC") )
        HalpInterruptPhysicalModeOnly = 1;
      if ( strstr(v3, "BREAK") )
        HalpMiscDebugBreakRequested = 1;
      v4 = strstr(v3, "MAXPROCSPERCLUSTER");
      if ( v4 )
      {
        while ( 1 )
        {
          v10 = *v4;
          if ( !*v4 || v10 == 32 || (unsigned __int8)(v10 - 48) <= 9u )
            break;
          ++v4;
        }
        v11 = atoi(v4);
        HalpInterruptClusterModeForced = 1;
        if ( v11 )
          HalpInterruptMaxClusterSize = v11;
      }
      v5 = strstr(v3, "MAXAPICCLUSTER");
      if ( v5 )
      {
        while ( 1 )
        {
          v12 = *v5;
          if ( !*v5 || v12 == 32 || (unsigned __int8)(v12 - 48) <= 9u )
            break;
          ++v5;
        }
        v13 = atoi(v5);
        if ( v13 )
          LODWORD(HalpInterruptMaxCluster) = v13;
      }
      if ( strstr(v3, "X2APICPOLICY=ENABLE") )
        HalpInterruptX2ApicPolicy = 1;
      if ( strstr(v3, "X2APICPOLICY=DISABLE") )
        HalpInterruptX2ApicPolicy = 0;
      if ( strstr(v3, "USELEGACYAPICMODE") )
        HalpInterruptX2ApicPolicy = 0;
      if ( strstr(v3, "TSCSYNCPOLICY=LEGACY") )
        HalpTscSyncPolicy = 1;
      if ( strstr(v3, "TSCSYNCPOLICY=ENHANCED") )
        HalpTscSyncPolicy = 2;
      if ( strstr(v3, "SYSTEMWATCHDOGPOLICY=DISABLED") )
      {
        HalpTimerWatchdogDisable = 1;
      }
      else if ( strstr(v3, "SYSTEMWATCHDOGPOLICY=PHYSICALONLY") )
      {
        HalpTimerWatchdogPhysicalOnly = 1;
      }
      if ( strstr(v3, "CONFIGACCESSPOLICY=DISALLOWMMCONFIG") )
        HalpAvoidMmConfigAccessMethod = 1;
      if ( strstr(v3, "MSIPOLICY=FORCEDISABLE") )
      {
        v14 = 0;
      }
      else
      {
        if ( !strstr(v3, "FORCEMSI") )
        {
LABEL_31:
          if ( HalpIsHvPresent() )
          {
            HalpHvPresent = 1;
            if ( HalpIsPartitionCpuManager(v6) )
              HalpHvCpuManager = 1;
            IsHvUsedForReboot = HalpIsHvUsedForReboot(v15);
          }
          else
          {
            IsHvUsedForReboot = HalpIsXboxNanovisorPresent();
          }
          if ( IsHvUsedForReboot )
            HalpHvUsedForReboot = 1;
          if ( strstr(v3, "FIRSTMEGABYTEPOLICY=USEALL") || HalpIsMicrosoftCompatibleHvLoaded(v8) && !HalpHvCpuManager )
            HalpMiscDiscardLowMemory = 0;
          if ( strstr(v3, "USEPLATFORMCLOCK") )
            HalpTimerPlatformSourceForced = 1;
          if ( strstr(v3, "USEPLATFORMTICK") )
            HalpTimerPlatformClockSourceForced = 1;
          v9 = strstr(v3, "GROUPSIZE");
          if ( v9 )
          {
            while ( 1 )
            {
              v16 = *v9;
              if ( !*v9 || v16 == 32 || (unsigned __int8)(v16 - 48) <= 9u )
                break;
              ++v9;
            }
            v17 = atoi(v9);
            HalpMaximumGroupSize = v17;
            if ( (unsigned int)(v17 - 1) > 0x3F || ((v17 - 1) & v17) != 0 )
              HalpMaximumGroupSize = 64;
          }
          strstr(v3, "HALTPROFILINGPOLICY=BLOCKED");
          strstr(v3, "HALTPROFILINGPOLICY=RELAXED");
          return strstr(v3, "HALTPROFILINGPOLICY=RESTRICTED");
        }
        v14 = 1;
      }
      HalpInterruptSetMsiOverride(v14);
      goto LABEL_31;
    }
  }
  return result;
}
