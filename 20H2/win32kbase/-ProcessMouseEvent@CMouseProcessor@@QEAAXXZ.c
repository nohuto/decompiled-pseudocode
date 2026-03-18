/*
 * XREFs of ?ProcessMouseEvent@CMouseProcessor@@QEAAXXZ @ 0x1C0036394
 * Callers:
 *     ProcessMouseEvent @ 0x1C00352C0 (ProcessMouseEvent.c)
 * Callees:
 *     EtwTraceStopProcessQueuedMouseEvents @ 0x1C00352A0 (EtwTraceStopProcessQueuedMouseEvents.c)
 *     EtwTraceStartProcessQueuedMouseEvents @ 0x1C00352F0 (EtwTraceStartProcessQueuedMouseEvents.c)
 *     ??0RawMouseEvent@CMouseProcessor@@QEAA@XZ @ 0x1C0035310 (--0RawMouseEvent@CMouseProcessor@@QEAA@XZ.c)
 *     ?ComputeUIPIForMouseEvent@CMouseProcessor@@AEAAXPEAURawMouseEvent@1@@Z @ 0x1C0035384 (-ComputeUIPIForMouseEvent@CMouseProcessor@@AEAAXPEAURawMouseEvent@1@@Z.c)
 *     ApiSetEditionForegroundQAccessibleToMouseProducer @ 0x1C0035484 (ApiSetEditionForegroundQAccessibleToMouseProducer.c)
 *     RIMLockExclusive @ 0x1C0036330 (RIMLockExclusive.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C00367FC (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ?Dequeue@CMouseQueue@CMouseProcessor@@QEAA_NPEAURawMouseEvent@2@@Z @ 0x1C0036840 (-Dequeue@CMouseQueue@CMouseProcessor@@QEAA_NPEAURawMouseEvent@2@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C0036928 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     IsMouseIVEnabled @ 0x1C003694C (IsMouseIVEnabled.c)
 *     isRootPartition @ 0x1C0036A7C (isRootPartition.c)
 *     ?Initialize@CMouseRawInput@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@@Z @ 0x1C0036CBC (-Initialize@CMouseRawInput@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@@Z.c)
 *     HMUnlockObject @ 0x1C0042780 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0045B00 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0045E90 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0045F40 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004B4E0 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C004D690 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     ?UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z @ 0x1C0065400 (-UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z.c)
 *     _tlgKeywordOn @ 0x1C0066CD0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00689F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     ?DeviceTypeToString@InputTraceLogging@@CAPEBDK@Z @ 0x1C01AA8BC (-DeviceTypeToString@InputTraceLogging@@CAPEBDK@Z.c)
 *     ?OriginIdToString@InputTraceLogging@@CAPEBDW4tagINPUT_MESSAGE_ORIGIN_ID@@@Z @ 0x1C01AAE0C (-OriginIdToString@InputTraceLogging@@CAPEBDW4tagINPUT_MESSAGE_ORIGIN_ID@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U?$_tlgWrapSz@D@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@444AEBU?$_tlgWrapSz@D@@5@Z @ 0x1C01B8A60 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U-$_tlgWrapSz@D@@U3@@-$_tlgW.c)
 *     ?CommitStagedChunkInput@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@@Z @ 0x1C01B9664 (-CommitStagedChunkInput@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@@Z.c)
 *     ?DropInput@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z @ 0x1C01B9C98 (-DropInput@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z.c)
 *     ?FlushInputDestinedForContainer@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXXZ @ 0x1C01BA6BC (-FlushInputDestinedForContainer@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CMouseProcessor::ProcessMouseEvent(CMouseProcessor *this)
{
  __int64 v2; // rcx
  CMouseProcessor::CMouseQueue *v3; // r12
  bool v4; // al
  bool v5; // bl
  __int64 v6; // r8
  __int64 v7; // r9
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v9; // rbx
  struct tagTHREADINFO **v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  PVOID CurrentProcess; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  CMouseProcessor *v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  struct tagKERNELHANDLETABLEENTRY *v41; // r14
  __int64 v42; // r9
  ULONG *p_Flags; // rdx
  int v44; // edx
  ULONG v45; // r8d
  unsigned int v46; // edi
  bool (__fastcall **v47)(const struct CMouseProcessor::CMouseEvent *); // rbx
  __int64 v48; // rcx
  void (*v49)(void); // rax
  __int64 v50; // rcx
  __int64 v51; // r9
  __int64 v52; // rdx
  int v53; // eax
  __int64 v54; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v57; // rax
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rcx
  PERESOURCE *v65; // rdi
  __int64 v66; // r8
  __int64 v67; // r9
  int v68; // [rsp+68h] [rbp-A0h] BYREF
  int v69; // [rsp+6Ch] [rbp-9Ch] BYREF
  int DeviceRoutine; // [rsp+70h] [rbp-98h] BYREF
  int v71; // [rsp+74h] [rbp-94h] BYREF
  int AttachedDevice_low; // [rsp+78h] [rbp-90h] BYREF
  int v73; // [rsp+7Ch] [rbp-8Ch] BYREF
  int v74; // [rsp+80h] [rbp-88h] BYREF
  void **v75; // [rsp+88h] [rbp-80h] BYREF
  ULONG *v76; // [rsp+90h] [rbp-78h]
  int v77; // [rsp+98h] [rbp-70h]
  _BYTE v78[8]; // [rsp+A0h] [rbp-68h] BYREF
  _BYTE v79[8]; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v80; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v81; // [rsp+B8h] [rbp-50h] BYREF
  __int64 CurrentIrp; // [rsp+C0h] [rbp-48h] BYREF
  struct _DEVICE_OBJECT v83; // [rsp+C8h] [rbp-40h] BYREF
  int *v84; // [rsp+228h] [rbp+120h]
  __int64 v85; // [rsp+230h] [rbp+128h]

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
    (InputTraceLogging::ThreadLockedPerfRegion *)v79,
    "ProcessMouse",
    0LL);
  EtwTraceStartProcessQueuedMouseEvents(v2);
  CMouseProcessor::RawMouseEvent::RawMouseEvent((CMouseProcessor::RawMouseEvent *)&v83.Flags);
  v3 = (CMouseProcessor *)((char *)this + 80);
  while ( 1 )
  {
    RIMLockExclusive((__int64)this + 2776);
    v4 = CMouseProcessor::CMouseQueue::Dequeue(v3, (struct CMouseProcessor::RawMouseEvent *)&v83.Flags);
    *((_QWORD *)this + 348) = 0LL;
    v5 = v4;
    ExReleasePushLockExclusiveEx((char *)this + 2776, 0LL);
    KeLeaveCriticalRegion();
    if ( !v5 )
      break;
    InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
      (InputTraceLogging::ThreadLockedPerfRegion *)v78,
      "ProcessMouseEvent",
      (const struct InputTraceLogging::ThreadLockedPerfRegion *)v79);
    if ( (unsigned int)dword_1C0244A70 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1C0244A70, 64LL, v6, v7) )
    {
      v80 = InputTraceLogging::OriginIdToString(*(&v83.AlignmentRequirement + 1));
      v81 = (__int64)InputTraceLogging::DeviceTypeToString(v83.AlignmentRequirement);
      v68 = *((unsigned __int16 *)&v83.StackSize + 1);
      v69 = *(unsigned __int16 *)&v83.StackSize;
      DeviceRoutine = (int)v83.Queue.Wcb.DeviceRoutine;
      v71 = *((_DWORD *)&v83.Queue.Wcb.1 + 5);
      CurrentIrp = (__int64)v83.Queue.Wcb.CurrentIrp;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<char>>(
        (int)&dword_1C0244A70,
        (int)&dword_1C0219C1F,
        (__int64)&CurrentIrp,
        (__int64)&v71,
        (__int64)&DeviceRoutine,
        (__int64)&v69,
        (__int64)&v68,
        (__int64)&v81,
        (__int64)&v80);
    }
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    *(_OWORD *)((char *)&v83.AttachedDevice + 4) = 0LL;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      LOBYTE(v83.AttachedDevice) = 1;
      v57 = PsGetCurrentThreadWin32Thread();
      v83.NextDevice = (struct _DEVICE_OBJECT *)v57;
      if ( v57 && (*(int *)(v57 + 24) > 0 || v83.NextDevice->Flags) )
      {
        EtwActivityIdControl(3u, (LPGUID)((char *)&v83.AttachedDevice + 4));
        if ( (unsigned int)dword_1C0244A70 > 6 )
        {
          if ( (unsigned __int8)tlgKeywordOn(&dword_1C0244A70, 0x2000LL, v58, v59) )
          {
            AttachedDevice_low = LOBYTE(v83.AttachedDevice);
            *(_QWORD *)&v83.ActiveThreadCount = 4LL;
            v83.Dpc.DpcData = &AttachedDevice_low;
            tlgWriteTransfer_EtwWriteTransfer(
              (int)&dword_1C0244A70,
              (int)&dword_1C0211E87,
              (int)&v83.AttachedDevice + 4,
              0,
              3u,
              (PEVENT_DATA_DESCRIPTOR)&v83.Dpc.DeferredRoutine);
          }
        }
      }
    }
    else
    {
      v83.NextDevice = 0LL;
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
      && v83.NextDevice
      && (v83.NextDevice->Flags || SLODWORD(v83.NextDevice->AttachedDevice) > 0) )
    {
      HIDWORD(v83.NextDevice->Timer) = 1;
      *(_OWORD *)((char *)&v83.NextDevice->AttachedDevice + 4) = *(_OWORD *)((char *)&v83.AttachedDevice + 4);
      if ( (unsigned int)dword_1C0244A70 > 6 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1C0244A70, 0x2000LL, (unsigned int)dword_1C0244A70, v16) )
        {
          v73 = LOBYTE(v83.AttachedDevice);
          v83.DeviceObjectExtension = (struct _DEVOBJ_EXTENSION *)4;
          *(_QWORD *)&v83.SectorSize = &v73;
          tlgWriteTransfer_EtwWriteTransfer(
            (int)&dword_1C0244A70,
            (int)&dword_1C0211E30,
            (int)&v83.AttachedDevice + 4,
            0,
            3u,
            (PEVENT_DATA_DESCRIPTOR)&v83.SecurityDescriptor);
          v60 = (unsigned int)dword_1C0244A70;
        }
        if ( (unsigned int)v60 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C0244A70, 0x2000LL, v60, v61) )
        {
          v74 = LOBYTE(v83.AttachedDevice);
          v85 = 4LL;
          v84 = &v74;
          tlgWriteTransfer_EtwWriteTransfer(
            (int)&dword_1C0244A70,
            (int)&dword_1C0211E5D,
            (int)&v83.AttachedDevice + 4,
            0,
            3u,
            (PEVENT_DATA_DESCRIPTOR)&v83.Reserved);
        }
      }
    }
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v9;
    gbValidateHandleForIL = 1;
    if ( !(unsigned __int8)KeIsAttachedProcess()
      || (v54 = PsGetCurrentProcess(v18, v17),
          ProcessSessionId = PsGetProcessSessionIdEx(v54),
          CurrentThreadProcess = PsGetCurrentThreadProcess(),
          ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
    {
      CurrentThread = KeGetCurrentThread();
      v20 = 0LL;
      if ( !(unsigned int)IsThreadCrossSessionAttached() )
      {
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
          v20 = *ThreadWin32Thread;
      }
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v22, v21, v23, v24);
      if ( v20 )
      {
        if ( CurrentProcessWin32Process )
        {
          if ( (*(_DWORD *)(v20 + 488) & 0x1000000) != 0 )
          {
            v27 = (CMouseProcessor *)*(unsigned int *)(v20 + 1232);
            if ( (char)v27 >= 0 && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
            {
              DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL);
              if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v29, v28, v31, v32);
              if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v34, v33, v35, v36);
              ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
              v41 = gpducstulHead;
              if ( gpducstulHead )
              {
                do
                {
                  gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)v41 + 2);
                  v62 = *(_QWORD *)v41;
                  *((_QWORD *)v41 + 2) = 0LL;
                  if ( !*(_DWORD *)(v62 + 8) )
                    MicrosoftTelemetryAssertTriggeredNoArgsKM(v38, v37, v39, v40);
                  v65 = (PERESOURCE *)GetDomainLockRef(12LL);
                  if ( v65 == (PERESOURCE *)&gDomainDummyLock )
                    MicrosoftTelemetryAssertTriggeredNoArgsKM(v64, v63, v66, v67);
                  ExReleaseResourceAndLeaveCriticalRegion(*v65);
                  HMUnlockObject(*(_QWORD *)v41);
                  tagDomLock::LockExclusive((tagDomLock *)v65);
                  v41 = gpducstulHead;
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
    CMouseProcessor::ComputeUIPIForMouseEvent(v27, (struct CMouseProcessor::RawMouseEvent *)&v83.Flags);
    p_Flags = &v83.Flags;
    v75 = &CMouseProcessor::CMouseEvent::`vftable';
    v76 = &v83.Flags;
    v77 = 0;
    if ( (v83.DeviceQueue.Type & 1) != 0 || *(&v83.AlignmentRequirement + 1) == 1 )
      goto LABEL_35;
    *(_QWORD *)&v83.Type = *(struct _LIST_ENTRY **)((char *)&v83.DeviceQueue.DeviceListHead.Blink + 4);
    LODWORD(v83.DriverObject) = HIDWORD(v83.DeviceQueue.Lock);
    if ( (unsigned int)ApiSetEditionForegroundQAccessibleToMouseProducer(
                         &v83,
                         (__int64)&v83.Flags,
                         v83.Dpc.DpcListEntry.Next != 0LL,
                         v42) )
    {
      p_Flags = v76;
LABEL_35:
      v45 = p_Flags[28];
      if ( (v45 & 0x800) == 0 )
      {
        v51 = *((unsigned __int16 *)p_Flags + 14);
        v52 = *((_QWORD *)p_Flags + 10);
        v53 = ((v45 & 0x40) != 0 ? 16 : 32) | 8;
        if ( (v45 & 0x80u) == 0 )
          v53 = (v45 & 0x40) != 0 ? 16 : 32;
        CInputGlobals::UpdateInputGlobals(gpInputGlobals, v52, 3LL, v51, 0, v53);
      }
      CMouseProcessor::CMouseRawInput::Initialize(
        (CMouseProcessor *)((char *)this + 3456),
        (const struct CMouseProcessor::CMouseEvent *)&v75);
      v46 = 0;
      v47 = &off_1C01FCA50;
      do
      {
        if ( !*v47 || (*v47)((const struct CMouseProcessor::CMouseEvent *)&v75) )
          ((void (__fastcall *)(CMouseProcessor *, void ***))v47[1])(this, &v75);
        ++v46;
        v47 += 2;
      }
      while ( v46 < 3 );
      if ( (unsigned __int8)IsMouseIVEnabled() && (unsigned __int8)isRootPartition() )
        CMouseProcessor::ContainerMouseInputBuffer::CommitStagedChunkInput(
          (CMouseProcessor *)((char *)this + 3904),
          (const struct CMouseProcessor::CMouseEvent *)&v75);
      v49 = (void (*)(void))*((_QWORD *)v76 + 20);
      if ( v49 )
        v49();
      goto LABEL_45;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v44) = 3;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v44,
        6,
        15,
        (__int64)&WPP_bc237edca6b43ca924b1688b2fc88a86_Traceguids);
    }
    InputTraceLogging::Mouse::DropInput(*((_QWORD *)v76 + 11), 10LL);
LABEL_45:
    UserSessionSwitchLeaveCrit(v48);
    InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v78);
  }
  if ( (unsigned __int8)IsMouseIVEnabled() && (unsigned __int8)isRootPartition() )
    CMouseProcessor::ContainerMouseInputBuffer::FlushInputDestinedForContainer((CMouseProcessor *)((char *)this + 3904));
  EtwTraceStopProcessQueuedMouseEvents(v50);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v79);
}
