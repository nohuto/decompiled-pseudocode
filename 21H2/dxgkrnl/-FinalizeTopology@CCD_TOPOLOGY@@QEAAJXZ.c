/*
 * XREFs of ?FinalizeTopology@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C014D044
 * Callers:
 *     DxgkFinalizePathsModality @ 0x1C014CF80 (DxgkFinalizePathsModality.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00041C0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0007D94 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C000D12C (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0115560 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0116C30 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C0122794 (DxgkReleaseSessionModeChangeLock.c)
 *     ?FinalizeTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@K@Z @ 0x1C014D16C (-FinalizeTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@K@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::FinalizeTopology(CCD_TOPOLOGY *this, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  DXGSESSIONMGR *v5; // rbx
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  unsigned int v8; // edi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct DXGPROCESS *Current; // rbp
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rbx
  unsigned int v18; // edi
  int v19; // eax
  __int64 v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rax
  _BYTE v26[8]; // [rsp+20h] [rbp-58h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-50h] BYREF
  char v28; // [rsp+58h] [rbp-20h]

  v28 = 0;
  v5 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal((__int64)this, a2) + 102);
  if ( v5 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v4, v3);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v5, CurrentProcessSessionId);
  }
  else
  {
    SessionDataForSpecifiedSession = 0LL;
  }
  v8 = -1073741811;
  if ( !SessionDataForSpecifiedSession )
  {
    v21 = WdLogNewEntry5_WdError(v4, v3);
    *(_QWORD *)(v21 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v23, v22);
    v24 = v21;
    *(_QWORD *)(v21 + 32) = -1073741811LL;
LABEL_18:
    WdLogEvent5_WdError(v24);
    goto LABEL_12;
  }
  CPROCESSATTACHHELPER::Attach(&ApcState, *((PRKPROCESS *)SessionDataForSpecifiedSession + 2329));
  Current = DXGPROCESS::GetCurrent(v10, v9);
  if ( !Current )
  {
    v24 = WdLogNewEntry5_WdError(v12, v11);
    goto LABEL_18;
  }
  v26[0] = 0;
  v14 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)v26, 1);
  v17 = v14;
  if ( v14 < 0 )
  {
    v25 = WdLogNewEntry5_WdError(v16, v15);
    *(_QWORD *)(v25 + 24) = v17;
  }
  else
  {
    v18 = 0;
    if ( !*(_DWORD *)(*((_QWORD *)this + 8) + 36LL) )
    {
LABEL_9:
      v8 = 0;
      goto LABEL_10;
    }
    while ( 1 )
    {
      v19 = CCD_TOPOLOGY::FinalizeTopologyOnAdapter(this, Current, v18);
      v17 = v19;
      if ( v19 < 0 )
        break;
      if ( ++v18 >= *(_DWORD *)(*((_QWORD *)this + 8) + 36LL) )
        goto LABEL_9;
    }
    v25 = WdLogNewEntry5_WdError(v16, v15);
    *(_QWORD *)(v25 + 24) = v18;
    *(_QWORD *)(v25 + 32) = v17;
  }
  WdLogEvent5_WdError(v25);
  v8 = v17;
LABEL_10:
  if ( v26[0] )
    DxgkReleaseSessionModeChangeLock(v16, v15);
LABEL_12:
  if ( v28 )
    KeUnstackDetachProcess(&ApcState);
  return v8;
}
