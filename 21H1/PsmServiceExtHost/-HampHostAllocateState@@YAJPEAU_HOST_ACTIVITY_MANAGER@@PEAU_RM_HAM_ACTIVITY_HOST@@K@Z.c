/*
 * XREFs of ?HampHostAllocateState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18000C8CC
 * Callers:
 *     ?RmpActivityHostAllocateAndInitialize@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PSM_HOST_INFO@@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000C4E0 (-RmpActivityHostAllocateAndInitialize@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PS.c)
 * Callees:
 *     ?HampWakeContextFindOrCreate@@YAJPEAU_HAM_WAKE_REFERENCE_MANAGER@@_KPEAXPEAPEAU_CEM_RC_OBJECT@@@Z @ 0x180007224 (-HampWakeContextFindOrCreate@@YAJPEAU_HAM_WAKE_REFERENCE_MANAGER@@_KPEAXPEAPEAU_CEM_RC_OBJECT@@@.c)
 *     ?HampSystemQueryHostJobHandle@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAPEAX@Z @ 0x18000CA98 (-HampSystemQueryHostJobHandle@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAPEAX@Z.c)
 *     ?HampHostIdStoreReferenceId@@YAPEAXPEAU_HAM_HOSTID_STORE@@PEAU_RM_PSM_KEY@@PEAT_RM_SID@@K_K@Z @ 0x18000D384 (-HampHostIdStoreReferenceId@@YAPEAXPEAU_HAM_HOSTID_STORE@@PEAU_RM_PSM_KEY@@PEAT_RM_SID@@K_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180046540 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x180085658 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

__int64 __fastcall HampHostAllocateState(struct _HOST_ACTIVITY_MANAGER *a1, struct _RM_HAM_ACTIVITY_HOST *a2, char a3)
{
  HANDLE v3; // rsi
  void *v6; // rax
  int HostJobHandle; // edi
  int v8; // eax
  HANDLE Handle; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0LL;
  Handle = 0LL;
  if ( (a3 & 2) != 0
    || (v6 = HampHostIdStoreReferenceId(
               (struct _HOST_ACTIVITY_MANAGER *)((char *)a1 + 544),
               (struct _RM_HAM_ACTIVITY_HOST *)((char *)a2 + 24),
               (struct _RM_HAM_ACTIVITY_HOST *)((char *)a2 + 488),
               *((_DWORD *)a2 + 139),
               *((_QWORD *)a2 - 4)),
        (*((_QWORD *)a2 + 73) = v6) != 0LL)
    || (*((_BYTE *)a2 + 772) & 1) == 0 )
  {
    HostJobHandle = HampSystemQueryHostJobHandle(a2, (void **)a2 + 72);
    if ( HostJobHandle >= 0 )
    {
      HostJobHandle = TpAllocWork((char *)a2 + 632, RmHamHostStateWorker, (char *)a2 - 64, 0LL);
      if ( HostJobHandle >= 0 )
      {
        HostJobHandle = TpAllocWork((char *)a2 + 624, HampHostTerminateWorker, a2, 0LL);
        if ( HostJobHandle >= 0 )
        {
          if ( (*((_BYTE *)a2 + 772) & 1) != 0 )
          {
            HostJobHandle = (*(__int64 (__fastcall **)(_QWORD, void (*)(void *, void *), struct _RM_HAM_ACTIVITY_HOST *, char *))(*(_QWORD *)(*((_QWORD *)a2 - 2) + 40LL) + 168LL))(
                              *((_QWORD *)a2 + 142),
                              HampHostQuiesceTimerCallback,
                              a2,
                              (char *)a2 + 792);
            if ( HostJobHandle >= 0 )
            {
              HostJobHandle = (*(__int64 (__fastcall **)(_QWORD, void (*)(void *, void *), struct _RM_HAM_ACTIVITY_HOST *, char *))(*(_QWORD *)(*((_QWORD *)a2 - 2) + 40LL) + 168LL))(
                                *((_QWORD *)a2 + 142),
                                HampHostDelayedEnforcementTimerCallback,
                                a2,
                                (char *)a2 + 992);
              if ( HostJobHandle >= 0 )
              {
                if ( *((_DWORD *)a2 + 140) != 2
                  || (v8 = HampSystemQueryHostJobHandle(a2, &Handle), v3 = Handle, HostJobHandle = v8, v8 >= 0)
                  && (HostJobHandle = HampWakeContextFindOrCreate(
                                        (struct _HOST_ACTIVITY_MANAGER *)((char *)a1 + 432),
                                        *((_QWORD *)a2 - 4),
                                        Handle,
                                        (struct _CEM_RC_OBJECT **)a2 + 130),
                      HostJobHandle >= 0) )
                {
                  HostJobHandle = 0;
                }
                if ( v3 )
                  NtClose(v3);
              }
            }
          }
          else
          {
            return 0;
          }
        }
      }
    }
  }
  else
  {
    MicrosoftTelemetryAssertTriggeredNoArgs();
    return (unsigned int)-1058275322;
  }
  return (unsigned int)HostJobHandle;
}
