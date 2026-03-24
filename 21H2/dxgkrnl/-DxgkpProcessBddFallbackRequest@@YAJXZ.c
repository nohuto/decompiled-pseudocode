/*
 * XREFs of ?DxgkpProcessBddFallbackRequest@@YAJXZ @ 0x1C020C91C
 * Callers:
 *     DxgkEscape @ 0x1C00F9100 (DxgkEscape.c)
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0004130 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00041C0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DXGKCALLONEXIT__lambda_d09497a32bb74d6babe0eba3071d053b___ @ 0x1C00365D8 (DXGKCALLONEXIT__lambda_d09497a32bb74d6babe0eba3071d053b___.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0116C30 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C0133D8C (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?DxgIsRemoteSessionUsingWddmMonitors@@YAHXZ @ 0x1C01340B4 (-DxgIsRemoteSessionUsingWddmMonitors@@YAHXZ.c)
 *     ?DxgIsRemoteSession@@YAHXZ @ 0x1C0163A98 (-DxgIsRemoteSession@@YAHXZ.c)
 *     _lambda_d09497a32bb74d6babe0eba3071d053b_::operator() @ 0x1C020B0EC (_lambda_d09497a32bb74d6babe0eba3071d053b_--operator().c)
 *     ?DxgkpStopRenderAndSessionDisplayAdapters@@YAJAEAW4_DXGK_DIAG_BDD_FALLBACK_STAGE@@@Z @ 0x1C020CB5C (-DxgkpStopRenderAndSessionDisplayAdapters@@YAJAEAW4_DXGK_DIAG_BDD_FALLBACK_STAGE@@@Z.c)
 *     DxgkSetIndirectDisplayRenderAdapter @ 0x1C0226338 (DxgkSetIndirectDisplayRenderAdapter.c)
 */

__int64 __fastcall DxgkpProcessBddFallbackRequest(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v5; // rax
  unsigned int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  bool v12; // zf
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // ebx
  __int64 v20; // rdx
  __int64 v21; // rcx
  DXGSESSIONMGR *v22; // rsi
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  struct _LUID v28; // rax
  struct DXGGLOBAL *Global; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rax
  unsigned int v33; // esi
  struct DXGADAPTER **v34; // rbx
  int v35; // [rsp+20h] [rbp-39h] BYREF
  struct _LUID v36; // [rsp+28h] [rbp-31h] BYREF
  _DWORD v37[2]; // [rsp+30h] [rbp-29h] BYREF
  __int128 *v38; // [rsp+38h] [rbp-21h]
  __int128 v39; // [rsp+40h] [rbp-19h] BYREF
  bool *v40; // [rsp+50h] [rbp-9h]
  int *v41; // [rsp+58h] [rbp-1h]
  int *v42[4]; // [rsp+60h] [rbp+7h] BYREF
  char v43; // [rsp+80h] [rbp+27h]
  bool v44; // [rsp+C8h] [rbp+6Fh] BYREF
  int v45; // [rsp+D0h] [rbp+77h] BYREF
  int v46; // [rsp+D8h] [rbp+7Fh] BYREF

  if ( *((_BYTE *)DXGGLOBAL::GetGlobal(a1, a2) + 304322) )
    return 0LL;
  v5 = WdLogNewEntry5_WdAssertion(v3, v2);
  *(_QWORD *)(v5 + 24) = 11997LL;
  WdLogEvent5_WdAssertion(v5);
  v35 = 0;
  v6 = -1073741823;
  v45 = -1073741823;
  v46 = 1;
  v9 = *((_QWORD *)DXGGLOBAL::GetGlobal(v8, v7) + 105);
  v12 = v9 == *((_QWORD *)DXGGLOBAL::GetGlobal(v11, v10) + 104);
  *(_QWORD *)&v39 = &v45;
  *((_QWORD *)&v39 + 1) = &v46;
  v44 = v12;
  v40 = &v44;
  v41 = &v35;
  DXGKCALLONEXIT__lambda_d09497a32bb74d6babe0eba3071d053b_((__int64)v42, &v39);
  if ( (unsigned int)DxgIsRemoteSession(v14, v13) )
  {
    if ( (unsigned int)DxgIsRemoteSessionUsingWddmMonitors(v16, v15) )
    {
      v19 = 2;
      v35 = 2;
      v22 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v18, v17) + 102);
      if ( v22 )
      {
        CurrentProcessSessionId = PsGetCurrentProcessSessionId(v21, v20);
        SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v22, CurrentProcessSessionId);
      }
      else
      {
        SessionDataForSpecifiedSession = 0LL;
      }
      if ( SessionDataForSpecifiedSession )
        *((_BYTE *)SessionDataForSpecifiedSession + 18496) = 0;
      v25 = *((_QWORD *)DXGGLOBAL::GetGlobal(v21, v20) + 103);
      if ( !v25 )
        goto LABEL_21;
      v28 = *(struct _LUID *)(v25 + 316);
      v37[0] = 0;
      v36 = v28;
      v38 = &v39;
      v37[1] = 1;
      Global = DXGGLOBAL::GetGlobal(v27, v26);
      v19 = 4;
      v45 = DXGGLOBAL::IterateAdaptersWithCallback(
              (__int64)Global,
              (__int64 (__fastcall *)(_QWORD *, __int64))DxgkpAdapterRefCallback,
              (__int64)v37,
              4);
      if ( v45 < 0 )
      {
        v32 = WdLogNewEntry5_WdAssertion(v31, v30);
        *(_QWORD *)(v32 + 24) = 12070LL;
        WdLogEvent5_WdAssertion(v32);
        v6 = v45;
LABEL_22:
        v46 = v19;
        goto LABEL_7;
      }
      if ( !v37[0] )
      {
        v19 = 6;
LABEL_21:
        v6 = -1073741275;
        v45 = -1073741275;
        goto LABEL_22;
      }
      v33 = 0;
      do
      {
        v34 = (struct DXGADAPTER **)&v38[v33];
        v45 = DxgkSetIndirectDisplayRenderAdapter(*v34, &v36);
        DXGADAPTER::ReleaseReference(*v34);
        ++v33;
      }
      while ( v33 < v37[0] );
    }
    else
    {
      v35 = 3;
      if ( v44 )
        goto LABEL_5;
    }
    v46 = 7;
    goto LABEL_6;
  }
  v35 = 1;
LABEL_5:
  v6 = DxgkpStopRenderAndSessionDisplayAdapters((enum _DXGK_DIAG_BDD_FALLBACK_STAGE *)&v46);
LABEL_6:
  v45 = v6;
LABEL_7:
  if ( v43 )
    lambda_d09497a32bb74d6babe0eba3071d053b_::operator()(v42);
  return v6;
}
