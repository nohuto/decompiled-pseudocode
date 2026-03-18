/*
 * XREFs of ?DxgkNotifyProcessThawCallout@@YAXPEAU_EPROCESS@@@Z @ 0x1C00D9F90
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x1C00080DC (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000CF20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000D070 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000D778 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D7CC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000DBC4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?NotifyProcessThaw@DXGPROCESS@@QEAAXXZ @ 0x1C00DDFC4 (-NotifyProcessThaw@DXGPROCESS@@QEAAXXZ.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C0248DD4 (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@.c)
 */

void __fastcall DxgkNotifyProcessThawCallout(PRKPROCESS PROCESS, __int64 a2, __int64 a3)
{
  __int64 ProcessDxgProcess; // rax
  __int64 v5; // rdx
  DXGPROCESS *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // edi
  __int64 v11; // rcx
  __int64 v12; // r8
  struct DXGGLOBAL *Global; // rax
  DXG_VMBUS_CHANNEL_BASE *v14; // rcx
  struct _MDL *v15; // [rsp+28h] [rbp-41h]
  int v16; // [rsp+30h] [rbp-39h] BYREF
  __int64 v17; // [rsp+38h] [rbp-31h]
  char v18; // [rsp+40h] [rbp-29h]
  _BYTE v19[16]; // [rsp+48h] [rbp-21h] BYREF
  _BYTE v20[16]; // [rsp+58h] [rbp-11h] BYREF
  __int64 v21; // [rsp+68h] [rbp-1h] BYREF
  int v22; // [rsp+70h] [rbp+7h]
  int v23; // [rsp+74h] [rbp+Bh]
  int v24; // [rsp+78h] [rbp+Fh]
  struct _KAPC_STATE ApcState; // [rsp+80h] [rbp+17h] BYREF

  v16 = -1;
  v17 = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  if ( (qword_1C00AE9B0 & 2) != 0 )
  {
    v18 = 1;
    v16 = 2096;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)PROCESS, &EventProfilerEnter, a3, 2096);
  }
  else
  {
    v18 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v16, 2096LL);
  DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v19);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v19);
  ProcessDxgProcess = PsGetProcessDxgProcess(PROCESS);
  v6 = (DXGPROCESS *)ProcessDxgProcess;
  if ( ProcessDxgProcess && *(char *)(ProcessDxgProcess + 347) >= 0 )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v20, *(struct DXGFASTMUTEX *const *)(ProcessDxgProcess + 104), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v20);
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v19, v7);
    KeStackAttachProcess(PROCESS, &ApcState);
    v10 = *((_DWORD *)v6 + 106);
    if ( v10 )
    {
      Global = DXGGLOBAL::GetGlobal(v9, v8);
      v21 = 0LL;
      v22 = v10;
      v14 = (DXG_VMBUS_CHANNEL_BASE *)*((_QWORD *)Global + 183);
      v23 = 1;
      v24 = 1008;
      DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(v14, (struct DXGKVMB_COMMAND_BASE *)&v21, 0x18u, 0LL, 0LL, v15);
    }
    DXGPROCESS::NotifyProcessThaw(v6);
    KeUnstackDetachProcess(&ApcState);
    if ( v20[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v20, v5);
  }
  if ( v19[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v19, v5);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v16, v5);
  if ( v18 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v11, &EventProfilerExit, v12, v16);
  }
}
