/*
 * XREFs of ?PairedUnBind@DXGCOMPOSITIONSURFACEPROXY@@UEAAJ_N@Z @ 0x1C02E0590
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000C3F8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0183C78 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?VailSendUnbindCompositionSurface@DXGSESSIONDATA@@QEAAJIH@Z @ 0x1C0353624 (-VailSendUnbindCompositionSurface@DXGSESSIONDATA@@QEAAJIH@Z.c)
 */

__int64 __fastcall DXGCOMPOSITIONSURFACEPROXY::PairedUnBind(
        DXGCOMPOSITIONSURFACEPROXY *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // r14
  int v5; // edi
  struct DXGPROCESS *Current; // rsi
  __int64 v9; // rcx
  DXGSESSIONMGR *v10; // rsi
  unsigned int v11; // eax
  __int64 v12; // rdx
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rsi
  __int64 v14; // rcx
  _QWORD *v15; // rax
  int v16; // eax
  unsigned int CurrentProcessSessionId; // eax
  __int64 v18; // rcx
  unsigned int v19; // eax
  _BYTE v20[16]; // [rsp+50h] [rbp-28h] BYREF

  v4 = (unsigned __int8)a2;
  v5 = 0;
  Current = DXGPROCESS::GetCurrent((__int64)this, a2, a3, a4);
  if ( !Current )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid process context. Returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  KeEnterCriticalRegion();
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v20, (struct DXGPROCESS *)((char *)Current + 104), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v20);
  if ( *((_DWORD *)Current + 126) && (*((_DWORD *)Current + 106) & 4) != 0 )
  {
    if ( !*((_BYTE *)Current + 600) )
    {
      v5 = -2147483611;
      WdLogSingleEntry1(3LL, -2147483611LL);
LABEL_22:
      KeLeaveCriticalRegion();
      goto LABEL_16;
    }
    v10 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL_GetGlobal() + 122);
    if ( !v10
      || (v11 = PsGetCurrentProcessSessionId(v9),
          (SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v10, v11)) == 0LL) )
    {
      v5 = -1073741811;
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v9);
      WdLogSingleEntry2(2LL, CurrentProcessSessionId, -1073741811LL);
      v19 = PsGetCurrentProcessSessionId(v18);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Cannot find the session data for session 0x%I64x, returning 0x%I64x.",
        v19,
        -1073741811LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_22;
    }
    v14 = *((unsigned int *)this + 5);
    if ( !(_DWORD)v14 || !*((_BYTE *)this + 41) )
    {
      WdLogSingleEntry4(
        3LL,
        *((unsigned int *)this + 5),
        this,
        *((unsigned __int8 *)this + 40),
        *((unsigned __int8 *)this + 41));
      KeLeaveCriticalRegion();
      goto LABEL_17;
    }
    v15 = (_QWORD *)WdLogNewEntry5_WdTrace(v14, v12);
    v15[3] = *((unsigned int *)this + 5);
    v15[4] = this;
    v15[5] = v4;
    v16 = DXGSESSIONDATA::VailSendUnbindCompositionSurface(SessionDataForSpecifiedSession, *((_DWORD *)this + 5), v4);
    v5 = v16;
    if ( v16 < 0 )
    {
      WdLogSingleEntry4(3LL, *((unsigned int *)this + 5), this, v4, v16);
      goto LABEL_22;
    }
    if ( !(_BYTE)v4 )
      *((_BYTE *)this + 41) = 0;
  }
  KeLeaveCriticalRegion();
  if ( v5 < 0 )
LABEL_16:
    WdLogSingleEntry2(3LL, v5, this);
LABEL_17:
  if ( v20[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v20);
  return (unsigned int)v5;
}
