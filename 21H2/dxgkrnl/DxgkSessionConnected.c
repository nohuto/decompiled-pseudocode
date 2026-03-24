/*
 * XREFs of DxgkSessionConnected @ 0x1C015EBC0
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CE8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00041C0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006318 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0007D94 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C000A9FC (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024B10 (McTemplateK0q_EtwWriteTransfer.c)
 *     memset @ 0x1C0028F00 (memset.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0116C30 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C0122794 (DxgkReleaseSessionModeChangeLock.c)
 *     DxgkIncreaseSessionAdapterUniqueness @ 0x1C015ECFC (DxgkIncreaseSessionAdapterUniqueness.c)
 *     ?SetConsoleSession@DXGSESSIONMGR@@QEAAXE@Z @ 0x1C015ED54 (-SetConsoleSession@DXGSESSIONMGR@@QEAAXE@Z.c)
 *     DxgkRequestAsyncDisplaySwitchCallout @ 0x1C026C320 (DxgkRequestAsyncDisplaySwitchCallout.c)
 */

void __fastcall DxgkSessionConnected(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdi
  struct DXGGLOBAL *Global; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  DXGSESSIONMGR *v13; // rbx
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rax
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rbx
  __int64 v23; // rax
  _BYTE v24[4]; // [rsp+30h] [rbp-39h] BYREF
  __int64 v25; // [rsp+34h] [rbp-35h]
  int v26; // [rsp+40h] [rbp-29h] BYREF
  __int64 v27; // [rsp+48h] [rbp-21h]
  char v28; // [rsp+50h] [rbp-19h]
  _QWORD v29[10]; // [rsp+60h] [rbp-9h] BYREF

  v26 = -1;
  v27 = 0LL;
  v3 = (unsigned __int8)a1;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v28 = 1;
    v26 = 2196;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2196);
  }
  else
  {
    v28 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v26, 2196LL);
  v25 = 0LL;
  DxgkLogCodePointPacket(0x6Du, 4u, v3, 0, 0LL);
  DxgkIncreaseSessionAdapterUniqueness();
  v24[0] = 0;
  v4 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)v24, 1);
  v7 = v4;
  if ( v4 < 0 )
  {
    v18 = WdLogNewEntry5_WdError(v6, v5);
    *(_QWORD *)(v18 + 24) = v7;
    WdLogEvent5_WdError(v18);
  }
  else
  {
    if ( (_BYTE)v3 )
    {
      Global = DXGGLOBAL::GetGlobal(v6, v5);
      DXGSESSIONMGR::SetConsoleSession(*((DXGSESSIONMGR **)Global + 102), 1u);
      if ( *((_DWORD *)DXGGLOBAL::GetGlobal(v10, v9) + 76142) )
      {
        memset(v29, 0, 0x48uLL);
        EtwActivityIdControl(3u, (LPGUID)&v29[1]);
        v29[8] = MEMORY[0xFFFFF78000000014];
        LODWORD(v29[3]) = 63;
        LOBYTE(v29[6]) = -1;
        v19 = DxgkRequestAsyncDisplaySwitchCallout(0LL, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v29, 0x200000000uLL);
        v22 = v19;
        if ( v19 < 0 )
        {
          v23 = WdLogNewEntry5_WdError(v21, v20);
          *(_QWORD *)(v23 + 24) = v22;
          WdLogEvent5_WdError(v23);
        }
        *((_DWORD *)DXGGLOBAL::GetGlobal(v21, v20) + 76142) = 0;
      }
    }
    v13 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v6, v5) + 102);
    if ( v13 )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v12, v11);
      SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v13, CurrentProcessSessionId);
    }
    else
    {
      SessionDataForSpecifiedSession = 0LL;
    }
    if ( SessionDataForSpecifiedSession )
      *((_BYTE *)SessionDataForSpecifiedSession + 18488) = 1;
  }
  if ( v24[0] )
    DxgkReleaseSessionModeChangeLock(v12, v11);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26, v11);
  if ( v28 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v16, &EventProfilerExit, v17, v26);
  }
}
