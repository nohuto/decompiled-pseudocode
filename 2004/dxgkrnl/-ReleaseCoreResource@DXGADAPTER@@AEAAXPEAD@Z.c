/*
 * XREFs of ?ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C00FD040
 * Callers:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0003F10 (--1COREACCESS@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0003FB0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00072C8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C00099A8 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     DxgkSignalSynchronizationObjectFromGpuByReference @ 0x1C00E8A20 (DxgkSignalSynchronizationObjectFromGpuByReference.c)
 *     DxgkRender @ 0x1C00E9000 (DxgkRender.c)
 *     ?DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@PEAD@Z @ 0x1C00E9B60 (-DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@PEAD@Z.c)
 *     ?Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAVDXGALLOCATION@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C00EA570 (-Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSH.c)
 *     ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x1C00F6310 (-DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z.c)
 *     ?DxgkCddSubmitPresentHistory@@YAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAD@Z @ 0x1C0103B20 (-DxgkCddSubmitPresentHistory@@YAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAD@Z.c)
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEAD@Z @ 0x1C0104170 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 *     ?TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0109590 (-TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@.c)
 *     ?DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C010A060 (-DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU.c)
 *     ?ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C011F214 (-ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 *     ?SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAVSESSION_VIEW@@QEAXII_N5@Z @ 0x1C01202D0 (-SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_D.c)
 *     ?DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z @ 0x1C0152630 (-DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z.c)
 *     ?SubmitPresentHistoryTokenPreparation@@YAJPEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTER@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAX_N@Z @ 0x1C0152CE0 (-SubmitPresentHistoryTokenPreparation@@YAJPEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCES.c)
 *     ?DxgkpCddSyncGPUAccess@@YAJPEAVDXGPROCESS@@IH@Z @ 0x1C0153CF0 (-DxgkpCddSyncGPUAccess@@YAJPEAVDXGPROCESS@@IH@Z.c)
 *     ?DxgkCddWaitForVerticalBlankEvent@@YAJQEAXIIPEAPEAU_KEVENT@@PEAD@Z @ 0x1C0154530 (-DxgkCddWaitForVerticalBlankEvent@@YAJQEAXIIPEAPEAU_KEVENT@@PEAD@Z.c)
 *     ?WaitForQueuedPresentLimit@DXGCONTEXT@@QEAAJIEPEAVCOREDEVICEACCESS@@@Z @ 0x1C0154970 (-WaitForQueuedPresentLimit@DXGCONTEXT@@QEAAJIEPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?AcquireLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ @ 0x1C020B560 (-AcquireLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ.c)
 *     ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x1C020FA84 (-Stop@DXGADAPTER@@QEAAXEE@Z.c)
 *     ?EnableIoMmuIsolation@ADAPTER_RENDER@@QEAAJXZ @ 0x1C0216024 (-EnableIoMmuIsolation@ADAPTER_RENDER@@QEAAJXZ.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002808 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BB0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006598 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000B3EC (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C0039170 (McTemplateK0p_EtwWriteTransfer.c)
 *     ?GetFirstProfilerInterface@DXGGLOBAL@@SA?AW4_DXGKETW_PROFILER_TYPE@@XZ @ 0x1C00E86B8 (-GetFirstProfilerInterface@DXGGLOBAL@@SA-AW4_DXGKETW_PROFILER_TYPE@@XZ.c)
 *     W32kStub_DCompositionNotifyCompositionTokenPresent @ 0x1C00FD030 (W32kStub_DCompositionNotifyCompositionTokenPresent.c)
 *     ?ResumeScheduler@ADAPTER_RENDER@@QEAAXEE@Z @ 0x1C0139F80 (-ResumeScheduler@ADAPTER_RENDER@@QEAAXEE@Z.c)
 *     ?RemoveProcessEntry@DripsBlockerTrackingHelper@@QEAAJ_KPEBDPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C02C361C (-RemoveProcessEntry@DripsBlockerTrackingHelper@@QEAAJ_KPEBDPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TY.c)
 */

void __fastcall DXGADAPTER::ReleaseCoreResource(DXGADAPTER *this, char *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 CurrentProcess; // rax
  __int64 v8; // rbp
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v13; // r8
  struct DXGGLOBAL *v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  int FirstProfilerInterface; // eax
  __int64 v22; // rdx
  _BYTE v23[24]; // [rsp+30h] [rbp-18h] BYREF

  if ( !ExIsResourceAcquiredSharedLite(*((PERESOURCE *)this + 21)) )
  {
    v15 = WdLogNewEntry5_WdAssertion(v5, v4);
    *(_QWORD *)(v15 + 24) = 4193LL;
    WdLogEvent5_WdAssertion(v15);
  }
  if ( *((_QWORD *)this + 23) )
  {
    v16 = WdLogNewEntry5_WdAssertion(v5, v4);
    *(_QWORD *)(v16 + 24) = 4194LL;
    WdLogEvent5_WdAssertion(v16);
  }
  v6 = *((_QWORD *)this + 338);
  if ( v6 && *(_BYTE *)(v6 + 632) )
  {
    if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)this) )
    {
      v17 = WdLogNewEntry5_WdAssertion(v5, v4);
      *(_QWORD *)(v17 + 24) = 4202LL;
      WdLogEvent5_WdAssertion(v17);
    }
    v18 = *((_QWORD *)this + 338);
    if ( *(_QWORD *)(v18 + 624) )
    {
      ADAPTER_RENDER::ResumeScheduler(*((ADAPTER_RENDER **)this + 338), 1u, 0);
      v18 = *((_QWORD *)this + 338);
    }
    *(_BYTE *)(v18 + 632) = 0;
  }
  CurrentProcess = PsGetCurrentProcess(v5, v4);
  v8 = *((_QWORD *)this + 28);
  v9 = CurrentProcess;
  Global = DXGGLOBAL::GetGlobal(v11, v10);
  v14 = Global;
  if ( v8 )
  {
    if ( v9 )
    {
      if ( *((_DWORD *)Global + 494) )
      {
        if ( *((_BYTE *)Global + 304216) )
        {
          DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v23, (struct DXGGLOBAL *)((char *)Global + 1984), 0);
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v23);
          FirstProfilerInterface = DXGGLOBAL::GetFirstProfilerInterface();
          DripsBlockerTrackingHelper::RemoveProcessEntry((char *)v14 + 2136, v8, a2, v9, FirstProfilerInterface);
          if ( v23[8] )
            DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v23, v22);
        }
      }
    }
    else
    {
      v20 = WdLogNewEntry5_WdEvent();
      *(_QWORD *)(v20 + 24) = 546LL;
      WdLogEvent5_WdEvent(v20);
    }
  }
  else
  {
    v19 = WdLogNewEntry5_WdEvent();
    *(_QWORD *)(v19 + 24) = 540LL;
    WdLogEvent5_WdEvent(v19);
  }
  if ( bTracingEnabled
    && (qword_1C00B09B0 & 0x1000000) != 0
    && (qword_1C00B09B0 & 0x2000) == 0
    && (Microsoft_Windows_DxgKrnlEnableBits & 0x400000000LL) != 0 )
  {
    McTemplateK0p_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, &EventReleaseAdapterLock, v13, this);
  }
  W32kStub_DCompositionNotifyCompositionTokenPresent();
  ExReleaseResourceLite(*((PERESOURCE *)this + 21));
  KeLeaveCriticalRegion();
}
