/*
 * XREFs of DxgkSessionReconnected @ 0x1C0164970
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C0008E58 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C00099AC (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000D778 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D7CC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     memset @ 0x1C0026840 (memset.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C011438C (DxgkReleaseSessionModeChangeLock.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0116DB4 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     DxgkIncreaseSessionAdapterUniqueness @ 0x1C014B81C (DxgkIncreaseSessionAdapterUniqueness.c)
 *     ?SetConsoleSession@DXGSESSIONMGR@@QEAAXE@Z @ 0x1C014B874 (-SetConsoleSession@DXGSESSIONMGR@@QEAAXE@Z.c)
 *     DxgkRequestAsyncDisplaySwitchCallout @ 0x1C0267D40 (DxgkRequestAsyncDisplaySwitchCallout.c)
 *     OutputDuplRemoteSessionReconnected @ 0x1C0299AD4 (OutputDuplRemoteSessionReconnected.c)
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
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  DXGSESSIONMGR *v18; // rbx
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rax
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rbx
  __int64 v28; // rax
  _BYTE v29[4]; // [rsp+38h] [rbp-39h] BYREF
  __int64 v30; // [rsp+3Ch] [rbp-35h]
  int v31; // [rsp+48h] [rbp-29h] BYREF
  __int64 v32; // [rsp+50h] [rbp-21h]
  char v33; // [rsp+58h] [rbp-19h]
  _QWORD v34[10]; // [rsp+68h] [rbp-9h] BYREF

  v31 = -1;
  v32 = 0LL;
  v4 = (unsigned __int8)a1;
  if ( (qword_1C00AE9B0 & 2) != 0 )
  {
    v33 = 1;
    v31 = 2199;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2199);
  }
  else
  {
    v33 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v31, 2199LL);
  v30 = 0LL;
  DxgkLogCodePointPacket(0x6Du, 6u, v4, 0, 0LL);
  DxgkIncreaseSessionAdapterUniqueness(v6, v5);
  v29[0] = 0;
  v7 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)v29, 1);
  v10 = v7;
  if ( v7 < 0 )
  {
    v23 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v23 + 24) = v10;
    WdLogEvent5_WdError(v23);
  }
  else
  {
    if ( (_BYTE)v4 )
    {
      Global = DXGGLOBAL::GetGlobal(v9, v8);
      DXGSESSIONMGR::SetConsoleSession(*((struct DXGSESSIONDATA ***)Global + 88), 1);
      if ( *((_DWORD *)DXGGLOBAL::GetGlobal(v13, v12) + 76112) )
      {
        memset(v34, 0, 0x48uLL);
        EtwActivityIdControl(3u, (LPGUID)&v34[1]);
        v34[8] = MEMORY[0xFFFFF78000000014];
        LODWORD(v34[3]) = 63;
        LOBYTE(v34[6]) = -1;
        v24 = DxgkRequestAsyncDisplaySwitchCallout(0LL, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v34, 0x200000000uLL);
        v27 = v24;
        if ( v24 < 0 )
        {
          v28 = WdLogNewEntry5_WdError(v26, v25);
          *(_QWORD *)(v28 + 24) = v27;
          WdLogEvent5_WdError(v28);
        }
        *((_DWORD *)DXGGLOBAL::GetGlobal(v26, v25) + 76112) = 0;
      }
    }
    else
    {
      OutputDuplRemoteSessionReconnected(a2);
    }
    v18 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v15, v14) + 88);
    if ( v18 )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v17);
      SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v18, CurrentProcessSessionId);
    }
    else
    {
      SessionDataForSpecifiedSession = 0LL;
    }
    if ( SessionDataForSpecifiedSession )
      *((_BYTE *)SessionDataForSpecifiedSession + 18488) = 1;
  }
  if ( v29[0] )
    DxgkReleaseSessionModeChangeLock(v17, v16);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31, v16);
  if ( v33 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v21, &EventProfilerExit, v22, v31);
  }
}
