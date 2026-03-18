/*
 * XREFs of ?DxgkNotifyProcessThawCallout@@YAXPEAU_EPROCESS@@@Z @ 0x1C00E2410
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x1C0001FAC (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002808 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BB0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006598 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024458 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?NotifyProcessThaw@DXGPROCESS@@QEAAXXZ @ 0x1C00E20F8 (-NotifyProcessThaw@DXGPROCESS@@QEAAXXZ.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C024D0C8 (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@.c)
 */

void __fastcall DxgkNotifyProcessThawCallout(PRKPROCESS PROCESS, __int64 a2, __int64 a3)
{
  __int64 ProcessDxgProcess; // rax
  __int64 v5; // rdx
  DXGPROCESS *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  int v11; // edi
  __int64 v12; // rcx
  __int64 v13; // r8
  struct DXGGLOBAL *Global; // rax
  DXG_VMBUS_CHANNEL_BASE *v15; // rcx
  struct _MDL *v16; // [rsp+28h] [rbp-41h]
  int v17; // [rsp+30h] [rbp-39h] BYREF
  __int64 v18; // [rsp+38h] [rbp-31h]
  char v19; // [rsp+40h] [rbp-29h]
  _BYTE v20[16]; // [rsp+48h] [rbp-21h] BYREF
  _BYTE v21[16]; // [rsp+58h] [rbp-11h] BYREF
  __int64 v22; // [rsp+68h] [rbp-1h] BYREF
  int v23; // [rsp+70h] [rbp+7h]
  int v24; // [rsp+74h] [rbp+Bh]
  int v25; // [rsp+78h] [rbp+Fh]
  struct _KAPC_STATE ApcState; // [rsp+80h] [rbp+17h] BYREF

  v17 = -1;
  v18 = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  if ( (qword_1C00B09B0 & 2) != 0 )
  {
    v19 = 1;
    v17 = 2096;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)PROCESS, &EventProfilerEnter, a3, 2096);
  }
  else
  {
    v19 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v17, 2096LL);
  DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v20);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v20);
  ProcessDxgProcess = PsGetProcessDxgProcess(PROCESS);
  v6 = (DXGPROCESS *)ProcessDxgProcess;
  if ( ProcessDxgProcess && *(char *)(ProcessDxgProcess + 347) >= 0 )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v21, *(struct DXGFASTMUTEX *const *)(ProcessDxgProcess + 104), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v21);
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v20, v7);
    KeStackAttachProcess(PROCESS, &ApcState);
    v11 = *((_DWORD *)v6 + 106);
    if ( v11 )
    {
      Global = DXGGLOBAL::GetGlobal(v9, v8);
      v22 = 0LL;
      v23 = v11;
      v15 = (DXG_VMBUS_CHANNEL_BASE *)*((_QWORD *)Global + 197);
      v24 = 1;
      v25 = 1008;
      DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(v15, (struct DXGKVMB_COMMAND_BASE *)&v22, 0x18u, 0LL, 0LL, v16);
    }
    DXGPROCESS::NotifyProcessThaw(v6, v8, v10);
    KeUnstackDetachProcess(&ApcState);
    if ( v21[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v21, v5);
  }
  if ( v20[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v20, v5);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v17, v5);
  if ( v19 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v12, &EventProfilerExit, v13, v17);
  }
}
