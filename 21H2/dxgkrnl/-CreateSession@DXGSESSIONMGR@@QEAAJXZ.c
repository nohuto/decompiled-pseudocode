/*
 * XREFs of ?CreateSession@DXGSESSIONMGR@@QEAAJXZ @ 0x1C0160D94
 * Callers:
 *     DxgkNotifySessionStateChange @ 0x1C0160C10 (DxgkNotifySessionStateChange.c)
 * Callees:
 *     ?InitializeForSession@DXGVALIDATION@@QEAAJPEAVDXGSESSIONDATA@@@Z @ 0x1C0002CC4 (-InitializeForSession@DXGVALIDATION@@QEAAJPEAVDXGSESSIONDATA@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000C3F8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGSESSIONDATA@@QEAA@K@Z @ 0x1C0160F74 (--0DXGSESSIONDATA@@QEAA@K@Z.c)
 *     ?StartPnPTransitionOnSession@DXGSESSIONDATA@@QEAAXPEAU_PNP_TRANS_TOKEN@@@Z @ 0x1C01FD2F0 (-StartPnPTransitionOnSession@DXGSESSIONDATA@@QEAAXPEAU_PNP_TRANS_TOKEN@@@Z.c)
 *     ?IncreaseNumSessions@DXGSESSIONMGR@@AEAAJK@Z @ 0x1C0347DE8 (-IncreaseNumSessions@DXGSESSIONMGR@@AEAAJK@Z.c)
 */

__int64 __fastcall DXGSESSIONMGR::CreateSession(DXGSESSIONMGR **this)
{
  __int64 CurrentProcessSessionId; // rsi
  __int64 v3; // r9
  DXGSESSIONMGR *v4; // rax
  __int64 v5; // rdi
  __int64 v6; // r8
  DXGSESSIONDATA *v7; // rax
  DXGSESSIONDATA *v8; // rcx
  struct DXGGLOBAL *Global; // rax
  int v10; // ebp
  DXGSESSIONMGR *i; // rsi
  __int64 v13; // rax
  _BYTE v14[16]; // [rsp+50h] [rbp-38h] BYREF
  _BYTE v15[16]; // [rsp+60h] [rbp-28h] BYREF

  CurrentProcessSessionId = (unsigned int)PsGetCurrentProcessSessionId();
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v15, (struct DXGFASTMUTEX *const)this, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v15);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v14, (struct DXGFASTMUTEX *const)(this + 11), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v14);
  if ( (unsigned int)CurrentProcessSessionId < *((_DWORD *)this + 20)
    || (v10 = DXGSESSIONMGR::IncreaseNumSessions((DXGSESSIONMGR *)this, CurrentProcessSessionId), v10 >= 0) )
  {
    if ( (unsigned int)CurrentProcessSessionId >= *((_DWORD *)this + 20) )
    {
      WdLogSingleEntry1(1LL, 5084LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"SessionId < m_SessionDataArraySize",
        5084LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v4 = this[6];
    v5 = CurrentProcessSessionId;
    if ( *((_QWORD *)v4 + CurrentProcessSessionId) )
    {
      WdLogSingleEntry1(1LL, 5085LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"m_pSessionData[SessionId] == NULL",
        5085LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v4 = this[6];
    }
    v6 = *((_QWORD *)v4 + CurrentProcessSessionId);
    if ( v6 )
    {
      WdLogSingleEntry2(3LL, CurrentProcessSessionId, v6);
    }
    else
    {
      v7 = (DXGSESSIONDATA *)operator new[](0x4B20uLL, 0x4B677844u, 64LL, v3);
      if ( v7 )
        v8 = DXGSESSIONDATA::DXGSESSIONDATA(v7, CurrentProcessSessionId);
      else
        v8 = 0LL;
      *((_QWORD *)this[6] + CurrentProcessSessionId) = v8;
      if ( !*((_QWORD *)this[6] + CurrentProcessSessionId) )
      {
        *((_DWORD *)this + 37) |= 1u;
        WdLogSingleEntry1(6LL, CurrentProcessSessionId);
        DxgkLogInternalTriageEvent(
          0LL,
          262145,
          -1,
          (__int64)L"Unable to allocate dxg session data for session 0x%I64x",
          CurrentProcessSessionId,
          0LL,
          0LL,
          0LL,
          0LL);
        v10 = -1073741801;
        goto LABEL_14;
      }
    }
    Global = DXGGLOBAL_GetGlobal();
    v10 = DXGVALIDATION::InitializeForSession(
            (struct DXGGLOBAL *)((char *)Global + 1716),
            *((struct DXGSESSIONDATA **)this[6] + CurrentProcessSessionId));
    if ( v10 >= 0 )
    {
      for ( i = this[40]; i != (DXGSESSIONMGR *)(this + 40); i = *(DXGSESSIONMGR **)i )
      {
        v13 = *((_QWORD *)i + 4);
        if ( v13 == 0x100000000LL || v13 == v5 )
          DXGSESSIONDATA::StartPnPTransitionOnSession(
            *((DXGSESSIONDATA **)this[6] + v5),
            (DXGSESSIONMGR *)((char *)i - 8));
      }
      WdLogSingleEntry3(4LL, v5, *((_QWORD *)this[6] + v5), *((unsigned int *)this + 20));
    }
  }
LABEL_14:
  if ( v14[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v14);
  if ( v15[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v15);
  return (unsigned int)v10;
}
