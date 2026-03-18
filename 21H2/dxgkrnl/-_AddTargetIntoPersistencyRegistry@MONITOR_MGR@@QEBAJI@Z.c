/*
 * XREFs of ?_AddTargetIntoPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z @ 0x1C03B34FC
 * Callers:
 *     ?_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C03B3D18 (-_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEA.c)
 *     ?_MigrateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@@Z @ 0x1C03B452C (-_MigrateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3.c)
 * Callees:
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ?_OpenPersistencyRegistry@MONITOR_MGR@@AEBAJKPEAPEAX@Z @ 0x1C02186E0 (-_OpenPersistencyRegistry@MONITOR_MGR@@AEBAJKPEAPEAX@Z.c)
 *     ?_PersistencyRegNameFromTargetID@MONITOR_MGR@@AEBAJIQEAG@Z @ 0x1C03B47DC (-_PersistencyRegNameFromTargetID@MONITOR_MGR@@AEBAJIQEAG@Z.c)
 */

int __fastcall MONITOR_MGR::_AddTargetIntoPersistencyRegistry(MONITOR_MGR *this, __int64 a2)
{
  __int64 v3; // rax
  MONITOR_MGR *v4; // rcx
  unsigned int v5; // edx
  int result; // eax
  const WCHAR *v7; // rdx
  NTSTATUS v8; // eax
  NTSTATUS v9; // ebx
  unsigned int ValueData; // [rsp+30h] [rbp-9h] BYREF
  PCWSTR Path; // [rsp+38h] [rbp-1h] BYREF
  WCHAR ValueName[32]; // [rsp+40h] [rbp+7h] BYREF

  ValueData = a2;
  v3 = WdLogNewEntry5_WdTrace(this, a2);
  v4 = (MONITOR_MGR *)ValueData;
  *(_QWORD *)(v3 + 24) = ValueData;
  v5 = ValueData;
  if ( ValueData == -1 )
  {
    WdLogSingleEntry0(1LL);
    v5 = -1;
  }
  result = MONITOR_MGR::_PersistencyRegNameFromTargetID(v4, v5, ValueName);
  if ( result >= 0 )
  {
    Path = 0LL;
    result = MONITOR_MGR::_OpenPersistencyRegistry(this, 0x20006u, (void **)&Path);
    if ( result >= 0 )
    {
      v7 = Path;
      if ( !Path )
      {
        WdLogSingleEntry0(1LL);
        v7 = Path;
      }
      v8 = RtlWriteRegistryValue(0x40000000u, v7, ValueName, 4u, &ValueData, 4u);
      v9 = v8;
      if ( v8 < 0 )
        WdLogSingleEntry2(2LL, ValueData, v8);
      ZwClose((HANDLE)Path);
      return v9;
    }
  }
  return result;
}
