/*
 * XREFs of ?DmmIsTargetForceable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C02D96B8
 * Callers:
 *     ?_CreateBootPersistentMonitors@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0168598 (-_CreateBootPersistentMonitors@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     MonitorCreatePhysicalMonitor @ 0x1C016C7D4 (MonitorCreatePhysicalMonitor.c)
 *     ?DisplayConfigHelperCreateSimulateMonitor@@YAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@EPEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0291010 (-DisplayConfigHelperCreateSimulateMonitor@@YAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@EPEAEPEAU_D.c)
 *     DxgkHandleForceProjectionMonitor @ 0x1C0293330 (DxgkHandleForceProjectionMonitor.c)
 *     ?_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z @ 0x1C02E9D90 (-_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z.c)
 *     MonitorCreateSimulatedMonitor @ 0x1C02EE8F4 (MonitorCreateSimulatedMonitor.c)
 *     MonitorRemovePhysicalMonitor @ 0x1C02EF9B4 (MonitorRemovePhysicalMonitor.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000A6B4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000BDF4 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000C5B8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000CEC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C000F360 (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?IsTargetForceable@DMMVIDEOPRESENTTARGET@@QEBAEXZ @ 0x1C00ED80C (-IsTargetForceable@DMMVIDEOPRESENTTARGET@@QEBAEXZ.c)
 */

__int64 __fastcall DmmIsTargetForceable(DXGADAPTER *a1, __int64 a2, bool *a3, int a4)
{
  __int64 v4; // rbp
  __int64 v8; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rbx
  DMMVIDEOPRESENTTARGET *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rsi
  __int64 v24; // rax
  __int64 v25; // rax
  unsigned int v26; // edi
  bool IsTargetForceable; // al
  __int64 v28; // [rsp+40h] [rbp+8h] BYREF

  v4 = (unsigned int)a2;
  *a3 = 0;
  if ( !a1 )
  {
    v8 = WdLogNewEntry5_WdError(0LL, a2);
    *(_QWORD *)(v8 + 24) = 0LL;
LABEL_3:
    WdLogEvent5_WdError(v8);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v11, v10);
    WdLogEvent5_WdAssertion(v12);
  }
  v13 = *((_QWORD *)a1 + 334);
  if ( !v13 )
  {
    v8 = WdLogNewEntry5_WdError(v11, v10);
    *(_QWORD *)(v8 + 24) = a1;
    goto LABEL_3;
  }
  v14 = *(_QWORD *)(v13 + 88);
  if ( v14 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v28, v14);
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v14 + 80) + 72LL));
    v16 = *(_QWORD *)(v14 + 80);
    v17 = (DMMVIDEOPRESENTTARGET *)IndexedSet<DMMVIDEOPRESENTTARGET>::FindById(v16, v4);
    if ( v17 )
    {
      if ( a4 == 5 )
        IsTargetForceable = *((_QWORD *)v17 + 14) == 0LL;
      else
        IsTargetForceable = DMMVIDEOPRESENTTARGET::IsTargetForceable(v17, v18);
      *a3 = IsTargetForceable;
      v26 = 0;
    }
    else
    {
      v23 = WdLogNewEntry5_WdWarning(v19, v18, v20);
      *(_QWORD *)(v23 + 24) = v4;
      v24 = *(_QWORD *)(v14 + 8);
      if ( !v24 )
      {
        v25 = WdLogNewEntry5_WdAssertion(v22, v21);
        WdLogEvent5_WdAssertion(v25);
        v24 = *(_QWORD *)(v14 + 8);
      }
      *(_QWORD *)(v23 + 32) = *(_QWORD *)(v24 + 16);
      WdLogEvent5_WdWarning(v23);
      v26 = -1071774971;
    }
    if ( v16 )
      ReferenceCounted::Release((ReferenceCounted *)(v16 + 64), v18);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v28 + 40), v18);
    return v26;
  }
  else
  {
    v15 = WdLogNewEntry5_WdError(v11, v10);
    *(_QWORD *)(v15 + 24) = a1;
    WdLogEvent5_WdError(v15);
    return 3223192373LL;
  }
}
