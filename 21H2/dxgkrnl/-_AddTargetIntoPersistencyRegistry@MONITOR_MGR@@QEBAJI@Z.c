/*
 * XREFs of ?_AddTargetIntoPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z @ 0x1C02F1AB0
 * Callers:
 *     ?_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02F2238 (-_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEA.c)
 *     ?_MigrateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@@Z @ 0x1C02F2AB4 (-_MigrateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     ?_OpenPersistencyRegistry@MONITOR_MGR@@AEBAJKPEAPEAX@Z @ 0x1C0190348 (-_OpenPersistencyRegistry@MONITOR_MGR@@AEBAJKPEAPEAX@Z.c)
 *     ?_PersistencyRegNameFromTargetID@MONITOR_MGR@@AEBAJIQEAG@Z @ 0x1C02F2DF8 (-_PersistencyRegNameFromTargetID@MONITOR_MGR@@AEBAJIQEAG@Z.c)
 */

int __fastcall MONITOR_MGR::_AddTargetIntoPersistencyRegistry(MONITOR_MGR *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  MONITOR_MGR *v6; // rcx
  unsigned int v7; // edx
  __int64 v8; // rax
  int result; // eax
  __int64 v10; // rcx
  const WCHAR *v11; // rdx
  __int64 v12; // rax
  NTSTATUS v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rbx
  __int64 v17; // rax
  unsigned int ValueData; // [rsp+30h] [rbp-9h] BYREF
  PCWSTR Path; // [rsp+38h] [rbp-1h] BYREF
  WCHAR ValueName[32]; // [rsp+40h] [rbp+7h] BYREF

  ValueData = a2;
  v5 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  v6 = (MONITOR_MGR *)ValueData;
  *(_QWORD *)(v5 + 24) = ValueData;
  v7 = ValueData;
  if ( ValueData == -1 )
  {
    v8 = WdLogNewEntry5_WdAssertion(v6, 0xFFFFFFFFLL);
    WdLogEvent5_WdAssertion(v8);
    v7 = -1;
  }
  result = MONITOR_MGR::_PersistencyRegNameFromTargetID(v6, v7, ValueName);
  if ( result >= 0 )
  {
    Path = 0LL;
    result = MONITOR_MGR::_OpenPersistencyRegistry(this, 131078LL, (void **)&Path);
    if ( result >= 0 )
    {
      v11 = Path;
      if ( !Path )
      {
        v12 = WdLogNewEntry5_WdAssertion(v10, 0LL);
        WdLogEvent5_WdAssertion(v12);
        v11 = Path;
      }
      v13 = RtlWriteRegistryValue(0x40000000u, v11, ValueName, 4u, &ValueData, 4u);
      v16 = v13;
      if ( v13 < 0 )
      {
        v17 = WdLogNewEntry5_WdError(v15, v14);
        *(_QWORD *)(v17 + 24) = ValueData;
        *(_QWORD *)(v17 + 32) = v16;
        WdLogEvent5_WdError(v17);
      }
      ZwClose((HANDLE)Path);
      return v16;
    }
  }
  return result;
}
