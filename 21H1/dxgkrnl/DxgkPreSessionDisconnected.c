/*
 * XREFs of DxgkPreSessionDisconnected @ 0x1C014B500
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C0008E58 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C00099AC (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000D778 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D7CC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C011438C (DxgkReleaseSessionModeChangeLock.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0116DB4 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C011739C (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?SetConsoleSession@DXGSESSIONMGR@@QEAAXE@Z @ 0x1C014B874 (-SetConsoleSession@DXGSESSIONMGR@@QEAAXE@Z.c)
 */

void __fastcall DxgkPreSessionDisconnected(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  DXGSESSIONMGR *v10; // rbx
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  struct DXGGLOBAL *Global; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  struct DXGGLOBAL *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rax
  int v20; // [rsp+30h] [rbp-20h] BYREF
  __int64 v21; // [rsp+38h] [rbp-18h]
  char v22; // [rsp+40h] [rbp-10h]
  char v23; // [rsp+60h] [rbp+10h] BYREF
  __int64 v24; // [rsp+68h] [rbp+18h] BYREF

  v20 = -1;
  v21 = 0LL;
  v3 = (unsigned __int8)a1;
  if ( (qword_1C00AE9B0 & 2) != 0 )
  {
    v22 = 1;
    v20 = 2197;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2197);
  }
  else
  {
    v22 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v20, 2197LL);
  v24 = 0LL;
  DxgkLogCodePointPacket(0x6Du, 5u, v3, 0, 0LL);
  v23 = 0;
  v4 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v23, 1);
  v7 = v4;
  if ( v4 < 0 )
  {
    v19 = WdLogNewEntry5_WdError(v6, v5);
    *(_QWORD *)(v19 + 24) = v7;
    WdLogEvent5_WdError(v19);
  }
  else
  {
    v10 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v6, v5) + 88);
    if ( v10 )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v9);
      SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v10, CurrentProcessSessionId);
    }
    else
    {
      SessionDataForSpecifiedSession = 0LL;
    }
    if ( SessionDataForSpecifiedSession )
      *((_BYTE *)SessionDataForSpecifiedSession + 18488) = 0;
    if ( (_BYTE)v3 )
    {
      LOBYTE(v24) = 0;
      Global = DXGGLOBAL::GetGlobal(v9, v8);
      DXGGLOBAL::IterateAdaptersWithCallback(
        (__int64)Global,
        (__int64 (__fastcall *)(_QWORD *, __int64))lambda_253e1404844a8379d0c8ce26edd6c7ad_::_lambda_invoker_cdecl_,
        (__int64)&v24,
        1);
      v16 = DXGGLOBAL::GetGlobal(v15, v14);
      DXGSESSIONMGR::SetConsoleSession(*((DXGSESSIONMGR **)v16 + 88), 0);
    }
  }
  if ( v23 )
    DxgkReleaseSessionModeChangeLock(v9, v8);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20, v8);
  if ( v22 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v17, &EventProfilerExit, v18, v20);
  }
}
