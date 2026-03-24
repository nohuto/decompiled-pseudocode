/*
 * XREFs of ?CreateSession@DXGSESSIONMGR@@QEAAJXZ @ 0x1C0155550
 * Callers:
 *     DxgkNotifySessionStateChange @ 0x1C01553E0 (DxgkNotifySessionStateChange.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002848 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BF0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002D2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00041C0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006910 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?InitializeForSession@DXGVALIDATION@@QEAAJPEAVDXGSESSIONDATA@@@Z @ 0x1C0012D28 (-InitializeForSession@DXGVALIDATION@@QEAAJPEAVDXGSESSIONDATA@@@Z.c)
 *     ??0DXGSESSIONDATA@@QEAA@K@Z @ 0x1C0155834 (--0DXGSESSIONDATA@@QEAA@K@Z.c)
 *     ?StartPnPTransitionOnSession@DXGSESSIONDATA@@QEAAXPEAU_PNP_TRANS_TOKEN@@@Z @ 0x1C01832E8 (-StartPnPTransitionOnSession@DXGSESSIONDATA@@QEAAXPEAU_PNP_TRANS_TOKEN@@@Z.c)
 *     ?IncreaseNumSessions@DXGSESSIONMGR@@AEAAJK@Z @ 0x1C029ED68 (-IncreaseNumSessions@DXGSESSIONMGR@@AEAAJK@Z.c)
 */

__int64 __fastcall DXGSESSIONMGR::CreateSession(DXGSESSIONMGR **this, __int64 a2)
{
  int v3; // ebp
  __int64 CurrentProcessSessionId; // rsi
  struct _PNP_TRANS_TOKEN *v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdi
  DXGSESSIONDATA *v8; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  DXGSESSIONDATA *v11; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v13; // rcx
  DXGSESSIONMGR *i; // rsi
  _QWORD *v15; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  _BYTE v25[16]; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v26[24]; // [rsp+30h] [rbp-18h] BYREF

  v3 = 0;
  CurrentProcessSessionId = (unsigned int)PsGetCurrentProcessSessionId(this, a2);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v26, (struct DXGFASTMUTEX *const)this, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v26);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v25, (struct DXGFASTMUTEX *const)(this + 10), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v25);
  if ( (unsigned int)CurrentProcessSessionId >= *((_DWORD *)this + 18) )
  {
    v3 = DXGSESSIONMGR::IncreaseNumSessions((DXGSESSIONMGR *)this, CurrentProcessSessionId);
    if ( v3 < 0 )
      goto LABEL_12;
    if ( (unsigned int)CurrentProcessSessionId >= *((_DWORD *)this + 18) )
    {
      v17 = WdLogNewEntry5_WdAssertion(v6, v5);
      *(_QWORD *)(v17 + 24) = 4909LL;
      WdLogEvent5_WdAssertion(v17);
    }
  }
  v7 = CurrentProcessSessionId;
  if ( *((_QWORD *)this[5] + CurrentProcessSessionId)
    && (v18 = WdLogNewEntry5_WdAssertion(v6, v5),
        *(_QWORD *)(v18 + 24) = 4910LL,
        WdLogEvent5_WdAssertion(v18),
        *((_QWORD *)this[5] + CurrentProcessSessionId)) )
  {
    v22 = WdLogNewEntry5_WdWarning(v20, v19, v21);
    *(_QWORD *)(v22 + 24) = CurrentProcessSessionId;
    *(_QWORD *)(v22 + 32) = *((_QWORD *)this[5] + CurrentProcessSessionId);
    WdLogEvent5_WdWarning(v22);
  }
  else
  {
    v8 = (DXGSESSIONDATA *)operator new[](0x4AA8uLL, 0x4B677844u, (POOL_TYPE)512);
    if ( v8 )
      v11 = DXGSESSIONDATA::DXGSESSIONDATA(v8, CurrentProcessSessionId);
    else
      v11 = 0LL;
    *((_QWORD *)this[5] + CurrentProcessSessionId) = v11;
    if ( !*((_QWORD *)this[5] + CurrentProcessSessionId) )
    {
      *((_DWORD *)this + 33) |= 1u;
      v23 = WdLogNewEntry5_WdLowResource(v11, v5, v9, v10);
      *(_QWORD *)(v23 + 24) = CurrentProcessSessionId;
      WdLogEvent5_WdLowResource(v23);
      v3 = -1073741801;
    }
  }
  if ( v3 >= 0 )
  {
    Global = DXGGLOBAL::GetGlobal((__int64)v11, (__int64)v5);
    v3 = DXGVALIDATION::InitializeForSession(
           (struct DXGGLOBAL *)((char *)Global + 1548),
           *((struct DXGSESSIONDATA **)this[5] + CurrentProcessSessionId));
    if ( v3 >= 0 )
    {
      for ( i = this[40]; i != (DXGSESSIONMGR *)(this + 40); i = *(DXGSESSIONMGR **)i )
      {
        v5 = (DXGSESSIONMGR *)((char *)i - 8);
        v13 = 0x100000000LL;
        v24 = *((_QWORD *)i + 4);
        if ( v24 == 0x100000000LL || v24 == v7 )
          DXGSESSIONDATA::StartPnPTransitionOnSession(*((DXGSESSIONDATA **)this[5] + v7), v5);
      }
      v15 = (_QWORD *)WdLogNewEntry5_WdEvent(v13, v5);
      v15[3] = v7;
      v15[4] = *((_QWORD *)this[5] + v7);
      v15[5] = *((unsigned int *)this + 18);
      WdLogEvent5_WdEvent(v15);
    }
  }
LABEL_12:
  if ( v25[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v25, (__int64)v5);
  if ( v26[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v26, (__int64)v5);
  return (unsigned int)v3;
}
