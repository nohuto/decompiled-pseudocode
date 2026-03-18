/*
 * XREFs of ?DxgkSendCreateBundleObject@@YAJKPEAI0@Z @ 0x1C028A668
 * Callers:
 *     ?VailDRTTest@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z @ 0x1C02B5910 (-VailDRTTest@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002808 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BB0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006598 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0113030 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0114888 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?VailSendCreateBundleObject@DXGSESSIONDATA@@QEAAJKPEAI0@Z @ 0x1C02B6E3C (-VailSendCreateBundleObject@DXGSESSIONDATA@@QEAAJKPEAI0@Z.c)
 */

__int64 __fastcall DxgkSendCreateBundleObject(__int64 a1, unsigned int *a2, unsigned int *a3)
{
  unsigned int v5; // r14d
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct DXGPROCESS *Current; // rbx
  __int64 v10; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  DXGSESSIONMGR *v17; // rbx
  unsigned int CurrentProcessSessionId; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rcx
  int BundleObject; // eax
  __int64 v24; // rax
  __int64 v25; // rdx
  _BYTE v26[24]; // [rsp+20h] [rbp-18h] BYREF

  v5 = a1;
  LODWORD(v6) = 0;
  Current = DXGPROCESS::GetCurrent(a1, (__int64)a2);
  if ( !Current )
  {
    v10 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v10 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v10);
    return 3221225485LL;
  }
  KeEnterCriticalRegion();
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v26, *((struct DXGFASTMUTEX *const *)Current + 13), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v26);
  if ( *((_DWORD *)Current + 106) && (*((_BYTE *)Current + 346) || g_OSTestSigningEnabled && (_BYTE)KdDebuggerEnabled) )
  {
    if ( !*((_BYTE *)Current + 488) )
    {
      v6 = -2147483611LL;
LABEL_15:
      v24 = WdLogNewEntry5_WdWarning(v13, v12, v14);
      *(_QWORD *)(v24 + 24) = v6;
      WdLogEvent5_WdWarning(v24);
      goto LABEL_16;
    }
    v17 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v13, v12) + 102);
    if ( v17 )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v16, v15);
      SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v17, CurrentProcessSessionId);
    }
    else
    {
      SessionDataForSpecifiedSession = 0LL;
    }
    if ( SessionDataForSpecifiedSession )
    {
      BundleObject = DXGSESSIONDATA::VailSendCreateBundleObject(SessionDataForSpecifiedSession, v5, a2, a3);
      v6 = BundleObject;
      if ( BundleObject < 0 )
        goto LABEL_15;
    }
    else
    {
      LODWORD(v6) = -1073741811;
      v20 = WdLogNewEntry5_WdError(v16, v15);
      *(_QWORD *)(v20 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v22, v21);
      *(_QWORD *)(v20 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v20);
    }
  }
LABEL_16:
  KeLeaveCriticalRegion();
  if ( v26[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v26, v25);
  return (unsigned int)v6;
}
