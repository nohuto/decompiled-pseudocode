/*
 * XREFs of IopLoadDriver @ 0x140729340
 * Callers:
 *     PipCallDriverAddDeviceQueryRoutine @ 0x1407282D4 (PipCallDriverAddDeviceQueryRoutine.c)
 *     IopLoadUnloadDriver @ 0x14076E010 (IopLoadUnloadDriver.c)
 *     IopInitializeSystemDrivers @ 0x140A4DC4C (IopInitializeSystemDrivers.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x140202B70 (RtlAppendUnicodeToString.c)
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     ExReleaseResourceLite @ 0x140208540 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140208CF0 (ExAcquireResourceExclusiveLite.c)
 *     RtlImageNtHeader @ 0x140224A90 (RtlImageNtHeader.c)
 *     IopVerifierExAllocatePool_0 @ 0x14027C6F4 (IopVerifierExAllocatePool_0.c)
 *     RtlInitUnicodeString @ 0x140298F60 (RtlInitUnicodeString.c)
 *     DbgPrint @ 0x140361340 (DbgPrint.c)
 *     PnpDiagnosticTraceObject @ 0x140362B50 (PnpDiagnosticTraceObject.c)
 *     PnpDiagnosticTraceObjectWithStatus @ 0x140362CD4 (PnpDiagnosticTraceObjectWithStatus.c)
 *     HeadlessKernelAddLogEntry @ 0x14036B9C8 (HeadlessKernelAddLogEntry.c)
 *     PnpDiagnosticTraceDriverFullInfo @ 0x14037A320 (PnpDiagnosticTraceDriverFullInfo.c)
 *     VfDifCaptureIoCallbacks @ 0x14037BE80 (VfDifCaptureIoCallbacks.c)
 *     VfDifCaptureDriverEntry @ 0x14037BEA4 (VfDifCaptureDriverEntry.c)
 *     IopResurrectDriver @ 0x1403A4550 (IopResurrectDriver.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F37A0 (ZwClose.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     memset @ 0x14040A280 (memset.c)
 *     ObReferenceObjectByHandle @ 0x1405F5C90 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x140602510 (ObCloseHandle.c)
 *     ObInsertObject @ 0x14060D6D0 (ObInsertObject.c)
 *     ObCreateObject @ 0x14060ECE0 (ObCreateObject.c)
 *     NtQueryObject @ 0x14065F8E0 (NtQueryObject.c)
 *     ObOpenObjectByName @ 0x1406945D0 (ObOpenObjectByName.c)
 *     NtQueryKey @ 0x140695470 (NtQueryKey.c)
 *     NtQueryValueKey @ 0x140695B10 (NtQueryValueKey.c)
 *     MmReleaseLoadLock @ 0x1406A8DA0 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1406A8E00 (MmAcquireLoadLock.c)
 *     ObMakeTemporaryObject @ 0x14070AFD0 (ObMakeTemporaryObject.c)
 *     IopGetDriverNameFromKeyNode @ 0x1407286BC (IopGetDriverNameFromKeyNode.c)
 *     IopGetRegistryValue @ 0x140728854 (IopGetRegistryValue.c)
 *     IopBuildFullDriverPath @ 0x140729D94 (IopBuildFullDriverPath.c)
 *     PnpPrepareDriverLoading @ 0x14072CCF0 (PnpPrepareDriverLoading.c)
 *     KseShimDriverIoCallbacks @ 0x140742B74 (KseShimDriverIoCallbacks.c)
 *     MmLoadSystemImage @ 0x140746000 (MmLoadSystemImage.c)
 *     MiFreeDriverInitialization @ 0x140749114 (MiFreeDriverInitialization.c)
 *     PnpCallDriverEntry @ 0x14075DA40 (PnpCallDriverEntry.c)
 *     IopReadyDeviceObjects @ 0x14075EBCC (IopReadyDeviceObjects.c)
 *     IopBootLog @ 0x14075F0F4 (IopBootLog.c)
 *     MmUnloadSystemImage @ 0x14075F920 (MmUnloadSystemImage.c)
 *     EtwTiLogDriverObjectLoad @ 0x14075F990 (EtwTiLogDriverObjectLoad.c)
 *     PnpDriverLoadingFailed @ 0x1407BFFD0 (PnpDriverLoadingFailed.c)
 *     IopCheckIfNotNativeDriver @ 0x14088E1D0 (IopCheckIfNotNativeDriver.c)
 *     IopLogBlockedDriverEvent @ 0x14088EAA4 (IopLogBlockedDriverEvent.c)
 *     IopSafebootDriverLoad @ 0x14088EEA4 (IopSafebootDriverLoad.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopLoadDriver(HANDLE Handle, char a2, unsigned __int8 a3, int *a4)
{
  ULONG_PTR v4; // rsi
  unsigned int v5; // ebx
  _WORD *v7; // r12
  int v8; // eax
  unsigned __int16 *v9; // rdi
  int DriverNameFromKeyNode; // r14d
  __int64 v11; // rcx
  PVOID Pool_0; // rax
  int SystemImage; // eax
  __int64 v14; // rax
  int v15; // ecx
  _QWORD *v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rax
  HANDLE v19; // rdi
  KPROCESSOR_MODE PreviousMode; // r9
  NTSTATUS v21; // eax
  char *v22; // r15
  PVOID v23; // rax
  PVOID v24; // rdi
  unsigned int v25; // ebx
  __int64 v26; // rax
  __int64 v27; // rdx
  unsigned int i; // eax
  __int64 v29; // rdi
  struct _KTHREAD *Lock; // rbx
  int ValueKey; // eax
  __int64 v33; // rdx
  ULONG_PTR v34; // r9
  PVOID *NewObject; // [rsp+20h] [rbp-E0h]
  UNICODE_STRING Destination; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v38; // [rsp+68h] [rbp-98h] BYREF
  __int64 v39; // [rsp+70h] [rbp-90h] BYREF
  PVOID v40; // [rsp+78h] [rbp-88h]
  char v41[4]; // [rsp+80h] [rbp-80h]
  UNICODE_STRING v42; // [rsp+88h] [rbp-78h] BYREF
  __int64 v43; // [rsp+98h] [rbp-68h] BYREF
  int v44; // [rsp+A0h] [rbp-60h] BYREF
  HANDLE v45; // [rsp+A8h] [rbp-58h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+B0h] [rbp-50h] BYREF
  int v47; // [rsp+B8h] [rbp-48h] BYREF
  ULONG v48; // [rsp+BCh] [rbp-44h] BYREF
  PVOID v49; // [rsp+C0h] [rbp-40h] BYREF
  PVOID v50; // [rsp+C8h] [rbp-38h] BYREF
  UNICODE_STRING DestinationString; // [rsp+D0h] [rbp-30h] BYREF
  PVOID Object; // [rsp+E0h] [rbp-20h]
  PVOID v53; // [rsp+E8h] [rbp-18h] BYREF
  PVOID P; // [rsp+F0h] [rbp-10h]
  int *v55; // [rsp+F8h] [rbp-8h]
  _DWORD v56[2]; // [rsp+100h] [rbp+0h] BYREF
  __int64 v57; // [rsp+108h] [rbp+8h]
  UNICODE_STRING *v58; // [rsp+110h] [rbp+10h]
  int v59; // [rsp+118h] [rbp+18h]
  int v60; // [rsp+11Ch] [rbp+1Ch]
  __int128 v61; // [rsp+120h] [rbp+20h]
  _WORD v62[40]; // [rsp+130h] [rbp+30h] BYREF

  v4 = 0LL;
  v55 = a4;
  *a4 = 0;
  v5 = a3;
  P = 0LL;
  LODWORD(v38) = 0;
  *(_QWORD *)&Destination.Length = 0LL;
  v7 = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  v56[1] = 0;
  v60 = 0;
  BugCheckParameter2 = 0LL;
  *(_QWORD *)&v42.Length = 0LL;
  Object = 0LL;
  v43 = 0LL;
  *(_DWORD *)v41 = 0;
  v45 = 0LL;
  v42.Buffer = 0LL;
  Destination.Buffer = 0LL;
  v44 = 0;
  v8 = NtQueryKey(Handle, 0, 0LL, 0, &v38);
  if ( v8 != -1073741789 && v8 != -2147483643 )
  {
    DriverNameFromKeyNode = -1073741472;
    goto LABEL_35;
  }
  if ( (int)v38 + 8 < (unsigned int)v38 )
  {
    DriverNameFromKeyNode = -1073741675;
    goto LABEL_35;
  }
  P = IopVerifierExAllocatePool_0(NonPagedPoolNx, (unsigned int)(v38 + 8));
  v9 = (unsigned __int16 *)P;
  if ( !P )
  {
    DriverNameFromKeyNode = -1073741670;
    goto LABEL_35;
  }
  DriverNameFromKeyNode = NtQueryKey(Handle, 0, P, v38, &v38);
  if ( DriverNameFromKeyNode >= 0 )
  {
    v11 = v9[6];
    Destination.Length = v11;
    Destination.MaximumLength = v11 + 8;
    Destination.Buffer = v9 + 8;
    Pool_0 = IopVerifierExAllocatePool_0(PagedPool, v11 + 2);
    v40 = Pool_0;
    v7 = Pool_0;
    if ( Pool_0 )
    {
      LOWORD(v39) = Destination.Length;
      WORD1(v39) = Destination.Length + 2;
      memmove(Pool_0, Destination.Buffer, Destination.Length);
      v7[(unsigned __int64)Destination.Length >> 1] = 0;
      RtlAppendUnicodeToString(&Destination, L".SYS");
      HeadlessKernelAddLogEntry();
      PnpDiagnosticTraceObject(&KMPnPEvt_DriverLoad_Start, (unsigned __int16 *)&v39);
      if ( (_DWORD)InitSafeBootMode )
      {
        if ( a2 )
        {
          v47 = 0;
          DestinationString = 0LL;
          RtlInitUnicodeString(&DestinationString, L"Group");
          memset(v62, 0, 0x4CuLL);
          LODWORD(NewObject) = 76;
          ValueKey = NtQueryValueKey(
                       Handle,
                       (unsigned __int64)&DestinationString,
                       2u,
                       (unsigned __int64)v62,
                       (size_t)NewObject,
                       (unsigned __int64)&v47);
          if ( ValueKey < 0
            || (DestinationString.Length = v62[4] - 2,
                DestinationString.MaximumLength = v62[4] - 2,
                DestinationString.Buffer = &v62[6],
                !(unsigned __int8)IopSafebootDriverLoad(&DestinationString)) )
          {
            if ( !(unsigned __int8)IopSafebootDriverLoad(&Destination) )
            {
              IopBootLog(&Destination);
              DbgPrint("SAFEBOOT: skipping device = %wZ(%wZ)\n", &Destination, &DestinationString);
              HeadlessKernelAddLogEntry();
              ObCloseHandle(Handle, 0);
              return 3221226335LL;
            }
          }
        }
      }
      DriverNameFromKeyNode = IopBuildFullDriverPath(&v39, Handle, &Destination);
      if ( DriverNameFromKeyNode >= 0 )
      {
        DriverNameFromKeyNode = IopGetDriverNameFromKeyNode(Handle, &v42);
        if ( DriverNameFromKeyNode >= 0 )
        {
          v56[0] = 48;
          v57 = 0LL;
          v58 = &v42;
          v59 = IopCaseInsensitive != 0 ? 592 : 528;
          v61 = 0LL;
          ExAcquireResourceExclusiveLite(&IopDriverLoadResource, 1u);
          SystemImage = MmLoadSystemImage(
                          (unsigned int)&Destination,
                          0,
                          0,
                          0,
                          (__int64)&BugCheckParameter2,
                          (__int64)&v43);
          DriverNameFromKeyNode = SystemImage;
          if ( SystemImage < 0 )
          {
            if ( SystemImage == -1073741554 )
              goto LABEL_53;
            if ( (unsigned __int8)IopCheckIfNotNativeDriver((unsigned int)SystemImage, &Destination) == 1 )
            {
              DriverNameFromKeyNode = ((_BYTE)v5 != 0) - 1073740949;
              IopLogBlockedDriverEvent(&Destination, v33, (unsigned int)DriverNameFromKeyNode);
            }
            if ( DriverNameFromKeyNode == -1073741554 )
            {
LABEL_53:
              DriverNameFromKeyNode = ObOpenObjectByName(
                                        (__int64)v56,
                                        (__int64)IoDriverObjectType,
                                        0,
                                        0LL,
                                        0,
                                        0LL,
                                        (__int64)&v45);
              if ( DriverNameFromKeyNode < 0 )
              {
                ExReleaseResourceLite(&IopDriverLoadResource);
                IopBootLog(&Destination);
                if ( DriverNameFromKeyNode == -1073741772 )
                  DriverNameFromKeyNode = -1073740914;
                goto LABEL_35;
              }
              v49 = 0LL;
              DriverNameFromKeyNode = ObReferenceObjectByHandle(v45, 0, IoDriverObjectType, 0, &v49, 0LL);
              ZwClose(v45);
              if ( DriverNameFromKeyNode >= 0 )
              {
                DriverNameFromKeyNode = IopResurrectDriver((__int64)v49);
                HalPutDmaAdapter((PADAPTER_OBJECT)v49);
              }
            }
            ExReleaseResourceLite(&IopDriverLoadResource);
            IopBootLog(&Destination);
          }
          else
          {
            v14 = RtlImageNtHeader(v43);
            *(_WORD *)v41 = *(_WORD *)(v14 + 70);
            *(_WORD *)&v41[2] = *(_WORD *)(v14 + 68);
            DriverNameFromKeyNode = PnpPrepareDriverLoading(&v39, Handle, v43, v5, &v44);
            if ( DriverNameFromKeyNode < 0
              || (LOBYTE(v15) = KeGetCurrentThread()->PreviousMode,
                  DriverNameFromKeyNode = ObCreateObject(v15, (int)IoDriverObjectType, (int)v56, 0),
                  DriverNameFromKeyNode < 0) )
            {
              MmUnloadSystemImage(BugCheckParameter2);
              ExReleaseResourceLite(&IopDriverLoadResource);
            }
            else
            {
              v16 = Object;
              memset(Object, 0, 0x1A0uLL);
              v16[6] = v16 + 42;
              v16[42] = v16;
              v48 = 28;
              memset64(v16 + 14, (unsigned __int64)IopInvalidDeviceRequest, 0x1CuLL);
              *(_DWORD *)v16 = 22020100;
              v17 = RtlImageNtHeader(v43);
              *(_WORD *)v41 = *(_WORD *)(v17 + 70);
              *(_WORD *)&v41[2] = *(_WORD *)(v17 + 68);
              v18 = v43 + *(unsigned int *)(v17 + 40);
              if ( (*(_WORD *)(v17 + 94) & 0x2000) == 0 )
                *((_DWORD *)v16 + 4) |= 2u;
              v16[11] = v18;
              v16[5] = BugCheckParameter2;
              v16[3] = v43;
              *((_DWORD *)v16 + 8) = *(_DWORD *)(v17 + 80);
              DriverNameFromKeyNode = ObInsertObject(v16, 0LL, 1u, 0, 0LL, &v45);
              ExReleaseResourceLite(&IopDriverLoadResource);
              if ( DriverNameFromKeyNode >= 0 )
              {
                v19 = v45;
                PreviousMode = KeGetCurrentThread()->PreviousMode;
                v50 = 0LL;
                v21 = ObReferenceObjectByHandle(v45, 0, IoDriverObjectType, PreviousMode, &v50, 0LL);
                if ( v21 )
                  KeBugCheckEx(0x11Fu, (ULONG_PTR)v19, v21, (ULONG_PTR)v50, 0LL);
                ZwClose(v19);
                v22 = (char *)v50;
                *((_QWORD *)v50 + 9) = &CmRegistryMachineHardwareDescriptionSystemName;
                v23 = IopVerifierExAllocatePool_0(NonPagedPoolNx, v42.MaximumLength);
                *((_QWORD *)v22 + 8) = v23;
                if ( v23 )
                {
                  *((_WORD *)v22 + 29) = v42.MaximumLength;
                  *((_WORD *)v22 + 28) = v42.Length;
                  memmove(*((void **)v22 + 8), v42.Buffer, v42.MaximumLength);
                }
                v24 = IopVerifierExAllocatePool_0(NonPagedPoolNx, 0x1000uLL);
                if ( v24 )
                {
                  DriverNameFromKeyNode = NtQueryObject(Handle, ObjectNameInformation, v24, 0x1000u, &v48);
                  if ( DriverNameFromKeyNode < 0 )
                  {
                    ObMakeTemporaryObject(v22);
                    HalPutDmaAdapter((PADAPTER_OBJECT)v22);
                    ExFreePoolWithTag(v24, 0);
                    v7 = v40;
                  }
                  else
                  {
                    v7 = v40;
                    if ( v40 )
                    {
                      v25 = WORD1(v39);
                      *(_QWORD *)(*((_QWORD *)v22 + 6) + 32LL) = IopVerifierExAllocatePool_0(NonPagedPoolNx, WORD1(v39));
                      v26 = *((_QWORD *)v22 + 6);
                      if ( *(_QWORD *)(v26 + 32) )
                      {
                        *(_WORD *)(v26 + 26) = v25;
                        *(_WORD *)(*((_QWORD *)v22 + 6) + 24LL) = v39;
                        memmove(*(void **)(*((_QWORD *)v22 + 6) + 32LL), v7, v25);
                      }
                    }
                    if ( (v44 & 1) != 0 )
                      *((_DWORD *)v22 + 4) |= 0x100u;
                    PnpDiagnosticTraceObject(&KMPnPEvt_DriverInit_Start, (unsigned __int16 *)v24);
                    VfDifCaptureDriverEntry((__int64)v22);
                    DriverNameFromKeyNode = PnpCallDriverEntry(v22, v24);
                    if ( DriverNameFromKeyNode >= 0 )
                    {
                      VfDifCaptureIoCallbacks((__int64)v22);
                      KseShimDriverIoCallbacks(v22, v27, &Destination);
                    }
                    PnpDiagnosticTraceObjectWithStatus(
                      &KMPnPEvt_DriverInit_Stop,
                      (unsigned __int16 *)v24,
                      DriverNameFromKeyNode);
                    *v55 = DriverNameFromKeyNode;
                    if ( DriverNameFromKeyNode < 0 )
                      DriverNameFromKeyNode = -1073740955;
                    for ( i = 0; i <= 0x1B; ++i )
                    {
                      if ( !*(_QWORD *)&v22[8 * i + 112] )
                        *(_QWORD *)&v22[8 * i + 112] = IopInvalidDeviceRequest;
                    }
                    ExFreePoolWithTag(v24, 0);
                    if ( DriverNameFromKeyNode < 0 )
                    {
                      ObMakeTemporaryObject(v22);
                      HalPutDmaAdapter((PADAPTER_OBJECT)v22);
                    }
                    else
                    {
                      IopBootLog(&Destination);
                      v29 = *((_QWORD *)v22 + 5);
                      Lock = MmAcquireLoadLock();
                      MiFreeDriverInitialization(v29);
                      MmReleaseLoadLock((__int64)Lock);
                      IopReadyDeviceObjects(v22);
                      EtwTiLogDriverObjectLoad(v22 + 56);
                    }
                  }
                }
                else
                {
                  ObMakeTemporaryObject(v22);
                  HalPutDmaAdapter((PADAPTER_OBJECT)v22);
                  v7 = v40;
                  DriverNameFromKeyNode = -1073741670;
                }
                goto LABEL_35;
              }
            }
            IopBootLog(&Destination);
            v7 = v40;
          }
        }
        goto LABEL_35;
      }
    }
    else
    {
      DriverNameFromKeyNode = -1073741670;
    }
    Destination.Buffer = 0LL;
  }
LABEL_35:
  HeadlessKernelAddLogEntry();
  if ( (int)(DriverNameFromKeyNode + 0x80000000) >= 0 && DriverNameFromKeyNode != -1073741218 )
  {
    v53 = 0LL;
    if ( DriverNameFromKeyNode != -1073741554 )
    {
      PnpDriverLoadingFailed(Handle);
      if ( DriverNameFromKeyNode != -1073740955 && IopGetRegistryValue(Handle, L"ErrorControl", 0, &v53) >= 0 )
      {
        if ( *((_DWORD *)v53 + 3)
          && (_BYTE)CmFirstTime == 1
          && (unsigned int)(*(_DWORD *)((char *)v53 + *((unsigned int *)v53 + 2)) - 2) <= 1 )
        {
          if ( ((unsigned __int64)&Destination & -(__int64)(Destination.Buffer != 0LL)) != 0 )
            v34 = *(_QWORD *)(((unsigned __int64)&Destination & -(__int64)(Destination.Buffer != 0LL)) + 8);
          else
            v34 = 0LL;
          if ( ((unsigned __int64)&v42 & -(__int64)(v42.Buffer != 0LL)) != 0 )
            v4 = *(_QWORD *)(((unsigned __int64)&v42 & -(__int64)(v42.Buffer != 0LL)) + 8);
          KeBugCheckEx(0x5Au, 1uLL, v4, v34, DriverNameFromKeyNode);
        }
        ExFreePoolWithTag(v53, 0);
      }
    }
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v7 )
  {
    PnpDiagnosticTraceDriverFullInfo(
      &KMPnPEvt_DriverLoad_Stop,
      (unsigned __int16 *)&v39,
      DriverNameFromKeyNode,
      (__int64)&v42,
      v41[0]);
    ExFreePoolWithTag(v7, 0);
  }
  if ( v42.Buffer )
    ExFreePoolWithTag(v42.Buffer, 0);
  if ( Destination.Buffer )
    ExFreePoolWithTag(Destination.Buffer, 0);
  ObCloseHandle(Handle, 0);
  return (unsigned int)DriverNameFromKeyNode;
}
