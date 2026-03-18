/*
 * XREFs of ??1DXGPROCESS@@MEAA@XZ @ 0x1C01164F0
 * Callers:
 *     ??_GDXGPROCESS@@MEAAPEAXI@Z @ 0x1C00189B0 (--_GDXGPROCESS@@MEAAPEAXI@Z.c)
 *     ??1DXGPROCESSVM@@UEAA@XZ @ 0x1C0046AB8 (--1DXGPROCESSVM@@UEAA@XZ.c)
 *     ??1DXGPROCESSVMWP@@UEAA@XZ @ 0x1C0046AFC (--1DXGPROCESSVMWP@@UEAA@XZ.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C000A43C (--_V@YAXPEAX@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C000BEAC (--3@YAXPEAX@Z.c)
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x1C000CF90 (--1DXGFASTMUTEX@@QEAA@XZ.c)
 *     ?ReleaseDwmProcessReference@DXGSESSIONDATA@@QEAAXXZ @ 0x1C001A9C8 (-ReleaseDwmProcessReference@DXGSESSIONDATA@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0026840 (memset.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0116DB4 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C011BAD8 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 */

void __fastcall DXGPROCESS::~DXGPROCESS(DXGPROCESS *this, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  bool v5; // zf
  int v6; // eax
  void *v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rdi
  PLIST_ENTRY v10; // rax
  PLIST_ENTRY v11; // rsi
  void *v12; // rdi
  __int64 v13; // rcx
  unsigned int i; // edi
  struct DXGGLOBAL *Global; // rsi
  __int64 v16; // rdx
  void *v17; // rcx
  __int64 v18; // rcx
  DXGSESSIONMGR *v19; // rdi
  unsigned int CurrentProcessSessionId; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  _QWORD v28[10]; // [rsp+20h] [rbp-78h] BYREF

  *(_QWORD *)this = &DXGPROCESS::`vftable';
  if ( *((_QWORD *)this + 47) )
  {
    v22 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v22 + 24) = 1276LL;
    WdLogEvent5_WdAssertion(v22);
  }
  memset(v28, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v28[1]);
  v5 = *((_BYTE *)this + 346) == 0;
  v28[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v28[3]) = 25;
  LOBYTE(v28[6]) = -1;
  if ( !v5 && (*((_BYTE *)this + 347) & 0x20) == 0 )
  {
    v19 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v4, v3) + 88);
    if ( v19 )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v18);
      SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v19, CurrentProcessSessionId);
    }
    else
    {
      SessionDataForSpecifiedSession = 0LL;
    }
    DXGSESSIONDATA::ReleaseDwmProcessReference(SessionDataForSpecifiedSession);
  }
  v6 = *((_DWORD *)this + 10);
  if ( !v6 )
  {
    DXGPROCESS::Destroy(this, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v28, 0);
    v6 = *((_DWORD *)this + 10);
  }
  if ( v6 != 2 )
  {
    v23 = WdLogNewEntry5_WdAssertion(v4, v3);
    *(_QWORD *)(v23 + 24) = 1293LL;
    WdLogEvent5_WdAssertion(v23);
  }
  if ( *((_QWORD *)this + 60) )
  {
    v24 = WdLogNewEntry5_WdAssertion(v4, v3);
    *(_QWORD *)(v24 + 24) = 1298LL;
    WdLogEvent5_WdAssertion(v24);
  }
  v7 = (void *)*((_QWORD *)this + 42);
  if ( v7 )
  {
    DXGFASTMUTEX::~DXGFASTMUTEX(*((DXGFASTMUTEX **)this + 42), v3);
    operator delete(v7);
  }
  *((_QWORD *)this + 42) = 0LL;
  v8 = *((_QWORD *)this + 8);
  if ( v8 )
  {
    operator delete[](*(void **)(v8 + 80));
    v9 = *((_QWORD *)this + 8);
    if ( v9 )
    {
      while ( 1 )
      {
        v10 = ExInterlockedRemoveHeadList((PLIST_ENTRY)(v9 + 88), (PKSPIN_LOCK)(v9 + 104));
        v11 = v10;
        if ( !v10 )
          break;
        ((void (__fastcall *)(struct _LIST_ENTRY *))v10[1].Flink)(v10[1].Blink);
        operator delete(v11);
      }
      operator delete((void *)v9);
    }
  }
  v12 = (void *)*((_QWORD *)this + 13);
  if ( v12 )
  {
    DXGFASTMUTEX::~DXGFASTMUTEX(*((DXGFASTMUTEX **)this + 13), v3);
    operator delete(v12);
  }
  *((_QWORD *)this + 13) = 0LL;
  v13 = *((_QWORD *)this + 6);
  if ( v13 )
  {
    for ( i = 0; ; ++i )
    {
      Global = DXGGLOBAL::GetGlobal(v13, v3);
      v13 = *((unsigned int *)Global + 284);
      if ( !(_DWORD)v13 )
      {
        v25 = WdLogNewEntry5_WdAssertion(v13, v3);
        *(_QWORD *)(v25 + 24) = 2534LL;
        WdLogEvent5_WdAssertion(v25);
        v13 = *((unsigned int *)Global + 284);
      }
      if ( i >= (unsigned int)v13 )
        break;
    }
    v13 = *((_QWORD *)this + 6);
  }
  operator delete[]((void *)v13);
  operator delete[](*((void **)this + 9));
  v17 = (void *)*((_QWORD *)this + 12);
  if ( v17 )
  {
    operator delete(v17);
    *((_QWORD *)this + 12) = 0LL;
  }
  if ( *((DXGPROCESS **)this + 38) != (DXGPROCESS *)((char *)this + 304) )
  {
    v26 = WdLogNewEntry5_WdAssertion(v17, v16);
    *(_QWORD *)(v26 + 24) = 951LL;
    WdLogEvent5_WdAssertion(v26);
  }
  if ( *((DXGPROCESS **)this + 35) != (DXGPROCESS *)((char *)this + 280) )
  {
    v27 = WdLogNewEntry5_WdAssertion(v17, v16);
    *(_QWORD *)(v27 + 24) = 951LL;
    WdLogEvent5_WdAssertion(v27);
  }
  operator delete[](*((void **)this + 30));
  *((_QWORD *)this + 3) = 0LL;
}
