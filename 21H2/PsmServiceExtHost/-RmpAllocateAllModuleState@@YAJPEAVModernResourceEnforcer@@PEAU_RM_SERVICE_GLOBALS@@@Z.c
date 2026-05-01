/*
 * XREFs of ?RmpAllocateAllModuleState@@YAJPEAVModernResourceEnforcer@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180041288
 * Callers:
 *     RmpCreateResourceManagerServer @ 0x18003FE7C (RmpCreateResourceManagerServer.c)
 * Callees:
 *     ?RmpActivityHostAllocateModuleState@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x1800404F8 (-RmpActivityHostAllocateModuleState@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     ?RmpCpuSetManagerAllocateState@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x1800405B4 (-RmpCpuSetManagerAllocateState@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     ?RmpEnforcerContextAllocateState@@YAJPEAVModernResourceEnforcer@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180040F48 (-RmpEnforcerContextAllocateState@@YAJPEAVModernResourceEnforcer@@PEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     ?RmpGameModeAllocateState@@YAJPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x180041060 (-RmpGameModeAllocateState@@YAJPEAU_RM_GAME_MODE_CONTEXT@@@Z.c)
 *     ?HampManagerAllocateState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18004118C (-HampManagerAllocateState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?CreateResourceManager@ExecutionModel@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAVModernResourceEnforcer@@PEAPEAVResourceManager@1@@Z @ 0x1800414C0 (-CreateResourceManager@ExecutionModel@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAVModernResourceEnforcer@@P.c)
 */

__int64 __fastcall RmpAllocateAllModuleState(struct ModernResourceEnforcer *a1, struct _RM_SERVICE_GLOBALS *a2)
{
  unsigned int v4; // ebx
  int ModuleState; // r8d
  struct ExecutionModel::ResourceManager **v6; // r9
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-48h] BYREF
  int v9; // [rsp+30h] [rbp-38h] BYREF
  __int64 v10; // [rsp+38h] [rbp-30h]
  struct _UNICODE_STRING *p_DestinationString; // [rsp+40h] [rbp-28h]
  int v12; // [rsp+48h] [rbp-20h]
  __int128 v13; // [rsp+50h] [rbp-18h]
  DWORD cbSid; // [rsp+80h] [rbp+18h] BYREF

  v4 = 0;
  ModuleState = RmpActivityHostAllocateModuleState(a2);
  if ( ModuleState >= 0 )
  {
    ModuleState = RmpCpuSetManagerAllocateState(a2);
    if ( ModuleState >= 0 )
    {
      ModuleState = RmpEnforcerContextAllocateState(a1, a2);
      if ( ModuleState >= 0 )
      {
        ModuleState = RmpGameModeAllocateState((struct _RM_CPU_SET_CLIENT_CONTEXT **)a2 + 202);
        if ( ModuleState >= 0 )
        {
          RtlInitUnicodeString(&DestinationString, L"\\KernelObjects\\MemoryPartition0");
          v9 = 48;
          p_DestinationString = &DestinationString;
          v10 = 0LL;
          v12 = 64;
          v13 = 0LL;
          ModuleState = NtOpenPartition((char *)a2 + 360, 1LL, &v9);
          if ( ModuleState >= 0 )
          {
            ModuleState = HampManagerAllocateState((struct _RM_SERVICE_GLOBALS *)((char *)a2 + 1768));
            if ( ModuleState >= 0 )
            {
              ModuleState = TpAllocTimer((char *)a2 + 560, RmpTelemetryTimerCallback, a2, 0LL);
              if ( ModuleState >= 0 )
                ModuleState = 0;
              if ( ModuleState >= 0 )
              {
                cbSid = 68;
                if ( CreateWellKnownSid(WinNullSid, 0LL, (char *)a2 + 2644, &cbSid) )
                {
                  if ( (int)ExecutionModel::CreateResourceManager(
                              a2,
                              a1,
                              (struct _RM_SERVICE_GLOBALS *)((char *)a2 + 2720),
                              v6) < 0 )
                    return (unsigned int)-1073741823;
                  return v4;
                }
                else
                {
                  return (unsigned int)-1073741823;
                }
              }
            }
          }
        }
      }
    }
  }
  return (unsigned int)ModuleState;
}
