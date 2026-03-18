/*
 * XREFs of ?_MonitorEventHandler@VIDPN_MGR@@SAJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0175E20
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002C20 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0005424 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0007B08 (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0007EFC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C000A4B0 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000B3EC (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?LogMonitorPlugUnplugEvent@DMMVIDEOPRESENTTARGET@@QEAAEKI@Z @ 0x1C005B99C (-LogMonitorPlugUnplugEvent@DMMVIDEOPRESENTTARGET@@QEAAEKI@Z.c)
 *     ?InvalidateCache@QDC_CACHE@@QEAAX_N@Z @ 0x1C00E1C28 (-InvalidateCache@QDC_CACHE@@QEAAX_N@Z.c)
 *     ?PowerOnOffVidPnTarget@VIDPN_MGR@@QEAAJIW4MONITOR_EVENT@@W4MONITOR_POWER_EVENT_PARAM@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0173194 (-PowerOnOffVidPnTarget@VIDPN_MGR@@QEAAJIW4MONITOR_EVENT@@W4MONITOR_POWER_EVENT_PARAM@@PEAU_DXGK_.c)
 *     _VIDPN_MGR::_MonitorEventHandler_::_2_::_AUTO_PERFTRACK::__AUTO_PERFTRACK @ 0x1C0176054 (_VIDPN_MGR--_MonitorEventHandler_--_2_--_AUTO_PERFTRACK--__AUTO_PERFTRACK.c)
 *     ?OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z @ 0x1C01950EC (-OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z.c)
 *     ?RequestAsyncMonitorEventCallout@ADAPTER_DISPLAY@@QEAAJIW4MONITOR_EVENT@@_KEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02147EC (-RequestAsyncMonitorEventCallout@ADAPTER_DISPLAY@@QEAAJIW4MONITOR_EVENT@@_KEPEAU_DXGK_DISPLAY_SC.c)
 */

