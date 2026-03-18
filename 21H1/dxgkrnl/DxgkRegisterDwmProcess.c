/*
 * XREFs of DxgkRegisterDwmProcess @ 0x1C01582F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z @ 0x1C00118CC (-DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z.c)
 *     ?VidSchRegisterAsDwm@VIDSCH_EXPORT@@QEAAJPEAVDXGPROCESS@@@Z @ 0x1C001A33C (-VidSchRegisterAsDwm@VIDSCH_EXPORT@@QEAAJPEAVDXGPROCESS@@@Z.c)
 *     ?ReferenceCurrentProcessAsDwm@DXGSESSIONDATA@@QEAAXXZ @ 0x1C001A384 (-ReferenceCurrentProcessAsDwm@DXGSESSIONDATA@@QEAAXXZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0116DB4 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0119460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkRegisterDwmProcess(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  struct DXGPROCESS *Current; // rbx
  unsigned int CurrentProcessSessionId; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rcx
  DXGSESSIONMGR *v9; // rbx
  unsigned int v10; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // edi
  __int64 i; // rsi
  VIDSCH_EXPORT *v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  struct DXGPROCESS *v19; // rax
  __int64 result; // rax
  __int64 v21; // rax

  Current = DXGPROCESS::GetCurrent(a1, a2);
  if ( Current )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v3);
    DxgkLogCodePointPacketForSession(0x73u, CurrentProcessSessionId, 0, 1, 0, 0LL);
    *((_BYTE *)Current + 346) = 1;
    v9 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v7, v6) + 88);
    if ( v9 )
    {
      v10 = PsGetCurrentProcessSessionId(v8);
      SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v9, v10);
    }
    else
    {
      SessionDataForSpecifiedSession = 0LL;
    }
    DXGSESSIONDATA::ReferenceCurrentProcessAsDwm(SessionDataForSpecifiedSession);
    v14 = 0;
    for ( i = 120LL; ; i += 8LL )
    {
      DXGGLOBAL::GetGlobal(v13, v12);
      if ( *(_QWORD *)((char *)&DXGGLOBAL::m_pDxgmmsExport + i - 120) )
      {
        v16 = *(VIDSCH_EXPORT **)((char *)DXGGLOBAL::GetGlobal(v13, v12) + i);
        v19 = DXGPROCESS::GetCurrent(v18, v17);
        result = VIDSCH_EXPORT::VidSchRegisterAsDwm(v16, v19);
        if ( (int)result < 0 )
          break;
      }
      if ( (unsigned int)++v14 >= 2 )
        return 0LL;
    }
  }
  else
  {
    v21 = WdLogNewEntry5_WdError(v3, v2);
    *(_QWORD *)(v21 + 24) = 3530LL;
    WdLogEvent5_WdError(v21);
    return 3221225473LL;
  }
  return result;
}
