/*
 * XREFs of ?CreateSession@DXGSESSIONMGR@@QEAAJXZ @ 0x1C015AA08
 * Callers:
 *     DxgkNotifySessionStateChange @ 0x1C015A8A0 (DxgkNotifySessionStateChange.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000A840 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000CF20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000D070 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000DBC4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?InitializeForSession@DXGVALIDATION@@QEAAJPEAVDXGSESSIONDATA@@@Z @ 0x1C001ABE8 (-InitializeForSession@DXGVALIDATION@@QEAAJPEAVDXGSESSIONDATA@@@Z.c)
 *     ??0DXGSESSIONDATA@@QEAA@K@Z @ 0x1C015AB74 (--0DXGSESSIONDATA@@QEAA@K@Z.c)
 *     ?StartPnPTransitionOnSession@DXGSESSIONDATA@@QEAAXPEAU_PNP_TRANS_TOKEN@@@Z @ 0x1C01700D0 (-StartPnPTransitionOnSession@DXGSESSIONDATA@@QEAAXPEAU_PNP_TRANS_TOKEN@@@Z.c)
 *     ?IncreaseNumSessions@DXGSESSIONMGR@@AEAAJK@Z @ 0x1C029A398 (-IncreaseNumSessions@DXGSESSIONMGR@@AEAAJK@Z.c)
 */

__int64 __fastcall DXGSESSIONMGR::CreateSession(DXGSESSIONMGR **this)
{
  int v2; // ebp
  __int64 CurrentProcessSessionId; // rsi
  struct _PNP_TRANS_TOKEN *v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdi
  DXGSESSIONDATA *v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  DXGSESSIONDATA *v10; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v12; // rcx
  DXGSESSIONMGR *i; // rsi
  _QWORD *v14; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  _BYTE v24[16]; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v25[24]; // [rsp+30h] [rbp-18h] BYREF

  v2 = 0;
  CurrentProcessSessionId = (unsigned int)PsGetCurrentProcessSessionId(this);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v25, (struct DXGFASTMUTEX *const)this, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v25);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v24, (struct DXGFASTMUTEX *const)(this + 10), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v24);
  if ( (unsigned int)CurrentProcessSessionId >= *((_DWORD *)this + 18) )
  {
    v2 = DXGSESSIONMGR::IncreaseNumSessions((DXGSESSIONMGR *)this, CurrentProcessSessionId);
    if ( v2 < 0 )
      goto LABEL_12;
    if ( (unsigned int)CurrentProcessSessionId >= *((_DWORD *)this + 18) )
    {
      v16 = WdLogNewEntry5_WdAssertion(v5, v4);
      *(_QWORD *)(v16 + 24) = 4909LL;
      WdLogEvent5_WdAssertion(v16);
    }
  }
  v6 = CurrentProcessSessionId;
  if ( *((_QWORD *)this[5] + CurrentProcessSessionId)
    && (v17 = WdLogNewEntry5_WdAssertion(v5, v4),
        *(_QWORD *)(v17 + 24) = 4910LL,
        WdLogEvent5_WdAssertion(v17),
        *((_QWORD *)this[5] + CurrentProcessSessionId)) )
  {
    v21 = WdLogNewEntry5_WdWarning(v19, v18, v20);
    *(_QWORD *)(v21 + 24) = CurrentProcessSessionId;
    *(_QWORD *)(v21 + 32) = *((_QWORD *)this[5] + CurrentProcessSessionId);
    WdLogEvent5_WdWarning(v21);
  }
  else
  {
    v7 = (DXGSESSIONDATA *)operator new[](0x4AA8uLL, 0x4B677844u, (POOL_TYPE)512);
    if ( v7 )
      v10 = DXGSESSIONDATA::DXGSESSIONDATA(v7, CurrentProcessSessionId);
    else
      v10 = 0LL;
    *((_QWORD *)this[5] + CurrentProcessSessionId) = v10;
    if ( !*((_QWORD *)this[5] + CurrentProcessSessionId) )
    {
      *((_DWORD *)this + 33) |= 1u;
      v22 = WdLogNewEntry5_WdLowResource(v10, v4, v8, v9);
      *(_QWORD *)(v22 + 24) = CurrentProcessSessionId;
      WdLogEvent5_WdLowResource(v22);
      v2 = -1073741801;
    }
  }
  if ( v2 >= 0 )
  {
    Global = DXGGLOBAL::GetGlobal((__int64)v10, (__int64)v4);
    v2 = DXGVALIDATION::InitializeForSession(
           (struct DXGGLOBAL *)((char *)Global + 1436),
           *((struct DXGSESSIONDATA **)this[5] + CurrentProcessSessionId));
    if ( v2 >= 0 )
    {
      for ( i = this[40]; i != (DXGSESSIONMGR *)(this + 40); i = *(DXGSESSIONMGR **)i )
      {
        v4 = (DXGSESSIONMGR *)((char *)i - 8);
        v12 = 0x100000000LL;
        v23 = *((_QWORD *)i + 4);
        if ( v23 == 0x100000000LL || v23 == v6 )
          DXGSESSIONDATA::StartPnPTransitionOnSession(*((DXGSESSIONDATA **)this[5] + v6), v4);
      }
      v14 = (_QWORD *)WdLogNewEntry5_WdEvent(v12, v4);
      v14[3] = v6;
      v14[4] = *((_QWORD *)this[5] + v6);
      v14[5] = *((unsigned int *)this + 18);
      WdLogEvent5_WdEvent(v14);
    }
  }
LABEL_12:
  if ( v24[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v24, (__int64)v4);
  if ( v25[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v25, (__int64)v4);
  return (unsigned int)v2;
}
