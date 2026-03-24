/*
 * XREFs of DxgkSessionReconnected @ 0x1C0178CA0
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
 *     OutputDuplRemoteSessionReconnected @ 0x1C029E4A4 (OutputDuplRemoteSessionReconnected.c)
 */

void __fastcall DxgkSessionReconnected(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdi
  struct DXGGLOBAL *Global; // rax
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  DXGSESSIONMGR *v19; // rbx
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rax
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rbx
  __int64 v29; // rax
  _BYTE v30[4]; // [rsp+38h] [rbp-39h] BYREF
  __int64 v31; // [rsp+3Ch] [rbp-35h]
  int v32; // [rsp+48h] [rbp-29h] BYREF
  __int64 v33; // [rsp+50h] [rbp-21h]
  char v34; // [rsp+58h] [rbp-19h]
  _QWORD v35[10]; // [rsp+68h] [rbp-9h] BYREF

  v32 = -1;
  v33 = 0LL;
  v4 = (unsigned __int8)a1;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v34 = 1;
    v32 = 2199;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2199);
  }
  else
  {
    v34 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v32, 2199LL);
  v31 = 0LL;
  DxgkLogCodePointPacket(0x6Du, 6u, v4, 0, 0LL);
  DxgkIncreaseSessionAdapterUniqueness(v6, v5);
  v30[0] = 0;
  v7 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)v30, 1);
  v10 = v7;
  if ( v7 < 0 )
  {
    v24 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v24 + 24) = v10;
    WdLogEvent5_WdError(v24);
  }
  else
  {
    if ( (_BYTE)v4 )
    {
      Global = DXGGLOBAL::GetGlobal(v9, v8);
      LOBYTE(v12) = 1;
      DXGSESSIONMGR::SetConsoleSession(*((struct DXGSESSIONDATA ***)Global + 102), v12);
      if ( *((_DWORD *)DXGGLOBAL::GetGlobal(v14, v13) + 76142) )
      {
        memset(v35, 0, 0x48uLL);
        EtwActivityIdControl(3u, (LPGUID)&v35[1]);
        v35[8] = MEMORY[0xFFFFF78000000014];
        LODWORD(v35[3]) = 63;
        LOBYTE(v35[6]) = -1;
        v25 = DxgkRequestAsyncDisplaySwitchCallout(0LL, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v35, 0x200000000uLL);
        v28 = v25;
        if ( v25 < 0 )
        {
          v29 = WdLogNewEntry5_WdError(v27, v26);
          *(_QWORD *)(v29 + 24) = v28;
          WdLogEvent5_WdError(v29);
        }
        *((_DWORD *)DXGGLOBAL::GetGlobal(v27, v26) + 76142) = 0;
      }
    }
    else
    {
      OutputDuplRemoteSessionReconnected(a2);
    }
    v19 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v16, v15) + 102);
    if ( v19 )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v18, v17);
      SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v19, CurrentProcessSessionId);
    }
    else
    {
      SessionDataForSpecifiedSession = 0LL;
    }
    if ( SessionDataForSpecifiedSession )
      *((_BYTE *)SessionDataForSpecifiedSession + 18488) = 1;
  }
  if ( v30[0] )
    DxgkReleaseSessionModeChangeLock(v18, v17);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32, v17);
  if ( v34 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v22, &EventProfilerExit, v23, v32);
  }
}
