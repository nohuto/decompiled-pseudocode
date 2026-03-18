/*
 * XREFs of ?DestroySession@DXGSESSIONMGR@@QEAAXXZ @ 0x1C014F0D8
 * Callers:
 *     DxgkNotifySessionStateChange @ 0x1C015A8A0 (DxgkNotifySessionStateChange.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000A788 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000CF20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000D070 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000DBC4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??_GDXGSESSIONDATA@@QEAAPEAXI@Z @ 0x1C0019024 (--_GDXGSESSIONDATA@@QEAAPEAXI@Z.c)
 *     ?ReleaseSessionModeChangeLock@DXGSESSIONDATA@@QEAAXXZ @ 0x1C0019128 (-ReleaseSessionModeChangeLock@DXGSESSIONDATA@@QEAAXXZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0116DB4 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C011739C (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?SetConsoleSession@DXGSESSIONMGR@@QEAAXE@Z @ 0x1C014B874 (-SetConsoleSession@DXGSESSIONMGR@@QEAAXE@Z.c)
 */

void __fastcall DXGSESSIONMGR::DestroySession(DXGSESSIONDATA **this)
{
  __int64 CurrentProcessSessionId; // rsi
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  DXGSESSIONDATA *v4; // rdi
  __int64 v5; // rdx
  DXGSESSIONDATA *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct DXGGLOBAL *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  _QWORD *v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rdx
  DXGSESSIONDATA *v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  struct DXGGLOBAL *Global; // rax
  _BYTE v20[16]; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v21[24]; // [rsp+30h] [rbp-18h] BYREF

  CurrentProcessSessionId = (unsigned int)PsGetCurrentProcessSessionId(this);
  SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                     (DXGSESSIONMGR *)this,
                                     CurrentProcessSessionId);
  v4 = SessionDataForSpecifiedSession;
  if ( SessionDataForSpecifiedSession )
  {
    DXGPUSHLOCK::AcquireExclusive((struct DXGSESSIONDATA *)((char *)SessionDataForSpecifiedSession + 18528));
    v6 = this[15];
    if ( v4 == v6 )
    {
      v16 = WdLogNewEntry5_WdAssertion(v6, v5);
      *(_QWORD *)(v16 + 24) = 5002LL;
      WdLogEvent5_WdAssertion(v16);
      v18 = (__int64)this[15];
      if ( v4 == (DXGSESSIONDATA *)v18 )
      {
        Global = DXGGLOBAL::GetGlobal(v18, v17);
        DXGSESSIONMGR::SetConsoleSession(*((struct DXGSESSIONDATA ***)Global + 88), 0);
      }
    }
    DXGSESSIONDATA::ReleaseSessionModeChangeLock(v4);
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v21, (struct DXGFASTMUTEX *const)this, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v21);
  v9 = DXGGLOBAL::GetGlobal(v8, v7);
  DXGGLOBAL::IterateAdaptersWithCallback(
    (__int64)v9,
    (__int64 (__fastcall *)(_QWORD *, __int64))DXGPRESENTHISTORYTOKENQUEUE::CleanupPresentHistoryTokenQueueAdapter,
    0LL,
    2);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v20, (struct DXGFASTMUTEX *const)(this + 10), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v20);
  v12 = (_QWORD *)WdLogNewEntry5_WdEvent(v11, v10);
  v12[3] = CurrentProcessSessionId;
  if ( (unsigned int)CurrentProcessSessionId >= *((_DWORD *)this + 18) )
    v13 = 0LL;
  else
    v13 = *((_QWORD *)this[5] + CurrentProcessSessionId);
  v12[4] = v13;
  v12[5] = *((unsigned int *)this + 18);
  WdLogEvent5_WdEvent(v12);
  if ( (unsigned int)CurrentProcessSessionId < *((_DWORD *)this + 18) )
  {
    v15 = (DXGSESSIONDATA *)*((_QWORD *)this[5] + CurrentProcessSessionId);
    if ( v15 )
    {
      DXGSESSIONDATA::`scalar deleting destructor'(v15);
      *((_QWORD *)this[5] + CurrentProcessSessionId) = 0LL;
    }
  }
  if ( v20[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v20, v14);
  if ( v21[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v21, v14);
}
