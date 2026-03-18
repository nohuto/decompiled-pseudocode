/*
 * XREFs of DxgkSessionDisconnected @ 0x1C01DA900
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000EE00 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000EF08 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C01872C0 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C01985C4 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     DxgkIncreaseSessionAdapterUniqueness @ 0x1C01DAAB8 (DxgkIncreaseSessionAdapterUniqueness.c)
 *     DxgkMiracastStopAllMiracastSessions @ 0x1C01DAC40 (DxgkMiracastStopAllMiracastSessions.c)
 *     ?ProcessRemoteSessionDisconnect@OUTPUTDUPL_MGR@@QEAAXXZ @ 0x1C0323730 (-ProcessRemoteSessionDisconnect@OUTPUTDUPL_MGR@@QEAAXXZ.c)
 */

void __fastcall DxgkSessionDisconnected(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // bl
  __int64 v4; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  struct OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // rax
  OUTPUTDUPL_MGR *v9; // rbx
  int v10; // [rsp+20h] [rbp-30h] BYREF
  __int64 v11; // [rsp+28h] [rbp-28h]
  char v12; // [rsp+30h] [rbp-20h]
  _BYTE v13[8]; // [rsp+38h] [rbp-18h] BYREF
  DXGPUSHLOCK *v14; // [rsp+40h] [rbp-10h]
  int v15; // [rsp+48h] [rbp-8h]
  __int64 v16; // [rsp+68h] [rbp+18h] BYREF

  v10 = -1;
  v3 = a1;
  v11 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v12 = 1;
    v10 = 2198;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2198);
  }
  else
  {
    v12 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v10, 2198);
  DxgkIncreaseSessionAdapterUniqueness();
  if ( v3 )
  {
    v16 = -300000000LL;
    LOBYTE(v4) = 1;
    DxgkMiracastStopAllMiracastSessions(v4, &v16, 129LL);
    Global = DXGGLOBAL_GetGlobal();
    DXGGLOBAL::IterateAdaptersWithCallback(
      (__int64)Global,
      (__int64 (__fastcall *)(_QWORD *, __int64))lambda_940d064d943a20fd52938170853ed62c_::_lambda_invoker_cdecl_,
      0LL,
      0LL);
  }
  else
  {
    RemoteOutputDuplMgr = FindRemoteOutputDuplMgr();
    v9 = RemoteOutputDuplMgr;
    if ( RemoteOutputDuplMgr )
    {
      DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v13, (struct _KTHREAD **)RemoteOutputDuplMgr + 3, 0);
      DXGPUSHLOCK::AcquireExclusive(v14);
      *((_DWORD *)v9 + 18) = 0;
      v15 = 2;
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v13);
      OUTPUTDUPL_MGR::ProcessRemoteSessionDisconnect(v9);
    }
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v10);
  if ( v12 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v6, &EventProfilerExit, v7, v10);
  }
}
