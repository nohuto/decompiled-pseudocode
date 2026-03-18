/*
 * XREFs of ?GetDebugInfo@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_SNAPSHOT@@@Z @ 0x1C02954D0
 * Callers:
 *     OutputDuplGetDebugInfo @ 0x1C0299428 (OutputDuplGetDebugInfo.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000CF20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000D070 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000DBC4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0116DB4 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?AddDebugInfo@OUTPUTDUPL_SESSION_MGR@@QEAAXPEAU_D3DKMT_OUTPUTDUPL_SNAPSHOT@@@Z @ 0x1C0293DF4 (-AddDebugInfo@OUTPUTDUPL_SESSION_MGR@@QEAAXPEAU_D3DKMT_OUTPUTDUPL_SNAPSHOT@@@Z.c)
 *     ?IsDiagRegKeyEnabled@OUTPUTDUPL_MGR@@AEAAHXZ @ 0x1C0295D80 (-IsDiagRegKeyEnabled@OUTPUTDUPL_MGR@@AEAAHXZ.c)
 *     ?GetDebugInfo@OUTPUTDUPL_CONTEXT@@QEAAXPEAU_OUTPUTDUPL_CONTEXT_DEBUG_INFO@@@Z @ 0x1C029C2BC (-GetDebugInfo@OUTPUTDUPL_CONTEXT@@QEAAXPEAU_OUTPUTDUPL_CONTEXT_DEBUG_INFO@@@Z.c)
 */

__int64 __fastcall OUTPUTDUPL_MGR::GetDebugInfo(UINT *this, struct _D3DKMT_OUTPUTDUPL_SNAPSHOT *a2)
{
  __int64 NumOutputDuplContexts; // rdx
  unsigned __int64 v6; // rcx
  UINT v7; // esi
  __int64 v8; // rbx
  OUTPUTDUPL_CONTEXT **v9; // r14
  unsigned int v10; // ebx
  char *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  DXGSESSIONMGR *v14; // rbx
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v17; // rax
  struct DXGFASTMUTEX *const *v18; // rcx
  _BYTE v19[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( !(unsigned int)OUTPUTDUPL_MGR::IsDiagRegKeyEnabled((OUTPUTDUPL_MGR *)this) )
    return 3221225506LL;
  NumOutputDuplContexts = this[13];
  v6 = 56 * (unsigned int)NumOutputDuplContexts * this[2] + 24LL;
  if ( a2->Size < v6 )
  {
    a2->Size = 56 * NumOutputDuplContexts * this[2] + 24;
    return 1075707914LL;
  }
  v7 = 0;
  a2->NumVidPnSources = NumOutputDuplContexts;
  for ( a2->NumOutputDuplContexts = this[2]; v7 < a2->NumVidPnSources; ++v7 )
  {
    v8 = *((_QWORD *)this + 2) + 32LL * v7;
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v19, *(struct DXGFASTMUTEX *const *)v8, 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v19);
    v9 = *(OUTPUTDUPL_CONTEXT ***)(v8 + 8);
    v10 = 0;
    NumOutputDuplContexts = a2->NumOutputDuplContexts;
    if ( (_DWORD)NumOutputDuplContexts )
    {
      do
      {
        v11 = (char *)a2 + 56 * v10 + 56 * (_DWORD)NumOutputDuplContexts * v7;
        if ( *v9 )
        {
          OUTPUTDUPL_CONTEXT::GetDebugInfo(*v9, (struct _OUTPUTDUPL_CONTEXT_DEBUG_INFO *)(v11 + 24));
        }
        else
        {
          v6 = 0LL;
          *(_OWORD *)(v11 + 24) = 0LL;
          *(_OWORD *)(v11 + 40) = 0LL;
          *(_OWORD *)(v11 + 56) = 0LL;
          *((_QWORD *)v11 + 9) = 0LL;
        }
        NumOutputDuplContexts = a2->NumOutputDuplContexts;
        ++v10;
        ++v9;
      }
      while ( v10 < (unsigned int)NumOutputDuplContexts );
    }
    if ( v19[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v19, NumOutputDuplContexts);
  }
  v14 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v6, NumOutputDuplContexts) + 88);
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
    v17 = WdLogNewEntry5_WdError(v13, v12);
    *(_QWORD *)(v17 + 24) = 2236LL;
LABEL_19:
    WdLogEvent5_WdError(v17);
    return 3221225485LL;
  }
  v18 = (struct DXGFASTMUTEX *const *)*((_QWORD *)SessionDataForSpecifiedSession + 1);
  if ( !v18 )
  {
    v17 = WdLogNewEntry5_WdError(0LL, v12);
    *(_QWORD *)(v17 + 24) = 2243LL;
    goto LABEL_19;
  }
  OUTPUTDUPL_SESSION_MGR::AddDebugInfo(v18, a2);
  return 0LL;
}
