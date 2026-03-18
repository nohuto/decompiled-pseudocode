/*
 * XREFs of ?DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z @ 0x1C0120E00
 * Callers:
 *     ??ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z @ 0x1C011C600 (--ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z.c)
 *     DpiGdoDispatchInternalIoctl @ 0x1C011D760 (DpiGdoDispatchInternalIoctl.c)
 *     DxgkGetAllMonitorDevicesFromSessionView @ 0x1C011DCFC (DxgkGetAllMonitorDevicesFromSessionView.c)
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C0140C40 (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION.c)
 *     DxgkIsVirtualizationDisabledForTarget @ 0x1C0144A50 (DxgkIsVirtualizationDisabledForTarget.c)
 *     ?CompleteTopologyTransitionCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C015B670 (-CompleteTopologyTransitionCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     DpiPdoDispatchInternalIoctl @ 0x1C01630D0 (DpiPdoDispatchInternalIoctl.c)
 *     ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0185C9C (-_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEA.c)
 *     ??ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x1C025A820 (--ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z.c)
 *     ?UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C02AEA58 (-UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z.c)
 *     ?_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02F08F4 (-_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002C20 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0005424 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0007B08 (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0007EFC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 */

__int64 __fastcall DmmGetVideoOutputTechnology(
        _QWORD *a1,
        __int64 a2,
        enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *a3,
        enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *a4)
{
  __int64 v4; // r14
  __int64 v8; // rax
  __int64 v9; // rbp
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned int v14; // edi
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // [rsp+40h] [rbp+8h] BYREF

  v4 = (unsigned int)a2;
  if ( a3 )
    *a3 = D3DKMDT_VOT_UNINITIALIZED;
  if ( a4 )
    *a4 = D3DKMDT_VOT_UNINITIALIZED;
  if ( !a1 )
  {
    v16 = WdLogNewEntry5_WdError(0LL, a2);
    *(_QWORD *)(v16 + 24) = 0LL;
LABEL_19:
    WdLogEvent5_WdError(v16);
    return 3223191554LL;
  }
  v8 = a1[337];
  if ( !v8 )
  {
    v16 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v16 + 24) = a1;
    goto LABEL_19;
  }
  v9 = *(_QWORD *)(v8 + 88);
  if ( v9 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v19, *(_QWORD *)(v8 + 88));
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v9 + 80) + 72LL));
    v10 = *(_QWORD *)(v9 + 80);
    v11 = IndexedSet<DMMVIDEOPRESENTTARGET>::FindById(v10, v4);
    if ( v11 )
    {
      if ( a3 )
        *a3 = *(enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)(v11 + 80);
      if ( a4 )
        *a4 = *(enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)(v11 + 84);
      v14 = 0;
    }
    else
    {
      v18 = WdLogNewEntry5_WdError(v13, v12);
      *(_QWORD *)(v18 + 24) = v4;
      WdLogEvent5_WdError(v18);
      v14 = -1071774971;
    }
    if ( v10 )
      ReferenceCounted::Release((ReferenceCounted *)(v10 + 64), v12);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v19 + 40), v12);
    return v14;
  }
  else
  {
    v17 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v17 + 24) = a1;
    WdLogEvent5_WdError(v17);
    return 3223192373LL;
  }
}
