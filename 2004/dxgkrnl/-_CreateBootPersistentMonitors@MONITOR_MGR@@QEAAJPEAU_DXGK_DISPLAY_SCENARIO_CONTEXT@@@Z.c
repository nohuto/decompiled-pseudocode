/*
 * XREFs of ?_CreateBootPersistentMonitors@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0185850
 * Callers:
 *     ?_OnAdapterInitializationDone@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01857D8 (-_OnAdapterInitializationDone@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0002C80 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C015CCDC (-_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_.c)
 *     ?_OpenPersistencyRegistry@MONITOR_MGR@@AEBAJKPEAPEAX@Z @ 0x1C0185958 (-_OpenPersistencyRegistry@MONITOR_MGR@@AEBAJKPEAPEAX@Z.c)
 *     ?DmmIsTargetForceable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C02DDC38 (-DmmIsTargetForceable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z.c)
 *     ?_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02F1ED8 (-_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEA.c)
 *     ?_PersistencyRegNameFromTargetID@MONITOR_MGR@@AEBAJIQEAG@Z @ 0x1C02F2A98 (-_PersistencyRegNameFromTargetID@MONITOR_MGR@@AEBAJIQEAG@Z.c)
 */

__int64 __fastcall MONITOR_MGR::_CreateBootPersistentMonitors(
        MONITOR_MGR *this,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v8; // rax
  ULONG v9; // esi
  _DWORD *v10; // rdi
  WCHAR *v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  _DWORD *v17; // r15
  NTSTATUS v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // r14
  __int64 v24; // rax
  NTSTATUS v25; // eax
  __int64 v26; // rax
  __int64 v27; // r14
  int IsTargetForceable; // eax
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rax
  WCHAR *v35; // rdi
  __int64 v36; // rdx
  __int64 v37; // rdx
  __int64 v38; // rcx
  int SimulatedMonitor; // esi
  __int64 v40; // rax
  NTSTATUS v41; // eax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rsi
  __int64 v45; // rax
  char v46[8]; // [rsp+30h] [rbp-89h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-81h] BYREF
  ULONG ResultLength; // [rsp+40h] [rbp-79h] BYREF
  __int64 v49; // [rsp+48h] [rbp-71h]
  UNICODE_STRING String2; // [rsp+50h] [rbp-69h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-59h] BYREF
  char KeyValueInformation[12]; // [rsp+70h] [rbp-49h] BYREF
  unsigned int v53; // [rsp+7Ch] [rbp-3Dh]
  WCHAR SourceString[32]; // [rsp+90h] [rbp-29h] BYREF

  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = this;
  KeyHandle = 0LL;
  if ( MONITOR_MGR::_OpenPersistencyRegistry(this, 0x20019u, &KeyHandle) >= 0 )
  {
    if ( !KeyHandle )
    {
      v8 = WdLogNewEntry5_WdAssertion(v6, v5);
      WdLogEvent5_WdAssertion(v8);
    }
    v9 = -1;
    ResultLength = 0;
    v10 = 0LL;
    v11 = 0LL;
    while ( 1 )
    {
      ++v9;
      if ( !v10 )
      {
        v10 = operator new[](0x60uLL, 0x4D677844u, PagedPool);
        if ( !v10 )
        {
          v16 = WdLogNewEntry5_WdLowResource(v13, v12, v14, v15);
          WdLogEvent5_WdLowResource(v16);
          return 3221225495LL;
        }
      }
      v10[2] = -1;
      v17 = v10 + 3;
      v18 = ZwEnumerateValueKey(KeyHandle, v9, KeyValueBasicInformation, v10 + 3, 0x4Eu, &ResultLength);
      v23 = v18;
      if ( v18 == -2147483622 )
      {
        v34 = WdLogNewEntry5_WdTrace(v20, v19, v21, v22);
        *(_QWORD *)(v34 + 24) = v9;
        *(_QWORD *)(v34 + 32) = this;
        operator delete[](v10);
        while ( v11 )
        {
          v35 = v11;
          v11 = *(WCHAR **)v11;
          v36 = *((unsigned int *)v35 + 2);
          if ( (_DWORD)v36 == -1 )
          {
            v41 = RtlDeleteRegistryValue(0x40000000u, (PCWSTR)KeyHandle, v35 + 12);
            v44 = v41;
            if ( v41 < 0 )
            {
              v45 = WdLogNewEntry5_WdError(v43, v42);
              *(_QWORD *)(v45 + 24) = v44;
              WdLogEvent5_WdError(v45);
            }
          }
          else
          {
            v49 = 0LL;
            SimulatedMonitor = MONITOR_MGR::_HandleCreateSimulatedMonitor(this, v36, 2LL);
            if ( SimulatedMonitor >= 0 && !v49 )
            {
              v40 = WdLogNewEntry5_WdAssertion(v38, v37);
              WdLogEvent5_WdAssertion(v40);
            }
            MONITOR_MGR::_LogMonitorPresentEvent(
              (__int64)this,
              1073741825LL,
              *((_DWORD *)v35 + 2),
              SimulatedMonitor,
              0LL);
          }
          operator delete[](v35);
        }
        ZwClose(KeyHandle);
        return 0LL;
      }
      if ( v18 < 0 )
        goto LABEL_13;
      *((_WORD *)v17 + ((unsigned __int64)(unsigned int)v10[5] >> 1) + 6) = 0;
      *(_QWORD *)v10 = v11;
      v11 = (WCHAR *)v10;
      v10 = 0LL;
      if ( v17[1] != 4 )
      {
        v24 = WdLogNewEntry5_WdWarning(v20, v19, v21);
        *(_QWORD *)(v24 + 24) = v9;
        *(_QWORD *)(v24 + 32) = (unsigned int)v17[1];
        goto LABEL_15;
      }
      v25 = ZwEnumerateValueKey(KeyHandle, v9, KeyValuePartialInformation, KeyValueInformation, 0x13u, &ResultLength);
      v23 = v25;
      if ( v25 == -2147483622 )
      {
        v26 = WdLogNewEntry5_WdAssertion(v20, v19);
        WdLogEvent5_WdAssertion(v26);
      }
      if ( (int)v23 < 0 )
      {
LABEL_13:
        v24 = WdLogNewEntry5_WdWarning(v20, v19, v21);
        *(_QWORD *)(v24 + 24) = v9;
        *(_QWORD *)(v24 + 32) = v23;
        goto LABEL_15;
      }
      v27 = v53;
      v46[0] = 0;
      IsTargetForceable = DmmIsTargetForceable(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL), v53, v46, 0LL);
      if ( IsTargetForceable < 0 )
      {
        if ( IsTargetForceable == -1071774971 )
          goto LABEL_25;
      }
      else if ( v46[0] )
      {
        if ( MONITOR_MGR::_PersistencyRegNameFromTargetID(0LL, v27, SourceString) >= 0 )
        {
          DestinationString = 0LL;
          String2 = 0LL;
          RtlInitUnicodeString(&DestinationString, (PCWSTR)v17 + 6);
          RtlInitUnicodeString(&String2, SourceString);
          if ( RtlCompareUnicodeString(&DestinationString, &String2, 0) )
          {
            v24 = WdLogNewEntry5_WdWarning(v32, v31, v33);
            goto LABEL_15;
          }
          *((_DWORD *)v11 + 2) = v27;
        }
      }
      else
      {
LABEL_25:
        v24 = WdLogNewEntry5_WdWarning(0LL, v29, v30);
        *(_QWORD *)(v24 + 24) = v27;
LABEL_15:
        WdLogEvent5_WdWarning(v24);
      }
    }
  }
  return 0LL;
}
