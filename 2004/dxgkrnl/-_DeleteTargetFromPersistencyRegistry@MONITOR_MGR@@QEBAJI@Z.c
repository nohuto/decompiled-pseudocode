/*
 * XREFs of ?_DeleteTargetFromPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z @ 0x1C02F1BE4
 * Callers:
 *     ?_HandleRemoveSimulatedMonitor@MONITOR_MGR@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02F2490 (-_HandleRemoveSimulatedMonitor@MONITOR_MGR@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_MigrateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@@Z @ 0x1C02F2754 (-_MigrateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     ?_OpenPersistencyRegistry@MONITOR_MGR@@AEBAJKPEAPEAX@Z @ 0x1C0185958 (-_OpenPersistencyRegistry@MONITOR_MGR@@AEBAJKPEAPEAX@Z.c)
 *     ?_PersistencyRegNameFromTargetID@MONITOR_MGR@@AEBAJIQEAG@Z @ 0x1C02F2A98 (-_PersistencyRegNameFromTargetID@MONITOR_MGR@@AEBAJIQEAG@Z.c)
 */

int __fastcall MONITOR_MGR::_DeleteTargetFromPersistencyRegistry(MONITOR_MGR *this, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v6; // rdi
  __int64 v7; // rdx
  MONITOR_MGR *v8; // rcx
  __int64 v9; // rax
  int result; // eax
  __int64 v11; // rcx
  const WCHAR *v12; // rdx
  __int64 v13; // rax
  NTSTATUS v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // rax
  PCWSTR Path; // [rsp+20h] [rbp-68h] BYREF
  WCHAR ValueName[32]; // [rsp+30h] [rbp-58h] BYREF

  v4 = a2;
  v6 = (unsigned int)a2;
  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = (unsigned int)a2;
  if ( v4 == -1 )
  {
    v9 = WdLogNewEntry5_WdAssertion(v8, v7);
    WdLogEvent5_WdAssertion(v9);
  }
  result = MONITOR_MGR::_PersistencyRegNameFromTargetID(v8, v4, ValueName);
  if ( result >= 0 )
  {
    Path = 0LL;
    result = MONITOR_MGR::_OpenPersistencyRegistry(this, 983103LL, (void **)&Path);
    if ( result >= 0 )
    {
      v12 = Path;
      if ( !Path )
      {
        v13 = WdLogNewEntry5_WdAssertion(v11, 0LL);
        WdLogEvent5_WdAssertion(v13);
        v12 = Path;
      }
      v14 = RtlDeleteRegistryValue(0x40000000u, v12, ValueName);
      v17 = v14;
      if ( v14 < 0 )
      {
        v18 = WdLogNewEntry5_WdError(v16, v15);
        *(_QWORD *)(v18 + 24) = v6;
        *(_QWORD *)(v18 + 32) = v17;
        WdLogEvent5_WdError(v18);
      }
      ZwClose((HANDLE)Path);
      return v17;
    }
  }
  return result;
}
