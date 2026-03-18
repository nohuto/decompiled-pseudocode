/*
 * XREFs of DxgkRegisterDwmProcess @ 0x1C0161650
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?VidSchRegisterAsDwm@VIDSCH_EXPORT@@QEAAJPEAVDXGPROCESS@@@Z @ 0x1C0019378 (-VidSchRegisterAsDwm@VIDSCH_EXPORT@@QEAAJPEAVDXGPROCESS@@@Z.c)
 *     ?ReferenceCurrentProcessAsDwm@DXGSESSIONDATA@@QEAAXXZ @ 0x1C00193C0 (-ReferenceCurrentProcessAsDwm@DXGSESSIONDATA@@QEAAXXZ.c)
 *     ?DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z @ 0x1C0019438 (-DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0113030 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0114888 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 */

__int64 __fastcall DxgkRegisterDwmProcess(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  struct DXGPROCESS *Current; // rbx
  unsigned int CurrentProcessSessionId; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  DXGSESSIONMGR *v10; // rbx
  unsigned int v11; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // edi
  __int64 i; // rsi
  VIDSCH_EXPORT *v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  struct DXGPROCESS *v20; // rax
  __int64 result; // rax
  __int64 v22; // rax

  Current = DXGPROCESS::GetCurrent(a1, a2);
  if ( Current )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v3, v2);
    DxgkLogCodePointPacketForSession(0x73u, CurrentProcessSessionId, 0, 1, 0, 0LL);
    *((_BYTE *)Current + 346) = 1;
    v10 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v7, v6) + 102);
    if ( v10 )
    {
      v11 = PsGetCurrentProcessSessionId(v9, v8);
      SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v10, v11);
    }
    else
    {
      SessionDataForSpecifiedSession = 0LL;
    }
    DXGSESSIONDATA::ReferenceCurrentProcessAsDwm(SessionDataForSpecifiedSession);
    v15 = 0;
    for ( i = 232LL; ; i += 8LL )
    {
      DXGGLOBAL::GetGlobal(v14, v13);
      if ( *(_QWORD *)((char *)&DXGGLOBAL::m_pDxgmmsExport + i - 232) )
      {
        v17 = *(VIDSCH_EXPORT **)((char *)DXGGLOBAL::GetGlobal(v14, v13) + i);
        v20 = DXGPROCESS::GetCurrent(v19, v18);
        result = VIDSCH_EXPORT::VidSchRegisterAsDwm(v17, v20);
        if ( (int)result < 0 )
          break;
      }
      if ( (unsigned int)++v15 >= 2 )
        return 0LL;
    }
  }
  else
  {
    v22 = WdLogNewEntry5_WdError(v3, v2);
    *(_QWORD *)(v22 + 24) = 3545LL;
    WdLogEvent5_WdError(v22);
    return 3221225473LL;
  }
  return result;
}
