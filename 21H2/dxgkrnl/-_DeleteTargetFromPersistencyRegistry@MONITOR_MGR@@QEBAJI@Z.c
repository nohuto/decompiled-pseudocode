/*
 * XREFs of ?_DeleteTargetFromPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z @ 0x1C03B3A0C
 * Callers:
 *     ?_HandleRemoveSimulatedMonitor@MONITOR_MGR@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C03B42F0 (-_HandleRemoveSimulatedMonitor@MONITOR_MGR@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_MigrateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@@Z @ 0x1C03B452C (-_MigrateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3.c)
 * Callees:
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ?_OpenPersistencyRegistry@MONITOR_MGR@@AEBAJKPEAPEAX@Z @ 0x1C02186E0 (-_OpenPersistencyRegistry@MONITOR_MGR@@AEBAJKPEAPEAX@Z.c)
 *     ?_PersistencyRegNameFromTargetID@MONITOR_MGR@@AEBAJIQEAG@Z @ 0x1C03B47DC (-_PersistencyRegNameFromTargetID@MONITOR_MGR@@AEBAJIQEAG@Z.c)
 */

int __fastcall MONITOR_MGR::_DeleteTargetFromPersistencyRegistry(MONITOR_MGR *this, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rdi
  MONITOR_MGR *v5; // rcx
  int result; // eax
  const WCHAR *v7; // rdx
  NTSTATUS v8; // eax
  NTSTATUS v9; // ebx
  PCWSTR Path; // [rsp+20h] [rbp-68h] BYREF
  WCHAR ValueName[32]; // [rsp+30h] [rbp-58h] BYREF

  v2 = a2;
  v4 = (unsigned int)a2;
  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2) + 24) = (unsigned int)a2;
  if ( v2 == -1 )
    WdLogSingleEntry0(1LL);
  result = MONITOR_MGR::_PersistencyRegNameFromTargetID(v5, v2, ValueName);
  if ( result >= 0 )
  {
    Path = 0LL;
    result = MONITOR_MGR::_OpenPersistencyRegistry(this, 0xF003Fu, (void **)&Path);
    if ( result >= 0 )
    {
      v7 = Path;
      if ( !Path )
      {
        WdLogSingleEntry0(1LL);
        v7 = Path;
      }
      v8 = RtlDeleteRegistryValue(0x40000000u, v7, ValueName);
      v9 = v8;
      if ( v8 < 0 )
        WdLogSingleEntry2(2LL, v4, v8);
      ZwClose((HANDLE)Path);
      return v9;
    }
  }
  return result;
}
