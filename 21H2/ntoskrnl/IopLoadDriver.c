/*
 * XREFs of IopLoadDriver @ 0x14074A178
 * Callers:
 *     PipCallDriverAddDeviceQueryRoutine @ 0x14067B998 (PipCallDriverAddDeviceQueryRoutine.c)
 *     IopLoadUnloadDriver @ 0x1406DE800 (IopLoadUnloadDriver.c)
 *     IopInitializeSystemDrivers @ 0x140B110B4 (IopInitializeSystemDrivers.c)
 * Callees:
 *     IopResurrectDriver @ 0x14025DD20 (IopResurrectDriver.c)
 *     RtlImageNtHeader @ 0x140281450 (RtlImageNtHeader.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     PnpDiagnosticTraceObjectWithStatus @ 0x1402D1EB4 (PnpDiagnosticTraceObjectWithStatus.c)
 *     PnpDiagnosticTraceDriverFullInfo @ 0x1402D1F98 (PnpDiagnosticTraceDriverFullInfo.c)
 *     HeadlessKernelAddLogEntry @ 0x1402D26C0 (HeadlessKernelAddLogEntry.c)
 *     PnpDiagnosticTraceObject @ 0x1402D2774 (PnpDiagnosticTraceObject.c)
 *     VfDifCaptureDriverEntry @ 0x1402D8724 (VfDifCaptureDriverEntry.c)
 *     VfDifCaptureIoCallbacks @ 0x1402D8A7C (VfDifCaptureIoCallbacks.c)
 *     RtlAppendUnicodeToString @ 0x1402DFAC0 (RtlAppendUnicodeToString.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     DbgPrint @ 0x140369BD0 (DbgPrint.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ObInsertObject @ 0x14066BA50 (ObInsertObject.c)
 *     PnpPrepareDriverLoading @ 0x1406797C8 (PnpPrepareDriverLoading.c)
 *     IopBuildFullDriverPath @ 0x14067B1DC (IopBuildFullDriverPath.c)
 *     IopGetDriverNameFromKeyNode @ 0x14067B694 (IopGetDriverNameFromKeyNode.c)
 *     IopGetRegistryValue @ 0x14067B838 (IopGetRegistryValue.c)
 *     ObOpenObjectByName @ 0x14067C970 (ObOpenObjectByName.c)
 *     ObMakeTemporaryObject @ 0x1406E1700 (ObMakeTemporaryObject.c)
 *     MmReleaseLoadLock @ 0x1406F5AF0 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1406F5B50 (MmAcquireLoadLock.c)
 *     NtQueryObject @ 0x14070FD80 (NtQueryObject.c)
 *     ObCreateObjectEx @ 0x14072B3B0 (ObCreateObjectEx.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     NtQueryKey @ 0x1407333B0 (NtQueryKey.c)
 *     IopReadyDeviceObjects @ 0x140747D40 (IopReadyDeviceObjects.c)
 *     EtwTiLogDriverObjectLoad @ 0x140747D68 (EtwTiLogDriverObjectLoad.c)
 *     PnpCallDriverEntry @ 0x140747DDC (PnpCallDriverEntry.c)
 *     IopBootLog @ 0x140748300 (IopBootLog.c)
 *     ObCloseHandle @ 0x14074F6A0 (ObCloseHandle.c)
 *     KseShimDriverIoCallbacks @ 0x14075ECF4 (KseShimDriverIoCallbacks.c)
 *     MiFreeDriverInitialization @ 0x14075F194 (MiFreeDriverInitialization.c)
 *     MmLoadSystemImage @ 0x14075FC00 (MmLoadSystemImage.c)
 *     MmUnloadSystemImage @ 0x140762490 (MmUnloadSystemImage.c)
 *     NtQueryValueKey @ 0x1407C9930 (NtQueryValueKey.c)
 *     PnpDriverLoadingFailed @ 0x140862BA0 (PnpDriverLoadingFailed.c)
 *     IopCheckIfNotNativeDriver @ 0x140933EEC (IopCheckIfNotNativeDriver.c)
 *     IopLogBlockedDriverEvent @ 0x140934AB4 (IopLogBlockedDriverEvent.c)
 *     IopSafebootDriverLoad @ 0x140934EA4 (IopSafebootDriverLoad.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall IopLoadDriver(HANDLE Handle, char a2, unsigned __int8 a3, int *a4)
{
  ULONG_PTR v4; // rsi
  PVOID v6; // rbx
  wchar_t *Buffer; // r12
  int v8; // eax
  int DriverNameFromKeyNode; // r14d
  char v10; // r15
  wchar_t *v11; // rdi
  __int64 v12; // rcx
  wchar_t *v13; // rax
  int SystemImage; // eax
  __int64 v16; // rdx
  __int16 v17; // di
  _QWORD *v18; // r14
  __int64 v19; // rdx
  __int64 v20; // rax
  KPROCESSOR_MODE PreviousMode; // r9
  NTSTATUS v22; // eax
  struct _DRIVER_OBJECT *v23; // r15
  __int64 v24; // rax
  void *v25; // rdi
  ULONG_PTR v26; // r9
  unsigned int MaximumLength; // ebx
  PDRIVER_EXTENSION DriverExtension; // rax
  __int64 v29; // rdx
  unsigned int i; // eax
  PVOID DriverSection; // rdi
  struct _KTHREAD *Lock; // rbx
  PVOID *Object; // [rsp+20h] [rbp-E0h]
  PVOID *Objecta; // [rsp+20h] [rbp-E0h]
  char v35; // [rsp+50h] [rbp-B0h]
  bool v37; // [rsp+55h] [rbp-ABh] BYREF
  char v38; // [rsp+56h] [rbp-AAh]
  UNICODE_STRING Destination; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v40; // [rsp+68h] [rbp-98h] BYREF
  PVOID P; // [rsp+70h] [rbp-90h] BYREF
  UNICODE_STRING v42; // [rsp+78h] [rbp-88h] BYREF
  PVOID v43; // [rsp+88h] [rbp-78h] BYREF
  HANDLE Handlea; // [rsp+90h] [rbp-70h] BYREF
  UNICODE_STRING v45; // [rsp+98h] [rbp-68h] BYREF
  __int64 v46; // [rsp+A8h] [rbp-58h] BYREF
  int v47; // [rsp+B0h] [rbp-50h] BYREF
  PVOID Pool2; // [rsp+B8h] [rbp-48h]
  ULONG_PTR BugCheckParameter2; // [rsp+C0h] [rbp-40h] BYREF
  UNICODE_STRING DestinationString; // [rsp+C8h] [rbp-38h] BYREF
  int *v51; // [rsp+D8h] [rbp-28h]
  _DWORD v52[2]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v53; // [rsp+E8h] [rbp-18h]
  UNICODE_STRING *v54; // [rsp+F0h] [rbp-10h]
  int v55; // [rsp+F8h] [rbp-8h]
  int v56; // [rsp+FCh] [rbp-4h]
  __int128 v57; // [rsp+100h] [rbp+0h]
  _WORD v58[40]; // [rsp+110h] [rbp+10h] BYREF

  v4 = 0LL;
  v51 = a4;
  *a4 = 0;
  v38 = a2;
  LODWORD(v40) = 0;
  *(_QWORD *)&Destination.Length = 0LL;
  v6 = 0LL;
  *(_QWORD *)&v42.Length = 0LL;
  Buffer = 0LL;
  v42.Buffer = 0LL;
  v52[1] = 0;
  v56 = 0;
  BugCheckParameter2 = 0LL;
  *(_QWORD *)&v45.Length = 0LL;
  P = 0LL;
  v46 = 0LL;
  Handlea = 0LL;
  v45.Buffer = 0LL;
  Destination.Buffer = 0LL;
  v47 = 0;
  v37 = 0;
  v8 = NtQueryKey(Handle, 0, 0LL, 0, &v40);
  if ( v8 != -2147483643 && v8 != -1073741789 )
  {
    DriverNameFromKeyNode = -1073741472;
LABEL_4:
    v10 = 0;
    goto LABEL_51;
  }
  if ( (int)v40 + 8 < (unsigned int)v40 )
  {
    DriverNameFromKeyNode = -1073741675;
    goto LABEL_4;
  }
  Pool2 = (PVOID)ExAllocatePool2(64LL, (unsigned int)(v40 + 8), 538996553LL);
  v11 = (wchar_t *)Pool2;
  if ( !Pool2 )
  {
    v6 = 0LL;
LABEL_8:
    DriverNameFromKeyNode = -1073741670;
    v10 = 0;
    goto LABEL_51;
  }
  DriverNameFromKeyNode = NtQueryKey(Handle, 0, (PSLIST_ENTRY)Pool2, v40, &v40);
  if ( DriverNameFromKeyNode < 0 )
    goto LABEL_19;
  v12 = v11[6];
  Destination.Length = v12;
  Destination.MaximumLength = v12 + 8;
  Destination.Buffer = v11 + 8;
  v13 = (wchar_t *)ExAllocatePool2(256LL, v12 + 2, 538996553LL);
  v42.Buffer = v13;
  Buffer = v13;
  if ( !v13 )
  {
    Destination.Buffer = 0LL;
    v6 = v11;
    goto LABEL_8;
  }
  v42.Length = Destination.Length;
  v42.MaximumLength = Destination.Length + 2;
  memmove(v13, Destination.Buffer, Destination.Length);
  Buffer[(unsigned __int64)Destination.Length >> 1] = 0;
  RtlAppendUnicodeToString(&Destination, L".SYS");
  HeadlessKernelAddLogEntry();
  PnpDiagnosticTraceObject(&KMPnPEvt_DriverLoad_Start, &v42.Length);
  if ( v38 )
  {
    if ( (_DWORD)InitSafeBootMode )
    {
      LODWORD(v43) = 0;
      DestinationString = 0LL;
      RtlInitUnicodeString(&DestinationString, L"Group");
      memset(v58, 0, 0x4CuLL);
      LODWORD(Object) = 76;
      if ( (int)NtQueryValueKey(Handle, (size_t)Object, (__int64)&v43) < 0
        || (DestinationString.Length = v58[4] - 2,
            DestinationString.MaximumLength = v58[4] - 2,
            DestinationString.Buffer = &v58[6],
            !(unsigned __int8)IopSafebootDriverLoad(&DestinationString)) )
      {
        if ( !(unsigned __int8)IopSafebootDriverLoad(&Destination) )
        {
          IopBootLog(&Destination, 0);
          DbgPrint("SAFEBOOT: skipping device = %wZ(%wZ)\n", &Destination, &DestinationString);
          HeadlessKernelAddLogEntry();
          ObCloseHandle(Handle, 0);
          return 3221226335LL;
        }
      }
    }
  }
  DriverNameFromKeyNode = IopBuildFullDriverPath(&v42, Handle, &Destination);
  if ( DriverNameFromKeyNode < 0 )
  {
    Destination.Buffer = 0LL;
LABEL_19:
    v10 = 0;
    goto LABEL_20;
  }
  DriverNameFromKeyNode = IopGetDriverNameFromKeyNode(Handle, &v45);
  if ( DriverNameFromKeyNode < 0 )
    goto LABEL_19;
  v52[0] = 48;
  v53 = 0LL;
  v54 = &v45;
  v55 = IopCaseInsensitive != 0 ? 592 : 528;
  v57 = 0LL;
  ExAcquireResourceExclusiveLite(&IopDriverLoadResource, 1u);
  SystemImage = MmLoadSystemImage((unsigned int)&Destination, 0, 0, 0, (__int64)&BugCheckParameter2, (__int64)&v46);
  DriverNameFromKeyNode = SystemImage;
  if ( SystemImage >= 0 )
  {
    v17 = *(_WORD *)(RtlImageNtHeader(v46) + 70);
    v35 = v17;
    DriverNameFromKeyNode = PnpPrepareDriverLoading((int)&v42, Handle, v46, a3, &v47, &v37);
    if ( DriverNameFromKeyNode < 0 )
    {
      MmUnloadSystemImage(BugCheckParameter2);
      ExReleaseResourceLite(&IopDriverLoadResource);
LABEL_37:
      IopBootLog(&Destination, 0);
      Buffer = v42.Buffer;
      v10 = v17;
      goto LABEL_20;
    }
    DriverNameFromKeyNode = ObCreateObjectEx(
                              KeGetCurrentThread()->PreviousMode,
                              IoDriverObjectType,
                              (int)v52,
                              0,
                              (__int64)Objecta,
                              416,
                              0,
                              0,
                              &P,
                              0LL);
    if ( DriverNameFromKeyNode >= 0 )
    {
      v18 = P;
      memset(P, 0, 0x1A0uLL);
      v18[6] = v18 + 42;
      v18[42] = v18;
      LODWORD(v43) = 28;
      memset64(v18 + 14, (unsigned __int64)IopInvalidDeviceRequest, 0x1CuLL);
      *(_DWORD *)v18 = 22020100;
      v19 = RtlImageNtHeader(v46);
      v20 = v46 + *(unsigned int *)(v19 + 40);
      v17 = *(_WORD *)(v19 + 70);
      v35 = v17;
      if ( !_bittest16((const signed __int16 *)(v19 + 94), 0xDu) )
        *((_DWORD *)v18 + 4) |= 2u;
      v18[11] = v20;
      v18[5] = BugCheckParameter2;
      v18[3] = v46;
      *((_DWORD *)v18 + 8) = *(_DWORD *)(v19 + 80);
      DriverNameFromKeyNode = ObInsertObject(v18, 0LL, 1u, 0, 0LL, &Handlea);
      ExReleaseResourceLite(&IopDriverLoadResource);
      if ( DriverNameFromKeyNode < 0 )
        goto LABEL_37;
      PreviousMode = KeGetCurrentThread()->PreviousMode;
      P = 0LL;
      v22 = ObReferenceObjectByHandle(Handlea, 0, IoDriverObjectType, PreviousMode, &P, 0LL);
      if ( v22 )
        KeBugCheckEx(0x11Fu, (ULONG_PTR)Handlea, v22, (ULONG_PTR)P, 0LL);
      ZwClose(Handlea);
      v23 = (struct _DRIVER_OBJECT *)P;
      *((_QWORD *)P + 9) = &CmRegistryMachineHardwareDescriptionSystemName;
      v24 = ExAllocatePool2(64LL, v45.MaximumLength, 538996553LL);
      v23->DriverName.Buffer = (wchar_t *)v24;
      if ( v24 )
      {
        v23->DriverName.MaximumLength = v45.MaximumLength;
        v23->DriverName.Length = v45.Length;
        memmove(v23->DriverName.Buffer, v45.Buffer, v45.MaximumLength);
      }
      v25 = (void *)ExAllocatePool2(64LL, 4096LL, 538996553LL);
      if ( !v25 )
      {
        ObMakeTemporaryObject(v23);
        ObfDereferenceObject(v23);
        Buffer = v42.Buffer;
        DriverNameFromKeyNode = -1073741670;
        v10 = v35;
        goto LABEL_50;
      }
      DriverNameFromKeyNode = NtQueryObject(Handle, ObjectNameInformation, v25, 0x1000u, (PULONG)&v43);
      if ( DriverNameFromKeyNode >= 0 )
      {
        Buffer = v42.Buffer;
        if ( v42.Buffer )
        {
          MaximumLength = v42.MaximumLength;
          v23->DriverExtension->ServiceKeyName.Buffer = (wchar_t *)ExAllocatePool2(64LL, v42.MaximumLength, 538996553LL);
          DriverExtension = v23->DriverExtension;
          if ( DriverExtension->ServiceKeyName.Buffer )
          {
            DriverExtension->ServiceKeyName.MaximumLength = MaximumLength;
            v23->DriverExtension->ServiceKeyName.Length = v42.Length;
            memmove(v23->DriverExtension->ServiceKeyName.Buffer, Buffer, MaximumLength);
          }
        }
        if ( (v47 & 1) != 0 )
          v23->Flags |= 0x100u;
        if ( v37 )
          v23->Flags |= 0x1000u;
        PnpDiagnosticTraceObject(&KMPnPEvt_DriverInit_Start, (unsigned __int16 *)v25);
        VfDifCaptureDriverEntry((__int64)v23);
        DriverNameFromKeyNode = PnpCallDriverEntry((__int64)v23, (__int64)v25);
        if ( DriverNameFromKeyNode >= 0 )
        {
          VfDifCaptureIoCallbacks(v23);
          KseShimDriverIoCallbacks(v23, v29, &Destination);
        }
        PnpDiagnosticTraceObjectWithStatus(&KMPnPEvt_DriverInit_Stop, (unsigned __int16 *)v25, DriverNameFromKeyNode);
        *v51 = DriverNameFromKeyNode;
        if ( DriverNameFromKeyNode < 0 )
          DriverNameFromKeyNode = -1073740955;
        for ( i = 0; i <= 0x1B; ++i )
        {
          if ( !v23->MajorFunction[i] )
            v23->MajorFunction[i] = (PDRIVER_DISPATCH)IopInvalidDeviceRequest;
        }
        ExFreePoolWithTag(v25, 0);
        if ( DriverNameFromKeyNode >= 0 )
        {
          IopBootLog(&Destination, 1);
          DriverSection = v23->DriverSection;
          Lock = MmAcquireLoadLock();
          MiFreeDriverInitialization(DriverSection);
          MmReleaseLoadLock((__int64)Lock);
          IopReadyDeviceObjects((__int64)v23);
          EtwTiLogDriverObjectLoad(&v23->DriverName.Length);
          v10 = v35;
          goto LABEL_21;
        }
        ObMakeTemporaryObject(v23);
        ObfDereferenceObject(v23);
        goto LABEL_41;
      }
      ObMakeTemporaryObject(v23);
      ObfDereferenceObject(v23);
      ExFreePoolWithTag(v25, 0);
    }
    else
    {
      MmUnloadSystemImage(BugCheckParameter2);
      ExReleaseResourceLite(&IopDriverLoadResource);
      IopBootLog(&Destination, 0);
    }
    Buffer = v42.Buffer;
LABEL_41:
    v10 = v35;
    goto LABEL_20;
  }
  if ( SystemImage == -1073741554 )
  {
    DriverNameFromKeyNode = ObOpenObjectByName(
                              (__int64)v52,
                              (__int64)IoDriverObjectType,
                              0,
                              0LL,
                              0,
                              0LL,
                              (__int64)&Handlea);
    if ( DriverNameFromKeyNode < 0 )
    {
      ExReleaseResourceLite(&IopDriverLoadResource);
      IopBootLog(&Destination, 0);
      v10 = 0;
      if ( DriverNameFromKeyNode == -1073741772 )
        DriverNameFromKeyNode = -1073740914;
      goto LABEL_20;
    }
    v43 = 0LL;
    DriverNameFromKeyNode = ObReferenceObjectByHandle(Handlea, 0, IoDriverObjectType, 0, &v43, 0LL);
    ZwClose(Handlea);
    if ( DriverNameFromKeyNode < 0 )
    {
      ExReleaseResourceLite(&IopDriverLoadResource);
      IopBootLog(&Destination, 0);
      goto LABEL_19;
    }
    DriverNameFromKeyNode = IopResurrectDriver((__int64)v43);
    ObfDereferenceObject(v43);
  }
  else if ( (unsigned __int8)IopCheckIfNotNativeDriver((unsigned int)SystemImage, &Destination) == 1 )
  {
    DriverNameFromKeyNode = (a3 != 0) - 1073740949;
    IopLogBlockedDriverEvent(&Destination, v16, (unsigned int)DriverNameFromKeyNode);
  }
  ExReleaseResourceLite(&IopDriverLoadResource);
  IopBootLog(&Destination, 0);
  v10 = 0;
  if ( DriverNameFromKeyNode >= 0 )
    goto LABEL_21;
LABEL_20:
  if ( DriverNameFromKeyNode == -1073741554 )
  {
LABEL_21:
    v6 = Pool2;
    goto LABEL_51;
  }
LABEL_50:
  v6 = Pool2;
LABEL_51:
  HeadlessKernelAddLogEntry();
  if ( DriverNameFromKeyNode < 0 && DriverNameFromKeyNode != -1073741218 && DriverNameFromKeyNode != -1073740948 )
  {
    P = 0LL;
    if ( DriverNameFromKeyNode != -1073741554 )
    {
      PnpDriverLoadingFailed(Handle);
      if ( DriverNameFromKeyNode != -1073740955 && IopGetRegistryValue(Handle, L"ErrorControl", 0, &P) >= 0 )
      {
        if ( *((_DWORD *)P + 3)
          && (_BYTE)CmFirstTime == 1
          && (unsigned int)(*(_DWORD *)((char *)P + *((unsigned int *)P + 2)) - 2) <= 1 )
        {
          if ( ((unsigned __int64)&Destination & -(__int64)(Destination.Buffer != 0LL)) != 0 )
            v26 = *(_QWORD *)(((unsigned __int64)&Destination & -(__int64)(Destination.Buffer != 0LL)) + 8);
          else
            v26 = 0LL;
          if ( ((unsigned __int64)&v45 & -(__int64)(v45.Buffer != 0LL)) != 0 )
            v4 = *(_QWORD *)(((unsigned __int64)&v45 & -(__int64)(v45.Buffer != 0LL)) + 8);
          KeBugCheckEx(0x5Au, 1uLL, v4, v26, DriverNameFromKeyNode);
        }
        ExFreePoolWithTag(P, 0);
      }
    }
  }
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  if ( Buffer )
  {
    PnpDiagnosticTraceDriverFullInfo(&KMPnPEvt_DriverLoad_Stop, &v42.Length, DriverNameFromKeyNode, (__int64)&v45, v10);
    ExFreePoolWithTag(Buffer, 0);
  }
  if ( v45.Buffer )
    ExFreePoolWithTag(v45.Buffer, 0);
  if ( Destination.Buffer )
    ExFreePoolWithTag(Destination.Buffer, 0);
  ObCloseHandle(Handle, 0);
  return (unsigned int)DriverNameFromKeyNode;
}
