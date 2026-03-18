/*
 * XREFs of ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C00FCD20
 * Callers:
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C00056F8 (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C0006A30 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C00073A8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     DxgkUnlock @ 0x1C00E0ED0 (DxgkUnlock.c)
 *     DxgkSignalSynchronizationObjectFromGpuByReference @ 0x1C00E8A20 (DxgkSignalSynchronizationObjectFromGpuByReference.c)
 *     DxgkRender @ 0x1C00E9000 (DxgkRender.c)
 *     ?DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@PEAD@Z @ 0x1C00E9B60 (-DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@PEAD@Z.c)
 *     ?Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAVDXGALLOCATION@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C00EA570 (-Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSH.c)
 *     ?WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N444@Z @ 0x1C00EBBA0 (-WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N444@Z.c)
 *     ?DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z @ 0x1C00EF6B0 (-DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z.c)
 *     ?DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z @ 0x1C00F0810 (-DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z.c)
 *     DxgkGetPresentHistoryInternal @ 0x1C00F58B0 (DxgkGetPresentHistoryInternal.c)
 *     ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x1C00F6310 (-DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z.c)
 *     DxgkEscape @ 0x1C00F8350 (DxgkEscape.c)
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@_N6@Z @ 0x1C00FAFA0 (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 *     DxgkPresent @ 0x1C0100670 (DxgkPresent.c)
 *     DxgkLock2 @ 0x1C01012B0 (DxgkLock2.c)
 *     DxgkUnlock2 @ 0x1C0101890 (DxgkUnlock2.c)
 *     DxgkLock @ 0x1C0102370 (DxgkLock.c)
 *     DxgkReclaimAllocations @ 0x1C0102900 (DxgkReclaimAllocations.c)
 *     ?DxgkCddSubmitPresentHistory@@YAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAD@Z @ 0x1C0103B20 (-DxgkCddSubmitPresentHistory@@YAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAD@Z.c)
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEAD@Z @ 0x1C0104170 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C0108470 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ?TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0109590 (-TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@.c)
 *     ?DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C010A060 (-DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU.c)
 *     ?AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C011F5A4 (-AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 *     ?SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAVSESSION_VIEW@@QEAXII_N5@Z @ 0x1C01202D0 (-SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_D.c)
 *     DxgkOfferAllocations @ 0x1C014CCE0 (DxgkOfferAllocations.c)
 *     ?DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@HPEAD@Z @ 0x1C014EE00 (-DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@HPEAD@Z.c)
 *     DxgkSetQueuedLimit @ 0x1C0151B00 (DxgkSetQueuedLimit.c)
 *     ?DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z @ 0x1C0152630 (-DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z.c)
 *     ?SubmitPresentHistoryTokenPreparation@@YAJPEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTER@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAX_N@Z @ 0x1C0152CE0 (-SubmitPresentHistoryTokenPreparation@@YAJPEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCES.c)
 *     DxgkMapGpuVirtualAddress @ 0x1C0153330 (DxgkMapGpuVirtualAddress.c)
 *     ?DxgkpCddSyncGPUAccess@@YAJPEAVDXGPROCESS@@IH@Z @ 0x1C0153CF0 (-DxgkpCddSyncGPUAccess@@YAJPEAVDXGPROCESS@@IH@Z.c)
 *     ?DxgkCddWaitForVerticalBlankEvent@@YAJQEAXIIPEAPEAU_KEVENT@@PEAD@Z @ 0x1C0154530 (-DxgkCddWaitForVerticalBlankEvent@@YAJQEAXIIPEAPEAU_KEVENT@@PEAD@Z.c)
 *     ?WaitForQueuedPresentLimit@DXGCONTEXT@@QEAAJIEPEAVCOREDEVICEACCESS@@@Z @ 0x1C0154970 (-WaitForQueuedPresentLimit@DXGCONTEXT@@QEAAJIEPEAVCOREDEVICEACCESS@@@Z.c)
 *     DxgkGetScanLine @ 0x1C016BD50 (DxgkGetScanLine.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002808 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BB0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006598 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024458 (McTemplateK0q_EtwWriteTransfer.c)
 *     McTemplateK0pt_EtwWriteTransfer @ 0x1C0039B44 (McTemplateK0pt_EtwWriteTransfer.c)
 *     DpiEnableD3Requests @ 0x1C00E20CC (DpiEnableD3Requests.c)
 *     ?GetFirstProfilerInterface@DXGGLOBAL@@SA?AW4_DXGKETW_PROFILER_TYPE@@XZ @ 0x1C00E86B8 (-GetFirstProfilerInterface@DXGGLOBAL@@SA-AW4_DXGKETW_PROFILER_TYPE@@XZ.c)
 *     W32kStub_DCompositionNotifyCompositionTokenPresent @ 0x1C00FD030 (W32kStub_DCompositionNotifyCompositionTokenPresent.c)
 *     ?DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@XZ @ 0x1C0157070 (-DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@XZ.c)
 *     ??0DXGDEADLOCK_TRACKER@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0162390 (--0DXGDEADLOCK_TRACKER@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?Cancel@DXGDEADLOCK_TRACKER@@QEAAXXZ @ 0x1C01624F0 (-Cancel@DXGDEADLOCK_TRACKER@@QEAAXXZ.c)
 *     ?WakeUpAdapter@DXGADAPTER@@QEAAXXZ @ 0x1C0210450 (-WakeUpAdapter@DXGADAPTER@@QEAAXXZ.c)
 *     ?AddProcessEntry@DripsBlockerTrackingHelper@@QEAAJ_KPEBDPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C02BF884 (-AddProcessEntry@DripsBlockerTrackingHelper@@QEAAJ_KPEBDPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@.c)
 */

