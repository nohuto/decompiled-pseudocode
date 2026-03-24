/*
 * XREFs of ?_MonitorEventHandler@VIDPN_MGR@@SAJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C017A940
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00041C0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C00055D4 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0007DB8 (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00081AC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C000A800 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000B73C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??1?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@XZ @ 0x1C0027E64 (--1-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@XZ.c)
 *     ?LogMonitorPlugUnplugEvent@DMMVIDEOPRESENTTARGET@@QEAAEKI@Z @ 0x1C005C7EC (-LogMonitorPlugUnplugEvent@DMMVIDEOPRESENTTARGET@@QEAAEKI@Z.c)
 *     ?InvalidateCache@QDC_CACHE@@QEAAX_N@Z @ 0x1C00E2438 (-InvalidateCache@QDC_CACHE@@QEAAX_N@Z.c)
 *     _VIDPN_MGR::_MonitorEventHandler_::_2_::_AUTO_PERFTRACK::__AUTO_PERFTRACK @ 0x1C016EF88 (_VIDPN_MGR--_MonitorEventHandler_--_2_--_AUTO_PERFTRACK--__AUTO_PERFTRACK.c)
 *     ?PowerOnOffVidPnTarget@VIDPN_MGR@@QEAAJIW4MONITOR_EVENT@@W4MONITOR_POWER_EVENT_PARAM@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0177A7C (-PowerOnOffVidPnTarget@VIDPN_MGR@@QEAAJIW4MONITOR_EVENT@@W4MONITOR_POWER_EVENT_PARAM@@PEAU_DXGK_.c)
 *     ?OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z @ 0x1C019C068 (-OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z.c)
 *     ?RequestAsyncMonitorEventCallout@ADAPTER_DISPLAY@@QEAAJIW4MONITOR_EVENT@@_KEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C021451C (-RequestAsyncMonitorEventCallout@ADAPTER_DISPLAY@@QEAAJIW4MONITOR_EVENT@@_KEPEAU_DXGK_DISPLAY_SC.c)
 */

