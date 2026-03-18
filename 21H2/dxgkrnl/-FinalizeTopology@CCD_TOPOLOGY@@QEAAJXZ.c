/*
 * XREFs of ?FinalizeTopology@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C0162E98
 * Callers:
 *     DxgkFinalizePathsModality @ 0x1C0162DD0 (DxgkFinalizePathsModality.c)
 * Callees:
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C000F45C (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C00138D4 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ?FinalizeTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@K@Z @ 0x1C0162FC0 (-FinalizeTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@K@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0183C78 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C01A46EC (DxgkReleaseSessionModeChangeLock.c)
 */

__int64 __fastcall CCD_TOPOLOGY::FinalizeTopology(CCD_TOPOLOGY *this)
{
  unsigned int v2; // ebx
  DXGSESSIONMGR *v3; // rdi
  unsigned int v4; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  struct DXGPROCESS *Current; // rbp
  int v7; // eax
  unsigned int v8; // edi
  int v9; // eax
  unsigned int CurrentProcessSessionId; // eax
  _BYTE v12[8]; // [rsp+20h] [rbp-58h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-50h] BYREF
  char v14; // [rsp+58h] [rbp-20h]

  v14 = 0;
  v2 = -1073741811;
  v3 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL_GetGlobal() + 122);
  if ( v3
    && (v4 = PsGetCurrentProcessSessionId(),
        (SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v3, v4)) != 0LL) )
  {
    CPROCESSATTACHHELPER::Attach(&ApcState, *((PRKPROCESS *)SessionDataForSpecifiedSession + 2331));
    Current = DXGPROCESS::GetCurrent();
    if ( Current )
    {
      v12[0] = 0;
      v7 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)v12, 1);
      v2 = v7;
      if ( v7 < 0 )
      {
        WdLogSingleEntry1(2LL, v7);
      }
      else
      {
        v8 = 0;
        if ( *(_DWORD *)(*((_QWORD *)this + 8) + 40LL) )
        {
          while ( 1 )
          {
            v9 = CCD_TOPOLOGY::FinalizeTopologyOnAdapter(this, Current, v8);
            v2 = v9;
            if ( v9 < 0 )
              break;
            if ( ++v8 >= *(_DWORD *)(*((_QWORD *)this + 8) + 40LL) )
              goto LABEL_8;
          }
          WdLogSingleEntry2(2LL, v8, v9);
        }
        else
        {
LABEL_8:
          v2 = 0;
        }
      }
      if ( v12[0] )
        DxgkReleaseSessionModeChangeLock();
    }
    else
    {
      WdLogSingleEntry0(2LL);
    }
  }
  else
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId();
    WdLogSingleEntry2(2LL, CurrentProcessSessionId, -1073741811LL);
  }
  if ( v14 )
    KeUnstackDetachProcess(&ApcState);
  return v2;
}