void __fastcall DXGADAPTER::AcquireCoreResourceShared(DXGADAPTER *this, char *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 CurrentProcess; // rax
  __int64 v10; // rbp
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct DXGGLOBAL *Global; // rax
  struct DXGGLOBAL *v15; // rdi
  char v16; // r12
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v20; // ebp
  struct _KTHREAD *CurrentThread; // rsi
  int CurrentProcessSessionId; // r14d
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 ProcessDxgProcess; // rdi
  void *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 ThreadWin32Thread; // rax
  __int64 v31; // r8
  struct DXGTHREAD *ThreadProperty; // rdi
  bool v33; // zf
  __int64 v34; // rax
  int ProcessSessionId; // edi
  __int64 CurrentThreadProcess; // rax
  __int64 v37; // rax
  int v38; // r9d
  __int64 v39; // rax
  __int64 v40; // rax
  int FirstProfilerInterface; // eax
  __int64 v42; // rdx
  __int64 v43; // rax
  __int64 v44; // [rsp+20h] [rbp-178h]
  _BYTE v45[16]; // [rsp+30h] [rbp-168h] BYREF
  _BYTE DeferredContext[320]; // [rsp+40h] [rbp-158h] BYREF

  if ( ExIsResourceAcquiredSharedLite(*((PERESOURCE *)this + 21)) )
  {
    v37 = WdLogNewEntry5_WdAssertion(v5, v4);
    *(_QWORD *)(v37 + 24) = 3959LL;
    WdLogEvent5_WdAssertion(v37);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx((char *)this + 104, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v38 = *((_DWORD *)this + 32);
      if ( v38 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q_EtwWriteTransfer(v7, &EventBlockThread, v8, v38);
    }
    ExAcquirePushLockSharedEx((char *)this + 104, 0LL);
  }
  CurrentProcess = PsGetCurrentProcess(v7, v6);
  v10 = *((_QWORD *)this + 28);
  v11 = CurrentProcess;
  Global = DXGGLOBAL::GetGlobal(v13, v12);
  v15 = Global;
  if ( v10 )
  {
    if ( v11 )
    {
      if ( *((_DWORD *)Global + 494) )
      {
        if ( *((_BYTE *)Global + 304216) )
        {
          DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v45, (struct DXGGLOBAL *)((char *)Global + 1984), 0);
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v45);
          FirstProfilerInterface = DXGGLOBAL::GetFirstProfilerInterface();
          DripsBlockerTrackingHelper::AddProcessEntry((char *)v15 + 2136, v10, a2, v11, FirstProfilerInterface);
          if ( v45[8] )
            DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v45, v42);
        }
      }
    }
    else
    {
      v40 = WdLogNewEntry5_WdEvent();
      *(_QWORD *)(v40 + 24) = 510LL;
      WdLogEvent5_WdEvent(v40);
    }
  }
  else
  {
    v39 = WdLogNewEntry5_WdEvent();
    *(_QWORD *)(v39 + 24) = 504LL;
    WdLogEvent5_WdEvent(v39);
  }
  if ( *((_DWORD *)this + 40) == 1 )
  {
    DXGADAPTER::WakeUpAdapter(this);
    v16 = 1;
  }
  else
  {
    v16 = 0;
  }
  KeEnterCriticalRegion();
  W32kStub_DCompositionNotifyCompositionTokenPresent();
  if ( bTracingEnabled
    && (qword_1C00B09B0 & 0x1000000) != 0
    && (qword_1C00B09B0 & 0x2000) == 0
    && (Microsoft_Windows_DxgKrnlEnableBits & 0x400000000LL) != 0 )
  {
    LODWORD(v44) = 0;
    McTemplateK0pt_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, &EventPreAcquireAdapterLock, v17, this, v44);
  }
  if ( !ExAcquireResourceSharedLite(*((PERESOURCE *)this + 21), 0) )
  {
    DXGDEADLOCK_TRACKER::DXGDEADLOCK_TRACKER(DeferredContext, this);
    ExAcquireResourceSharedLite(*((PERESOURCE *)this + 21), 1u);
    DXGDEADLOCK_TRACKER::Cancel((DXGDEADLOCK_TRACKER *)DeferredContext);
  }
  *((_DWORD *)this + 1119) = 0;
  v20 = -1;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v43 = WdLogNewEntry5_WdAssertion(v19, v18);
    *(_QWORD *)(v43 + 24) = 507LL;
    WdLogEvent5_WdAssertion(v43);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v19, v18);
  v25 = PsGetCurrentProcess(v24, v23);
  ProcessDxgProcess = PsGetProcessDxgProcess(v25);
  if ( CurrentProcessSessionId
    && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId
    && ProcessDxgProcess
    && (v27 = *(void **)(ProcessDxgProcess + 88)) != 0LL
    && v27 != &gDxgkWin32kEngInterface
    && (!(unsigned __int8)KeIsAttachedProcess()
     || (v34 = PsGetCurrentProcess(v29, v28),
         ProcessSessionId = PsGetProcessSessionIdEx(v34),
         CurrentThreadProcess = PsGetCurrentThreadProcess(),
         ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)))
    && (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) != 0
    && *(_QWORD *)ThreadWin32Thread )
  {
    ThreadProperty = *(struct DXGTHREAD **)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    ThreadProperty = (struct DXGTHREAD *)PsGetThreadProperty(KeGetCurrentThread(), 0x68547844uLL, 0);
    if ( !ThreadProperty )
    {
      ThreadProperty = DxgkThreadObjectCreateDxgThread();
      if ( !ThreadProperty )
        goto LABEL_26;
    }
    ObfDereferenceObject(ThreadProperty);
  }
  if ( ThreadProperty )
    v20 = *((_DWORD *)ThreadProperty + 10);
LABEL_26:
  v33 = bTracingEnabled == 0;
  *((_DWORD *)this + 1120) = v20;
  if ( !v33
    && (qword_1C00B09B0 & 0x1000000) != 0
    && (qword_1C00B09B0 & 0x2000) == 0
    && (Microsoft_Windows_DxgKrnlEnableBits & 0x400000000LL) != 0 )
  {
    LODWORD(v44) = 1;
    McTemplateK0pt_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, &EventPostAcquireAdapterLock, v31, this, v44);
  }
  if ( v16 && *((_DWORD *)this + 50) == 1 )
    DpiEnableD3Requests(*((_QWORD *)this + 27));
  ExReleasePushLockSharedEx((char *)this + 104, 0LL);
  KeLeaveCriticalRegion();
}