__int64 __fastcall VIDPN_MGR::_MonitorEventHandler(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        unsigned int a6,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a7)
{
  __int64 v7; // r15
  __int64 v8; // rdi
  unsigned int v9; // ebx
  unsigned int v10; // r14d
  __int64 v11; // r13
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rsi
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v26; // r8
  __int64 v27; // r9
  _QWORD *v28; // rbx
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  _QWORD *v40; // r14
  unsigned int *NextTarget; // r14
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v42; // r12
  int v43; // eax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rax
  _QWORD *v48; // rax
  _QWORD *v49; // rcx
  __int64 v50; // rax
  __int64 v51; // rbx
  DMMVIDEOPRESENTTARGET *v52; // rax
  unsigned int v53; // r11d
  unsigned int v54; // [rsp+30h] [rbp-38h] BYREF
  __int64 v55; // [rsp+38h] [rbp-30h]
  unsigned __int64 v56; // [rsp+40h] [rbp-28h]
  int v57; // [rsp+48h] [rbp-20h]

  v7 = a5;
  LODWORD(v8) = 0;
  v9 = a6;
  v10 = a2;
  v11 = (int)a4;
  v54 = a4;
  v55 = a5;
  v56 = __PAIR64__(a2, a6);
  LOBYTE(v57) = 1;
  if ( a4 > 3 && a4 - 7 > 3 )
  {
    v30 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v30 + 24) = v11;
    WdLogEvent5_WdError(v30);
    LODWORD(v8) = -1073741811;
    goto LABEL_15;
  }
  if ( !a1 )
  {
    v31 = WdLogNewEntry5_WdError(0LL, a2);
    WdLogEvent5_WdError(v31);
    LODWORD(v8) = -1071775742;
    goto LABEL_15;
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)a1) )
  {
    v32 = WdLogNewEntry5_WdAssertion(v14, v13);
    WdLogEvent5_WdAssertion(v32);
  }
  v15 = *(_QWORD *)(a1 + 2696);
  if ( !v15 )
  {
    v33 = WdLogNewEntry5_WdAssertion(v14, v13);
    WdLogEvent5_WdAssertion(v33);
    v15 = *(_QWORD *)(a1 + 2696);
  }
  v16 = *(_QWORD *)(v15 + 88);
  if ( !v16 )
  {
    v34 = WdLogNewEntry5_WdError(v14, v13);
    *(_QWORD *)(v34 + 24) = a1;
    WdLogEvent5_WdError(v34);
    LODWORD(v8) = -1071774923;
    goto LABEL_15;
  }
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&a5, v16);
  v19 = (unsigned int)v11;
  if ( !(_DWORD)v11 )
    goto LABEL_18;
  if ( (_DWORD)v11 == 1 )
  {
    LODWORD(v8) = VIDPN_MGR::OnMonitorConnectionChanged(v16, v10, v18, 1LL);
    if ( !*(_DWORD *)(v16 + 480) )
      ADAPTER_DISPLAY::RequestAsyncMonitorEventCallout(*(_QWORD *)(a1 + 2696), v10, 1LL, v7, 1, a7, v54, v55, v56, v57);
    goto LABEL_14;
  }
  v20 = (unsigned int)(v11 - 2);
  if ( (_DWORD)v11 != 2 )
  {
    if ( (_DWORD)v11 == 3 )
    {
      if ( v10 == -1 )
      {
        v39 = WdLogNewEntry5_WdAssertion((unsigned int)(v11 - 3), v17);
        WdLogEvent5_WdAssertion(v39);
      }
      if ( *(_DWORD *)(v16 + 480) )
        goto LABEL_14;
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v16 + 80) + 72LL));
      v28 = *(_QWORD **)(v16 + 80);
      v29 = IndexedSet<DMMVIDEOPRESENTTARGET>::FindById((__int64)v28, v10);
      if ( v29 && *(_QWORD *)(v29 + 112) )
        ADAPTER_DISPLAY::RequestAsyncMonitorEventCallout(
          *(_QWORD *)(a1 + 2696),
          v10,
          3LL,
          v7,
          0,
          a7,
          v54,
          v55,
          v56,
          v57);
      if ( !v28 )
        goto LABEL_14;
      goto LABEL_37;
    }
    v19 = (unsigned int)(v11 - 7);
    if ( (_DWORD)v11 != 7 )
    {
      v20 = (unsigned int)(v11 - 8);
      if ( (_DWORD)v11 == 8 )
        goto LABEL_11;
      v35 = (unsigned int)(v11 - 9);
      if ( (_DWORD)v11 == 9 )
      {
        if ( v10 == -1 )
        {
          v38 = WdLogNewEntry5_WdAssertion(v35, v17);
          WdLogEvent5_WdAssertion(v38);
        }
        if ( !*(_DWORD *)(v16 + 480) )
          ADAPTER_DISPLAY::RequestAsyncMonitorEventCallout(
            *(_QWORD *)(a1 + 2696),
            v10,
            9LL,
            v7,
            0,
            a7,
            v54,
            v55,
            v56,
            v57);
        goto LABEL_14;
      }
      if ( (_DWORD)v11 != 10 )
      {
        v36 = WdLogNewEntry5_WdError(v35, v17);
        *(_QWORD *)(v36 + 24) = v11;
LABEL_45:
        WdLogEvent5_WdError(v36);
        LODWORD(v8) = -1073741811;
        goto LABEL_14;
      }
      if ( v10 == -1 )
      {
        v37 = WdLogNewEntry5_WdAssertion(v35, v17);
        WdLogEvent5_WdAssertion(v37);
      }
      LODWORD(v8) = VIDPN_MGR::OnMonitorConnectionChanged(v16, v10, v18, 10LL);
      ADAPTER_DISPLAY::RequestAsyncMonitorEventCallout(*(_QWORD *)(a1 + 2696), v10, 10LL, v7, 1, a7, v54, v55, v56, v57);
LABEL_27:
      Global = DXGGLOBAL::GetGlobal(v24, v23);
      QDC_CACHE::InvalidateCache(*((struct DXGFASTMUTEX *const **)Global + 172), 0LL, v26, v27);
      goto LABEL_14;
    }
