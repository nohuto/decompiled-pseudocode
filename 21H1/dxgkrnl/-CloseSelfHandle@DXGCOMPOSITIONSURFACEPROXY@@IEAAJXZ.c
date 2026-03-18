/*
 * XREFs of ?CloseSelfHandle@DXGCOMPOSITIONSURFACEPROXY@@IEAAJXZ @ 0x1C0287C50
 * Callers:
 *     ?UnPairAndRelease@DXGCOMPOSITIONSURFACEPROXY@@UEAAXXZ @ 0x1C0289FF0 (-UnPairAndRelease@DXGCOMPOSITIONSURFACEPROXY@@UEAAXXZ.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000CF20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000D070 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000DBC4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0116DB4 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0119460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?VailUnregisterCompositionSurfaceProxy@DXGSESSIONDATA@@QEAAJPEAVDXGCOMPOSITIONSURFACEPROXY@@@Z @ 0x1C02B3ACC (-VailUnregisterCompositionSurfaceProxy@DXGSESSIONDATA@@QEAAJPEAVDXGCOMPOSITIONSURFACEPROXY@@@Z.c)
 */

__int64 __fastcall DXGCOMPOSITIONSURFACEPROXY::CloseSelfHandle(DXGCOMPOSITIONSURFACEPROXY *this, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // rbx
  __int64 v7; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  DXGSESSIONMGR *v14; // rbx
  unsigned int CurrentProcessSessionId; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v17; // rbx
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rax
  __int64 v21; // rdx
  _BYTE v22[24]; // [rsp+20h] [rbp-18h] BYREF

  LODWORD(v2) = 0;
  if ( !*((_DWORD *)this + 4) )
    return (unsigned int)v2;
  Current = DXGPROCESS::GetCurrent((__int64)this, a2);
  if ( !Current )
  {
    v7 = WdLogNewEntry5_WdError(v5, v4);
    *(_QWORD *)(v7 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v7);
    return 3221225485LL;
  }
  KeEnterCriticalRegion();
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v22, *((struct DXGFASTMUTEX *const *)Current + 13), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v22);
  if ( *((_DWORD *)Current + 106) && (*((_BYTE *)Current + 346) || g_OSTestSigningEnabled && (_BYTE)KdDebuggerEnabled) )
  {
    if ( !*((_BYTE *)Current + 488) )
    {
      v2 = -2147483611LL;
LABEL_16:
      v20 = WdLogNewEntry5_WdWarning(v10, v9, v11);
      *(_QWORD *)(v20 + 24) = v2;
      WdLogEvent5_WdWarning(v20);
      goto LABEL_17;
    }
    v14 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v10, v9) + 88);
    if ( v14 )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v13);
      SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v14, CurrentProcessSessionId);
    }
    else
    {
      SessionDataForSpecifiedSession = 0LL;
    }
    if ( !SessionDataForSpecifiedSession )
    {
      LODWORD(v2) = -1073741811;
      v17 = WdLogNewEntry5_WdError(v13, v12);
      *(_QWORD *)(v17 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v18);
      *(_QWORD *)(v17 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v17);
      goto LABEL_17;
    }
    v19 = DXGSESSIONDATA::VailUnregisterCompositionSurfaceProxy(SessionDataForSpecifiedSession, this);
    v2 = v19;
    if ( v19 < 0 )
      goto LABEL_16;
  }
LABEL_17:
  KeLeaveCriticalRegion();
  if ( v22[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v22, v21);
  return (unsigned int)v2;
}
