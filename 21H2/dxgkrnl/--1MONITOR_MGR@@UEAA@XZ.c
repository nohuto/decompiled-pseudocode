/*
 * XREFs of ??1MONITOR_MGR@@UEAA@XZ @ 0x1C03B3260
 * Callers:
 *     ??_EMONITOR_MGR@@UEAAPEAXI@Z @ 0x1C006B150 (--_EMONITOR_MGR@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C000D96C (--3@YAXPEAX@Z.c)
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x1C000E608 (--1DXGFASTMUTEX@@QEAA@XZ.c)
 *     ?_ReleaseMonitorPendingEvent@MONITOR_MGR@@SAXPEAU_MONITOR_PENDING_EVENT@@@Z @ 0x1C0019490 (-_ReleaseMonitorPendingEvent@MONITOR_MGR@@SAXPEAU_MONITOR_PENDING_EVENT@@@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0225FB8 (-_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@.c)
 *     ?_DestroySimulatedMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C03B3B18 (-_DestroySimulatedMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 *     ?_SetAttachedPhysicalMonitor@DXGMONITOR@@QEAAXPEAV1@@Z @ 0x1C03B5C54 (-_SetAttachedPhysicalMonitor@DXGMONITOR@@QEAAXPEAV1@@Z.c)
 */

void __fastcall MONITOR_MGR::~MONITOR_MGR(MONITOR_MGR *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  _QWORD **v4; // rsi
  _QWORD *v5; // rax
  _QWORD *v6; // rcx
  DXGMONITOR *v7; // rdi
  void *v8; // rdx
  _QWORD **v9; // rsi
  _QWORD *v10; // rdi
  _QWORD *v11; // rax
  struct _KEVENT *v12; // rcx
  _QWORD v13[10]; // [rsp+20h] [rbp-68h] BYREF

  *(_QWORD *)this = &MONITOR_MGR::`vftable'{for `DxgMonitor::IMonitorAdapterInterface'};
  *((_QWORD *)this + 1) = &MONITOR_MGR::`vftable'{for `DxgMonitor::IMonitorEventSource'};
  memset(v13, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v13[1]);
  v13[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v13[3]) = 24;
  LOBYTE(v13[6]) = -1;
  v4 = (_QWORD **)((char *)this + 40);
  *(_QWORD *)(WdLogNewEntry5_WdTrace(v3, v2) + 24) = this;
  while ( 1 )
  {
    v5 = *v4;
    if ( *v4 == v4 )
      break;
    if ( (_QWORD **)v5[1] != v4 || (v6 = (_QWORD *)*v5, *(_QWORD **)(*v5 + 8LL) != v5) )
LABEL_15:
      __fastfail(3u);
    *v4 = v6;
    v7 = (DXGMONITOR *)(v5 - 19);
    v6[1] = v4;
    if ( *((_DWORD *)v5 + 40) == 1 )
    {
      MONITOR_MGR::_DestroyPhysicalMonitor(this, v5 - 19, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v13);
    }
    else
    {
      v8 = (void *)*((_QWORD *)v7 + 40);
      if ( v8 )
      {
        MONITOR_MGR::_DestroyPhysicalMonitor(this, v8, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v13);
        DXGMONITOR::_SetAttachedPhysicalMonitor(v7, 0LL);
      }
      MONITOR_MGR::_DestroySimulatedMonitor(this, v7);
    }
  }
  v9 = (_QWORD **)((char *)this + 56);
  while ( 1 )
  {
    v10 = *v9;
    if ( *v9 == v9 )
      break;
    if ( (_QWORD **)v10[1] != v9 )
      goto LABEL_15;
    v11 = (_QWORD *)*v10;
    if ( *(_QWORD **)(*v10 + 8LL) != v10 )
      goto LABEL_15;
    *v9 = v11;
    v11[1] = v9;
    WdLogSingleEntry2(2LL, v10[2], v10[3]);
    operator delete(v10);
  }
  v12 = (struct _KEVENT *)*((_QWORD *)this + 83);
  if ( v12 )
  {
    KeSetEvent(v12 + 1, 0, 0);
    MONITOR_MGR::_ReleaseMonitorPendingEvent(*((PVOID *)this + 83));
    *((_QWORD *)this + 83) = 0LL;
  }
  DXGFASTMUTEX::~DXGFASTMUTEX((MONITOR_MGR *)((char *)this + 128));
  DXGFASTMUTEX::~DXGFASTMUTEX((MONITOR_MGR *)((char *)this + 80));
}
