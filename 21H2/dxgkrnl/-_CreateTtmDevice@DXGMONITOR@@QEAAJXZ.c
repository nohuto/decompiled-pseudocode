/*
 * XREFs of ?_CreateTtmDevice@DXGMONITOR@@QEAAJXZ @ 0x1C020B6F8
 * Callers:
 *     ?_DestroyAllSameTypeSimulatedMonitor@MONITOR_MGR@@QEAAJW4_DMM_VIDPN_MONITOR_TYPE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01B4D88 (-_DestroyAllSameTypeSimulatedMonitor@MONITOR_MGR@@QEAAJW4_DMM_VIDPN_MONITOR_TYPE@@EPEAU_DXGK_DIS.c)
 *     ?_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIPEAVDXGMONITOR@@0PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0207AD0 (-_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIPEAVDXGMONITOR@@0PEAU_DXGK_DISPLAY_SCENARIO_CONTEX.c)
 *     ?OnUsageUpdated@DXGMONITOR@@QEAAXAEAVIMonitorDeferredEventSource@DxgMonitor@@_N@Z @ 0x1C020B690 (-OnUsageUpdated@DXGMONITOR@@QEAAXAEAVIMonitorDeferredEventSource@DxgMonitor@@_N@Z.c)
 *     ?_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C03B3D18 (-_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEA.c)
 *     ?_HandleRemoveSimulatedMonitor@MONITOR_MGR@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C03B42F0 (-_HandleRemoveSimulatedMonitor@MONITOR_MGR@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     ?GetCCDMonitorID@DXGMONITOR@@UEBAJ_NKPEAG@Z @ 0x1C01B02B0 (-GetCCDMonitorID@DXGMONITOR@@UEBAJ_NKPEAG@Z.c)
 *     ?CreateTtmDevice@DXGSESSIONMGR@@QEAAJW4TTM_DEVICE_TYPE@@PEAU_DEVICE_OBJECT@@PEAVDXGADAPTER@@IKPEBGPEAPEAX@Z @ 0x1C020B8AC (-CreateTtmDevice@DXGSESSIONMGR@@QEAAJW4TTM_DEVICE_TYPE@@PEAU_DEVICE_OBJECT@@PEAVDXGADAPTER@@IKPE.c)
 */

__int64 __fastcall DXGMONITOR::_CreateTtmDevice(DXGMONITOR *this, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int16 *v5; // rax
  unsigned __int16 *v6; // rbx
  __int64 v7; // rax
  unsigned __int64 v8; // r8
  unsigned __int16 v9; // cx
  __int64 v10; // r9
  __int64 v11; // rcx
  unsigned __int16 *v12; // rdx
  __int64 v13; // r9
  unsigned __int16 *v14; // rax
  __int64 v15; // rdi
  __int64 v16; // r11
  int TtmDevice; // eax
  __int64 v19; // rax
  int CCDMonitorID; // eax
  __int64 v21; // rdx

  if ( *(_DWORD *)(*((_QWORD *)this + 30) + 16LL) )
  {
    v19 = WdLogNewEntry5_WdTrace(this, a2);
    *(_QWORD *)(v19 + 24) = this;
    *(_QWORD *)(v19 + 32) = -1073741637LL;
    return 3221225659LL;
  }
  else
  {
    if ( !*((_QWORD *)this + 56) )
    {
      v5 = (unsigned __int16 *)operator new[](0x208uLL, 0x4D677844u, 256LL, a4);
      v6 = v5;
      if ( v5 )
      {
        if ( !MONITOR_MGR::_UsingCCDNameForTTM )
        {
          v7 = *((_QWORD *)this + 25);
          v8 = *(unsigned __int16 *)(v7 + 48);
          if ( (v8 & 1) != 0
            || (v9 = *(_WORD *)(v7 + 50), (v9 & 1) != 0)
            || (unsigned __int16)v8 > v9
            || v9 == 0xFFFF
            || (v10 = *(_QWORD *)(v7 + 56)) == 0 && ((_WORD)v8 || v9) )
          {
            LODWORD(v15) = -1073741811;
            *v6 = 0;
LABEL_29:
            v21 = (int)v15;
LABEL_33:
            WdLogSingleEntry1(2LL, v21);
            goto LABEL_20;
          }
          v11 = 260LL;
          v12 = v6;
          v13 = v10 - (_QWORD)v6;
          do
          {
            if ( !(v11 + (v8 >> 1) - 260) )
              break;
            *v12 = *(unsigned __int16 *)((char *)v12 + v13);
            ++v12;
            --v11;
          }
          while ( v11 );
          v14 = v12 - 1;
          if ( v11 )
            v14 = v12;
          *v14 = 0;
          LODWORD(v15) = v11 == 0 ? 0x80000005 : 0;
          if ( !v11 )
            goto LABEL_29;
LABEL_16:
          v16 = *((_QWORD *)DXGGLOBAL_GetGlobal() + 122);
          TtmDevice = DXGSESSIONMGR::CreateTtmDevice(
                        v16,
                        (*((unsigned __int8 *)this + 176) >> 1) & 1 | (*((_DWORD *)this + 78) != 1 ? 2 : 0),
                        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 21) + 24LL) + 16LL) + 216LL));
          LODWORD(v15) = TtmDevice;
          if ( TtmDevice >= 0 )
          {
            LODWORD(v15) = 0;
LABEL_18:
            operator delete[](v6);
            return (unsigned int)v15;
          }
          WdLogSingleEntry3(2LL, this, *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 21) + 24LL) + 16LL), TtmDevice);
LABEL_20:
          if ( !v6 )
            return (unsigned int)v15;
          goto LABEL_18;
        }
        CCDMonitorID = DXGMONITOR::GetCCDMonitorID(this, 1u, 260, v5);
        v15 = CCDMonitorID;
        if ( CCDMonitorID >= 0 )
          goto LABEL_16;
      }
      else
      {
        v15 = -1073741801LL;
      }
      v21 = v15;
      goto LABEL_33;
    }
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2) + 24) = this;
    return 0LL;
  }
}
