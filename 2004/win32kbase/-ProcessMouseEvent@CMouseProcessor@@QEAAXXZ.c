/*
 * XREFs of ?ProcessMouseEvent@CMouseProcessor@@QEAAXXZ @ 0x1C00709D4
 * Callers:
 *     ProcessMouseEvent @ 0x1C006FEF0 (ProcessMouseEvent.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0038CF8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ?UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z @ 0x1C0061710 (-UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z.c)
 *     _tlgKeywordOn @ 0x1C006DE40 (_tlgKeywordOn.c)
 *     EtwTraceStopProcessQueuedMouseEvents @ 0x1C006FED0 (EtwTraceStopProcessQueuedMouseEvents.c)
 *     EtwTraceStartProcessQueuedMouseEvents @ 0x1C006FF20 (EtwTraceStartProcessQueuedMouseEvents.c)
 *     ??0RawMouseEvent@CMouseProcessor@@QEAA@XZ @ 0x1C006FF40 (--0RawMouseEvent@CMouseProcessor@@QEAA@XZ.c)
 *     ApiSetEditionForegroundQAccessibleToMouseProducer @ 0x1C006FFB4 (ApiSetEditionForegroundQAccessibleToMouseProducer.c)
 *     ?Initialize@CMouseRawInput@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@@Z @ 0x1C0070080 (-Initialize@CMouseRawInput@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@@Z.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C0070E3C (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ?Dequeue@CMouseQueue@CMouseProcessor@@QEAA_NPEAURawMouseEvent@2@@Z @ 0x1C0070E80 (-Dequeue@CMouseQueue@CMouseProcessor@@QEAA_NPEAURawMouseEvent@2@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C0070F68 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     IsMouseIVEnabled @ 0x1C0070FEC (IsMouseIVEnabled.c)
 *     isRootPartition @ 0x1C0071238 (isRootPartition.c)
 *     RIMLockExclusive @ 0x1C00712F0 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     ?ComputeUIPIForMouseEvent@CMouseProcessor@@AEAAXPEAURawMouseEvent@1@@Z @ 0x1C00789A8 (-ComputeUIPIForMouseEvent@CMouseProcessor@@AEAAXPEAURawMouseEvent@1@@Z.c)
 *     HMUnlockObject @ 0x1C0087E70 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C008B5C0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C008B950 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C008BA00 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0091530 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0093F20 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     ?DeviceTypeToString@InputTraceLogging@@CAPEBDK@Z @ 0x1C01ACC3C (-DeviceTypeToString@InputTraceLogging@@CAPEBDK@Z.c)
 *     ?OriginIdToString@InputTraceLogging@@CAPEBDW4tagINPUT_MESSAGE_ORIGIN_ID@@@Z @ 0x1C01AD18C (-OriginIdToString@InputTraceLogging@@CAPEBDW4tagINPUT_MESSAGE_ORIGIN_ID@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U?$_tlgWrapSz@D@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@444AEBU?$_tlgWrapSz@D@@5@Z @ 0x1C01BADD0 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U-$_tlgWrapSz@D@@U3@@-$_tlgW.c)
 *     ?CommitStagedChunkInput@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@@Z @ 0x1C01BB9D4 (-CommitStagedChunkInput@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@@Z.c)
 *     ?DropInput@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z @ 0x1C01BC008 (-DropInput@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z.c)
 *     ?FlushInputDestinedForContainer@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXXZ @ 0x1C01BCA2C (-FlushInputDestinedForContainer@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CMouseProcessor::ProcessMouseEvent(CMouseProcessor *this)
{
  __int64 v2; // rcx
  CMouseProcessor::CMouseQueue *v3; // r12
  bool v4; // al
  bool v5; // bl
  __int64 v6; // rcx
  __int64 v7; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v9; // rbx
  struct tagTHREADINFO **v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  PVOID CurrentProcess; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v19; // rbx
  __int64 v20; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  CMouseProcessor *v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  struct tagKERNELHANDLETABLEENTRY *v37; // r14
  __int64 v38; // r9
  ULONG *p_Flags; // rdx
  int v40; // edx
  ULONG v41; // r8d
  unsigned int v42; // edi
  bool (__fastcall **v43)(const struct CMouseProcessor::CMouseEvent *); // rbx
  __int64 v44; // rcx
  void (*v45)(void); // rax
  __int64 v46; // rcx
  __int64 v47; // r9
  __int64 v48; // rdx
  unsigned int v49; // eax
  __int64 v50; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v53; // rax
  unsigned int v54; // r8d
  __int64 v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rcx
  PERESOURCE *v58; // rdi
  __int64 v59; // r8
  __int64 v60; // r9
  int v61; // [rsp+68h] [rbp-A0h] BYREF
  int v62; // [rsp+6Ch] [rbp-9Ch] BYREF
  int DeviceRoutine; // [rsp+70h] [rbp-98h] BYREF
  int v64; // [rsp+74h] [rbp-94h] BYREF
  int AttachedDevice_low; // [rsp+78h] [rbp-90h] BYREF
  int v66; // [rsp+7Ch] [rbp-8Ch] BYREF
  int v67; // [rsp+80h] [rbp-88h] BYREF
  void **v68; // [rsp+88h] [rbp-80h] BYREF
  ULONG *v69; // [rsp+90h] [rbp-78h]
  int v70; // [rsp+98h] [rbp-70h]
  _BYTE v71[8]; // [rsp+A0h] [rbp-68h] BYREF
  _BYTE v72[8]; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v73; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v74; // [rsp+B8h] [rbp-50h] BYREF
  __int64 CurrentIrp; // [rsp+C0h] [rbp-48h] BYREF
  struct _DEVICE_OBJECT v76; // [rsp+C8h] [rbp-40h] BYREF
  int *v77; // [rsp+228h] [rbp+120h]
  __int64 v78; // [rsp+230h] [rbp+128h]

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
    (InputTraceLogging::ThreadLockedPerfRegion *)v72,
    "ProcessMouse",
    0LL);
  EtwTraceStartProcessQueuedMouseEvents(v2);
  CMouseProcessor::RawMouseEvent::RawMouseEvent((CMouseProcessor::RawMouseEvent *)&v76.Flags);
  v3 = (CMouseProcessor *)((char *)this + 80);
  while ( 1 )
  {
    RIMLockExclusive((char *)this + 2776);
    v4 = CMouseProcessor::CMouseQueue::Dequeue(v3, (struct CMouseProcessor::RawMouseEvent *)&v76.Flags);
    *((_QWORD *)this + 348) = 0LL;
    v5 = v4;
    ExReleasePushLockExclusiveEx((char *)this + 2776, 0LL);
    KeLeaveCriticalRegion();
    if ( !v5 )
      break;
    InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
      (InputTraceLogging::ThreadLockedPerfRegion *)v71,
      "ProcessMouseEvent",
      (const struct InputTraceLogging::ThreadLockedPerfRegion *)v72);
    if ( (unsigned int)dword_1C0246A70 > 4 && tlgKeywordOn((__int64)&dword_1C0246A70, 64LL) )
    {
      v73 = InputTraceLogging::OriginIdToString(*(&v76.AlignmentRequirement + 1));
      v74 = (__int64)InputTraceLogging::DeviceTypeToString(v76.AlignmentRequirement);
      v61 = *((unsigned __int16 *)&v76.StackSize + 1);
      v62 = *(unsigned __int16 *)&v76.StackSize;
      DeviceRoutine = (int)v76.Queue.Wcb.DeviceRoutine;
      v64 = *((_DWORD *)&v76.Queue.Wcb.1 + 5);
      CurrentIrp = (__int64)v76.Queue.Wcb.CurrentIrp;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<char>>(
        (int)&dword_1C0246A70,
        (int)&dword_1C021BA8E,
        (__int64)&CurrentIrp,
        (__int64)&v64,
        (__int64)&DeviceRoutine,
        (__int64)&v62,
        (__int64)&v61,
        (__int64)&v74,
        (__int64)&v73);
    }
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v6);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    *(_OWORD *)((char *)&v76.AttachedDevice + 4) = 0LL;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      LOBYTE(v76.AttachedDevice) = 1;
      v53 = PsGetCurrentThreadWin32Thread(v7);
      v76.NextDevice = (struct _DEVICE_OBJECT *)v53;
      if ( v53 && (*(int *)(v53 + 24) > 0 || v76.NextDevice->Flags) )
      {
        EtwActivityIdControl(3u, (LPGUID)((char *)&v76.AttachedDevice + 4));
        if ( (unsigned int)dword_1C0246A70 > 6 && tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
        {
          AttachedDevice_low = LOBYTE(v76.AttachedDevice);
          *(_QWORD *)&v76.ActiveThreadCount = 4LL;
          v76.Dpc.DpcData = &AttachedDevice_low;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C0246A70,
            (unsigned __int8 *)dword_1C0213E87,
            (const GUID *)((char *)&v76.AttachedDevice + 4),
            0LL,
            3u,
            (PEVENT_DATA_DESCRIPTOR)&v76.Dpc.DeferredRoutine);
        }
      }
    }
    else
    {
      v76.NextDevice = 0LL;
    }
    v9 = 0LL;
    while ( 1 )
    {
      v10 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      if ( v10 )
        v9 = *v10;
      CurrentProcess = (PVOID)PsGetCurrentProcess(v12, v11);
      if ( CurrentProcess )
      {
        if ( CurrentProcess == g_pepDwm )
          break;
      }
      if ( (PVOID)PsGetCurrentProcess(v15, v14) == gpepCSRSS && v9 != (struct tagTHREADINFO *)gptiTSRequest
        || gbDITInHitTest != 1
        || v9 == gptiRit )
      {
        break;
      }
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
    }
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
      && v76.NextDevice
      && (v76.NextDevice->Flags || SLODWORD(v76.NextDevice->AttachedDevice) > 0) )
    {
      HIDWORD(v76.NextDevice->Timer) = 1;
      *(_OWORD *)((char *)&v76.NextDevice->AttachedDevice + 4) = *(_OWORD *)((char *)&v76.AttachedDevice + 4);
      if ( (unsigned int)dword_1C0246A70 > 6 )
      {
        if ( tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
        {
          v66 = LOBYTE(v76.AttachedDevice);
          v76.DeviceObjectExtension = (struct _DEVOBJ_EXTENSION *)4;
          *(_QWORD *)&v76.SectorSize = &v66;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C0246A70,
            (unsigned __int8 *)dword_1C0213E30,
            (const GUID *)((char *)&v76.AttachedDevice + 4),
            0LL,
            3u,
            (PEVENT_DATA_DESCRIPTOR)&v76.SecurityDescriptor);
          v54 = dword_1C0246A70;
        }
        if ( v54 > 6 && tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
        {
          v67 = LOBYTE(v76.AttachedDevice);
          v78 = 4LL;
          v77 = &v67;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C0246A70,
            (unsigned __int8 *)dword_1C0213E5D,
            (const GUID *)((char *)&v76.AttachedDevice + 4),
            0LL,
            3u,
            (PEVENT_DATA_DESCRIPTOR)&v76.Reserved);
        }
      }
    }
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v9;
    gbValidateHandleForIL = 1;
    if ( !(unsigned __int8)KeIsAttachedProcess()
      || (v50 = PsGetCurrentProcess(v17, v16),
          ProcessSessionId = PsGetProcessSessionIdEx(v50),
          CurrentThreadProcess = PsGetCurrentThreadProcess(),
          ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
    {
      CurrentThread = KeGetCurrentThread();
      v19 = 0LL;
      if ( !(unsigned int)IsThreadCrossSessionAttached() )
      {
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
          v19 = *ThreadWin32Thread;
      }
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v20);
      if ( v19 )
      {
        if ( CurrentProcessWin32Process )
        {
          if ( (*(_DWORD *)(v19 + 480) & 0x1000000) != 0 )
          {
            v23 = (CMouseProcessor *)*(unsigned int *)(v19 + 1224);
            if ( (char)v23 >= 0 && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
            {
              DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL);
              if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v25, v24, v27, v28);
              if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v30, v29, v31, v32);
              ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
              v37 = gpducstulHead;
              if ( gpducstulHead )
              {
                do
                {
                  gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)v37 + 2);
                  v55 = *(_QWORD *)v37;
                  *((_QWORD *)v37 + 2) = 0LL;
                  if ( !*(_DWORD *)(v55 + 8) )
                    MicrosoftTelemetryAssertTriggeredNoArgsKM(v34, v33, v35, v36);
                  v58 = (PERESOURCE *)GetDomainLockRef(12LL);
                  if ( v58 == (PERESOURCE *)&gDomainDummyLock )
                    MicrosoftTelemetryAssertTriggeredNoArgsKM(v57, v56, v59, v60);
                  ExReleaseResourceAndLeaveCriticalRegion(*v58);
                  HMUnlockObject(*(_QWORD *)v37);
                  tagDomLock::LockExclusive((tagDomLock *)v58);
                  v37 = gpducstulHead;
                }
                while ( gpducstulHead );
                v3 = (CMouseProcessor *)((char *)this + 80);
              }
              ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
            }
          }
        }
      }
    }
    CMouseProcessor::ComputeUIPIForMouseEvent(v23, (struct CMouseProcessor::RawMouseEvent *)&v76.Flags);
    p_Flags = &v76.Flags;
    v68 = &CMouseProcessor::CMouseEvent::`vftable';
    v69 = &v76.Flags;
    v70 = 0;
    if ( (v76.DeviceQueue.Type & 1) != 0 || *(&v76.AlignmentRequirement + 1) == 1 )
      goto LABEL_35;
    *(_QWORD *)&v76.Type = *(struct _LIST_ENTRY **)((char *)&v76.DeviceQueue.DeviceListHead.Blink + 4);
    LODWORD(v76.DriverObject) = HIDWORD(v76.DeviceQueue.Lock);
    if ( (unsigned int)ApiSetEditionForegroundQAccessibleToMouseProducer(
                         &v76,
                         (__int64)&v76.Flags,
                         v76.Dpc.DpcListEntry.Next != 0LL,
                         v38) )
    {
      p_Flags = v69;
LABEL_35:
      v41 = p_Flags[28];
      if ( (v41 & 0x800) == 0 )
      {
        v47 = *((unsigned __int16 *)p_Flags + 14);
        v48 = *((_QWORD *)p_Flags + 10);
        v49 = ((v41 & 0x40) != 0 ? 16 : 32) | 8;
        if ( (v41 & 0x80u) == 0 )
          v49 = (v41 & 0x40) != 0 ? 16 : 32;
        CInputGlobals::UpdateInputGlobals((__int64)gpInputGlobals, v48, 3u, v47, 0, v49);
      }
      CMouseProcessor::CMouseRawInput::Initialize(
        (CMouseProcessor *)((char *)this + 3456),
        (const struct CMouseProcessor::CMouseEvent *)&v68);
      v42 = 0;
      v43 = &off_1C0200998;
      do
      {
        if ( !*v43 || (*v43)((const struct CMouseProcessor::CMouseEvent *)&v68) )
          ((void (__fastcall *)(CMouseProcessor *, void ***))v43[1])(this, &v68);
        ++v42;
        v43 += 2;
      }
      while ( v42 < 3 );
      if ( (unsigned __int8)IsMouseIVEnabled() && (unsigned __int8)isRootPartition() )
        CMouseProcessor::ContainerMouseInputBuffer::CommitStagedChunkInput(
          (CMouseProcessor *)((char *)this + 3904),
          (const struct CMouseProcessor::CMouseEvent *)&v68);
      v45 = (void (*)(void))*((_QWORD *)v69 + 20);
      if ( v45 )
        v45();
      goto LABEL_45;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v40) = 3;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v40,
        6,
        15,
        (__int64)&WPP_d02e541e0f7334a3be0888d6b8113659_Traceguids);
    }
    InputTraceLogging::Mouse::DropInput(*((_QWORD *)v69 + 11), 10LL);
LABEL_45:
    UserSessionSwitchLeaveCrit(v44);
    InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v71);
  }
  if ( (unsigned __int8)IsMouseIVEnabled() && (unsigned __int8)isRootPartition() )
    CMouseProcessor::ContainerMouseInputBuffer::FlushInputDestinedForContainer((CMouseProcessor *)((char *)this + 3904));
  EtwTraceStopProcessQueuedMouseEvents(v46);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v72);
}
