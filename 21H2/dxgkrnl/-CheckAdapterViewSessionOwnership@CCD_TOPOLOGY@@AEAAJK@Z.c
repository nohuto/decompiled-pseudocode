/*
 * XREFs of ?CheckAdapterViewSessionOwnership@CCD_TOPOLOGY@@AEAAJK@Z @ 0x1C016BB18
 * Callers:
 *     ?ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0133190 (-ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00041C0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0116C30 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z @ 0x1C01216D0 (-GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z.c)
 *     ?GetDisplaySource@SESSION_ADAPTER@@QEBAPEAVDISPLAY_SOURCE@@I@Z @ 0x1C0121708 (-GetDisplaySource@SESSION_ADAPTER@@QEBAPEAVDISPLAY_SOURCE@@I@Z.c)
 *     ?MarkPathsApplyFailure@CCD_TOPOLOGY@@AEAAXAEBU_LUID@@IJ@Z @ 0x1C02EAF6C (-MarkPathsApplyFailure@CCD_TOPOLOGY@@AEAAXAEBU_LUID@@IJ@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::CheckAdapterViewSessionOwnership(CCD_TOPOLOGY *this, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  DXGSESSIONMGR *v6; // rbx
  unsigned int CurrentProcessSessionId; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // r8
  __int64 v9; // r14
  __int64 v10; // rdx
  __int64 v11; // rcx
  SESSION_ADAPTER *SessionAdapterFromLuid; // r12
  unsigned int v13; // edi
  unsigned int i; // esi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  _QWORD *v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  _QWORD *v24; // rbx
  __int64 v25; // rdx

  v2 = (unsigned int)a2;
  v6 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal((__int64)this, a2) + 102);
  if ( v6 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v5, v4);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v6, CurrentProcessSessionId);
  }
  else
  {
    SessionDataForSpecifiedSession = 0LL;
  }
  if ( SessionDataForSpecifiedSession )
  {
    v9 = 336 * v2;
    SessionAdapterFromLuid = DXGSESSIONDATA::GetSessionAdapterFromLuid(
                               SessionDataForSpecifiedSession,
                               (const struct _LUID *)(336 * v2 + *(_QWORD *)(*((_QWORD *)this + 8) + 40LL)));
    if ( SessionAdapterFromLuid )
    {
      v13 = *(_DWORD *)(v10 + 84);
      for ( i = 0; v13; v13 >>= 1 )
      {
        if ( (v13 & 1) != 0 && !SESSION_ADAPTER::GetDisplaySource(SessionAdapterFromLuid, i) )
        {
          v24 = (_QWORD *)WdLogNewEntry5_WdError(v16, v15);
          v24[3] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v9 + 4);
          v25 = *(_QWORD *)(*((_QWORD *)this + 8) + 40LL);
          v24[4] = *(unsigned int *)(v25 + v9);
          v24[5] = i;
          v24[6] = (unsigned int)PsGetCurrentProcessSessionId(i, v25);
          v24[7] = -1073741790LL;
          WdLogEvent5_WdError(v24);
          *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v9 + 84) &= ~(1 << i);
          CCD_TOPOLOGY::MarkPathsApplyFailure(
            this,
            (const struct _LUID *)(v9 + *(_QWORD *)(*((_QWORD *)this + 8) + 40LL)),
            i,
            -1073741790);
        }
        ++i;
      }
      return 0LL;
    }
    else
    {
      v21 = (_QWORD *)WdLogNewEntry5_WdError(v11, v10);
      v21[3] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v9 + 4);
      v22 = *(_QWORD *)(*((_QWORD *)this + 8) + 40LL);
      v23 = *(unsigned int *)(v22 + 336 * v2);
      v21[4] = v23;
      v21[5] = (unsigned int)PsGetCurrentProcessSessionId(v23, v22);
      v21[6] = -1073741790LL;
      WdLogEvent5_WdError(v21);
      return 3221225506LL;
    }
  }
  else
  {
    v18 = WdLogNewEntry5_WdError(v5, v4);
    *(_QWORD *)(v18 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v20, v19);
    *(_QWORD *)(v18 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v18);
    return 3221225485LL;
  }
}
