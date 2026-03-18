/*
 * XREFs of DxgkSessionDisconnected @ 0x1C0159B60
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002ADC (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002B54 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00042F0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024458 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C0114A50 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C01306EC (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     DxgkIncreaseSessionAdapterUniqueness @ 0x1C0159D4C (DxgkIncreaseSessionAdapterUniqueness.c)
 *     DxgkMiracastStopAllMiracastSessions @ 0x1C0159E80 (DxgkMiracastStopAllMiracastSessions.c)
 *     ?ProcessRemoteSessionDisconnect@OUTPUTDUPL_MGR@@QEAAXXZ @ 0x1C029BE58 (-ProcessRemoteSessionDisconnect@OUTPUTDUPL_MGR@@QEAAXXZ.c)
 */

void __fastcall DxgkSessionDisconnected(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // bl
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  struct OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // rax
  OUTPUTDUPL_MGR *v13; // rbx
  int v14; // [rsp+20h] [rbp-30h] BYREF
  __int64 v15; // [rsp+28h] [rbp-28h]
  char v16; // [rsp+30h] [rbp-20h]
  _BYTE v17[8]; // [rsp+38h] [rbp-18h] BYREF
  DXGPUSHLOCK *v18; // [rsp+40h] [rbp-10h]
  int v19; // [rsp+48h] [rbp-8h]
  __int64 v20; // [rsp+68h] [rbp+18h] BYREF

  v14 = -1;
  v3 = a1;
  v15 = 0LL;
  if ( (qword_1C00B09B0 & 2) != 0 )
  {
    v16 = 1;
    v14 = 2198;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2198);
  }
  else
  {
    v16 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v14, 2198LL);
  DxgkIncreaseSessionAdapterUniqueness();
  if ( v3 )
  {
    v20 = -300000000LL;
    LOBYTE(v5) = 1;
    DxgkMiracastStopAllMiracastSessions(v5, &v20, 129LL);
    Global = DXGGLOBAL::GetGlobal(v7, v6);
    DXGGLOBAL::IterateAdaptersWithCallback(
      (__int64)Global,
      (__int64 (__fastcall *)(_QWORD *, __int64))lambda_940d064d943a20fd52938170853ed62c_::_lambda_invoker_cdecl_,
      0LL,
      0);
  }
  else
  {
    RemoteOutputDuplMgr = FindRemoteOutputDuplMgr(v5, v4);
    v13 = RemoteOutputDuplMgr;
    if ( RemoteOutputDuplMgr )
    {
      DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v17, *((struct _KTHREAD ***)RemoteOutputDuplMgr + 3), 0);
      DXGPUSHLOCK::AcquireExclusive(v18);
      *((_DWORD *)v13 + 12) = 0;
      v19 = 2;
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v17);
      OUTPUTDUPL_MGR::ProcessRemoteSessionDisconnect(v13);
    }
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v14, v9);
  if ( v16 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v10, &EventProfilerExit, v11, v14);
  }
}