__int64 __fastcall VIDPN_MGR::_MonitorEventHandler(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        unsigned int a6,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a7)
{
  __int64 v7; // r15
  __int64 v8; // r14
  unsigned int v9; // ebx
  unsigned int v10; // ebp
  __int64 v11; // r12
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rax
  _QWORD *v35; // rbx
  __int64 v36; // rax
  _QWORD *v37; // rbp
  unsigned int *NextTarget; // rbp
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v39; // r13
  int v40; // eax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rax
  _QWORD *v46; // rax
  _QWORD *v47; // rcx
  __int64 v48; // rax
  __int64 v49; // rbx
  DMMVIDEOPRESENTTARGET *v50; // rax
  unsigned int v51; // r11d
  struct DXGGLOBAL *Global; // rax
  __int64 v53; // r8
  __int64 v54; // r9
  int v56; // [rsp+30h] [rbp-38h] BYREF
  __int64 v57; // [rsp+38h] [rbp-30h]
  unsigned __int64 v58; // [rsp+40h] [rbp-28h]
  int v59; // [rsp+48h] [rbp-20h]

  v7 = a5;
  LODWORD(v8) = 0;
  v9 = a6;
  v10 = a2;
  v11 = a4;
  v56 = a4;
  v57 = a5;
  v58 = __PAIR64__(a2, a6);
  LOBYTE(v59) = 1;
  if ( a1 )
  {
    if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)a1) )
    {
      v18 = WdLogNewEntry5_WdAssertion(v17, v16);
      WdLogEvent5_WdAssertion(v18);
    }
    v19 = *(_QWORD *)(a1 + 2696);
    if ( !v19 )
    {
      v20 = WdLogNewEntry5_WdAssertion(v17, v16);
      WdLogEvent5_WdAssertion(v20);
      v19 = *(_QWORD *)(a1 + 2696);
    }
    v21 = *(_QWORD *)(v19 + 88);
    if ( !v21 )
    {
      v22 = WdLogNewEntry5_WdError(v17, v16);
      *(_QWORD *)(v22 + 24) = a1;
      WdLogEvent5_WdError(v22);
      LODWORD(v8) = -1071774923;
      goto LABEL_75;
    }
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&a5, v21);
    v25 = (unsigned int)v11;
    if ( (_DWORD)v11 )
    {
      if ( (_DWORD)v11 == 1 )
      {
        LODWORD(v8) = VIDPN_MGR::OnMonitorConnectionChanged(v21, v10, v24, 1LL);
        if ( !*(_DWORD *)(v21 + 480) )
          ADAPTER_DISPLAY::RequestAsyncMonitorEventCallout(
            *(_QWORD *)(a1 + 2696),
            v10,
            1LL,
            v7,
            1,
            a7,
            v56,
            v57,
            v58,
            v59);
        goto LABEL_74;
      }
      v26 = (unsigned int)(v11 - 2);
      if ( (_DWORD)v11 == 2 )
      {
LABEL_38:
        if ( (unsigned int)v7 > 3 )
        {
          v28 = WdLogNewEntry5_WdError(v26, v23);
          *(_QWORD *)(v28 + 24) = v7;
LABEL_19:
          WdLogEvent5_WdError(v28);
          LODWORD(v8) = -1073741811;
LABEL_74:
          EXCLUSIVEACCESS<VIDPN_MGR>::~EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&a5, v23);
          goto LABEL_75;
        }
        if ( *(int *)(*(_QWORD *)(*(_QWORD *)(a1 + 2696) + 16LL) + 2596LL) >= 1105 || v10 != -1 )
        {
          LODWORD(v8) = VIDPN_MGR::PowerOnOffVidPnTarget((VIDPN_MGR *)v21, v10, v11, v7, a7);
          goto LABEL_74;
        }
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v21 + 80) + 72LL));
        v35 = *(_QWORD **)(v21 + 80);
        v37 = (_QWORD *)v35[3];
        if ( v37 != v35 + 3 )
        {
          NextTarget = (unsigned int *)(v37 - 1);
          if ( NextTarget )
          {
            v39 = a7;
            do
            {
              v40 = VIDPN_MGR::PowerOnOffVidPnTarget((VIDPN_MGR *)v21, 0xFFFFFFFFLL, v11, v7, v39);
              v8 = v40;
              if ( v40 < 0 )
              {
                v43 = WdLogNewEntry5_WdError(v42, v41);
                *(_QWORD *)(v43 + 24) = NextTarget[6];
                *(_QWORD *)(v43 + 32) = v8;
                WdLogEvent5_WdError(v43);
              }
              NextTarget = (unsigned int *)DMMVIDEOPRESENTTARGETSET::GetNextTarget(
                                             (DMMVIDEOPRESENTTARGETSET *)v35,
                                             (const struct DMMVIDEOPRESENTTARGET *const)NextTarget);
            }
            while ( NextTarget );
          }
        }
