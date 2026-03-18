/*
 * XREFs of DxgkAcquireGdiViewIds @ 0x1C0187C94
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C0171310 (DpiFdoStartAdapter.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0116DB4 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?AcquireSessionGdiViewId@DXGSESSIONDATA@@QEAAJPEAK@Z @ 0x1C0299C3C (-AcquireSessionGdiViewId@DXGSESSIONDATA@@QEAAJPEAK@Z.c)
 */

__int64 __fastcall DxgkAcquireGdiViewIds(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4)
{
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rbp
  unsigned int v7; // ebx
  char v8; // si
  __int64 v9; // rbx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // edi
  struct DXGGLOBAL *Global; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax

  SessionDataForSpecifiedSession = 0LL;
  v7 = a2;
  v8 = a1;
  if ( (_BYTE)a1 )
  {
    Global = DXGGLOBAL::GetGlobal(a1, a2);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                       *((DXGSESSIONMGR **)Global + 88),
                                       v7);
    if ( !SessionDataForSpecifiedSession )
    {
      v18 = WdLogNewEntry5_WdError(v17, v16);
      *(_QWORD *)(v18 + 24) = v7;
      *(_QWORD *)(v18 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v18);
      return 3221225485LL;
    }
  }
  v9 = 0LL;
  if ( !*a3 )
    return 0LL;
  while ( 1 )
  {
    v10 = v8
        ? DXGSESSIONDATA::AcquireSessionGdiViewId(SessionDataForSpecifiedSession, (unsigned int *)(a4 + 4 * v9))
        : DMgrAcquireGdiViewId(a4 + 4 * v9);
    v13 = v10;
    if ( v10 < 0 )
      break;
    v9 = (unsigned int)(v9 + 1);
    if ( (unsigned int)v9 >= *a3 )
      return 0LL;
  }
  if ( (_DWORD)v9 )
  {
    *a3 = v9;
    v20 = WdLogNewEntry5_WdError(v12, v11);
    *(_QWORD *)(v20 + 24) = (unsigned int)v9;
    *(_QWORD *)(v20 + 32) = v13;
    WdLogEvent5_WdError(v20);
    return 0LL;
  }
  v19 = WdLogNewEntry5_WdError(v12, v11);
  *(_QWORD *)(v19 + 24) = v13;
  WdLogEvent5_WdError(v19);
  return (unsigned int)v13;
}
