/*
 * XREFs of ?VmBusSendAsyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C00418FC
 * Callers:
 *     ?VmBusSendPropagatePresentHistoryToken@DXG_HOST_GLOBAL_VMBUS@@SAXPEAXPEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCRefCountedBuffer@@E@Z @ 0x1C0041AF0 (-VmBusSendPropagatePresentHistoryToken@DXG_HOST_GLOBAL_VMBUS@@SAXPEAXPEAVDXGPRESENTHISTORYTOKENQ.c)
 *     ?VmBusSendSetGuestData@DXG_HOST_GLOBAL_VMBUS@@SAXPEAXEW4SETGUESTDATA_DATATYPE@@0@Z @ 0x1C0041B8C (-VmBusSendSetGuestData@DXG_HOST_GLOBAL_VMBUS@@SAXPEAXEW4SETGUESTDATA_DATATYPE@@0@Z.c)
 *     ?VmBusSendSignalGuestEvent@DXG_HOST_GLOBAL_VMBUS@@SAXPEAX@Z @ 0x1C0041C70 (-VmBusSendSignalGuestEvent@DXG_HOST_GLOBAL_VMBUS@@SAXPEAX@Z.c)
 *     DxgkSignalEventCB @ 0x1C0041E20 (DxgkSignalEventCB.c)
 *     ?InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJPEAUDRIVER_WORKAROUNDS@@@Z @ 0x1C020D86C (-InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJPEAUDRIVER_WORKAROUNDS@@@Z.c)
 *     ?VmBusSendDuplicateHandle@DXG_HOST_GLOBAL_VMBUS@@QEAAJPEBU_DXGSHAREDALLOCOBJECT@@IPEAXKPEAUDXGKVMB_GUEST_TRANSACTION@@@Z @ 0x1C0247CDC (-VmBusSendDuplicateHandle@DXG_HOST_GLOBAL_VMBUS@@QEAAJPEBU_DXGSHAREDALLOCOBJECT@@IPEAXKPEAUDXGKV.c)
 *     ?VmBusSendWnfNotification@DXG_HOST_GLOBAL_VMBUS@@QEAAJPEAUDXGKVMB_COMMAND_SENDWNFNOTIFICATION@@I@Z @ 0x1C024E100 (-VmBusSendWnfNotification@DXG_HOST_GLOBAL_VMBUS@@QEAAJPEAUDXGKVMB_COMMAND_SENDWNFNOTIFICATION@@I.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CE8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00041C0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006318 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024B10 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 *     ?CheckDebugBreak@DXGGLOBAL@@QEAAXXZ @ 0x1C0040C90 (-CheckDebugBreak@DXGGLOBAL@@QEAAXXZ.c)
 *     McTemplateK0pxq_EtwWriteTransfer @ 0x1C0042044 (McTemplateK0pxq_EtwWriteTransfer.c)
 */

__int64 __fastcall VmBusSendAsyncMessage(
        struct VMBCHANNEL__ *a1,
        struct DXGKVMB_COMMAND_BASE *a2,
        __int64 a3,
        struct _MDL *a4)
{
  unsigned int v4; // esi
  __int64 v8; // rdx
  int v9; // r8d
  signed __int64 v10; // rcx
  bool v11; // zf
  int v12; // eax
  void *v13; // rdx
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // rax
  DXGGLOBAL *Global; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rcx
  __int64 v24; // r8
  int v25; // [rsp+50h] [rbp-20h] BYREF
  __int64 v26; // [rsp+58h] [rbp-18h]
  char v27; // [rsp+60h] [rbp-10h]
  struct _MDL *v28; // [rsp+98h] [rbp+28h] BYREF

  v28 = a4;
  v4 = a3;
  if ( !a1 )
    return 3221226166LL;
  v25 = -1;
  v26 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v27 = 1;
    v25 = 2136;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2136);
  }
  else
  {
    v27 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v25, 2136LL);
  if ( v4 - 24 <= 0x1FFE7 )
  {
    v10 = _InterlockedIncrement64(&qword_1C00B4688);
    v11 = bTracingEnabled == 0;
    *(_QWORD *)a2 = v10;
    if ( !v11 )
    {
      v12 = *((_DWORD *)a2 + 3);
      if ( v12 == 1 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
        {
          v13 = &EventVmBusSendCommandGlobalAsync;
LABEL_17:
          McTemplateK0pxq_EtwWriteTransfer(
            (unsigned int)&DxgkControlGuid_Context,
            (_DWORD)v13,
            v9,
            (_DWORD)a1,
            v10,
            *((_DWORD *)a2 + 4));
        }
      }
      else if ( v12 == 2 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
        {
          v13 = &EventVmBusSendCommandHostToVmAsync;
          goto LABEL_17;
        }
      }
      else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
      {
        v13 = &EventVmBusSendCommandAsync;
        goto LABEL_17;
      }
    }
    v28 = 0LL;
    v14 = ((__int64 (__fastcall *)(struct VMBCHANNEL__ *, struct DXGKVMB_COMMAND_BASE *, _QWORD, _QWORD, _DWORD, _QWORD, _QWORD, struct _MDL **))qword_1C00B4340)(
            a1,
            a2,
            v4,
            0LL,
            0,
            0LL,
            0LL,
            &v28);
    v17 = v14;
    if ( v14 < 0 )
    {
      v18 = WdLogNewEntry5_WdError(v16, v15);
      *(_QWORD *)(v18 + 24) = v17;
      WdLogEvent5_WdError(v18);
    }
    Global = DXGGLOBAL::GetGlobal(v16, v15);
    DXGGLOBAL::CheckDebugBreak(Global);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25, v20);
    if ( v27 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v21, &EventProfilerExit, v22, v25);
    }
    return (unsigned int)v17;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25, v8);
  if ( v27 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v23, &EventProfilerExit, v24, v25);
  return 3221225473LL;
}
