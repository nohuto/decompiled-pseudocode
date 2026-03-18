/*
 * XREFs of ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C037E618
 * Callers:
 *     ?VmBusSendAcquireKeyedMutexSync@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGKEYEDMUTEX@@I_KHPEAT_LARGE_INTEGER@@PEA_K4@Z @ 0x1C0373A04 (-VmBusSendAcquireKeyedMutexSync@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGKEYEDMUTEX@@.c)
 *     ?VmBusSendCreateNtSharedObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAIPEAVDXGPROCESS@@IPEAVDXGSYNCOBJECT@@PEAVDXGDEVICESYNCOBJECT@@PEAVDXGRESOURCE@@@Z @ 0x1C0375838 (-VmBusSendCreateNtSharedObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAIPEAVDXGPROCESS@@IPEAVDXGSYNCOBJECT@@.c)
 *     ?VmBusSendCreateProcess@DXG_GUEST_GLOBAL_VMBUS@@QEAAIPEAVDXGPROCESS@@PEBU_UNICODE_STRING@@@Z @ 0x1C0375B9C (-VmBusSendCreateProcess@DXG_GUEST_GLOBAL_VMBUS@@QEAAIPEAVDXGPROCESS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?VmBusSendDestroyKeyedMutex@DXG_GUEST_GLOBAL_VMBUS@@QEAAXII@Z @ 0x1C0376A5C (-VmBusSendDestroyKeyedMutex@DXG_GUEST_GLOBAL_VMBUS@@QEAAXII@Z.c)
 *     ?VmBusSendDestroyNtSharedObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAXI@Z @ 0x1C0376B34 (-VmBusSendDestroyNtSharedObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAXI@Z.c)
 *     ?VmBusSendDestroyProcess@DXG_GUEST_GLOBAL_VMBUS@@QEAAXI@Z @ 0x1C0376CD4 (-VmBusSendDestroyProcess@DXG_GUEST_GLOBAL_VMBUS@@QEAAXI@Z.c)
 *     ?VmBusSendDestroySyncObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAXII@Z @ 0x1C0376DA0 (-VmBusSendDestroySyncObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAXII@Z.c)
 *     ?VmBusSendNotifyProcessFreeze@DXG_GUEST_GLOBAL_VMBUS@@QEAAXI@Z @ 0x1C0379E60 (-VmBusSendNotifyProcessFreeze@DXG_GUEST_GLOBAL_VMBUS@@QEAAXI@Z.c)
 *     ?VmBusSendNotifyProcessThaw@DXG_GUEST_GLOBAL_VMBUS@@QEAAXI@Z @ 0x1C0379F2C (-VmBusSendNotifyProcessThaw@DXG_GUEST_GLOBAL_VMBUS@@QEAAXI@Z.c)
 *     ?VmBusSendOpenKeyedMutex@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGKEYEDMUTEX@@I@Z @ 0x1C037A664 (-VmBusSendOpenKeyedMutex@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGKEYEDMUTEX@@I@Z.c)
 *     ?VmBusSendOpenSyncObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IPEAVDXGSYNCOBJECT@@PEAVDXGDEVICESYNCOBJECT@@IU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C037AAC8 (-VmBusSendOpenSyncObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IPEAVDXGSYN.c)
 *     ?VmBusSendOpmRequest@DXG_GUEST_GLOBAL_VMBUS@@QEAAJU_LUID@@IIPEAXK1PEAK@Z @ 0x1C037AD20 (-VmBusSendOpmRequest@DXG_GUEST_GLOBAL_VMBUS@@QEAAJU_LUID@@IIPEAXK1PEAK@Z.c)
 *     ?VmBusSendQueryEtwSession@DXG_GUEST_GLOBAL_VMBUS@@QEAA?AU_GUID@@XZ @ 0x1C037B830 (-VmBusSendQueryEtwSession@DXG_GUEST_GLOBAL_VMBUS@@QEAA-AU_GUID@@XZ.c)
 *     ?VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z @ 0x1C037E5E0 (-VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z.c)
 *     ?VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C037E984 (-VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPE.c)
 *     ?VmBusSendUpdateMonitorMapping@DXG_GUEST_GLOBAL_VMBUS@@QEAAJU_LUID@@I_NI@Z @ 0x1C037F384 (-VmBusSendUpdateMonitorMapping@DXG_GUEST_GLOBAL_VMBUS@@QEAAJU_LUID@@I_NI@Z.c)
 *     ?VmBusSendVsyncControl@DXG_GUEST_GLOBAL_VMBUS@@QEAAJU_LUID@@IPEAX_N@Z @ 0x1C037F4C0 (-VmBusSendVsyncControl@DXG_GUEST_GLOBAL_VMBUS@@QEAAJU_LUID@@IPEAX_N@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000EF08 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000FA80 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     McTemplateK0pxqt_EtwWriteTransfer @ 0x1C00562E8 (McTemplateK0pxqt_EtwWriteTransfer.c)
 *     McTemplateK0pxq_EtwWriteTransfer @ 0x1C005983C (McTemplateK0pxq_EtwWriteTransfer.c)
 *     ?CheckDebugBreak@DXGGLOBAL@@QEAAXXZ @ 0x1C005BD10 (-CheckDebugBreak@DXGGLOBAL@@QEAAXXZ.c)
 */

