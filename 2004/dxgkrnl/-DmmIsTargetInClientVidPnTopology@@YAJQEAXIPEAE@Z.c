/*
 * XREFs of ?DmmIsTargetInClientVidPnTopology@@YAJQEAXIPEAE@Z @ 0x1C02DDDD0
 * Callers:
 *     ?_DestroyAllSameTypeSimulatedMonitor@MONITOR_MGR@@QEAAJW4_DMM_VIDPN_MONITOR_TYPE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C013C2FC (-_DestroyAllSameTypeSimulatedMonitor@MONITOR_MGR@@QEAAJW4_DMM_VIDPN_MONITOR_TYPE@@EPEAU_DXGK_DIS.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C025F2C4 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 *     ?DisplayConfigHelperCreateSimulateMonitor@@YAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@EPEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0295500 (-DisplayConfigHelperCreateSimulateMonitor@@YAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@EPEAEPEAU_D.c)
 *     ?HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0296AB8 (-HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@.c)
 *     ?Initialize@VIDPNTARGETINFO@@QEAAJPEAVDXGADAPTER@@PEBVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C02BB2D0 (-Initialize@VIDPNTARGETINFO@@QEAAJPEAVDXGADAPTER@@PEBVDMMVIDEOPRESENTTARGET@@@Z.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002C20 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C00054DC (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C0007CA8 (-IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0007EFC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 */

__int64 __fastcall DmmIsTargetInClientVidPnTopology(_QWORD *a1, __int64 a2, bool *a3)
{
  bool IsTargetInTopology; // bl
  int v5; // ebp
  __int64 v7; // rax
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // [rsp+50h] [rbp+18h] BYREF
  __int64 v17; // [rsp+58h] [rbp+20h] BYREF

  IsTargetInTopology = 0;
  v5 = a2;
  if ( !a3 )
  {
    v7 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v7 + 24) = 0LL;
    WdLogEvent5_WdError(v7);
    return 3221225485LL;
  }
  *a3 = 0;
  if ( !a1 )
  {
    v9 = WdLogNewEntry5_WdError(0LL, a2);
    *(_QWORD *)(v9 + 24) = 0LL;
LABEL_5:
    WdLogEvent5_WdError(v9);
    return 3223191554LL;
  }
  v10 = a1[337];
  if ( !v10 )
  {
    v9 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v9 + 24) = a1;
    goto LABEL_5;
  }
  v11 = *(_QWORD *)(v10 + 88);
  if ( v11 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v17, v11);
    v13 = *(_QWORD *)(v11 + 88);
    if ( v13 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v13 + 32));
      v14 = *(_QWORD *)(v11 + 88);
      v16 = v14;
      if ( v14 )
        IsTargetInTopology = DMMVIDPNTOPOLOGY::IsTargetInTopology((DMMVIDPNTOPOLOGY *)(v14 + 96), v5);
    }
    else
    {
      v16 = 0LL;
    }
    *a3 = IsTargetInTopology;
    auto_rc<DMMVIDPN const>::reset(&v16, 0LL);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v17 + 40), v15);
    return 0LL;
  }
  else
  {
    v12 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v12 + 24) = a1;
    WdLogEvent5_WdError(v12);
    return 3223192373LL;
  }
}
