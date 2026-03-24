/*
 * XREFs of ?Destroy@ADAPTER_DISPLAY@@QEAAXXZ @ 0x1C021121C
 * Callers:
 *     ?CreateDisplayCore@ADAPTER_DISPLAY@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z @ 0x1C0186364 (-CreateDisplayCore@ADAPTER_DISPLAY@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z.c)
 *     ?Destroy@DXGADAPTER@@QEAAXXZ @ 0x1C020BED8 (-Destroy@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002848 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002A00 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BF0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0002CC0 (--_V@YAXPEAX@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00041C0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C00055D4 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006910 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     DpiSetSchedulerCallbackState @ 0x1C00247F0 (DpiSetSchedulerCallbackState.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 *     ??_GDXGDODPRESENT@@QEAAPEAXI@Z @ 0x1C003ABE4 (--_GDXGDODPRESENT@@QEAAPEAXI@Z.c)
 *     ??_GMONITOR_MGR@@QEAAPEAXI@Z @ 0x1C005DDC0 (--_GMONITOR_MGR@@QEAAPEAXI@Z.c)
 *     ?ClearAllDisplayState@DISPLAY_SOURCE@@QEAAXXZ @ 0x1C00E06EC (-ClearAllDisplayState@DISPLAY_SOURCE@@QEAAXXZ.c)
 *     ?RemoveAdapter@DXGADAPTERSOURCEHASH@@QEAAXPEBU_LUID@@@Z @ 0x1C026B1E4 (-RemoveAdapter@DXGADAPTERSOURCEHASH@@QEAAXPEBU_LUID@@@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::Destroy(ADAPTER_DISPLAY **this, __int64 a2)
{
  __int64 v3; // rax
  unsigned int v4; // eax
  unsigned int i; // esi
  __int64 v6; // rdi
  ADAPTER_DISPLAY *v7; // rax
  void *v8; // rcx
  unsigned int j; // edi
  __int64 v10; // rsi
  ReferenceCounted *v11; // rcx
  unsigned int v12; // esi
  __int64 v13; // rdi
  ADAPTER_DISPLAY *v14; // rax
  void *v15; // rcx
  void *v16; // rcx
  void *v17; // rcx
  __int64 v18; // rdx
  unsigned int k; // edi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  ADAPTER_DISPLAY *v24; // rdi
  MONITOR_MGR *v25; // rcx
  ADAPTER_DISPLAY *v26; // rax
  __int64 v27; // rcx
  DXGDODPRESENT *v28; // rcx
  ADAPTER_DISPLAY *v29; // rbx
  struct DXGGLOBAL *Global; // rax
  __int64 v31; // rdx
  _BYTE v32[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( this[38] != (ADAPTER_DISPLAY *)(this + 38) )
  {
    v3 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v3 + 24) = 4957LL;
    WdLogEvent5_WdAssertion(v3);
  }
  v4 = *((_DWORD *)this + 20);
  for ( i = 0; i < v4; v4 = *((_DWORD *)this + 20) )
  {
    v6 = 3968LL * i;
    v7 = this[14];
    v8 = *(void **)((char *)v7 + v6 + 1080);
    if ( v8 )
    {
      operator delete[](v8);
      *(_QWORD *)((char *)this[14] + v6 + 1080) = 0LL;
      v7 = this[14];
    }
    *(_DWORD *)((char *)v7 + v6 + 1088) = 0;
    ++i;
    *((_BYTE *)this[14] + v6 + 1092) = 0;
    *(_DWORD *)((char *)this[14] + v6 + 1104) = -1;
    *(_DWORD *)((char *)this[14] + v6 + 1108) = -1;
  }
  for ( j = 0; j < v4; ++j )
  {
    v10 = 3968LL * j;
    v11 = *(ReferenceCounted **)((char *)this[14] + v10 + 904);
    if ( v11 )
    {
      ReferenceCounted::Release(v11, a2);
      *(_QWORD *)((char *)this[14] + v10 + 904) = 0LL;
    }
    v4 = *((_DWORD *)this + 20);
  }
  v12 = 0;
  if ( v4 )
  {
    do
    {
      v13 = 3968LL * v12;
      v14 = this[14];
      v15 = *(void **)((char *)v14 + v13 + 760);
      if ( v15 )
      {
        operator delete[](v15);
        *(_QWORD *)((char *)this[14] + v13 + 760) = 0LL;
        *(_DWORD *)((char *)this[14] + v13 + 776) = 0;
        v14 = this[14];
      }
      v16 = *(void **)((char *)v14 + v13 + 808);
      if ( v16 )
      {
        operator delete[](v16);
        *(_QWORD *)((char *)this[14] + v13 + 808) = 0LL;
        v14 = this[14];
      }
      v17 = *(void **)((char *)v14 + v13 + 848);
      if ( v17 )
      {
        operator delete[](v17);
        *(_QWORD *)((char *)this[14] + v13 + 848) = 0LL;
      }
      ++v12;
    }
    while ( v12 < *((_DWORD *)this + 20) );
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v32, (struct DXGFASTMUTEX *const)(this + 66), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v32);
  for ( k = 0; k < *((_DWORD *)this + 20); ++k )
    DISPLAY_SOURCE::ClearAllDisplayState((ADAPTER_DISPLAY *)((char *)this[14] + 3968 * k), v18);
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v32, v18);
  v24 = this[11];
  if ( v24 )
  {
    DXGFASTMUTEX::Acquire(*((DXGFASTMUTEX **)v24 + 5));
    (**(void (__fastcall ***)(ADAPTER_DISPLAY *, __int64))v24)(v24, 1LL);
    this[11] = 0LL;
  }
  if ( this[12] )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v21, v20, v22, v23) + 24) = this;
    v25 = this[12];
    if ( v25 )
      MONITOR_MGR::`scalar deleting destructor'(v25);
    this[12] = 0LL;
  }
  v26 = this[2];
  v27 = *((_QWORD *)v26 + 27);
  if ( v27 && !*((_QWORD *)v26 + 338) )
  {
    DpiSetSchedulerCallbackState(v27, 0);
    KeFlushQueuedDpcs();
  }
  v28 = this[49];
  if ( v28 )
  {
    DXGDODPRESENT::`scalar deleting destructor'(v28);
    this[49] = 0LL;
  }
  v29 = this[2];
  Global = DXGGLOBAL::GetGlobal((__int64)v28, v20);
  DXGADAPTERSOURCEHASH::RemoveAdapter(
    (struct DXGGLOBAL *)((char *)Global + 1272),
    (const struct _LUID *)((char *)v29 + 316));
  if ( v32[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v32, v31);
}
