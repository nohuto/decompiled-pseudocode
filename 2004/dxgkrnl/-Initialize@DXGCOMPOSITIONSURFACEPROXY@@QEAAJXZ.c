/*
 * XREFs of ?Initialize@DXGCOMPOSITIONSURFACEPROXY@@QEAAJXZ @ 0x1C028C924
 * Callers:
 *     ?DxgkCreateRemoteCompositionSurfaceObjectForPairing@@YAJPEAPEAUIPairedSurfaceObject@@PEAPEAX@Z @ 0x1C028C4B0 (-DxgkCreateRemoteCompositionSurfaceObjectForPairing@@YAJPEAPEAUIPairedSurfaceObject@@PEAPEAX@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002808 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BB0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006598 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0113030 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0114888 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?VailRegisterCompositionSurfaceProxy@DXGSESSIONDATA@@QEAAJPEAVDXGCOMPOSITIONSURFACEPROXY@@@Z @ 0x1C02B67D8 (-VailRegisterCompositionSurfaceProxy@DXGSESSIONDATA@@QEAAJPEAVDXGCOMPOSITIONSURFACEPROXY@@@Z.c)
 */

__int64 __fastcall DXGCOMPOSITIONSURFACEPROXY::Initialize(DXGCOMPOSITIONSURFACEPROXY *this, __int64 a2)
{
  __int64 v3; // rdi
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
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rax
  __int64 v22; // rdx
  _BYTE v23[24]; // [rsp+20h] [rbp-18h] BYREF

  LODWORD(v3) = 0;
  Current = DXGPROCESS::GetCurrent((__int64)this, a2);
  if ( !Current )
  {
    v7 = WdLogNewEntry5_WdError(v5, v4);
    *(_QWORD *)(v7 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v7);
    return 3221225485LL;
  }
  KeEnterCriticalRegion();
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v23, *((struct DXGFASTMUTEX *const *)Current + 13), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v23);
  if ( *((_DWORD *)Current + 106) && (*((_BYTE *)Current + 346) || g_OSTestSigningEnabled && (_BYTE)KdDebuggerEnabled) )
  {
    if ( !*((_BYTE *)Current + 488) )
    {
      v3 = -2147483611LL;
LABEL_15:
      v21 = WdLogNewEntry5_WdWarning(v10, v9, v11);
      *(_QWORD *)(v21 + 24) = v3;
      WdLogEvent5_WdWarning(v21);
      goto LABEL_16;
    }
    v14 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v10, v9) + 102);
    if ( v14 )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v13, v12);
      SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v14, CurrentProcessSessionId);
    }
    else
    {
      SessionDataForSpecifiedSession = 0LL;
    }
    if ( SessionDataForSpecifiedSession )
    {
      v20 = DXGSESSIONDATA::VailRegisterCompositionSurfaceProxy(SessionDataForSpecifiedSession, this);
      v3 = v20;
      if ( v20 < 0 )
        goto LABEL_15;
    }
    else
    {
      LODWORD(v3) = -1073741811;
      v17 = WdLogNewEntry5_WdError(v13, v12);
      *(_QWORD *)(v17 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v19, v18);
      *(_QWORD *)(v17 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v17);
    }
  }
LABEL_16:
  KeLeaveCriticalRegion();
  if ( v23[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v23, v22);
  return (unsigned int)v3;
}
