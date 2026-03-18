/*
 * XREFs of ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C0140940
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00FD870 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x1C0104C00 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C012C4A8 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?UpdateOneCddPrimaryPrivateDriverData@ADAPTER_DISPLAY@@QEAAXIPEAVDXGADAPTER@@@Z @ 0x1C013EEC4 (-UpdateOneCddPrimaryPrivateDriverData@ADAPTER_DISPLAY@@QEAAXIPEAVDXGADAPTER@@@Z.c)
 *     ?CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C013EFA0 (-CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEV.c)
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C013FBA0 (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 *     ?PinDirectFlipResources@DXGDEVICE@@QEAAJIPEBVDXGRESOURCEREFERENCE@@_N@Z @ 0x1C015EF98 (-PinDirectFlipResources@DXGDEVICE@@QEAAJIPEBVDXGRESOURCEREFERENCE@@_N@Z.c)
 *     ?ValidateDirectFlipResource@DXGDEVICE@@QEAAJPEAVDXGRESOURCE@@IIIW4_D3DDDIFORMAT@@I@Z @ 0x1C015F3A8 (-ValidateDirectFlipResource@DXGDEVICE@@QEAAJPEAVDXGRESOURCE@@IIIW4_D3DDDIFORMAT@@I@Z.c)
 *     ?VmBusCreateAllocation@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0239410 (-VmBusCreateAllocation@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusSendDuplicateHandle@DXG_HOST_GLOBAL_VMBUS@@QEAAJPEBU_DXGSHAREDALLOCOBJECT@@IPEAXKPEAUDXGKVMB_GUEST_TRANSACTION@@@Z @ 0x1C0243B9C (-VmBusSendDuplicateHandle@DXG_HOST_GLOBAL_VMBUS@@QEAAJPEBU_DXGSHAREDALLOCOBJECT@@IPEAXKPEAUDXGKV.c)
 *     ?CheckMultiPlaneOverlaySupport3@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@IPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@_NPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C024EBD8 (-CheckMultiPlaneOverlaySupport3@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@.c)
 *     ?IsYUVAllocation@@YAHPEAXPEAVADAPTER_RENDER@@@Z @ 0x1C0250EFC (-IsYUVAllocation@@YAHPEAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?UpdateDodFrontBuffer@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@@Z @ 0x1C0270B20 (-UpdateDodFrontBuffer@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@@Z.c)
 *     ?Blt@DXGCONTEXT@@QEAAJIIIPEAPEAV1@PEAUtagRECT@@IPEBU2@PEAVCOREDEVICEACCESS@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C027A034 (-Blt@DXGCONTEXT@@QEAAJIIIPEAPEAV1@PEAUtagRECT@@IPEBU2@PEAVCOREDEVICEACCESS@@PEAPEAVDXGHWQUEUE@@@.c)
 *     ?BltFromVm@DXGCONTEXT@@QEAAJIIIPEAPEAV1@UtagRECT@@1IPEBU2@PEAVCOREDEVICEACCESS@@@Z @ 0x1C027A91C (-BltFromVm@DXGCONTEXT@@QEAAJIIIPEAPEAV1@UtagRECT@@1IPEBU2@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?PreIndirectPresentReadAllocationInfo@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IAEAUINDIRECT_RESOURCE_INFO@@@Z @ 0x1C027CD30 (-PreIndirectPresentReadAllocationInfo@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IAEAUINDIRECT_RESOURCE_.c)
 *     ?GetAllocationSize@@YAJPEAVDXGDEVICE@@IPEAUtagRECT@@@Z @ 0x1C0295268 (-GetAllocationSize@@YAJPEAVDXGDEVICE@@IPEAUtagRECT@@@Z.c)
 *     ?DisplayOnlyPresent@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@PEAVDXGALLOCATION@@IPEAU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C029F268 (-DisplayOnlyPresent@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@PEAVDXGALLOCATION@@IPEAU_DXGKARG_PRESE.c)
 *     ?PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C029FC1C (-PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEV.c)
 *     ?CheckPrimaryContentWorker@VIDPNSOURCEINFO@@AEAAJPEAVDXGALLOCATION@@@Z @ 0x1C02B5450 (-CheckPrimaryContentWorker@VIDPNSOURCEINFO@@AEAAJPEAVDXGALLOCATION@@@Z.c)
 *     ?PrepareStagingBuffer@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@@Z @ 0x1C02F954C (-PrepareStagingBuffer@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?SetPresentDodArg@PRESENTDODARG@@QEAAJPEAVDXGCONTEXT@@IPEAVDXGALLOCATION@@KEPEBUtagRECT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C02FAC90 (-SetPresentDodArg@PRESENTDODARG@@QEAAJPEAVDXGCONTEXT@@IPEAVDXGALLOCATION@@KEPEBUtagRECT@@PEBU_D3.c)
 * Callees:
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C000A490 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C000A550 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C000A5F0 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000D778 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D7CC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C00FBEF0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@XZ @ 0x1C0149520 (-DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@XZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiDescribeAllocation(
        ADAPTER_RENDER *this,
        struct _DXGKARG_DESCRIBEALLOCATION *a2,
        __int64 a3)
{
  int v4; // r14d
  __int64 v6; // rdx
  _OWORD *hAllocation; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rdi
  __int64 v14; // rbx
  int v15; // r13d
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rcx
  struct DXGTHREAD *ThreadProperty; // rdi
  struct _KTHREAD *CurrentThread; // rbp
  int CurrentProcessSessionId; // r12d
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rdi
  void *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 ThreadWin32Thread; // rax
  int v31; // r12d
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rbp
  __int64 v35; // r8
  __int64 v36; // r9
  _QWORD *v37; // rax
  __int64 v38; // rdx
  __int64 Format; // rcx
  __int64 v40; // rcx
  __int64 v41; // r8
  int v43; // r9d
  struct DXGTHREAD *Current; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  int ProcessSessionId; // edi
  __int64 CurrentThreadProcess; // rax
  _QWORD *v50; // rax
  unsigned __int8 v51; // cl
  _QWORD *v52; // rax
  __int64 v53; // rax
  unsigned __int8 CurrentIrql; // [rsp+20h] [rbp-98h]
  int v55; // [rsp+28h] [rbp-90h] BYREF
  __int64 v56; // [rsp+30h] [rbp-88h]
  char v57; // [rsp+38h] [rbp-80h]
  char v58[8]; // [rsp+40h] [rbp-78h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+48h] [rbp-70h] BYREF

  v4 = 0;
  v55 = -1;
  v56 = 0LL;
  if ( (qword_1C00AE9B0 & 2) != 0 )
  {
    v57 = 1;
    v55 = 5003;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 5003);
  }
  else
  {
    v57 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v55, 5003LL);
  hAllocation = a2->hAllocation;
  if ( !a2->hAllocation )
  {
    v4 = -1073741811;
LABEL_51:
    LODWORD(v34) = v4;
    goto LABEL_40;
  }
  if ( *(_BYTE *)(*((_QWORD *)this + 2) + 209LL) )
  {
    *(_OWORD *)&a2->hAllocation = hAllocation[4];
    *(_OWORD *)&a2->Format = hAllocation[5];
    *(_OWORD *)&a2->RefreshRate.Denominator = hAllocation[6];
    a2->Rotation = -1;
    goto LABEL_51;
  }
  CurrentProcess = PsGetCurrentProcess(hAllocation, v6);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v12 = ProcessDxgProcess;
  if ( (!ProcessDxgProcess || (*(_BYTE *)(ProcessDxgProcess + 347) & 0x10) != 0)
    && (Current = DXGTHREAD::GetCurrent(v11, v10)) != 0LL
    && (v13 = *((_QWORD *)Current + 1)) != 0
    || (v13 = v12) != 0 )
  {
    v14 = v13 + 112;
  }
  else
  {
    v14 = 0LL;
  }
  v15 = 0;
  if ( v14 && *(struct _KTHREAD **)(v14 + 8) == KeGetCurrentThread() )
  {
    v45 = WdLogNewEntry5_WdAssertion(v11, v10);
    *(_QWORD *)(v45 + 24) = 1569LL;
    WdLogEvent5_WdAssertion(v45);
  }
  if ( v13 )
  {
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v14, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v43 = *(_DWORD *)(v14 + 24);
        if ( v43 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q_EtwWriteTransfer(v16, &EventBlockThread, v17, v43);
      }
      ExAcquirePushLockExclusiveEx(v14, 0LL);
    }
    v15 = 2;
    *(_QWORD *)(v14 + 8) = KeGetCurrentThread();
  }
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4324LL));
  CurrentIrql = KeGetCurrentIrql();
  ThreadProperty = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_60;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v46 = WdLogNewEntry5_WdAssertion(v19, v18);
    *(_QWORD *)(v46 + 24) = 496LL;
    WdLogEvent5_WdAssertion(v46);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v19);
  v25 = PsGetCurrentProcess(v24, v23);
  v26 = PsGetProcessDxgProcess(v25);
  if ( CurrentProcessSessionId
    && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId
    && v26
    && (v27 = *(void **)(v26 + 88)) != 0LL
    && v27 != &gDxgkWin32kEngInterface
    && (!(unsigned __int8)KeIsAttachedProcess()
     || (v47 = PsGetCurrentProcess(v29, v28),
         ProcessSessionId = PsGetProcessSessionIdEx(v47),
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
      {
        ThreadProperty = 0LL;
        goto LABEL_60;
      }
    }
    ObfDereferenceObject(ThreadProperty);
  }
  if ( !ThreadProperty )
  {
LABEL_60:
    v31 = 0;
    goto LABEL_29;
  }
  v31 = *((_DWORD *)ThreadProperty + 8);
LABEL_29:
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v58,
    *((struct DXGADAPTER **)this + 2));
  v34 = (*(int (__fastcall **)(_QWORD, struct _DXGKARG_DESCRIBEALLOCATION *))(*((_QWORD *)this + 2) + 392LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 272LL),
          a2);
  if ( v58[0] )
    KeUnstackDetachProcess(&ApcState);
  if ( CurrentIrql != KeGetCurrentIrql() )
  {
    v50 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v33, v32);
    v50[3] = 275LL;
    v50[4] = 16LL;
    v50[5] = this;
    v50[6] = CurrentIrql;
    v51 = KeGetCurrentIrql();
    v50[7] = v51;
    WdLogEvent5_WdCriticalError(v50);
  }
  if ( ThreadProperty && *((_DWORD *)ThreadProperty + 8) != v31 )
  {
    v52 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v33, v32);
    v52[3] = 275LL;
    v52[4] = 38LL;
    v52[5] = *((int *)ThreadProperty + 8);
    v52[6] = v31;
    v52[7] = 0LL;
    WdLogEvent5_WdCriticalError(v52);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4324LL));
  v37 = (_QWORD *)WdLogNewEntry5_WdTrace(v33, v32, v35, v36);
  v37[3] = v34;
  v37[4] = a2->hAllocation;
  v37[5] = a2->Width;
  v37[6] = a2->Height;
  Format = a2->Format;
  v37[7] = Format;
  if ( (_DWORD)v34 )
  {
    v53 = WdLogNewEntry5_WdError(Format, v38);
    *(_QWORD *)(v53 + 24) = v34;
    WdLogEvent5_WdError(v53);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  if ( v15 == 2 )
  {
    *(_QWORD *)(v14 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v14, 0LL);
    KeLeaveCriticalRegion();
  }
LABEL_40:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v55, v6);
  if ( v57 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v40, &EventProfilerExit, v41, v55);
  return (unsigned int)v34;
}