__int64 __fastcall DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(
        struct _KTHREAD **this,
        unsigned __int8 *a2,
        struct DXGKVMB_COMMAND_BASE *a3,
        unsigned int a4,
        char *a5,
        unsigned int *a6)
{
  char v6; // r13
  char *v8; // r14
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // ebx
  __int64 v14; // rdi
  unsigned int v15; // eax
  signed __int64 v16; // rcx
  bool v17; // zf
  const EVENT_DESCRIPTOR *v18; // rdx
  DXGGLOBAL *Global; // rax
  __int64 v20; // rcx
  __int64 v21; // r8
  const EVENT_DESCRIPTOR *v22; // rdx
  unsigned int v23; // eax
  unsigned int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v28; // [rsp+28h] [rbp-89h]
  __int64 v29; // [rsp+28h] [rbp-89h]
  __int64 v30; // [rsp+30h] [rbp-81h]
  unsigned int v31; // [rsp+50h] [rbp-61h] BYREF
  unsigned int v32; // [rsp+54h] [rbp-5Dh]
  int v33; // [rsp+58h] [rbp-59h] BYREF
  __int64 v34; // [rsp+60h] [rbp-51h]
  char v35; // [rsp+68h] [rbp-49h]
  unsigned __int8 *v36; // [rsp+70h] [rbp-41h]
  void *v37; // [rsp+78h] [rbp-39h]
  _BYTE v38[8]; // [rsp+80h] [rbp-31h] BYREF
  DXGPUSHLOCK *v39; // [rsp+88h] [rbp-29h]
  int v40; // [rsp+90h] [rbp-21h]
  char v41; // [rsp+98h] [rbp-19h] BYREF

  v33 = -1;
  v6 = 0;
  v8 = a5;
  v32 = a4;
  v36 = a2;
  v37 = a5;
  v34 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v35 = 1;
    v33 = 2136;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, (__int64)a3, 2136);
  }
  else
  {
    v35 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v33, 2136);
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v38, this + 2, 0);
  DXGPUSHLOCK::AcquireShared(v39);
  v40 = 1;
  if ( a4 < 0x18 )
  {
    WdLogSingleEntry1(1LL, 14726LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"CommandSize >= sizeof(DXGKVMB_COMMAND_VGPU_TO_HOST)",
      14726LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( a6 )
    v13 = *a6;
  else
    v13 = 0;
  LODWORD(v14) = -1073741823;
  v31 = v13;
  if ( !this[1] )
  {
    LODWORD(v14) = -1073741130;
    goto LABEL_48;
  }
  if ( v32 - 24 <= 0x1FFE7 && v13 < 0x20000 )
  {
    if ( (v13 & 7) != 0 )
    {
      v15 = (v13 + 7) & 0xFFFFFFF8;
      v31 = v15;
      if ( v15 < v13 )
      {
        LODWORD(v14) = -1073741811;
        goto LABEL_42;
      }
      v8 = (char *)operator new[](v15, 0x4B677844u, 64LL, v12);
      if ( !v8 )
      {
        LODWORD(v14) = -1073741801;
        goto LABEL_42;
      }
      v6 = 1;
    }
    else if ( !v13 )
    {
      v8 = &v41;
      v31 = 8;
    }
    v16 = _InterlockedIncrement64(&qword_1C0132260);
    v17 = bTracingEnabled == 0;
    *(_QWORD *)a3 = v16;
    if ( !v17 )
    {
      if ( *((_BYTE *)a3 + 12) == 1 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000) == 0 )
          goto LABEL_29;
        v18 = (const EVENT_DESCRIPTOR *)&EventVmBusSendCommandGlobalBegin;
      }
      else
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000) == 0 )
          goto LABEL_29;
        v18 = (const EVENT_DESCRIPTOR *)&EventVmBusSendCommandBegin;
      }
      LODWORD(v28) = *((_DWORD *)a3 + 4);
      McTemplateK0pxq_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, v18, v11, this[1], v16, v28);
    }
LABEL_29:
    v14 = (int)((__int64 (__fastcall *)(struct _KTHREAD *, unsigned __int8 *, _QWORD, _QWORD, int, char *, unsigned int *, _QWORD))qword_1C0131C50)(
                 this[1],
                 v36,
                 v32,
                 0LL,
                 1,
                 v8,
                 &v31,
                 0LL);
    Global = DXGGLOBAL_GetGlobal();
    DXGGLOBAL::CheckDebugBreak(Global);
    if ( !bTracingEnabled )
      goto LABEL_36;
    if ( *((_BYTE *)a3 + 12) == 1 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000) == 0 )
        goto LABEL_36;
      v22 = (const EVENT_DESCRIPTOR *)&EventVmBusSendCommandGlobalEnd;
    }
    else
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000) == 0 )
        goto LABEL_36;
      v22 = (const EVENT_DESCRIPTOR *)&EventVmBusSendCommandEnd;
    }
    LODWORD(v30) = v14;
    LODWORD(v29) = *((_DWORD *)a3 + 4);
    McTemplateK0pxqt_EtwWriteTransfer(v20, v22, v21, this[1], *(_QWORD *)a3, v29, v30);
LABEL_36:
    if ( (int)v14 >= 0 )
    {
      if ( v6 )
      {
        v23 = v31;
        if ( v13 < v31 )
          v23 = v13;
        memmove(v37, v8, v23);
      }
    }
    else
    {
      WdLogSingleEntry1(2LL, v14);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"VmbChannelSendSynchronousRequest failed: 0x%I64x",
        v14,
        0LL,
        0LL,
        0LL,
        0LL);
    }
  }
LABEL_42:
  if ( a6 )
  {
    v24 = 0;
    if ( (int)v14 >= 0 )
      v24 = v31;
    *a6 = v24;
  }
  if ( v6 )
    operator delete[](v8);
LABEL_48:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v38);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33);
  if ( v35 )
  {
    LOBYTE(v25) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v25, &EventProfilerExit, v26, v33);
  }
  return (unsigned int)v14;
}
