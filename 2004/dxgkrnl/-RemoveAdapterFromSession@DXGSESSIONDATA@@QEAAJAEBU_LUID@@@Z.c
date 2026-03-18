/*
 * XREFs of ?RemoveAdapterFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@@Z @ 0x1C014C6A0
 * Callers:
 *     ?SetAdapterLuidInRemoteSession@DXGSESSIONDATA@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C001FAB8 (-SetAdapterLuidInRemoteSession@DXGSESSIONDATA@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     DxgkUseAdapterViewInCurrentSession @ 0x1C014C304 (DxgkUseAdapterViewInCurrentSession.c)
 * Callees:
 *     ??_GSESSION_ADAPTER@@QEAAPEAXI@Z @ 0x1C000D3A4 (--_GSESSION_ADAPTER@@QEAAPEAXI@Z.c)
 *     ?GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z @ 0x1C011F0C0 (-GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z.c)
 *     ?Cleanup@SESSION_ADAPTER@@QEAAXXZ @ 0x1C014C864 (-Cleanup@SESSION_ADAPTER@@QEAAXXZ.c)
 */

__int64 __fastcall DXGSESSIONDATA::RemoveAdapterFromSession(DXGSESSIONDATA *this, const struct _LUID *a2)
{
  struct SESSION_ADAPTER *SessionAdapterFromLuid; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  SESSION_ADAPTER *v7; // rbx
  SESSION_ADAPTER **v10; // rdx
  SESSION_ADAPTER **v11; // rcx
  _QWORD *v12; // rax

  SessionAdapterFromLuid = DXGSESSIONDATA::GetSessionAdapterFromLuid(this, a2);
  v7 = SessionAdapterFromLuid;
  if ( SessionAdapterFromLuid )
  {
    if ( (*((_DWORD *)SessionAdapterFromLuid + 12))-- == 1 )
    {
      SESSION_ADAPTER::Cleanup(SessionAdapterFromLuid);
      v10 = (SESSION_ADAPTER **)*((_QWORD *)v7 + 4);
      if ( v10[1] != (SESSION_ADAPTER *)((char *)v7 + 32)
        || (v11 = (SESSION_ADAPTER **)*((_QWORD *)v7 + 5), *v11 != (SESSION_ADAPTER *)((char *)v7 + 32)) )
      {
        __fastfail(3u);
      }
      *v11 = (SESSION_ADAPTER *)v10;
      v10[1] = (SESSION_ADAPTER *)v11;
      SESSION_ADAPTER::`scalar deleting destructor'(v7);
    }
    return 0LL;
  }
  else
  {
    v12 = (_QWORD *)WdLogNewEntry5_WdError(v6, v5);
    v12[3] = a2->HighPart;
    v12[4] = a2->LowPart;
    v12[5] = this;
    v12[6] = -1073741811LL;
    WdLogEvent5_WdError(v12);
    return 3221225485LL;
  }
}
