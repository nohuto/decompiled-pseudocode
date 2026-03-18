/*
 * XREFs of ?_MonitorEventHandler@VIDPN_MGR@@SAJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01F3C90
 * Callers:
 *     <none>
 * Callees:
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000D514 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E420 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C000F0FC (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000F13C (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C0012B30 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00131F8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?LogMonitorPlugUnplugEvent@DMMVIDEOPRESENTTARGET@@QEAAEKI@Z @ 0x1C00695E8 (-LogMonitorPlugUnplugEvent@DMMVIDEOPRESENTTARGET@@QEAAEKI@Z.c)
 *     ?InvalidateCache@QDC_CACHE@@QEAAX_N@Z @ 0x1C01C02FC (-InvalidateCache@QDC_CACHE@@QEAAX_N@Z.c)
 *     ?PowerOnOffVidPnTarget@VIDPN_MGR@@QEAAJIW4MONITOR_EVENT@@W4MONITOR_POWER_EVENT_PARAM@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01F1820 (-PowerOnOffVidPnTarget@VIDPN_MGR@@QEAAJIW4MONITOR_EVENT@@W4MONITOR_POWER_EVENT_PARAM@@PEAU_DXGK_.c)
 *     _VIDPN_MGR::_MonitorEventHandler_::_2_::_AUTO_PERFTRACK::__AUTO_PERFTRACK @ 0x1C01F3EC4 (_VIDPN_MGR--_MonitorEventHandler_--_2_--_AUTO_PERFTRACK--__AUTO_PERFTRACK.c)
 *     ?OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z @ 0x1C0216DB4 (-OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z.c)
 *     ?RequestAsyncMonitorEventCallout@ADAPTER_DISPLAY@@QEAAJIW4MONITOR_EVENT@@_KEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02C2338 (-RequestAsyncMonitorEventCallout@ADAPTER_DISPLAY@@QEAAJIW4MONITOR_EVENT@@_KEPEAU_DXGK_DISPLAY_SC.c)
 */

__int64 __fastcall VIDPN_MGR::_MonitorEventHandler(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        signed int a4,
        __int64 a5,
        unsigned int a6,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a7)
{
  __int64 v7; // r15
  unsigned int v8; // edi
  unsigned int v9; // ebx
  __int64 v11; // r13
  __int64 v13; // rsi
  __int64 v14; // rsi
  __int64 v15; // r8
  unsigned int v16; // eax
  __int64 v18; // rdx
  struct DXGGLOBAL *Global; // rax
  _QWORD *v20; // rbx
  __int64 v21; // rax
  _QWORD *v22; // r14
  unsigned int *NextTarget; // r14
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v24; // r12
  int v25; // eax
  _QWORD *v26; // rax
  _QWORD *v27; // rcx
  __int64 v28; // rbx
  DMMVIDEOPRESENTTARGET *v29; // rax
  unsigned int v30; // r11d
  signed int v31; // [rsp+30h] [rbp-38h] BYREF
  __int64 v32; // [rsp+38h] [rbp-30h]
  unsigned __int64 v33; // [rsp+40h] [rbp-28h]
  int v34; // [rsp+48h] [rbp-20h]

  v7 = a5;
  v8 = 0;
  v9 = a6;
  v11 = a4;
  v31 = a4;
  v32 = a5;
  v33 = __PAIR64__(a2, a6);
  LOBYTE(v34) = 1;
  if ( (unsigned int)a4 > 3 && (unsigned int)(a4 - 7) > 4 )
  {
    WdLogSingleEntry1(2LL, a4);
    v8 = -1073741811;
    goto LABEL_16;
  }
  if ( !a1 )
  {
    WdLogSingleEntry0(2LL);
    v8 = -1071775742;
    goto LABEL_16;
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)a1) )
    WdLogSingleEntry0(1LL);
  v13 = *(_QWORD *)(a1 + 2792);
  if ( !v13 )
  {
    WdLogSingleEntry0(1LL);
    v13 = *(_QWORD *)(a1 + 2792);
  }
  v14 = *(_QWORD *)(v13 + 104);
  if ( !v14 )
  {
    WdLogSingleEntry1(2LL, a1);
    v8 = -1071774923;
    goto LABEL_16;
  }
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&a5, v14);
  switch ( (_DWORD)v11 )
  {
    case 0:
      goto LABEL_19;
    case 1:
      v8 = VIDPN_MGR::OnMonitorConnectionChanged(v14, a2, v15, 1LL);
      if ( !*(_DWORD *)(v14 + 536) )
        ADAPTER_DISPLAY::RequestAsyncMonitorEventCallout(*(_QWORD *)(a1 + 2792), a2, 1LL, v7, 1, a7, v31, v32, v33, v34);
      goto LABEL_15;
    case 2:
      goto LABEL_11;
    case 3:
      if ( a2 == -1 )
        WdLogSingleEntry0(1LL);
      if ( *(_DWORD *)(v14 + 536) )
        goto LABEL_15;
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v14 + 120) + 72LL));
      v20 = *(_QWORD **)(v14 + 120);
      v21 = IndexedSet<DMMVIDEOPRESENTTARGET>::FindById((__int64)v20, a2);
      if ( v21 && *(_QWORD *)(v21 + 112) )
        ADAPTER_DISPLAY::RequestAsyncMonitorEventCallout(*(_QWORD *)(a1 + 2792), a2, 3LL, v7, 0, a7, v31, v32, v33, v34);
      if ( !v20 )
        goto LABEL_15;
      goto LABEL_38;
    case 7:
