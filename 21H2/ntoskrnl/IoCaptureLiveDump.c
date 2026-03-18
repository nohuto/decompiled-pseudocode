/*
 * XREFs of IoCaptureLiveDump @ 0x14093A0B8
 * Callers:
 *     DbgkCaptureLiveKernelDump @ 0x140540798 (DbgkCaptureLiveKernelDump.c)
 *     DbgkpWerCaptureLiveFullDump @ 0x14092BA58 (DbgkpWerCaptureLiveFullDump.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14020A9C4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1402A2000 (_tlgKeywordOn.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     EtwActivityIdControl @ 0x1402DFD70 (EtwActivityIdControl.c)
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     ExReleaseExtensionTable @ 0x1403614E0 (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x1403614FC (ExGetExtensionTable.c)
 *     SecureDump_GetSecureDumpSettings @ 0x1403CFB04 (SecureDump_GetSecureDumpSettings.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     IopLiveDumpGetMillisecondCounter @ 0x14055A628 (IopLiveDumpGetMillisecondCounter.c)
 *     IopLiveDumpIsTracingEnabled @ 0x14055A67C (IopLiveDumpIsTracingEnabled.c)
 *     IopLiveDumpIsUnderMemoryPressure @ 0x14055A6A0 (IopLiveDumpIsUnderMemoryPressure.c)
 *     IopLiveDumpTrace @ 0x14055A870 (IopLiveDumpTrace.c)
 *     IopLiveDumpTraceDumpFileWriteEnd @ 0x14055B428 (IopLiveDumpTraceDumpFileWriteEnd.c)
 *     IopLiveDumpTraceInterfaceEnd @ 0x14055B654 (IopLiveDumpTraceInterfaceEnd.c)
 *     IopLiveDumpTraceInterfaceStart @ 0x14055B7B0 (IopLiveDumpTraceInterfaceStart.c)
 *     KeGetSupervisorStateExtensionHost @ 0x14056FC0C (KeGetSupervisorStateExtensionHost.c)
 *     IoCreateNotificationEvent @ 0x1406EAB50 (IoCreateNotificationEvent.c)
 *     IopLiveDumpAllocAndInitResources @ 0x14093AAEC (IopLiveDumpAllocAndInitResources.c)
 *     IopLiveDumpInitRegistrySettings @ 0x14093CA08 (IopLiveDumpInitRegistrySettings.c)
 *     IopLiveDumpReleaseResources @ 0x14093CFC8 (IopLiveDumpReleaseResources.c)
 *     IopLiveDumpValidateParameters @ 0x14093D400 (IopLiveDumpValidateParameters.c)
 *     IopLiveDumpWriteDumpFile @ 0x14093D590 (IopLiveDumpWriteDumpFile.c)
 *     IopLiveDumpWriteDumpFileWithExtraPages @ 0x14093DA18 (IopLiveDumpWriteDumpFileWithExtraPages.c)
 *     IopLiveDumpCaptureMemoryPages @ 0x140A65D84 (IopLiveDumpCaptureMemoryPages.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall IoCaptureLiveDump(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, GUID **a7)
{
  PKEVENT v9; // rdi
  struct _EX_RUNDOWN_REF *v10; // r13
  GUID *Pool2; // rbx
  struct _KTHREAD *CurrentThread; // rax
  int inited; // edi
  HANDLE v14; // r14
  HANDLE v15; // r15
  HANDLE v16; // r12
  struct _EX_RUNDOWN_REF *SupervisorStateExtensionHost; // rax
  void (__fastcall **ExtensionTable)(__int64); // rax
  __int64 v19; // rcx
  __int64 v20; // r14
  unsigned int v21; // eax
  __int64 v22; // rax
  __int64 v23; // r14
  _BYTE *v24; // rcx
  int v25; // eax
  void *v26; // rsi
  int v27; // ecx
  const GUID *v28; // r9
  const GUID *v29; // r8
  __int64 MillisecondCounter; // r14
  int v31; // eax
  __int64 v32; // rsi
  __int64 v33; // rax
  struct _KEVENT *v34; // rcx
  char v36; // [rsp+38h] [rbp-D0h] BYREF
  bool v37; // [rsp+39h] [rbp-CFh] BYREF
  HANDLE v38; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v39; // [rsp+48h] [rbp-C0h] BYREF
  HANDLE EventHandle; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v41; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v42; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v43; // [rsp+68h] [rbp-A0h]
  HANDLE Handle; // [rsp+70h] [rbp-98h] BYREF
  __int64 v45; // [rsp+78h] [rbp-90h] BYREF
  __int64 v46; // [rsp+80h] [rbp-88h] BYREF
  __int64 v47; // [rsp+88h] [rbp-80h] BYREF
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-78h] BYREF
  __int128 v49; // [rsp+A0h] [rbp-68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v50; // [rsp+B8h] [rbp-50h] BYREF
  __int64 *v51; // [rsp+D8h] [rbp-30h]
  __int64 v52; // [rsp+E0h] [rbp-28h]
  HANDLE *p_EventHandle; // [rsp+E8h] [rbp-20h]
  __int64 v54; // [rsp+F0h] [rbp-18h]
  PKEVENT *v55; // [rsp+F8h] [rbp-10h]
  __int64 v56; // [rsp+100h] [rbp-8h]
  __int64 *v57; // [rsp+108h] [rbp+0h]
  __int64 v58; // [rsp+110h] [rbp+8h]
  __int64 *v59; // [rsp+118h] [rbp+10h]
  __int64 v60; // [rsp+120h] [rbp+18h]
  __int64 *v61; // [rsp+128h] [rbp+20h]
  __int64 v62; // [rsp+130h] [rbp+28h]
  __int64 *v63; // [rsp+138h] [rbp+30h]
  __int64 v64; // [rsp+140h] [rbp+38h]
  char *v65; // [rsp+148h] [rbp+40h]
  __int64 v66; // [rsp+150h] [rbp+48h]
  bool *v67; // [rsp+158h] [rbp+50h]
  __int64 v68; // [rsp+160h] [rbp+58h]
  HANDLE *v69; // [rsp+168h] [rbp+60h]
  __int64 v70; // [rsp+170h] [rbp+68h]
  struct _EVENT_DATA_DESCRIPTOR v71; // [rsp+178h] [rbp+70h] BYREF
  __int64 *v72; // [rsp+198h] [rbp+90h]
  __int64 v73; // [rsp+1A0h] [rbp+98h]
  PKEVENT *v74; // [rsp+1A8h] [rbp+A0h]
  __int64 v75; // [rsp+1B0h] [rbp+A8h]
  HANDLE *v76; // [rsp+1B8h] [rbp+B0h]
  __int64 v77; // [rsp+1C0h] [rbp+B8h]
  struct _EVENT_DATA_DESCRIPTOR v78; // [rsp+1C8h] [rbp+C0h] BYREF
  __int64 *v79; // [rsp+1E8h] [rbp+E0h]
  int v80; // [rsp+1F0h] [rbp+E8h]
  int v81; // [rsp+1F4h] [rbp+ECh]

  v46 = a4;
  v47 = a3;
  v45 = a2;
  v9 = 0LL;
  LODWORD(v43) = a1;
  v10 = 0LL;
  v41 = a6;
  Pool2 = 0LL;
  EventHandle = 0LL;
  Handle = 0LL;
  v38 = 0LL;
  v42 = 0LL;
  v39 = 0LL;
  DestinationString = 0LL;
  v49 = 0LL;
  if ( !ForceDumpDisabled && AllowLiveDump )
  {
    KeQueryPerformanceCounter(&PerformanceFrequency);
    IopLiveDumpGetMillisecondCounter(1);
    if ( BufferChunkSizeInBytes != MEMORY[0xFFFFF78000000244] )
    {
      BufferChunkSizeInBytes = MEMORY[0xFFFFF78000000244];
      BufferChunkSizeInPages = MEMORY[0xFFFFF78000000244] >> 12;
    }
    IopLiveDumpTraceInterfaceStart();
    if ( a7 )
      *a7 = 0LL;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v36 = ExAcquireResourceExclusiveLite(&IopLiveDumpLock, 0);
    if ( v36 == 1 )
    {
      SupervisorStateExtensionHost = (struct _EX_RUNDOWN_REF *)KeGetSupervisorStateExtensionHost();
      v10 = SupervisorStateExtensionHost;
      if ( SupervisorStateExtensionHost )
      {
        ExtensionTable = (void (__fastcall **)(__int64))ExGetExtensionTable(SupervisorStateExtensionHost);
        IptInterface = (__int64)ExtensionTable;
        if ( !ExtensionTable )
          goto LABEL_15;
        LOBYTE(v19) = 1;
        (*ExtensionTable)(v19);
        if ( !(*(unsigned __int8 (**)(void))(IptInterface + 8))() )
        {
          (*(void (__fastcall **)(_QWORD))IptInterface)(0LL);
          ExReleaseExtensionTable(v10);
          IptInterface = 0LL;
        }
        if ( !IptInterface )
LABEL_15:
          v10 = 0LL;
      }
      if ( (*(_DWORD *)(a6 + 24) & 0x10) != 0
        && (RtlInitUnicodeString(&DestinationString, L"\\KernelObjects\\LowNonPagedPoolCondition"),
            v9 = IoCreateNotificationEvent(&DestinationString, &EventHandle),
            RtlInitUnicodeString(&DestinationString, L"\\KernelObjects\\LowMemoryCondition"),
            v42 = (__int64)IoCreateNotificationEvent(&DestinationString, &Handle),
            v20 = v42,
            RtlInitUnicodeString(&DestinationString, L"\\KernelObjects\\HighCommitCondition"),
            v39 = (__int64)IoCreateNotificationEvent(&DestinationString, &v38),
            IopLiveDumpIsUnderMemoryPressure((__int64)v9, v20, v39)) )
      {
        inited = -1073741248;
      }
      else
      {
        Pool2 = (GUID *)ExAllocatePool2(64LL, 1160LL, 1886217292LL);
        if ( Pool2 )
        {
          v21 = v43;
          Pool2[5].Data1 &= 0xFFFFFFF3;
          v14 = 0LL;
          Pool2->Data1 = v21;
          *(_QWORD *)Pool2->Data4 = v45;
          *(_QWORD *)&Pool2[2].Data1 = a5;
          *(_QWORD *)&Pool2[56].Data1 = EventHandle;
          *(_QWORD *)Pool2[56].Data4 = Handle;
          *(_QWORD *)&Pool2[57].Data1 = v38;
          *(_QWORD *)&Pool2[58].Data1 = v42;
          v22 = v39;
          *(_QWORD *)Pool2[57].Data4 = v9;
          *(_QWORD *)&Pool2[1].Data1 = a3;
          v16 = 0LL;
          *(_QWORD *)Pool2[1].Data4 = a4;
          v15 = 0LL;
          *(_QWORD *)Pool2[58].Data4 = v22;
          IopLiveDumpContext = (__int64)Pool2;
          *(_QWORD *)&Pool2[68].Data1 = 0LL;
          *(_QWORD *)Pool2[68].Data4 = 0LL;
          IopLiveDumpInitRegistrySettings(Pool2);
          if ( !AllowLiveDump || (Pool2[5].Data1 & 0x200) != 0 && !*(_QWORD *)&Pool2[71].Data1 )
            goto LABEL_32;
          EtwActivityIdControl(5u, Pool2 + 59);
          EtwActivityIdControl(1u, Pool2 + 60);
          if ( (unsigned int)dword_140C064E0 > 5 && tlgKeywordOn((__int64)&dword_140C064E0, 0x400000000000LL) )
          {
            v81 = 0;
            v79 = &v39;
            v39 = 0x1000000LL;
            v80 = 8;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_140C064E0,
              (unsigned __int8 *)&word_14002AF7E,
              Pool2 + 60,
              Pool2 + 59,
              3u,
              &v78);
          }
          inited = IopLiveDumpValidateParameters(Pool2, v41);
          if ( inited < 0 )
            goto LABEL_33;
          if ( (*(_DWORD *)Pool2[2].Data4 & 8) == 0 || a7 )
          {
            inited = IopLiveDumpAllocAndInitResources(Pool2);
            if ( inited >= 0 )
              inited = IopLiveDumpCaptureMemoryPages(Pool2);
          }
          else
          {
LABEL_32:
            inited = -1073741811;
          }
LABEL_33:
          if ( IptInterface )
          {
            (*(void (__fastcall **)(_QWORD))IptInterface)(0LL);
            ExReleaseExtensionTable(v10);
            IptInterface = 0LL;
          }
          if ( v14 )
            ZwClose(v14);
          if ( v15 )
            ZwClose(v15);
          if ( v16 )
            ZwClose(v16);
          v23 = v41;
          if ( (*(_DWORD *)(v41 + 24) & 0x10) != 0 && inited == -1073741248 && IopLiveDumpIsTracingEnabled() )
            EtwWrite(IopLiveDumpEtwRegHandle, &LIVEDUMP_EVENT_MEMORY_PRESSURE_ABORT, 0LL, 0, 0LL);
          if ( v36 )
          {
            IopLiveDumpContext = 0LL;
            ExReleaseResourceLite(&IopLiveDumpLock);
          }
          KeLeaveCriticalRegion();
          if ( inited >= 0 )
          {
            inited = SecureDump_GetSecureDumpSettings((__int64)&Pool2[61]);
            if ( inited >= 0 )
            {
              if ( !*v24
                || (v25 = *(_DWORD *)Pool2[61].Data4) != 0
                && BYTE1(Pool2[61].Data1)
                && *(_DWORD *)&Pool2[61].Data2 == 4096
                && (v25 & 0xFFF) == 0 )
              {
                if ( (*(_DWORD *)Pool2[2].Data4 & 8) != 0 )
                {
                  inited = -1073741802;
                  *a7 = Pool2;
                }
                else
                {
                  IopLiveDumpTrace();
                  MillisecondCounter = IopLiveDumpGetMillisecondCounter(0);
                  if ( *(_QWORD *)&Pool2[12].Data1 || *(_QWORD *)Pool2[12].Data4 )
                    v31 = IopLiveDumpWriteDumpFileWithExtraPages((__int64)Pool2);
                  else
                    v31 = IopLiveDumpWriteDumpFile((__int64)Pool2);
                  inited = v31;
                  v32 = IopLiveDumpGetMillisecondCounter(0);
                  if ( (unsigned int)dword_140C064E0 > 5 && tlgKeywordOn((__int64)&dword_140C064E0, 0x400000000000LL) )
                  {
                    v39 = 0x1000000LL;
                    v72 = &v39;
                    v33 = *(_QWORD *)&Pool2[35].Data1;
                    v73 = 8LL;
                    v75 = 8LL;
                    v77 = 8LL;
                    v34 = *(struct _KEVENT **)(v33 + 4000);
                    v74 = (PKEVENT *)&v42;
                    v42 = (__int64)v34;
                    v38 = (HANDLE)(v32 - MillisecondCounter);
                    v76 = &v38;
                    tlgWriteTransfer_EtwWriteTransfer(
                      (__int64)&dword_140C064E0,
                      (unsigned __int8 *)byte_14002AFB1,
                      Pool2 + 60,
                      Pool2 + 59,
                      5u,
                      &v71);
                  }
                  IopLiveDumpTraceDumpFileWriteEnd((__int64)Pool2, v32 - MillisecondCounter, 0LL, inited);
                  v23 = v41;
                  if ( inited >= 0 && (Pool2[5].Data1 & 2) != 0 )
                    inited = 261;
                }
              }
              else
              {
                inited = -1073741823;
              }
            }
          }
          v26 = (void *)IopLiveDumpGetMillisecondCounter(0);
          IopLiveDumpTraceInterfaceEnd((__int64)Pool2, 0LL, inited, v26);
          if ( (unsigned int)dword_140C064E0 > 5 && tlgKeywordOn((__int64)&dword_140C064E0, 0x400000000000LL) )
          {
            v27 = *(_DWORD *)(v23 + 24);
            v51 = &v39;
            v39 = 0x1000000LL;
            p_EventHandle = &EventHandle;
            v42 = (unsigned int)v43;
            v55 = (PKEVENT *)&v42;
            v57 = &v45;
            v59 = &v47;
            v61 = &v46;
            v41 = a5;
            v63 = &v41;
            v36 = (v27 & 8) != 0;
            v52 = 8LL;
            v65 = &v36;
            v67 = &v37;
            v69 = &v38;
            LODWORD(EventHandle) = inited;
            v54 = 4LL;
            v56 = 8LL;
            v58 = 8LL;
            v60 = 8LL;
            v62 = 8LL;
            v64 = 8LL;
            v66 = 1LL;
            v37 = (v27 & 0x10) != 0;
            v68 = 1LL;
            v38 = v26;
            v70 = 8LL;
            if ( Pool2 )
            {
              v28 = Pool2 + 59;
              v29 = Pool2 + 60;
            }
            else
            {
              v28 = (const GUID *)&v49;
              v29 = (const GUID *)&v49;
            }
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_140C064E0,
              (unsigned __int8 *)word_14002B00A,
              v29,
              v28,
              0xCu,
              &v50);
          }
          if ( Pool2 )
          {
            if ( (*(_DWORD *)Pool2[2].Data4 & 8) == 0 )
              EtwActivityIdControl(2u, Pool2 + 59);
            if ( inited != -1073741802 )
            {
              IopLiveDumpReleaseResources(Pool2);
              ExFreePoolWithTag(Pool2, 0x706D644Cu);
            }
          }
          return (unsigned int)inited;
        }
        inited = -1073741670;
      }
    }
    else
    {
      inited = -1073741267;
    }
    v14 = EventHandle;
    v15 = Handle;
    v16 = v38;
    goto LABEL_33;
  }
  if ( a7 )
    *a7 = 0LL;
  return 3221225659LL;
}
