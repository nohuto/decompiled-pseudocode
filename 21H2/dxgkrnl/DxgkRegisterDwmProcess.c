/*
 * XREFs of DxgkRegisterDwmProcess @ 0x1C01C8180
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z @ 0x1C0014340 (-DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z.c)
 *     ?VidSchRegisterAsDwm@VIDSCH_EXPORT@@QEAAJPEAVDXGPROCESS@@@Z @ 0x1C0014628 (-VidSchRegisterAsDwm@VIDSCH_EXPORT@@QEAAJPEAVDXGPROCESS@@@Z.c)
 *     ?ReferenceCurrentProcessAsDwm@DXGSESSIONDATA@@QEAAXXZ @ 0x1C0014670 (-ReferenceCurrentProcessAsDwm@DXGSESSIONDATA@@QEAAXXZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0183C78 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkRegisterDwmProcess(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // rbx
  unsigned int CurrentProcessSessionId; // eax
  __int64 v7; // rcx
  DXGSESSIONMGR *v8; // rdi
  unsigned int v9; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  unsigned int v11; // esi
  __int64 v12; // rdi
  VIDSCH_EXPORT *v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  struct DXGPROCESS *v18; // rax
  __int64 result; // rax

  Current = DXGPROCESS::GetCurrent(a1, a2, a3, a4);
  if ( Current )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v4);
    DxgkLogCodePointPacketForSession(0x73u, CurrentProcessSessionId, 0, 1, 0, 0LL);
    *((_DWORD *)Current + 106) |= 4u;
    v8 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL_GetGlobal() + 122);
    if ( v8 )
    {
      v9 = PsGetCurrentProcessSessionId(v7);
      SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v8, v9);
    }
    else
    {
      SessionDataForSpecifiedSession = 0LL;
    }
    DXGSESSIONDATA::ReferenceCurrentProcessAsDwm(SessionDataForSpecifiedSession);
    v11 = 0;
    v12 = 272LL;
    *(_BYTE *)(*((_QWORD *)Current + 8) + 130LL) = 1;
    while ( 1 )
    {
      DXGGLOBAL_GetGlobal();
      if ( *(_QWORD *)((char *)&DXGGLOBAL::m_pDxgmmsExport + v12 - 272) )
      {
        v13 = *(VIDSCH_EXPORT **)((char *)DXGGLOBAL_GetGlobal() + v12);
        v18 = DXGPROCESS::GetCurrent(v15, v14, v16, v17);
        result = VIDSCH_EXPORT::VidSchRegisterAsDwm(v13, v18);
        if ( (int)result < 0 )
          break;
      }
      ++v11;
      v12 += 8LL;
      if ( v11 >= 2 )
        return 0LL;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, 3650LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"An attempt was made to register the DWM process for a process that has no DXGPROCESS",
      3650LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225473LL;
  }
  return result;
}
