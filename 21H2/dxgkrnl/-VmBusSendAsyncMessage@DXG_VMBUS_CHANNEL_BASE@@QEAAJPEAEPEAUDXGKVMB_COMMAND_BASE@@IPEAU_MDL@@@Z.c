/*
 * XREFs of ?VmBusSendAsyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C005DF24
 * Callers:
 *     ?VmBusSendHostMonitorPower@DXG_HOST_GLOBAL_VMBUS@@SAJPEAXU_LUID@@IE@Z @ 0x1C005E2BC (-VmBusSendHostMonitorPower@DXG_HOST_GLOBAL_VMBUS@@SAJPEAXU_LUID@@IE@Z.c)
 *     ?VmBusSendPropagatePresentHistoryToken@DXG_HOST_GLOBAL_VMBUS@@SAXPEAXIPEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCRefCountedBuffer@@E@Z @ 0x1C005E3C0 (-VmBusSendPropagatePresentHistoryToken@DXG_HOST_GLOBAL_VMBUS@@SAXPEAXIPEAVDXGPRESENTHISTORYTOKEN.c)
 *     ?VmBusSendSetGuestData@DXG_HOST_GLOBAL_VMBUS@@SAXPEAXEW4SETGUESTDATA_DATATYPE@@0@Z @ 0x1C005E4C0 (-VmBusSendSetGuestData@DXG_HOST_GLOBAL_VMBUS@@SAXPEAXEW4SETGUESTDATA_DATATYPE@@0@Z.c)
 *     ?VmBusSendSignalGuestEvent@DXG_HOST_GLOBAL_VMBUS@@SAXPEAUDXG_SIGNAL_GUEST_CPU_EVENT@@E@Z @ 0x1C005E600 (-VmBusSendSignalGuestEvent@DXG_HOST_GLOBAL_VMBUS@@SAXPEAUDXG_SIGNAL_GUEST_CPU_EVENT@@E@Z.c)
 *     DxgkSignalEventCB @ 0x1C005EAE0 (DxgkSignalEventCB.c)
 *     ?VmBusSendDuplicateHandle@DXG_HOST_GLOBAL_VMBUS@@QEAAJPEBU_DXGSHAREDALLOCOBJECT@@IPEAXKPEAUDXGKVMB_GUEST_TRANSACTION@@@Z @ 0x1C0376E78 (-VmBusSendDuplicateHandle@DXG_HOST_GLOBAL_VMBUS@@QEAAJPEBU_DXGSHAREDALLOCOBJECT@@IPEAXKPEAUDXGKV.c)
 *     ?VmBusSendLogEvent@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXJW4DXGKVMB_EVENT_SCENARIO@@I_K1@Z @ 0x1C03797D0 (-VmBusSendLogEvent@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXJW4DXGKVMB_EVENT_SCENARIO@@I_K1@Z.c)
 *     ?VmBusSendSyncOrAsyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@@Z @ 0x1C037E9E4 (-VmBusSendSyncOrAsyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@@Z.c)
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0046D24 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     McTemplateK0pxq_EtwWriteTransfer @ 0x1C005983C (McTemplateK0pxq_EtwWriteTransfer.c)
 *     ?CheckDebugBreak@DXGGLOBAL@@QEAAXXZ @ 0x1C005BD10 (-CheckDebugBreak@DXGGLOBAL@@QEAAXXZ.c)
 */

__int64 __fastcall DXG_VMBUS_CHANNEL_BASE::VmBusSendAsyncMessage(
        DXG_VMBUS_CHANNEL_BASE *this,
        unsigned __int8 *a2,
        struct DXGKVMB_COMMAND_BASE *a3,
        unsigned int a4)
{
  __int64 v8; // r8
  signed __int64 v9; // rcx
  bool v10; // zf
  char v11; // al
  const EVENT_DESCRIPTOR *v12; // rdx
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rdi
  int v16; // edx
  int v17; // ecx
  int v18; // r8d
  DXGGLOBAL *Global; // rax
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // [rsp+60h] [rbp-20h] BYREF
  __int64 v26; // [rsp+68h] [rbp-18h]
  char v27; // [rsp+70h] [rbp-10h]
  __int64 v28; // [rsp+A0h] [rbp+20h] BYREF

  if ( !*((_BYTE *)this + 68) )
    return 3221226166LL;
  LODWORD(v25) = -1;
  v26 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v27 = 1;
    LODWORD(v25) = 2218;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, (__int64)a3, 2218);
  }
  else
  {
    v27 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v25, 2218);
  if ( a4 - 24 <= 0x1FFE7 )
  {
    v9 = _InterlockedIncrement64(&qword_1C0132260);
    v10 = bTracingEnabled == 0;
    *(_QWORD *)a3 = v9;
    if ( v10 )
      goto LABEL_17;
    v11 = *((_BYTE *)a3 + 12);
    if ( v11 == 1 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000) == 0 )
        goto LABEL_17;
      v12 = (const EVENT_DESCRIPTOR *)&EventVmBusSendCommandGlobalAsync;
    }
    else if ( v11 == 2 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000) == 0 )
        goto LABEL_17;
      v12 = (const EVENT_DESCRIPTOR *)&EventVmBusSendCommandHostToVmAsync;
    }
    else
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000) == 0 )
        goto LABEL_17;
      v12 = (const EVENT_DESCRIPTOR *)&EventVmBusSendCommandAsync;
    }
    McTemplateK0pxq_EtwWriteTransfer(
      (REGHANDLE *)&DxgkControlGuid_Context,
      v12,
      v8,
      *((_QWORD *)this + 1),
      v9,
      *((_DWORD *)a3 + 4));
LABEL_17:
    v13 = *((_QWORD *)this + 1);
    v28 = 0LL;
    v14 = ((__int64 (__fastcall *)(__int64, unsigned __int8 *, _QWORD, _QWORD, _DWORD, _QWORD, _QWORD, __int64 *))qword_1C0131C50)(
            v13,
            a2,
            a4,
            0LL,
            0,
            0LL,
            0LL,
            &v28);
    v15 = v14;
    if ( v14 < 0 )
    {
      WdLogSingleEntry1(2LL, v14);
      if ( bTracingEnabled )
      {
        LOBYTE(v17) = BYTE3(Microsoft_Windows_DxgKrnlEnableBits);
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v17,
            v16,
            v18,
            0LL,
            0,
            -1,
            L"VmbChannelSendSynchronousRequest failed: %I64n",
            v15,
            0LL,
            0LL,
            0LL,
            0LL,
            v25,
            v26);
      }
    }
    Global = DXGGLOBAL_GetGlobal();
    DXGGLOBAL::CheckDebugBreak(Global);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25);
    if ( v27 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v20, &EventProfilerExit, v21, v25);
    }
    return (unsigned int)v15;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25);
  if ( v27 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v23, &EventProfilerExit, v24, v25);
  return 3221225473LL;
}
