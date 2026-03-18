/*
 * XREFs of ?PairedUnBind@DXGCOMPOSITIONSURFACEPROXY@@UEAAJ_N@Z @ 0x1C0288DA0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000CF20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000D070 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000DBC4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0116DB4 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0119460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?VailSendUnbindCompositionSurface@DXGSESSIONDATA@@QEAAJIH@Z @ 0x1C02B377C (-VailSendUnbindCompositionSurface@DXGSESSIONDATA@@QEAAJIH@Z.c)
 */

__int64 __fastcall DXGCOMPOSITIONSURFACEPROXY::PairedUnBind(DXGCOMPOSITIONSURFACEPROXY *this, __int64 a2)
{
  int v2; // ebp
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct DXGPROCESS *Current; // rbx
  __int64 v8; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  DXGSESSIONMGR *v16; // rbx
  __int64 v17; // r8
  unsigned int CurrentProcessSessionId; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v20; // rbx
  __int64 v21; // rcx
  __int64 v22; // rdx
  int v23; // eax
  __int64 v24; // rdx
  _QWORD *v25; // r8
  __int64 v26; // rcx
  __int64 v27; // rdx
  _BYTE v28[24]; // [rsp+20h] [rbp-18h] BYREF

  v2 = (unsigned __int8)a2;
  LODWORD(v4) = 0;
  Current = DXGPROCESS::GetCurrent((__int64)this, a2);
  if ( !Current )
  {
    v8 = WdLogNewEntry5_WdError(v6, v5);
    *(_QWORD *)(v8 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v8);
    return 3221225485LL;
  }
  KeEnterCriticalRegion();
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v28, *((struct DXGFASTMUTEX *const *)Current + 13), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v28);
  if ( *((_DWORD *)Current + 106) && (*((_BYTE *)Current + 346) || g_OSTestSigningEnabled && (_BYTE)KdDebuggerEnabled) )
  {
    if ( !*((_BYTE *)Current + 488) )
    {
      v4 = -2147483611LL;
      goto LABEL_9;
    }
    v16 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v11, v10) + 88);
    if ( v16 )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v15);
      SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v16, CurrentProcessSessionId);
    }
    else
    {
      SessionDataForSpecifiedSession = 0LL;
    }
    if ( SessionDataForSpecifiedSession )
    {
      v22 = *((unsigned int *)this + 5);
      if ( !(_DWORD)v22 || !*((_BYTE *)this + 25) )
      {
        v13 = WdLogNewEntry5_WdWarning(v15, v22, v17);
        v24 = 0LL;
        *(_QWORD *)(v13 + 24) = *((unsigned int *)this + 5);
        v25 = (_QWORD *)(v13 + 32);
        do
        {
          v26 = *((unsigned __int8 *)this + v24++ + 24);
          *v25++ = v26;
        }
        while ( v24 < 2 );
        goto LABEL_21;
      }
      v23 = DXGSESSIONDATA::VailSendUnbindCompositionSurface(SessionDataForSpecifiedSession, v22, v2);
      v4 = v23;
      if ( v23 < 0 )
      {
LABEL_9:
        v13 = WdLogNewEntry5_WdWarning(v11, v10, v12);
        *(_QWORD *)(v13 + 24) = v4;
LABEL_21:
        WdLogEvent5_WdWarning(v13);
        goto LABEL_22;
      }
      *((_BYTE *)this + 25) = 0;
    }
    else
    {
      LODWORD(v4) = -1073741811;
      v20 = WdLogNewEntry5_WdError(v15, v14);
      *(_QWORD *)(v20 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v21);
      *(_QWORD *)(v20 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v20);
    }
  }
LABEL_22:
  KeLeaveCriticalRegion();
  if ( v28[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v28, v27);
  return (unsigned int)v4;
}
