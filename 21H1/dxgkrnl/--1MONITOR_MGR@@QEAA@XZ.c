/*
 * XREFs of ??1MONITOR_MGR@@QEAA@XZ @ 0x1C02ECF20
 * Callers:
 *     ??_GMONITOR_MGR@@QEAAPEAXI@Z @ 0x1C005BF60 (--_GMONITOR_MGR@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C000BEAC (--3@YAXPEAX@Z.c)
 *     ?_ReleaseMonitorPendingEvent@MONITOR_MGR@@SAXPEAU_MONITOR_PENDING_EVENT@@@Z @ 0x1C0011ED0 (-_ReleaseMonitorPendingEvent@MONITOR_MGR@@SAXPEAU_MONITOR_PENDING_EVENT@@@Z.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     memset @ 0x1C0026840 (memset.c)
 *     ?_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02ED7A4 (-_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@.c)
 *     ?_DestroySimulatedMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C02ED884 (-_DestroySimulatedMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 */

void __fastcall MONITOR_MGR::~MONITOR_MGR(MONITOR_MGR *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  _QWORD **v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  _QWORD *v9; // rax
  _QWORD *v10; // rcx
  _QWORD *v11; // rdi
  void *v12; // rdx
  _QWORD **v13; // rsi
  _QWORD *v14; // rdi
  _QWORD *v15; // rax
  __int64 v16; // rax
  struct _KEVENT *v17; // rcx
  __int64 v18; // rdx
  _QWORD v19[10]; // [rsp+20h] [rbp-68h] BYREF

  memset(v19, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v19[1]);
  v19[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v19[3]) = 24;
  LOBYTE(v19[6]) = -1;
  v6 = (_QWORD **)((char *)this + 128);
  *(_QWORD *)(WdLogNewEntry5_WdTrace(v3, v2, v4, v5) + 24) = this;
  while ( 1 )
  {
    v9 = *v6;
    if ( *v6 == v6 )
      break;
    if ( (_QWORD **)v9[1] != v6 || (v10 = (_QWORD *)*v9, *(_QWORD **)(*v9 + 8LL) != v9) )
LABEL_15:
      __fastfail(3u);
    *v6 = v10;
    v11 = v9 - 2;
    v10[1] = v6;
    if ( *((_DWORD *)v9 + 104) == 1 )
    {
      MONITOR_MGR::_DestroyPhysicalMonitor(this, v9 - 2, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v19);
    }
    else
    {
      v12 = (void *)v11[55];
      if ( v12 )
      {
        MONITOR_MGR::_DestroyPhysicalMonitor(this, v12, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v19);
        v11[55] = 0LL;
      }
      MONITOR_MGR::_DestroySimulatedMonitor(this, v11);
    }
  }
  v13 = (_QWORD **)((char *)this + 144);
  while ( 1 )
  {
    v14 = *v13;
    if ( *v13 == v13 )
      break;
    if ( (_QWORD **)v14[1] != v13 )
      goto LABEL_15;
    v15 = (_QWORD *)*v14;
    if ( *(_QWORD **)(*v14 + 8LL) != v14 )
      goto LABEL_15;
    *v13 = v15;
    v15[1] = v13;
    v16 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v16 + 24) = v14[2];
    *(_QWORD *)(v16 + 32) = v14[3];
    WdLogEvent5_WdError(v16);
    operator delete(v14);
  }
  v17 = (struct _KEVENT *)*((_QWORD *)this + 96);
  if ( v17 )
  {
    KeSetEvent(v17 + 1, 0, 0);
    MONITOR_MGR::_ReleaseMonitorPendingEvent(*((PVOID *)this + 96), v18);
    *((_QWORD *)this + 96) = 0LL;
  }
  ExDeleteResourceLite((PERESOURCE)((char *)this + 16));
}
