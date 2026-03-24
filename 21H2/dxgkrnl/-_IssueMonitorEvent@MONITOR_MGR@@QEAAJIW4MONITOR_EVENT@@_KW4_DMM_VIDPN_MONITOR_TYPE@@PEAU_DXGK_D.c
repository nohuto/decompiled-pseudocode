/*
 * XREFs of ?_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C017AEFC
 * Callers:
 *     ?_DestroyAllSameTypeSimulatedMonitor@MONITOR_MGR@@QEAAJW4_DMM_VIDPN_MONITOR_TYPE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C013F93C (-_DestroyAllSameTypeSimulatedMonitor@MONITOR_MGR@@QEAAJW4_DMM_VIDPN_MONITOR_TYPE@@EPEAU_DXGK_DIS.c)
 *     ?_EnableDisableMonitorInternal@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01787B4 (-_EnableDisableMonitorInternal@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO.c)
 *     ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C018D400 (-_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ?_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0191114 (-_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_DISPLAY_SCENARI.c)
 *     ?_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIPEAVDXGMONITOR@@0PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C019127C (-_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIPEAVDXGMONITOR@@0PEAU_DXGK_DISPLAY_SCENARIO_CONTEX.c)
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01915B8 (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARI.c)
 *     ?_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02F2238 (-_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEA.c)
 *     ?_HandleRemovePhysicalMonitor@MONITOR_MGR@@QEAAJIEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02F2618 (-_HandleRemovePhysicalMonitor@MONITOR_MGR@@QEAAJIEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_HandleRemoveSimulatedMonitor@MONITOR_MGR@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02F27F0 (-_HandleRemoveSimulatedMonitor@MONITOR_MGR@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     MonitorSetAppOverride @ 0x1C02F4808 (MonitorSetAppOverride.c)
 *     MonitorSetUsageClass @ 0x1C02F50F8 (MonitorSetUsageClass.c)
 *     ?_ProcessDisplayIDBlob@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02FADFC (-_ProcessDisplayIDBlob@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C000B1A8 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@U2@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@3433@Z @ 0x1C0024564 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@U2@U1@U1@@-$_tlgWriteTemplate@$$A6.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 *     DxgkIncreaseMonitorUniqueness @ 0x1C01919E4 (DxgkIncreaseMonitorUniqueness.c)
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
  __int64 v10; // r9
  int v11; // edx
  GUID *p_ActivityId; // r8
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  LIST_ENTRY *Flink; // rsi
  __int64 v18; // rdx
  __int64 v19; // rcx
  _QWORD *v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  int v24; // [rsp+50h] [rbp-39h] BYREF
  unsigned int v25; // [rsp+54h] [rbp-35h] BYREF
  int v26; // [rsp+58h] [rbp-31h] BYREF
  int v27; // [rsp+5Ch] [rbp-2Dh] BYREF
  __int64 v28; // [rsp+60h] [rbp-29h] BYREF
  __int64 v29; // [rsp+68h] [rbp-21h] BYREF
  __int64 v30; // [rsp+70h] [rbp-19h]
  GUID ActivityId; // [rsp+78h] [rbp-11h] BYREF

  v30 = a4;
  v8 = a3;
  v9 = (unsigned int)a2;
  if ( !a3 || a3 == 7 )
  {
    ActivityId = 0LL;
    EtwActivityIdControl(3u, &ActivityId);
    if ( (unsigned int)dword_1C00B1A90 > 5 )
    {
      if ( tlgKeywordOn((__int64)&dword_1C00B1A90, 0x400000000080LL) )
      {
        if ( a6 )
          v11 = *(unsigned __int8 *)(a6 + 48);
        else
          v11 = -1;
        p_ActivityId = (GUID *)(a6 + 8);
        if ( !a6 )
          p_ActivityId = &ActivityId;
        v29 = *(_QWORD *)(*((_QWORD *)a1->Owner + 2) + 316LL);
        v24 = v11;
        v25 = a5;
        v28 = a4;
        v26 = v8;
        v27 = v9;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          a5,
          byte_1C0081433,
          p_ActivityId,
          v10,
          (__int64)&v27,
          (__int64)&v29,
          (__int64)&v26,
          (__int64)&v28,
          (__int64)&v25,
          (__int64)&v24);
      }
    }
  }
  if ( (_DWORD)v8 )
  {
    if ( (int)v8 <= 0 )
    {
LABEL_18:
      v13 = WdLogNewEntry5_WdAssertion(a1, a2);
      *(_QWORD *)(v13 + 24) = 10535LL;
      WdLogEvent5_WdAssertion(v13);
      goto LABEL_20;
    }
    if ( (int)v8 <= 2 )
      goto LABEL_20;
    if ( (int)v8 > 7 )
    {
      if ( (int)v8 <= 9 )
        goto LABEL_20;
      if ( (_DWORD)v8 != 10 )
      {
        if ( (_DWORD)v8 == 11 )
          goto LABEL_20;
        goto LABEL_18;
      }
    }
  }
  DxgkIncreaseMonitorUniqueness();
LABEL_20:
  if ( a1 == (struct _FAST_MUTEX *)-224LL )
  {
    v14 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v14);
  }
  KeAcquireGuardedMutex(a1 + 4);
  Flink = a1[2].Event.Header.WaitListHead.Flink;
  if ( Flink == &a1[2].Event.Header.WaitListHead )
    Flink = 0LL;
  while ( 1 )
  {
    if ( a1 == (struct _FAST_MUTEX *)-224LL )
    {
      v22 = WdLogNewEntry5_WdAssertion(v16, v15);
      WdLogEvent5_WdAssertion(v22);
    }
    KeReleaseGuardedMutex(a1 + 4);
    if ( !Flink )
      break;
    if ( ((int (__fastcall *)(_QWORD, _QWORD, struct _LIST_ENTRY *, _QWORD, __int64, unsigned int, __int64))Flink[1].Flink)(
           *((_QWORD *)a1->Owner + 2),
           (unsigned int)v9,
           Flink[1].Blink,
           (unsigned int)v8,
           v30,
           a5,
           a6) < 0 )
    {
      v20 = (_QWORD *)WdLogNewEntry5_WdError(v19, v18);
      v20[3] = Flink[1].Flink;
      v20[4] = Flink[1].Blink;
      v20[5] = v8;
      v20[6] = v9;
      WdLogEvent5_WdError(v20);
    }
    if ( a1 == (struct _FAST_MUTEX *)-224LL )
    {
      v21 = WdLogNewEntry5_WdAssertion(v19, v18);
      WdLogEvent5_WdAssertion(v21);
    }
    KeAcquireGuardedMutex(a1 + 4);
    Flink = Flink->Flink;
    if ( Flink == &a1[2].Event.Header.WaitListHead )
      Flink = 0LL;
  }
  return 0LL;
}
