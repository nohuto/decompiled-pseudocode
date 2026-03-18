/*
 * XREFs of ?AcquireConsoleSessionModeChangeLock@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@E@Z @ 0x1C015D310
 * Callers:
 *     DxgkGetDisplayModeList @ 0x1C015CB40 (DxgkGetDisplayModeList.c)
 *     ?DxgkpDelayPresentCddPrimary@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1C020E320 (-DxgkpDelayPresentCddPrimary@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000CF20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000D070 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000DBC4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000EB8C (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 */

struct DXGSESSIONDATA *__fastcall DXGSESSIONMGR::AcquireConsoleSessionModeChangeLock(DXGSESSIONMGR *this)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rbx
  _BYTE v9[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v9, this, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v9);
  v5 = *((_QWORD *)this + 15);
  if ( v5 )
  {
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v5 + 18528));
    v7 = *((_QWORD *)this + 15);
  }
  else
  {
    v7 = 0LL;
    *(_QWORD *)(WdLogNewEntry5_WdTrace(0LL, v2, v3, v4) + 24) = 5521LL;
  }
  if ( v9[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v9, v6);
  return (struct DXGSESSIONDATA *)v7;
}
