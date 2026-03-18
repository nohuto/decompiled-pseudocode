/*
 * XREFs of ?_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0174ED4
 * Callers:
 *     ?_DestroyAllSameTypeSimulatedMonitor@MONITOR_MGR@@QEAAJW4_DMM_VIDPN_MONITOR_TYPE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C013B14C (-_DestroyAllSameTypeSimulatedMonitor@MONITOR_MGR@@QEAAJW4_DMM_VIDPN_MONITOR_TYPE@@EPEAU_DXGK_DIS.c)
 *     ?_EnableDisableMonitorInternal@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0172D24 (-_EnableDisableMonitorInternal@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO.c)
 *     ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C0187A44 (-_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ?_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C018A14C (-_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_DISPLAY_SCENARI.c)
 *     ?_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIPEAVDXGMONITOR@@0PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C018A2B4 (-_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIPEAVDXGMONITOR@@0PEAU_DXGK_DISPLAY_SCENARIO_CONTEX.c)
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C018AB0C (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARI.c)
 *     ?_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02F0F38 (-_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEA.c)
 *     ?_HandleRemovePhysicalMonitor@MONITOR_MGR@@QEAAJIEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02F1318 (-_HandleRemovePhysicalMonitor@MONITOR_MGR@@QEAAJIEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_HandleRemoveSimulatedMonitor@MONITOR_MGR@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02F14F0 (-_HandleRemoveSimulatedMonitor@MONITOR_MGR@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     MonitorSetAppOverride @ 0x1C02F3508 (MonitorSetAppOverride.c)
 *     MonitorSetUsageClass @ 0x1C02F3DF8 (MonitorSetUsageClass.c)
 *     ?_ProcessDisplayIDBlob@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02F9AFC (-_ProcessDisplayIDBlob@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C000AE58 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@U2@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@3433@Z @ 0x1C0024108 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@U2@U1@U1@@-$_tlgWriteTemplate@$$A6.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 *     DxgkIncreaseMonitorUniqueness @ 0x1C018AD44 (DxgkIncreaseMonitorUniqueness.c)
 */

__int64 __fastcall MONITOR_MGR::_IssueMonitorEvent(
        struct _FAST_MUTEX *a1,
        __int64 a2,
        int a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6)
{
  __int64 v8; // rdi
  __int64 v9; // r12
  __int64 v10; // rdx
  __int64 v11; // rcx
  LIST_ENTRY *Flink; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v16; // r9
  int v17; // edx
  GUID *p_ActivityId; // r8
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  _QWORD *v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  int v25; // [rsp+50h] [rbp-39h] BYREF
  unsigned int v26; // [rsp+54h] [rbp-35h] BYREF
  int v27; // [rsp+58h] [rbp-31h] BYREF
  int v28; // [rsp+5Ch] [rbp-2Dh] BYREF
  __int64 v29; // [rsp+60h] [rbp-29h] BYREF
  __int64 v30; // [rsp+68h] [rbp-21h] BYREF
  __int64 v31; // [rsp+70h] [rbp-19h]
  GUID ActivityId; // [rsp+78h] [rbp-11h] BYREF

  v31 = a4;
  v8 = a3;
  v9 = (unsigned int)a2;
  if ( !a3 || a3 == 7 )
  {
    ActivityId = 0LL;
    EtwActivityIdControl(3u, &ActivityId);
    if ( (unsigned int)dword_1C00AFA90 > 5 )
    {
      if ( tlgKeywordOn((__int64)&dword_1C00AFA90, 0x400000000080LL) )
      {
        if ( a6 )
          v17 = *(unsigned __int8 *)(a6 + 48);
        else
          v17 = -1;
        p_ActivityId = (GUID *)(a6 + 8);
        if ( !a6 )
          p_ActivityId = &ActivityId;
        v30 = *(_QWORD *)(*((_QWORD *)a1->Owner + 2) + 316LL);
        v25 = v17;
        v26 = a5;
        v29 = a4;
        v27 = v8;
        v28 = v9;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          a5,
          byte_1C00802C3,
          p_ActivityId,
          v16,
          (__int64)&v28,
          (__int64)&v30,
          (__int64)&v27,
          (__int64)&v29,
          (__int64)&v26,
          (__int64)&v25);
      }
    }
  }
  if ( !(_DWORD)v8 )
  {
LABEL_7:
    DxgkIncreaseMonitorUniqueness();
    goto LABEL_8;
  }
  if ( (int)v8 <= 0 )
    goto LABEL_35;
  if ( (int)v8 > 2 )
  {
    if ( (int)v8 > 7 )
    {
      if ( (int)v8 <= 9 )
        goto LABEL_8;
      if ( (_DWORD)v8 != 10 )
      {
LABEL_35:
        v19 = WdLogNewEntry5_WdAssertion(a1, a2);
        *(_QWORD *)(v19 + 24) = 10533LL;
        WdLogEvent5_WdAssertion(v19);
        goto LABEL_8;
      }
    }
    goto LABEL_7;
  }
LABEL_8:
  if ( (unsigned int)v8 > 3 && (unsigned int)(v8 - 7) > 3 )
  {
    v20 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v20);
  }
  if ( a1 == (struct _FAST_MUTEX *)-224LL )
  {
    v21 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v21);
  }
  KeAcquireGuardedMutex(a1 + 4);
  Flink = a1[2].Event.Header.WaitListHead.Flink;
  if ( Flink == &a1[2].Event.Header.WaitListHead )
    Flink = 0LL;
  while ( 1 )
  {
    if ( a1 == (struct _FAST_MUTEX *)-224LL )
    {
      v24 = WdLogNewEntry5_WdAssertion(v11, v10);
      WdLogEvent5_WdAssertion(v24);
    }
    KeReleaseGuardedMutex(a1 + 4);
    if ( !Flink )
      break;
    if ( ((int (__fastcall *)(_QWORD, _QWORD, struct _LIST_ENTRY *, _QWORD, __int64, unsigned int, __int64))Flink[1].Flink)(
           *((_QWORD *)a1->Owner + 2),
           (unsigned int)v9,
           Flink[1].Blink,
           (unsigned int)v8,
           v31,
           a5,
           a6) < 0 )
    {
      v22 = (_QWORD *)WdLogNewEntry5_WdError(v14, v13);
      v22[3] = Flink[1].Flink;
      v22[4] = Flink[1].Blink;
      v22[5] = v8;
      v22[6] = v9;
      WdLogEvent5_WdError(v22);
    }
    if ( a1 == (struct _FAST_MUTEX *)-224LL )
    {
      v23 = WdLogNewEntry5_WdAssertion(v14, v13);
      WdLogEvent5_WdAssertion(v23);
    }
    KeAcquireGuardedMutex(a1 + 4);
    Flink = Flink->Flink;
    if ( Flink == &a1[2].Event.Header.WaitListHead )
      Flink = 0LL;
  }
  return 0LL;
}