LABEL_37:
        ReferenceCounted::Release((ReferenceCounted *)(v35 + 8), v23);
        goto LABEL_74;
      }
      if ( (_DWORD)v11 == 3 )
      {
        if ( v10 == -1 )
        {
          v34 = WdLogNewEntry5_WdAssertion((unsigned int)(v11 - 3), v23);
          WdLogEvent5_WdAssertion(v34);
        }
        if ( *(_DWORD *)(v21 + 480) )
          goto LABEL_74;
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v21 + 80) + 72LL));
        v35 = *(_QWORD **)(v21 + 80);
        v36 = IndexedSet<DMMVIDEOPRESENTTARGET>::FindById((__int64)v35, v10);
        if ( v36 && *(_QWORD *)(v36 + 112) )
          ADAPTER_DISPLAY::RequestAsyncMonitorEventCallout(
            *(_QWORD *)(a1 + 2696),
            v10,
            3LL,
            v7,
            0,
            a7,
            v56,
            v57,
            v58,
            v59);
        if ( !v35 )
          goto LABEL_74;
        goto LABEL_37;
      }
      v25 = (unsigned int)(v11 - 7);
      if ( (_DWORD)v11 != 7 )
      {
        v26 = (unsigned int)(v11 - 8);
        if ( (_DWORD)v11 != 8 )
        {
          if ( (_DWORD)v11 == 9 )
          {
            if ( v10 == -1 )
            {
              v33 = WdLogNewEntry5_WdAssertion((unsigned int)(v11 - 9), v23);
              WdLogEvent5_WdAssertion(v33);
            }
            if ( !*(_DWORD *)(v21 + 480) )
              ADAPTER_DISPLAY::RequestAsyncMonitorEventCallout(
                *(_QWORD *)(a1 + 2696),
                v10,
                9LL,
                v7,
                0,
                a7,
                v56,
                v57,
                v58,
                v59);
            goto LABEL_74;
          }
          v27 = (unsigned int)(v11 - 10);
          if ( (_DWORD)v11 != 10 )
          {
            if ( (_DWORD)v11 == 11 )
            {
              if ( v10 == -1 )
              {
                v29 = WdLogNewEntry5_WdAssertion(v27, v23);
                WdLogEvent5_WdAssertion(v29);
              }
              ADAPTER_DISPLAY::RequestAsyncMonitorEventCallout(
                *(_QWORD *)(a1 + 2696),
                v10,
                11LL,
                v7,
                0,
                a7,
                v56,
                v57,
                v58,
                v59);
              goto LABEL_74;
            }
            v28 = WdLogNewEntry5_WdError(v27, v23);
            *(_QWORD *)(v28 + 24) = v11;
            goto LABEL_19;
          }
          if ( v10 == -1 )
          {
            v30 = WdLogNewEntry5_WdAssertion(v27, v23);
            WdLogEvent5_WdAssertion(v30);
          }
          LODWORD(v8) = VIDPN_MGR::OnMonitorConnectionChanged(v21, v10, v24, 10LL);
          ADAPTER_DISPLAY::RequestAsyncMonitorEventCallout(
            *(_QWORD *)(a1 + 2696),
            v10,
            10LL,
            v7,
            1,
            a7,
            v56,
            v57,
            v58,
            v59);
LABEL_73:
          Global = DXGGLOBAL::GetGlobal(v32, v31);
          QDC_CACHE::InvalidateCache(*((struct DXGFASTMUTEX *const **)Global + 172), 0LL, v53, v54);
          goto LABEL_74;
        }
        goto LABEL_38;
      }
    }
    v44 = v10;
    if ( v10 == -1 )
    {
      if ( (_DWORD)v11 )
      {
        v45 = WdLogNewEntry5_WdAssertion(v25, v10);
        WdLogEvent5_WdAssertion(v45);
      }
      v46 = (_QWORD *)(*(_QWORD *)(v21 + 80) + 24LL);
      v47 = (_QWORD *)*v46;
      if ( (_QWORD *)*v46 == v46 || v47 == (_QWORD *)8 || (v44 = *((unsigned int *)v47 + 4), (_DWORD)v44 == -1) )
      {
        v48 = WdLogNewEntry5_WdError(v47, v44);
        *(_QWORD *)(v48 + 24) = v21;
        WdLogEvent5_WdError(v48);
        LODWORD(v8) = -1071774971;
        goto LABEL_74;
      }
    }
    LODWORD(v8) = VIDPN_MGR::OnMonitorConnectionChanged(v21, v44, v24, (unsigned int)v11);
    if ( !*(_DWORD *)(v21 + 480)
      && !(_DWORD)v11
      && !*(_BYTE *)(a1 + 2609)
      && (v7 == 1 || v7 == 4 || v7 == 3 || v7 == 2 || v7 == 5)
      && v9 - 1 <= 2 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v21 + 80) + 72LL));
      v49 = *(_QWORD *)(v21 + 80);
      v50 = (DMMVIDEOPRESENTTARGET *)IndexedSet<DMMVIDEOPRESENTTARGET>::FindById(v49, v10);
      if ( v50 && DMMVIDEOPRESENTTARGET::LogMonitorPlugUnplugEvent(v50, *(_DWORD *)(v21 + 484), *(_DWORD *)(v21 + 488)) )
      {
        v51 = 6;
        v7 = 0LL;
      }
      ADAPTER_DISPLAY::RequestAsyncMonitorEventCallout(*(_QWORD *)(a1 + 2696), v10, v51, v7, 1, a7, v56, v57, v58, v59);
      LOBYTE(v59) = 0;
      if ( v49 )
        ReferenceCounted::Release((ReferenceCounted *)(v49 + 64), v31);
    }
    goto LABEL_73;
  }
  v13 = WdLogNewEntry5_WdError(0LL, a2);
  WdLogEvent5_WdError(v13);
  LODWORD(v8) = -1071775742;
LABEL_75:
  VIDPN_MGR::_MonitorEventHandler_::_2_::_AUTO_PERFTRACK::__AUTO_PERFTRACK((__int64)&v56, v14, v15);
  return (unsigned int)v8;
}
