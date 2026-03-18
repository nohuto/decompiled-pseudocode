/*
 * XREFs of ?DisplayConfigCountMonitorsCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C0134E40
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002C20 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0005424 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00072C8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C00073A8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0007EFC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009A9C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C000A4B0 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     MonitorGetMonitorType @ 0x1C01284A8 (MonitorGetMonitorType.c)
 *     ?DmmGetEmergentSimulatedTarget@@YAJQEAXPEAI@Z @ 0x1C0135010 (-DmmGetEmergentSimulatedTarget@@YAJQEAXPEAI@Z.c)
 *     ?UpdateEmergencyMonitorContext@MONITORSCOUNT_CALLBACK_CONTEXT@@QEAAJPEAVDXGADAPTER@@IW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C015FCCC (-UpdateEmergencyMonitorContext@MONITORSCOUNT_CALLBACK_CONTEXT@@QEAAJPEAVDXGADAPTER@@IW4_DMM_VIDP.c)
 */

__int64 __fastcall DisplayConfigCountMonitorsCallback(struct DXGADAPTER *a1, _BYTE *a2)
{
  unsigned int v2; // edi
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  int EmergentSimulatedTarget; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rbp
  __int64 v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  _QWORD *v19; // rbx
  _QWORD *v20; // rbp
  const struct DMMVIDEOPRESENTTARGET *i; // rbp
  struct HDXGMONITOR__ *v22; // rcx
  __int64 v23; // rdx
  _QWORD *v25; // rax
  int MonitorType; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r14
  __int64 v31; // rax
  _QWORD *v32; // rax
  __int64 v33; // rax
  unsigned int v34; // [rsp+20h] [rbp-C8h] BYREF
  int v35; // [rsp+24h] [rbp-C4h] BYREF
  __int64 v36; // [rsp+28h] [rbp-C0h] BYREF
  _BYTE v37[144]; // [rsp+30h] [rbp-B8h] BYREF

  v2 = 0;
  if ( !a2 )
  {
    v31 = WdLogNewEntry5_WdAssertion(a1, 0LL);
    *(_QWORD *)(v31 + 24) = 2350LL;
    WdLogEvent5_WdAssertion(v31);
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v37, a1, 0LL);
  v5 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v37, 0LL);
  if ( v5 < 0 )
  {
    if ( v5 == -1073741130 )
    {
      v25 = (_QWORD *)WdLogNewEntry5_WdTrace(v7, v6, v8, v9);
      v25[3] = a1;
      v25[4] = *((int *)a1 + 80);
      v25[5] = *((unsigned int *)a1 + 79);
    }
    else
    {
      v2 = v5;
    }
  }
  else if ( *((_QWORD *)a1 + 337) )
  {
    if ( a2[25] )
    {
      v34 = -1;
      EmergentSimulatedTarget = DmmGetEmergentSimulatedTarget(a1, &v34);
      v14 = EmergentSimulatedTarget;
      if ( EmergentSimulatedTarget < 0 )
      {
        v32 = (_QWORD *)WdLogNewEntry5_WdWarning(v12, v11, v13);
        v32[3] = *((int *)a1 + 80);
        v32[4] = *((unsigned int *)a1 + 79);
        v32[5] = v14;
        WdLogEvent5_WdWarning(v32);
      }
      else if ( (int)MONITORSCOUNT_CALLBACK_CONTEXT::UpdateEmergencyMonitorContext(a2, a1, v34) >= 0
             && (*((_DWORD *)a1 + 87) & 1) != 0 )
      {
        a2[25] = 0;
      }
    }
    v15 = *(_QWORD *)(*((_QWORD *)a1 + 337) + 88LL);
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v36, v15);
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v15 + 80) + 72LL));
    v19 = *(_QWORD **)(v15 + 80);
    v20 = (_QWORD *)v19[3];
    if ( v20 != v19 + 3 )
    {
      for ( i = (const struct DMMVIDEOPRESENTTARGET *)(v20 - 1);
            i;
            i = DMMVIDEOPRESENTTARGETSET::GetNextTarget((DMMVIDEOPRESENTTARGETSET *)v19, i) )
      {
        v22 = (struct HDXGMONITOR__ *)*((_QWORD *)i + 14);
        if ( v22 && !*((_DWORD *)i + 22) )
        {
          v35 = 0;
          MonitorType = MonitorGetMonitorType(v22, &v35, v17, v18);
          v30 = MonitorType;
          if ( MonitorType < 0 )
          {
            v33 = WdLogNewEntry5_WdWarning(v28, v27, v29);
            *(_QWORD *)(v33 + 24) = i;
            *(_QWORD *)(v33 + 32) = v30;
            WdLogEvent5_WdWarning(v33);
            break;
          }
          ++*(_DWORD *)a2;
          if ( v35 > 0 )
          {
            if ( v35 > 2 )
            {
              if ( v35 == 5 )
                ++*((_DWORD *)a2 + 2);
            }
            else
            {
              ++*((_DWORD *)a2 + 1);
            }
          }
        }
      }
    }
    ReferenceCounted::Release((ReferenceCounted *)(v19 + 8), v16);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v36 + 40), v23);
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v37, v6);
  return v2;
}
