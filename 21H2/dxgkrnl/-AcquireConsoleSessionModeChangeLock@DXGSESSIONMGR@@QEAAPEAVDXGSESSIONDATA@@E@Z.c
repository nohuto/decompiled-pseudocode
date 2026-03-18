/*
 * XREFs of ?AcquireConsoleSessionModeChangeLock@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@E@Z @ 0x1C01E3A98
 * Callers:
 *     ?DxgkpDelayPresentCddPrimary@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1C01586A0 (-DxgkpDelayPresentCddPrimary@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z.c)
 *     DxgkGetDisplayModeList @ 0x1C01EBFF0 (DxgkGetDisplayModeList.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000C3F8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000FA80 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 */

struct DXGSESSIONDATA *__fastcall DXGSESSIONMGR::AcquireConsoleSessionModeChangeLock(DXGSESSIONMGR *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rbx
  _BYTE v6[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v6, this, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v6);
  v3 = *((_QWORD *)this + 17);
  if ( v3 )
  {
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v3 + 18544));
    v4 = *((_QWORD *)this + 17);
  }
  else
  {
    v4 = 0LL;
    *(_QWORD *)(WdLogNewEntry5_WdTrace(0LL, v2) + 24) = 5683LL;
  }
  if ( v6[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v6);
  return (struct DXGSESSIONDATA *)v4;
}
