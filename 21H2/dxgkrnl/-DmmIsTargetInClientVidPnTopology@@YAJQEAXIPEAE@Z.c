/*
 * XREFs of ?DmmIsTargetInClientVidPnTopology@@YAJQEAXIPEAE@Z @ 0x1C039C424
 * Callers:
 *     ?_DestroyAllSameTypeSimulatedMonitor@MONITOR_MGR@@QEAAJW4_DMM_VIDPN_MONITOR_TYPE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01B4D88 (-_DestroyAllSameTypeSimulatedMonitor@MONITOR_MGR@@QEAAJW4_DMM_VIDPN_MONITOR_TYPE@@EPEAU_DXGK_DIS.c)
 *     ?Initialize@VIDPNTARGETINFO@@QEAAJPEAVDXGADAPTER@@PEBVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C02EF694 (-Initialize@VIDPNTARGETINFO@@QEAAJPEAVDXGADAPTER@@PEBVDMMVIDEOPRESENTTARGET@@@Z.c)
 *     ?DisplayConfigHelperCreateSimulateMonitor@@YAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@EPEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02F0610 (-DisplayConfigHelperCreateSimulateMonitor@@YAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@EPEAEPEAU_D.c)
 *     ?HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02F20A0 (-HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C02FF2BC (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E420 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000F08C (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000F13C (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C0010C30 (-IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 */

__int64 __fastcall DmmIsTargetInClientVidPnTopology(_QWORD *a1, int a2, bool *a3)
{
  bool IsTargetInTopology; // bl
  __int64 v8; // rsi
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // [rsp+80h] [rbp+18h] BYREF
  __int64 v13; // [rsp+88h] [rbp+20h] BYREF

  IsTargetInTopology = 0;
  if ( !a3 )
  {
    WdLogSingleEntry1(2LL, 0LL);
    return 3221225485LL;
  }
  *a3 = 0;
  if ( !a1 )
  {
    WdLogSingleEntry1(2LL, 0LL);
    return 3223191554LL;
  }
  v8 = a1[349];
  if ( !v8 )
  {
    WdLogSingleEntry1(2LL, a1);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Caller specified adapter handle 0x%I64x is a render only adapter.",
      (__int64)a1,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3223191554LL;
  }
  v9 = *(_QWORD *)(v8 + 104);
  if ( v9 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v13, v9);
    v10 = *(_QWORD *)(v9 + 128);
    if ( v10 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v10 + 32));
      v11 = *(_QWORD *)(v9 + 128);
      v12 = v11;
      if ( v11 )
        IsTargetInTopology = DMMVIDPNTOPOLOGY::IsTargetInTopology((DMMVIDPNTOPOLOGY *)(v11 + 96), a2);
    }
    else
    {
      v12 = 0LL;
    }
    *a3 = IsTargetInTopology;
    auto_rc<DMMVIDPN const>::reset(&v12, 0LL);
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v13 + 40));
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(2LL, a1);
    return 3223192373LL;
  }
}
