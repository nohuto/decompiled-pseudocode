/*
 * XREFs of ?ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C00FD5D0
 * Callers:
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C000A1D4 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C000B19C (-Release@COREACCESS@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000E1E8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000EE8C (--1COREACCESS@@QEAA@XZ.c)
 *     DxgkRender @ 0x1C00F2C60 (DxgkRender.c)
 *     ?DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@PEAD@Z @ 0x1C00F4170 (-DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@PEAD@Z.c)
 *     ?Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAVDXGALLOCATION@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C00F57B0 (-Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSH.c)
 *     ?DxgkCddSubmitPresentHistory@@YAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAD@Z @ 0x1C0107D90 (-DxgkCddSubmitPresentHistory@@YAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAD@Z.c)
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEAD@Z @ 0x1C01083E0 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 *     ?TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C010D860 (-TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@.c)
 *     ?DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C010E330 (-DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU.c)
 *     DxgkSignalSynchronizationObjectFromGpuByReference @ 0x1C0112D30 (DxgkSignalSynchronizationObjectFromGpuByReference.c)
 *     ?SubmitPresentHistoryTokenPreparation@@YAJPEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTER@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAX_N@Z @ 0x1C01132F0 (-SubmitPresentHistoryTokenPreparation@@YAJPEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCES.c)
 *     ?SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAVSESSION_VIEW@@QEAXII_N5@Z @ 0x1C0114C30 (-SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_D.c)
 *     ?ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C01272E4 (-ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 *     ?DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z @ 0x1C0135030 (-DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z.c)
 *     ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x1C0141110 (-DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z.c)
 *     ?DxgkpCddSyncGPUAccess@@YAJPEAVDXGPROCESS@@IH@Z @ 0x1C01463F0 (-DxgkpCddSyncGPUAccess@@YAJPEAVDXGPROCESS@@IH@Z.c)
 *     ?DxgkCddWaitForVerticalBlankEvent@@YAJQEAXIIPEAPEAU_KEVENT@@PEAD@Z @ 0x1C0146C30 (-DxgkCddWaitForVerticalBlankEvent@@YAJQEAXIIPEAPEAU_KEVENT@@PEAD@Z.c)
 *     ?WaitForQueuedPresentLimit@DXGCONTEXT@@QEAAJIEPEAVCOREDEVICEACCESS@@@Z @ 0x1C0147070 (-WaitForQueuedPresentLimit@DXGCONTEXT@@QEAAJIEPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?AcquireLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ @ 0x1C0207318 (-AcquireLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ.c)
 *     ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x1C020B838 (-Stop@DXGADAPTER@@QEAAXEE@Z.c)
 *     ?EnableIoMmuIsolation@ADAPTER_RENDER@@QEAAJXZ @ 0x1C0211DD4 (-EnableIoMmuIsolation@ADAPTER_RENDER@@QEAAJXZ.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000CF20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000D070 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000DBC4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00115CC (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C0038290 (McTemplateK0p_EtwWriteTransfer.c)
 *     W32kStub_DCompositionNotifyCompositionTokenPresent @ 0x1C00FD5C0 (W32kStub_DCompositionNotifyCompositionTokenPresent.c)
 *     ?GetFirstProfilerInterface@DXGGLOBAL@@SA?AW4_DXGKETW_PROFILER_TYPE@@XZ @ 0x1C0127F20 (-GetFirstProfilerInterface@DXGGLOBAL@@SA-AW4_DXGKETW_PROFILER_TYPE@@XZ.c)
 *     ?ResumeScheduler@ADAPTER_RENDER@@QEAAXEE@Z @ 0x1C012BC78 (-ResumeScheduler@ADAPTER_RENDER@@QEAAXEE@Z.c)
 *     ?RemoveProcessEntry@DripsBlockerTrackingHelper@@QEAAJ_KPEBDPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C02BF0DC (-RemoveProcessEntry@DripsBlockerTrackingHelper@@QEAAJ_KPEBDPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TY.c)
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
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  struct DXGGLOBAL *v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  int FirstProfilerInterface; // eax
  __int64 v24; // rdx
  _BYTE v25[24]; // [rsp+30h] [rbp-18h] BYREF

  if ( !ExIsResourceAcquiredSharedLite(*((PERESOURCE *)this + 21)) )
  {
    v17 = WdLogNewEntry5_WdAssertion(v5, v4);
    *(_QWORD *)(v17 + 24) = 4193LL;
    WdLogEvent5_WdAssertion(v17);
  }
  if ( *((_QWORD *)this + 23) )
  {
    v18 = WdLogNewEntry5_WdAssertion(v5, v4);
    *(_QWORD *)(v18 + 24) = 4194LL;
    WdLogEvent5_WdAssertion(v18);
  }
  v6 = *((_QWORD *)this + 335);
  if ( v6 && *(_BYTE *)(v6 + 632) )
  {
    if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)this) )
    {
      v19 = WdLogNewEntry5_WdAssertion(v5, v4);
      *(_QWORD *)(v19 + 24) = 4202LL;
      WdLogEvent5_WdAssertion(v19);
    }
    v20 = *((_QWORD *)this + 335);
    if ( *(_QWORD *)(v20 + 624) )
    {
      ADAPTER_RENDER::ResumeScheduler(*((ADAPTER_RENDER **)this + 335), 1u, 0);
      v20 = *((_QWORD *)this + 335);
    }
    *(_BYTE *)(v20 + 632) = 0;
  }
  CurrentProcess = PsGetCurrentProcess(v5, v4);
  v8 = *((_QWORD *)this + 28);
  v9 = CurrentProcess;
  Global = DXGGLOBAL::GetGlobal(v11, v10);
  v16 = Global;
  if ( v8 )
  {
    if ( v9 )
    {
      if ( *((_DWORD *)Global + 464) )
      {
        if ( *((_BYTE *)Global + 304096) )
        {
          DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v25, (struct DXGGLOBAL *)((char *)Global + 1864), 0);
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v25);
          FirstProfilerInterface = DXGGLOBAL::GetFirstProfilerInterface();
          DripsBlockerTrackingHelper::RemoveProcessEntry((char *)v16 + 2016, v8, a2, v9, FirstProfilerInterface);
          if ( v25[8] )
            DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v25, v24);
        }
      }
    }
    else
    {
      v22 = WdLogNewEntry5_WdEvent(v14, v13);
      *(_QWORD *)(v22 + 24) = 546LL;
      WdLogEvent5_WdEvent(v22);
    }
  }
  else
  {
    v21 = WdLogNewEntry5_WdEvent(v14, v13);
    *(_QWORD *)(v21 + 24) = 540LL;
    WdLogEvent5_WdEvent(v21);
  }
  if ( bTracingEnabled
    && (qword_1C00AE9B0 & 0x1000000) != 0
    && (qword_1C00AE9B0 & 0x2000) == 0
    && (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000LL) != 0 )
  {
    McTemplateK0p_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, &EventReleaseAdapterLock, v15, this);
  }
  W32kStub_DCompositionNotifyCompositionTokenPresent();
  ExReleaseResourceLite(*((PERESOURCE *)this + 21));
  KeLeaveCriticalRegion();
}
