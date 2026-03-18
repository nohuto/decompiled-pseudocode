/*
 * XREFs of ?Initialize@DXGCOMPOSITIONSURFACEPROXY@@QEAAJXZ @ 0x1C02DF8F4
 * Callers:
 *     ?DxgkCreateRemoteCompositionSurfaceObjectForPairing@@YAJPEAVCompositionSurfaceObject@@PEAPEAUIPairedSurfaceObject@@PEAPEAX@Z @ 0x1C02DF41C (-DxgkCreateRemoteCompositionSurfaceObjectForPairing@@YAJPEAVCompositionSurfaceObject@@PEAPEAUIPa.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000C3F8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0183C78 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?VailRegisterCompositionSurfaceProxy@DXGSESSIONDATA@@QEAAJPEAVDXGCOMPOSITIONSURFACEPROXY@@@Z @ 0x1C0351EA4 (-VailRegisterCompositionSurfaceProxy@DXGSESSIONDATA@@QEAAJPEAVDXGCOMPOSITIONSURFACEPROXY@@@Z.c)
 */

__int64 __fastcall DXGCOMPOSITIONSURFACEPROXY::Initialize(
        DXGCOMPOSITIONSURFACEPROXY *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v5; // ebx
  struct DXGPROCESS *Current; // rdi
  __int64 v8; // rcx
  DXGSESSIONMGR *v9; // rbx
  unsigned int v10; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  int v12; // eax
  unsigned int CurrentProcessSessionId; // eax
  __int64 v14; // rcx
  unsigned int v15; // eax
  _BYTE v16[24]; // [rsp+50h] [rbp-18h] BYREF

  v5 = 0;
  Current = DXGPROCESS::GetCurrent((__int64)this, a2, a3, a4);
  if ( Current )
  {
    KeEnterCriticalRegion();
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v16, (struct DXGPROCESS *)((char *)Current + 104), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v16);
    if ( *((_DWORD *)Current + 126) && (*((_DWORD *)Current + 106) & 4) != 0 )
    {
      if ( *((_BYTE *)Current + 600) )
      {
        v9 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL_GetGlobal() + 122);
        if ( v9
          && (v10 = PsGetCurrentProcessSessionId(v8),
              (SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v9, v10)) != 0LL) )
        {
          v12 = DXGSESSIONDATA::VailRegisterCompositionSurfaceProxy(SessionDataForSpecifiedSession, this);
          v5 = v12;
          if ( v12 < 0 )
            WdLogSingleEntry2(3LL, v12, this);
        }
        else
        {
          v5 = -1073741811;
          CurrentProcessSessionId = PsGetCurrentProcessSessionId(v8);
          WdLogSingleEntry2(2LL, CurrentProcessSessionId, -1073741811LL);
          v15 = PsGetCurrentProcessSessionId(v14);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Cannot find the session data for session 0x%I64x, returning 0x%I64x.",
            v15,
            -1073741811LL,
            0LL,
            0LL,
            0LL);
        }
      }
      else
      {
        v5 = -2147483611;
        WdLogSingleEntry1(3LL, -2147483611LL);
      }
    }
    KeLeaveCriticalRegion();
    if ( v16[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v16);
    return v5;
  }
  else
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
}
