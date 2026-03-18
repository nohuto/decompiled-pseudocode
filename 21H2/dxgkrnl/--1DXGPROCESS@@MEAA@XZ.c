/*
 * XREFs of ??1DXGPROCESS@@MEAA@XZ @ 0x1C019A588
 * Callers:
 *     ??_GDXGPROCESS@@MEAAPEAXI@Z @ 0x1C001CDB0 (--_GDXGPROCESS@@MEAAPEAXI@Z.c)
 *     ??1DXGPROCESSVM@@UEAA@XZ @ 0x1C0057740 (--1DXGPROCESSVM@@UEAA@XZ.c)
 *     ??1DXGPROCESSVMWP@@UEAA@XZ @ 0x1C0057784 (--1DXGPROCESSVMWP@@UEAA@XZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C000D96C (--3@YAXPEAX@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x1C000E608 (--1DXGFASTMUTEX@@QEAA@XZ.c)
 *     ?ReleaseDwmProcessReference@DXGSESSIONDATA@@QEAAXXZ @ 0x1C001F95C (-ReleaseDwmProcessReference@DXGSESSIONDATA@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0183C78 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C0186C8C (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 */

void __fastcall DXGPROCESS::~DXGPROCESS(DXGPROCESS *this)
{
  int v2; // eax
  int v3; // eax
  __int64 v4; // rcx
  __int64 v5; // rdi
  PLIST_ENTRY v6; // rax
  PLIST_ENTRY v7; // rsi
  void *v8; // rcx
  unsigned int i; // edi
  struct DXGGLOBAL *Global; // rsi
  unsigned int v11; // ecx
  void *v12; // rcx
  DXGSESSIONMGR *v13; // rdi
  unsigned int CurrentProcessSessionId; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  _QWORD v16[10]; // [rsp+50h] [rbp-88h] BYREF

  *(_QWORD *)this = &DXGPROCESS::`vftable';
  if ( *((_QWORD *)this + 57) )
  {
    WdLogSingleEntry1(1LL, 1238LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_DecommittableBytes == 0", 1238LL, 0LL, 0LL, 0LL, 0LL);
  }
  memset(v16, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v16[1]);
  v16[8] = MEMORY[0xFFFFF78000000014];
  v2 = *((_DWORD *)this + 106) & 0x104;
  LODWORD(v16[3]) = 25;
  LOBYTE(v16[6]) = -1;
  if ( v2 == 4 )
  {
    v13 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL_GetGlobal() + 122);
    if ( v13 )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId();
      SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v13, CurrentProcessSessionId);
    }
    else
    {
      SessionDataForSpecifiedSession = 0LL;
    }
    DXGSESSIONDATA::ReleaseDwmProcessReference(SessionDataForSpecifiedSession);
  }
  v3 = *((_DWORD *)this + 10);
  if ( !v3 )
  {
    DXGPROCESS::Destroy(this, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v16, 0);
    v3 = *((_DWORD *)this + 10);
  }
  if ( v3 != 2 )
  {
    WdLogSingleEntry1(1LL, 1255LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"m_ExecutionState == EXECUTION_STOPPED",
      1255LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *((_QWORD *)this + 74) )
  {
    WdLogSingleEntry1(1LL, 1260LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"nullptr == m_pVailObjectRef", 1260LL, 0LL, 0LL, 0LL, 0LL);
  }
  v4 = *((_QWORD *)this + 8);
  if ( v4 )
  {
    operator delete[](*(void **)(v4 + 88));
    v5 = *((_QWORD *)this + 8);
    if ( v5 )
    {
      while ( 1 )
      {
        v6 = ExInterlockedRemoveHeadList((PLIST_ENTRY)(v5 + 96), (PKSPIN_LOCK)(v5 + 112));
        v7 = v6;
        if ( !v6 )
          break;
        ((void (__fastcall *)(struct _LIST_ENTRY *))v6[1].Flink)(v6[1].Blink);
        operator delete(v7);
      }
      operator delete((void *)v5);
    }
  }
  v8 = (void *)*((_QWORD *)this + 6);
  if ( v8 )
  {
    for ( i = 0; ; ++i )
    {
      Global = DXGGLOBAL_GetGlobal();
      v11 = *((_DWORD *)Global + 348);
      if ( !v11 )
      {
        WdLogSingleEntry1(1LL, 2690LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"m_MaximumGlobalAdapterCount > 0",
          2690LL,
          0LL,
          0LL,
          0LL,
          0LL);
        v11 = *((_DWORD *)Global + 348);
      }
      if ( i >= v11 )
        break;
    }
    v8 = (void *)*((_QWORD *)this + 6);
  }
  operator delete[](v8);
  operator delete[](*((void **)this + 9));
  v12 = (void *)*((_QWORD *)this + 12);
  if ( v12 )
  {
    operator delete(v12);
    *((_QWORD *)this + 12) = 0LL;
  }
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGPROCESS *)((char *)this + 376));
  if ( *((DXGPROCESS **)this + 43) != (DXGPROCESS *)((char *)this + 344) )
  {
    WdLogSingleEntry1(1LL, 764LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsEmpty()", 764LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((DXGPROCESS **)this + 40) != (DXGPROCESS *)((char *)this + 320) )
  {
    WdLogSingleEntry1(1LL, 764LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsEmpty()", 764LL, 0LL, 0LL, 0LL, 0LL);
  }
  operator delete[](*((void **)this + 35));
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGPROCESS *)((char *)this + 104));
  *((_QWORD *)this + 3) = 0LL;
}