LABEL_19:
      v18 = a2;
      if ( a2 == -1 )
      {
        if ( (_DWORD)v11 )
          WdLogSingleEntry0(1LL);
        v26 = (_QWORD *)(*(_QWORD *)(v14 + 120) + 24LL);
        v27 = (_QWORD *)*v26;
        if ( (_QWORD *)*v26 == v26 || v27 == (_QWORD *)8 || (v18 = *((unsigned int *)v27 + 4), (_DWORD)v18 == -1) )
        {
          WdLogSingleEntry1(2LL, v14);
          v8 = -1071774971;
          goto LABEL_15;
        }
      }
      v8 = VIDPN_MGR::OnMonitorConnectionChanged(v14, v18, v15, (unsigned int)v11);
      if ( !*(_DWORD *)(v14 + 536)
        && !(_DWORD)v11
        && !*(_BYTE *)(a1 + 2705)
        && (v7 == 1 || v7 == 4 || v7 == 3 || v7 == 2 || v7 == 5)
        && v9 - 1 <= 2 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v14 + 120) + 72LL));
        v28 = *(_QWORD *)(v14 + 120);
        v29 = (DMMVIDEOPRESENTTARGET *)IndexedSet<DMMVIDEOPRESENTTARGET>::FindById(v28, a2);
        if ( v29
          && DMMVIDEOPRESENTTARGET::LogMonitorPlugUnplugEvent(v29, *(_DWORD *)(v14 + 540), *(_DWORD *)(v14 + 544)) )
        {
          v30 = 6;
          v7 = 0LL;
        }
        ADAPTER_DISPLAY::RequestAsyncMonitorEventCallout(*(_QWORD *)(a1 + 2792), a2, v30, v7, 1, a7, v31, v32, v33, v34);
        LOBYTE(v34) = 0;
        if ( v28 )
          ReferenceCounted::Release((ReferenceCounted *)(v28 + 64));
      }
      goto LABEL_28;
    case 8:
LABEL_11:
      if ( (unsigned int)v7 <= 3 )
      {
        if ( *(int *)(*(_QWORD *)(*(_QWORD *)(a1 + 2792) + 16LL) + 2692LL) < 1105 && a2 == -1 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v14 + 120) + 72LL));
          v20 = *(_QWORD **)(v14 + 120);
          v22 = (_QWORD *)v20[3];
          if ( v22 != v20 + 3 )
          {
            NextTarget = (unsigned int *)(v22 - 1);
            if ( NextTarget )
            {
              v24 = a7;
              do
              {
                v25 = VIDPN_MGR::PowerOnOffVidPnTarget(v14, 0xFFFFFFFF, v11, v7, v24);
                v8 = v25;
                if ( v25 < 0 )
                  WdLogSingleEntry2(2LL, NextTarget[6], v25);
                NextTarget = (unsigned int *)DMMVIDEOPRESENTTARGETSET::GetNextTarget(
                                               (DMMVIDEOPRESENTTARGETSET *)v20,
                                               (const struct DMMVIDEOPRESENTTARGET *const)NextTarget);
              }
              while ( NextTarget );
            }
          }
LABEL_38:
          ReferenceCounted::Release((ReferenceCounted *)(v20 + 8));
          goto LABEL_15;
        }
        v16 = VIDPN_MGR::PowerOnOffVidPnTarget(v14, a2, v11, v7, a7);
        goto LABEL_14;
      }
      WdLogSingleEntry1(2LL, v7);
LABEL_47:
      v8 = -1073741811;
      goto LABEL_15;
    case 9:
      if ( a2 == -1 )
        WdLogSingleEntry0(1LL);
      if ( !*(_DWORD *)(v14 + 536) )
        ADAPTER_DISPLAY::RequestAsyncMonitorEventCallout(*(_QWORD *)(a1 + 2792), a2, 9LL, v7, 0, a7, v31, v32, v33, v34);
      goto LABEL_15;
    case 0xA:
      if ( a2 == -1 )
        WdLogSingleEntry0(1LL);
      v8 = VIDPN_MGR::OnMonitorConnectionChanged(v14, a2, v15, 10LL);
      ADAPTER_DISPLAY::RequestAsyncMonitorEventCallout(*(_QWORD *)(a1 + 2792), a2, 10LL, v7, 1, a7, v31, v32, v33, v34);
LABEL_28:
      Global = DXGGLOBAL_GetGlobal();
      QDC_CACHE::InvalidateCache(*((QDC_CACHE **)Global + 191), 0LL);
      goto LABEL_15;
  }
  if ( (_DWORD)v11 != 11 )
  {
    WdLogSingleEntry1(2LL, v11);
    goto LABEL_47;
  }
  if ( a2 == -1 )
    WdLogSingleEntry0(1LL);
  v16 = VIDPN_MGR::OnMonitorConnectionChanged(v14, a2, v15, 11LL);
LABEL_14:
  v8 = v16;
LABEL_15:
  DXGFASTMUTEX::Release((struct _KTHREAD **)(a5 + 40));
LABEL_16:
  VIDPN_MGR::_MonitorEventHandler_::_2_::_AUTO_PERFTRACK::__AUTO_PERFTRACK(&v31);
  return v8;
}
