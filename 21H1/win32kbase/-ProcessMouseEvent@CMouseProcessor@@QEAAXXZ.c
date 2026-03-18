/*
 * XREFs of ?ProcessMouseEvent@CMouseProcessor@@QEAAXXZ @ 0x1C0065004
 * Callers:
 *     ProcessMouseEvent @ 0x1C0064AC0 (ProcessMouseEvent.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C002874C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ?UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z @ 0x1C005AF90 (-UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z.c)
 *     EtwTraceStopProcessQueuedMouseEvents @ 0x1C0064AA0 (EtwTraceStopProcessQueuedMouseEvents.c)
 *     EtwTraceStartProcessQueuedMouseEvents @ 0x1C0064AF0 (EtwTraceStartProcessQueuedMouseEvents.c)
 *     ??0RawMouseEvent@CMouseProcessor@@QEAA@XZ @ 0x1C0064B10 (--0RawMouseEvent@CMouseProcessor@@QEAA@XZ.c)
 *     ?ComputeUIPIForMouseEvent@CMouseProcessor@@AEAAXPEAURawMouseEvent@1@@Z @ 0x1C0064B84 (-ComputeUIPIForMouseEvent@CMouseProcessor@@AEAAXPEAURawMouseEvent@1@@Z.c)
 *     ApiSetEditionForegroundQAccessibleToMouseProducer @ 0x1C0064C84 (ApiSetEditionForegroundQAccessibleToMouseProducer.c)
 *     ?Initialize@CMouseRawInput@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@@Z @ 0x1C0064D50 (-Initialize@CMouseRawInput@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@@Z.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C006546C (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ?Dequeue@CMouseQueue@CMouseProcessor@@QEAA_NPEAURawMouseEvent@2@@Z @ 0x1C00654B0 (-Dequeue@CMouseQueue@CMouseProcessor@@QEAA_NPEAURawMouseEvent@2@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C0065598 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     IsMouseIVEnabled @ 0x1C006561C (IsMouseIVEnabled.c)
 *     isRootPartition @ 0x1C0065868 (isRootPartition.c)
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0067ED0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     RIMLockExclusive @ 0x1C0069440 (RIMLockExclusive.c)
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     HMUnlockObject @ 0x1C0080DA0 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C00844F0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0084880 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0084930 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C008A4E0 (UserSessionSwitchLeaveCrit.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     ?DeviceTypeToString@InputTraceLogging@@CAPEBDK@Z @ 0x1C01B299C (-DeviceTypeToString@InputTraceLogging@@CAPEBDK@Z.c)
 *     ?OriginIdToString@InputTraceLogging@@CAPEBDW4tagINPUT_MESSAGE_ORIGIN_ID@@@Z @ 0x1C01B2EEC (-OriginIdToString@InputTraceLogging@@CAPEBDW4tagINPUT_MESSAGE_ORIGIN_ID@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U?$_tlgWrapSz@D@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@444AEBU?$_tlgWrapSz@D@@5@Z @ 0x1C01C0B30 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U-$_tlgWrapSz@D@@U3@@-$_tlgW.c)
 *     ?CommitStagedChunkInput@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@@Z @ 0x1C01C1734 (-CommitStagedChunkInput@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@@Z.c)
 *     ?DropInput@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z @ 0x1C01C1D68 (-DropInput@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z.c)
 *     ?FlushInputDestinedForContainer@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXXZ @ 0x1C01C278C (-FlushInputDestinedForContainer@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CMouseProcessor::ProcessMouseEvent(CMouseProcessor *this)
{
  __int64 v2; // rcx
  CMouseProcessor::CMouseQueue *v3; // r12
  bool v4; // al
  bool v5; // bl
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v11; // rbx
  struct tagTHREADINFO **v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  PVOID CurrentProcess; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v22; // rbx
  __int64 v23; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  CMouseProcessor *v26; // rcx
  __int64 v27; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v29; // rcx
  __int64 v30; // rcx
  struct tagKERNELHANDLETABLEENTRY *v31; // r14
  ULONG *p_Flags; // rdx
  int v33; // edx
  ULONG v34; // r8d
  unsigned int v35; // edi
  bool (__fastcall **v36)(const struct CMouseProcessor::CMouseEvent *); // rbx
  __int64 v37; // rcx
  void (*v38)(void); // rax
  __int64 v39; // rcx
  __int64 v40; // r9
  __int64 v41; // rdx
  unsigned int v42; // eax
  __int64 v43; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v46; // rax
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rax
  __int64 v52; // rcx
  PERESOURCE *v53; // rdi
  int v54; // [rsp+68h] [rbp-A0h] BYREF
  int v55; // [rsp+6Ch] [rbp-9Ch] BYREF
  int DeviceRoutine; // [rsp+70h] [rbp-98h] BYREF
  int v57; // [rsp+74h] [rbp-94h] BYREF
  int AttachedDevice_low; // [rsp+78h] [rbp-90h] BYREF
  int v59; // [rsp+7Ch] [rbp-8Ch] BYREF
  int v60; // [rsp+80h] [rbp-88h] BYREF
  void **v61; // [rsp+88h] [rbp-80h] BYREF
  ULONG *v62; // [rsp+90h] [rbp-78h]
  int v63; // [rsp+98h] [rbp-70h]
  _BYTE v64[8]; // [rsp+A0h] [rbp-68h] BYREF
  _BYTE v65[8]; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v66; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v67; // [rsp+B8h] [rbp-50h] BYREF
  __int64 CurrentIrp; // [rsp+C0h] [rbp-48h] BYREF
  struct _DEVICE_OBJECT v69; // [rsp+C8h] [rbp-40h] BYREF
  int *v70; // [rsp+228h] [rbp+120h]
  __int64 v71; // [rsp+230h] [rbp+128h]

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
    (InputTraceLogging::ThreadLockedPerfRegion *)v65,
    "ProcessMouse",
    0LL);
  EtwTraceStartProcessQueuedMouseEvents(v2);
  CMouseProcessor::RawMouseEvent::RawMouseEvent((CMouseProcessor::RawMouseEvent *)&v69.Flags);
  v3 = (CMouseProcessor *)((char *)this + 80);
  while ( 1 )
  {
    RIMLockExclusive((char *)this + 2776);
    v4 = CMouseProcessor::CMouseQueue::Dequeue(v3, (struct CMouseProcessor::RawMouseEvent *)&v69.Flags);
    *((_QWORD *)this + 348) = 0LL;
    v5 = v4;
    ExReleasePushLockExclusiveEx((char *)this + 2776, 0LL);
    KeLeaveCriticalRegion();
    if ( !v5 )
      break;
    InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
      (InputTraceLogging::ThreadLockedPerfRegion *)v64,
      "ProcessMouseEvent",
      (const struct InputTraceLogging::ThreadLockedPerfRegion *)v65);
    if ( (unsigned int)dword_1C024C960 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 64LL, v7, v8) )
    {
      v66 = InputTraceLogging::OriginIdToString(*(&v69.AlignmentRequirement + 1));
      v67 = (__int64)InputTraceLogging::DeviceTypeToString(v69.AlignmentRequirement);
      v54 = *((unsigned __int16 *)&v69.StackSize + 1);
      v55 = *(unsigned __int16 *)&v69.StackSize;
      DeviceRoutine = (int)v69.Queue.Wcb.DeviceRoutine;
      v57 = *((_DWORD *)&v69.Queue.Wcb.1 + 5);
      CurrentIrp = (__int64)v69.Queue.Wcb.CurrentIrp;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<char>>(
        (int)&dword_1C024C960,
        (int)&dword_1C02215FE,
        (__int64)&CurrentIrp,
        (__int64)&v57,
        (__int64)&DeviceRoutine,
        (__int64)&v55,
        (__int64)&v54,
        (__int64)&v67,
        (__int64)&v66);
    }
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v6);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    *(_OWORD *)((char *)&v69.AttachedDevice + 4) = 0LL;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      LOBYTE(v69.AttachedDevice) = 1;
      v46 = PsGetCurrentThreadWin32Thread(v9);
      v69.NextDevice = (struct _DEVICE_OBJECT *)v46;
      if ( v46 && (*(int *)(v46 + 24) > 0 || v69.NextDevice->Flags) )
      {
        EtwActivityIdControl(3u, (LPGUID)((char *)&v69.AttachedDevice + 4));
        if ( (unsigned int)dword_1C024C960 > 6 )
        {
          if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v47, v48) )
          {
            AttachedDevice_low = LOBYTE(v69.AttachedDevice);
            *(_QWORD *)&v69.ActiveThreadCount = 4LL;
            v69.Dpc.DpcData = &AttachedDevice_low;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C024C960,
              (unsigned __int8 *)dword_1C02199F7,
              (const GUID *)((char *)&v69.AttachedDevice + 4),
              0LL,
              3u,
              (PEVENT_DATA_DESCRIPTOR)&v69.Dpc.DeferredRoutine);
          }
        }
      }
    }
    else
    {
      v69.NextDevice = 0LL;
    }
    v11 = 0LL;
    while ( 1 )
    {
      v12 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      if ( v12 )
        v11 = *v12;
      CurrentProcess = (PVOID)PsGetCurrentProcess(v14, v13);
      if ( CurrentProcess )
      {
        if ( CurrentProcess == g_pepDwm )
          break;
      }
      if ( (PVOID)PsGetCurrentProcess(v17, v16) == gpepCSRSS && v11 != (struct tagTHREADINFO *)gptiTSRequest
        || gbDITInHitTest != 1
        || v11 == gptiRit )
      {
        break;
      }
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
    }
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
      && v69.NextDevice
      && (v69.NextDevice->Flags || SLODWORD(v69.NextDevice->AttachedDevice) > 0) )
    {
      HIDWORD(v69.NextDevice->Timer) = 1;
      *(_OWORD *)((char *)&v69.NextDevice->AttachedDevice + 4) = *(_OWORD *)((char *)&v69.AttachedDevice + 4);
      if ( (unsigned int)dword_1C024C960 > 6 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, (unsigned int)dword_1C024C960, v18) )
        {
          v59 = LOBYTE(v69.AttachedDevice);
          v69.DeviceObjectExtension = (struct _DEVOBJ_EXTENSION *)4;
          *(_QWORD *)&v69.SectorSize = &v59;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C024C960,
            (unsigned __int8 *)dword_1C02199A0,
            (const GUID *)((char *)&v69.AttachedDevice + 4),
            0LL,
            3u,
            (PEVENT_DATA_DESCRIPTOR)&v69.SecurityDescriptor);
          v49 = (unsigned int)dword_1C024C960;
        }
        if ( (unsigned int)v49 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v49, v50) )
        {
          v60 = LOBYTE(v69.AttachedDevice);
          v71 = 4LL;
          v70 = &v60;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C024C960,
            (unsigned __int8 *)dword_1C02199CD,
            (const GUID *)((char *)&v69.AttachedDevice + 4),
            0LL,
            3u,
            (PEVENT_DATA_DESCRIPTOR)&v69.Reserved);
        }
      }
    }
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v11;
    gbValidateHandleForIL = 1;
    if ( !(unsigned __int8)KeIsAttachedProcess()
      || (v43 = PsGetCurrentProcess(v20, v19),
          ProcessSessionId = PsGetProcessSessionIdEx(v43),
          CurrentThreadProcess = PsGetCurrentThreadProcess(),
          ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
    {
      CurrentThread = KeGetCurrentThread();
      v22 = 0LL;
      if ( !(unsigned int)IsThreadCrossSessionAttached() )
      {
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
          v22 = *ThreadWin32Thread;
      }
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v23);
      if ( v22 )
      {
        if ( CurrentProcessWin32Process )
        {
          if ( (*(_DWORD *)(v22 + 480) & 0x1000000) != 0 )
          {
            v26 = (CMouseProcessor *)*(unsigned int *)(v22 + 1216);
            if ( (char)v26 >= 0 && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
            {
              DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL);
              if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v27);
              if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v29);
              ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
              v31 = gpducstulHead;
              if ( gpducstulHead )
              {
                do
                {
                  gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)v31 + 2);
                  v51 = *(_QWORD *)v31;
                  *((_QWORD *)v31 + 2) = 0LL;
                  if ( !*(_DWORD *)(v51 + 8) )
                    MicrosoftTelemetryAssertTriggeredNoArgsKM(v30);
                  v53 = (PERESOURCE *)GetDomainLockRef(12LL);
                  if ( v53 == (PERESOURCE *)&gDomainDummyLock )
                    MicrosoftTelemetryAssertTriggeredNoArgsKM(v52);
                  ExReleaseResourceAndLeaveCriticalRegion(*v53);
                  HMUnlockObject(*(_QWORD *)v31);
                  tagDomLock::LockExclusive((tagDomLock *)v53);
                  v31 = gpducstulHead;
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
    CMouseProcessor::ComputeUIPIForMouseEvent(v26, (struct CMouseProcessor::RawMouseEvent *)&v69.Flags);
    p_Flags = &v69.Flags;
    v61 = &CMouseProcessor::CMouseEvent::`vftable';
    v62 = &v69.Flags;
    v63 = 0;
    if ( (v69.DeviceQueue.Type & 1) != 0 || *(&v69.AlignmentRequirement + 1) == 1 )
      goto LABEL_35;
    *(_QWORD *)&v69.Type = *(struct _LIST_ENTRY **)((char *)&v69.DeviceQueue.DeviceListHead.Blink + 4);
    LODWORD(v69.DriverObject) = HIDWORD(v69.DeviceQueue.Lock);
    if ( (unsigned int)ApiSetEditionForegroundQAccessibleToMouseProducer(
                         &v69,
                         (__int64)&v69.Flags,
                         v69.Dpc.DpcListEntry.Next != 0LL) )
    {
      p_Flags = v62;
LABEL_35:
      v34 = p_Flags[28];
      if ( (v34 & 0x800) == 0 )
      {
        v40 = *((unsigned __int16 *)p_Flags + 14);
        v41 = *((_QWORD *)p_Flags + 10);
        v42 = ((v34 & 0x40) != 0 ? 16 : 32) | 8;
        if ( (v34 & 0x80u) == 0 )
          v42 = (v34 & 0x40) != 0 ? 16 : 32;
        CInputGlobals::UpdateInputGlobals((__int64)gpInputGlobals, v41, 3u, v40, 0, v42);
      }
      CMouseProcessor::CMouseRawInput::Initialize(
        (CMouseProcessor *)((char *)this + 3528),
        (const struct CMouseProcessor::CMouseEvent *)&v61);
      v35 = 0;
      v36 = &off_1C02064C8;
      do
      {
        if ( !*v36 || (*v36)((const struct CMouseProcessor::CMouseEvent *)&v61) )
          ((void (__fastcall *)(CMouseProcessor *, void ***))v36[1])(this, &v61);
        ++v35;
        v36 += 2;
      }
      while ( v35 < 3 );
      if ( (unsigned __int8)IsMouseIVEnabled() && (unsigned __int8)isRootPartition() )
        CMouseProcessor::ContainerMouseInputBuffer::CommitStagedChunkInput(
          (CMouseProcessor *)((char *)this + 3976),
          (const struct CMouseProcessor::CMouseEvent *)&v61);
      v38 = (void (*)(void))*((_QWORD *)v62 + 20);
      if ( v38 )
        v38();
      goto LABEL_45;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v33) = 3;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v33,
        6,
        15,
        (__int64)&WPP_b12bc820a1813372973d31fc87fa3901_Traceguids);
    }
    InputTraceLogging::Mouse::DropInput(*((_QWORD *)v62 + 11), 10LL);
LABEL_45:
    UserSessionSwitchLeaveCrit(v37);
    InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v64);
  }
  if ( (unsigned __int8)IsMouseIVEnabled() && (unsigned __int8)isRootPartition() )
    CMouseProcessor::ContainerMouseInputBuffer::FlushInputDestinedForContainer((CMouseProcessor *)((char *)this + 3976));
  EtwTraceStopProcessQueuedMouseEvents(v39);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v65);
}
