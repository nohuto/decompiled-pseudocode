/*
 * XREFs of ?Destroy@ADAPTER_DISPLAY@@QEAAXXZ @ 0x1C02BFA44
 * Callers:
 *     ?CreateDisplayCore@ADAPTER_DISPLAY@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z @ 0x1C0201B24 (-CreateDisplayCore@ADAPTER_DISPLAY@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z.c)
 *     ?Destroy@DXGADAPTER@@QEAAXXZ @ 0x1C02BA5BC (-Destroy@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000C3F8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E350 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DpiSetSchedulerCallbackState @ 0x1C0028170 (DpiSetSchedulerCallbackState.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ??_GDXGDODPRESENT@@QEAAPEAXI@Z @ 0x1C00456B8 (--_GDXGDODPRESENT@@QEAAPEAXI@Z.c)
 *     ??_EMONITOR_MGR@@UEAAPEAXI@Z @ 0x1C006B150 (--_EMONITOR_MGR@@UEAAPEAXI@Z.c)
 *     ?ClearAllDisplayState@DISPLAY_SOURCE@@QEAAXXZ @ 0x1C01C8D28 (-ClearAllDisplayState@DISPLAY_SOURCE@@QEAAXXZ.c)
 *     ?RemoveAdapter@DXGADAPTERSOURCEHASH@@QEAAXPEBU_LUID@@@Z @ 0x1C030C0B4 (-RemoveAdapter@DXGADAPTERSOURCEHASH@@QEAAXPEBU_LUID@@@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::Destroy(ADAPTER_DISPLAY **this)
{
  unsigned int v2; // eax
  unsigned int i; // esi
  __int64 v4; // rdi
  ADAPTER_DISPLAY *v5; // rax
  void *v6; // rcx
  unsigned int v7; // esi
  __int64 v8; // rdi
  ADAPTER_DISPLAY *v9; // rax
  void *v10; // rcx
  void *v11; // rcx
  void *v12; // rcx
  unsigned int j; // edi
  __int64 v14; // rdx
  __int64 v15; // rcx
  ADAPTER_DISPLAY *v16; // rdi
  MONITOR_MGR *v17; // rcx
  ADAPTER_DISPLAY *v18; // rax
  __int64 v19; // rcx
  DXGDODPRESENT *v20; // rcx
  struct DXGGLOBAL *Global; // rax
  _BYTE v22[16]; // [rsp+50h] [rbp-18h] BYREF

  if ( this[44] != (ADAPTER_DISPLAY *)(this + 44) )
  {
    WdLogSingleEntry1(1LL, 5165LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"IsListEmpty(&m_OpmHandleMappingList)",
      5165LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v2 = *((_DWORD *)this + 24);
  for ( i = 0; i < v2; v2 = *((_DWORD *)this + 24) )
  {
    v4 = 4000LL * i;
    v5 = this[16];
    v6 = *(void **)((char *)v5 + v4 + 1104);
    if ( v6 )
    {
      operator delete[](v6);
      *(_QWORD *)((char *)this[16] + v4 + 1104) = 0LL;
      v5 = this[16];
    }
    *(_DWORD *)((char *)v5 + v4 + 1112) = 0;
    ++i;
    *((_BYTE *)this[16] + v4 + 1116) = 0;
    *(_DWORD *)((char *)this[16] + v4 + 1120) = -1;
    *(_DWORD *)((char *)this[16] + v4 + 1132) = -1;
    *(_DWORD *)((char *)this[16] + v4 + 1136) = -1;
  }
  v7 = 0;
  if ( v2 )
  {
    do
    {
      v8 = 4000LL * v7;
      v9 = this[16];
      v10 = *(void **)((char *)v9 + v8 + 800);
      if ( v10 )
      {
        operator delete[](v10);
        *(_QWORD *)((char *)this[16] + v8 + 800) = 0LL;
        *(_DWORD *)((char *)this[16] + v8 + 816) = 0;
        v9 = this[16];
      }
      v11 = *(void **)((char *)v9 + v8 + 848);
      if ( v11 )
      {
        operator delete[](v11);
        *(_QWORD *)((char *)this[16] + v8 + 848) = 0LL;
        v9 = this[16];
      }
      v12 = *(void **)((char *)v9 + v8 + 888);
      if ( v12 )
      {
        operator delete[](v12);
        *(_QWORD *)((char *)this[16] + v8 + 888) = 0LL;
      }
      ++v7;
    }
    while ( v7 < *((_DWORD *)this + 24) );
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v22, (struct DXGFASTMUTEX *const)(this + 76), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v22);
  for ( j = 0; j < *((_DWORD *)this + 24); ++j )
    DISPLAY_SOURCE::ClearAllDisplayState((ADAPTER_DISPLAY *)((char *)this[16] + 4000 * j));
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v22);
  v16 = this[13];
  if ( v16 )
  {
    DXGFASTMUTEX::Acquire((ADAPTER_DISPLAY *)((char *)v16 + 40));
    (**(void (__fastcall ***)(ADAPTER_DISPLAY *, __int64))v16)(v16, 1LL);
    this[13] = 0LL;
  }
  if ( this[14] )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v15, v14) + 24) = this;
    v17 = this[14];
    if ( v17 )
      MONITOR_MGR::`vector deleting destructor'(v17, 1);
    this[14] = 0LL;
  }
  v18 = this[2];
  v19 = *((_QWORD *)v18 + 27);
  if ( v19 && !*((_QWORD *)v18 + 350) )
  {
    DpiSetSchedulerCallbackState(v19, 0);
    KeFlushQueuedDpcs();
  }
  v20 = this[56];
  if ( v20 )
  {
    DXGDODPRESENT::`scalar deleting destructor'(v20);
    this[56] = 0LL;
  }
  Global = DXGGLOBAL_GetGlobal();
  DXGADAPTERSOURCEHASH::RemoveAdapter(
    (struct DXGGLOBAL *)((char *)Global + 1416),
    (const struct _LUID *)((char *)this[2] + 404));
  if ( v22[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v22);
}
