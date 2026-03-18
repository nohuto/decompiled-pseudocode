/*
 * XREFs of ?DxgkpFindDefaultRenderAdapterForSession@@YAJAEAU_LUID@@AEAVDXGADAPTER_REFERENCE@@EAEAE@Z @ 0x1C0164838
 * Callers:
 *     DxgkGetAdapter @ 0x1C0164640 (DxgkGetAdapter.c)
 *     ?DxgkpGetIndirectDisplayPairedAdapter@@YAJPEAVDXGADAPTER@@EAEAVDXGADAPTER_REFERENCE@@@Z @ 0x1C021D790 (-DxgkpGetIndirectDisplayPairedAdapter@@YAJPEAVDXGADAPTER@@EAEAVDXGADAPTER_REFERENCE@@@Z.c)
 * Callees:
 *     ?IsRemoteConnection@DXGPROCESS@@QEBAEXZ @ 0x1C0008D70 (-IsRemoteConnection@DXGPROCESS@@QEBAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000CF20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000D070 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000DB94 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C000F0BC (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?IsCurrentConsoleSession@@YAEXZ @ 0x1C00359A0 (-IsCurrentConsoleSession@@YAEXZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0116DB4 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C011739C (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0119460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkpFindDefaultRenderAdapterForSession(struct _LUID *a1, DXGADAPTER **a2, char a3, bool *a4)
{
  char v7; // di
  DXGPROCESS *Current; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx
  DXGSESSIONMGR *v12; // rdi
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  bool v17; // zf
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  struct DXGGLOBAL *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  struct DXGADAPTER *v31; // rdx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rdx
  struct _LUID *v36; // [rsp+20h] [rbp-18h] BYREF
  DXGADAPTER **v37; // [rsp+28h] [rbp-10h]

  v7 = 1;
  if ( a3 )
  {
    Current = DXGPROCESS::GetCurrent((__int64)a1, (__int64)a2);
    if ( Current )
    {
      if ( DXGPROCESS::IsRemoteConnection(Current) )
      {
        v12 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v10, v9) + 88);
        if ( v12 )
        {
          CurrentProcessSessionId = PsGetCurrentProcessSessionId(v11);
          SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                             v12,
                                             CurrentProcessSessionId);
        }
        else
        {
          SessionDataForSpecifiedSession = 0LL;
        }
        if ( SessionDataForSpecifiedSession )
          v7 = *((_BYTE *)SessionDataForSpecifiedSession + 18496);
        else
          v7 = 0;
      }
    }
  }
  DXGADAPTER_REFERENCE::Assign(a2, 0LL);
  *a4 = v7 == 0;
  if ( v7 )
  {
    v17 = a1->LowPart == 0;
    v36 = a1;
    v37 = a2;
    if ( !v17 || a1->HighPart )
    {
      Global = DXGGLOBAL::GetGlobal(v16, v15);
      DXGGLOBAL::IterateAdaptersWithCallback(
        (__int64)Global,
        (__int64 (__fastcall *)(_QWORD *, __int64))FindHWRenderAdapterByLuid,
        (__int64)&v36,
        2);
    }
    if ( *a2 )
      return 0LL;
    v18 = WdLogNewEntry5_WdEvent(v16, v15);
    *(_QWORD *)(v18 + 24) = a1->HighPart;
    *(_QWORD *)(v18 + 32) = a1->LowPart;
    WdLogEvent5_WdEvent(v18);
    v21 = DXGGLOBAL::GetGlobal(v20, v19);
    DXGGLOBAL::IterateAdaptersWithCallback(
      (__int64)v21,
      (__int64 (__fastcall *)(_QWORD *, __int64))FindFirstHWRenderAdapter,
      (__int64)&v36,
      2);
    if ( *a2 )
      return 0LL;
    v26 = WdLogNewEntry5_WdEvent(v23, v22);
    *(_QWORD *)(v26 + 24) = 4108LL;
    WdLogEvent5_WdEvent(v26);
  }
  if ( *a2 )
    return 0LL;
  DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)&v36, v15);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v36);
  if ( IsCurrentConsoleSession(v28, v27) )
    v31 = (struct DXGADAPTER *)*((_QWORD *)DXGGLOBAL::GetGlobal(v30, v29) + 91);
  else
    v31 = (struct DXGADAPTER *)*((_QWORD *)DXGGLOBAL::GetGlobal(v30, v29) + 89);
  DXGADAPTER_REFERENCE::Assign(a2, v31);
  if ( *a2 )
  {
    if ( (_BYTE)v37 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v36, v32);
    return 0LL;
  }
  v34 = WdLogNewEntry5_WdError(v33, v32);
  *(_QWORD *)(v34 + 24) = -1073741275LL;
  WdLogEvent5_WdError(v34);
  if ( (_BYTE)v37 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v36, v35);
  return 3221226021LL;
}