LABEL_18:
    v22 = v10;
    if ( v10 == -1 )
    {
      if ( (_DWORD)v11 )
      {
        v47 = WdLogNewEntry5_WdAssertion(v19, v10);
        WdLogEvent5_WdAssertion(v47);
      }
      v48 = (_QWORD *)(*(_QWORD *)(v16 + 80) + 24LL);
      v49 = (_QWORD *)*v48;
      if ( (_QWORD *)*v48 == v48 || v49 == (_QWORD *)8 || (v22 = *((unsigned int *)v49 + 4), (_DWORD)v22 == -1) )
      {
        v50 = WdLogNewEntry5_WdError(v49, v22);
        *(_QWORD *)(v50 + 24) = v16;
        WdLogEvent5_WdError(v50);
        LODWORD(v8) = -1071774971;
        goto LABEL_14;
      }
    }
    LODWORD(v8) = VIDPN_MGR::OnMonitorConnectionChanged(v16, v22, v18, (unsigned int)v11);
    if ( !*(_DWORD *)(v16 + 480)
      && !(_DWORD)v11
      && !*(_BYTE *)(a1 + 2609)
      && (v7 == 1 || v7 == 4 || v7 == 3 || v7 == 2 || v7 == 5)
      && v9 - 1 <= 2 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v16 + 80) + 72LL));
      v51 = *(_QWORD *)(v16 + 80);
      v52 = (DMMVIDEOPRESENTTARGET *)IndexedSet<DMMVIDEOPRESENTTARGET>::FindById(v51, v10);
      if ( v52 && DMMVIDEOPRESENTTARGET::LogMonitorPlugUnplugEvent(v52, *(_DWORD *)(v16 + 484), *(_DWORD *)(v16 + 488)) )
      {
        v53 = 6;
        v7 = 0LL;
      }
      ADAPTER_DISPLAY::RequestAsyncMonitorEventCallout(*(_QWORD *)(a1 + 2696), v10, v53, v7, 1, a7, v54, v55, v56, v57);
      LOBYTE(v57) = 0;
      if ( v51 )
        ReferenceCounted::Release((ReferenceCounted *)(v51 + 64), v23);
    }
    goto LABEL_27;
  }
LABEL_11:
  if ( (unsigned int)v7 > 3 )
  {
    v36 = WdLogNewEntry5_WdError(v20, v17);
    *(_QWORD *)(v36 + 24) = v7;
    goto LABEL_45;
  }
  if ( *(int *)(*(_QWORD *)(*(_QWORD *)(a1 + 2696) + 16LL) + 2596LL) < 1105 && v10 == -1 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v16 + 80) + 72LL));
    v28 = *(_QWORD **)(v16 + 80);
    v40 = (_QWORD *)v28[3];
    if ( v40 != v28 + 3 )
    {
      NextTarget = (unsigned int *)(v40 - 1);
      if ( NextTarget )
      {
        v42 = a7;
        do
        {
          v43 = VIDPN_MGR::PowerOnOffVidPnTarget((VIDPN_MGR *)v16, 0xFFFFFFFFLL, v11, v7, v42);
          v8 = v43;
          if ( v43 < 0 )
          {
            v46 = WdLogNewEntry5_WdError(v45, v44);
            *(_QWORD *)(v46 + 24) = NextTarget[6];
            *(_QWORD *)(v46 + 32) = v8;
            WdLogEvent5_WdError(v46);
          }
          NextTarget = (unsigned int *)DMMVIDEOPRESENTTARGETSET::GetNextTarget(
                                         (DMMVIDEOPRESENTTARGETSET *)v28,
                                         (const struct DMMVIDEOPRESENTTARGET *const)NextTarget);
        }
        while ( NextTarget );
      }
    }
LABEL_37:
    ReferenceCounted::Release((ReferenceCounted *)(v28 + 8), v17);
    goto LABEL_14;
  }
  LODWORD(v8) = VIDPN_MGR::PowerOnOffVidPnTarget((VIDPN_MGR *)v16, v10, v11, v7, a7);
LABEL_14:
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(a5 + 40), v17);
LABEL_15:
  VIDPN_MGR::_MonitorEventHandler_::_2_::_AUTO_PERFTRACK::__AUTO_PERFTRACK(&v54);
  return (unsigned int)v8;
}
