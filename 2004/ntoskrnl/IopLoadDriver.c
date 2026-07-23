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

__int64 __fastcall IopLoadDriver(HANDLE KeyHandle, char a2, unsigned __int8 a3, int *a4)
{
  ULONG_PTR v4; // rsi
  unsigned int v5; // ebx
  _WORD *v7; // r12
  NTSTATUS v8; // eax
  unsigned __int16 *v9; // rdi
  int DriverNameFromKeyNode; // r14d
  __int64 v11; // rcx
  PVOID Pool_0; // rax
  int SystemImage; // eax
  PIMAGE_NT_HEADERS v14; // rax
  int v15; // ecx
  _QWORD *v16; // rbx
  PIMAGE_NT_HEADERS v17; // rdx
  char *v18; // rax
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
  __int64 v32; // rdx
  ULONG_PTR v33; // r9
  UNICODE_STRING Destination; // [rsp+58h] [rbp-A8h] BYREF
  ULONG Length; // [rsp+68h] [rbp-98h] BYREF
  __int64 v37; // [rsp+70h] [rbp-90h] BYREF
  PVOID v38; // [rsp+78h] [rbp-88h]
  char v39[4]; // [rsp+80h] [rbp-80h]
  UNICODE_STRING v40; // [rsp+88h] [rbp-78h] BYREF
  PVOID BaseOfImage; // [rsp+98h] [rbp-68h] BYREF
  int v42; // [rsp+A0h] [rbp-60h] BYREF
  HANDLE Handle; // [rsp+A8h] [rbp-58h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+B0h] [rbp-50h] BYREF
  ULONG v45; // [rsp+B8h] [rbp-48h] BYREF
  ULONG ReturnLength; // [rsp+BCh] [rbp-44h] BYREF
  PVOID v47; // [rsp+C0h] [rbp-40h] BYREF
  PVOID v48; // [rsp+C8h] [rbp-38h] BYREF
  UNICODE_STRING DestinationString; // [rsp+D0h] [rbp-30h] BYREF
  PVOID Object; // [rsp+E0h] [rbp-20h]
  PVOID v51; // [rsp+E8h] [rbp-18h] BYREF
  PVOID P; // [rsp+F0h] [rbp-10h]
  int *v53; // [rsp+F8h] [rbp-8h]
  _DWORD v54[2]; // [rsp+100h] [rbp+0h] BYREF
  __int64 v55; // [rsp+108h] [rbp+8h]
  UNICODE_STRING *v56; // [rsp+110h] [rbp+10h]
  int v57; // [rsp+118h] [rbp+18h]
  int v58; // [rsp+11Ch] [rbp+1Ch]
  __int128 v59; // [rsp+120h] [rbp+20h]
  _WORD KeyValueInformation[40]; // [rsp+130h] [rbp+30h] BYREF

  v4 = 0LL;
  v53 = a4;
  *a4 = 0;
  v5 = a3;
  P = 0LL;
  Length = 0;
  *(_QWORD *)&Destination.Length = 0LL;
  v7 = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  v54[1] = 0;
  v58 = 0;
  BugCheckParameter2 = 0LL;
  *(_QWORD *)&v40.Length = 0LL;
  Object = 0LL;
  BaseOfImage = 0LL;
  *(_DWORD *)v39 = 0;
  Handle = 0LL;
  v40.Buffer = 0LL;
  Destination.Buffer = 0LL;
  v42 = 0;
  v8 = NtQueryKey(KeyHandle, KeyBasicInformation, 0LL, 0, &Length);
  if ( v8 != -1073741789 && v8 != -2147483643 )
  {
    DriverNameFromKeyNode = -1073741472;
    goto LABEL_35;
  }
  if ( Length + 8 < Length )
  {
    DriverNameFromKeyNode = -1073741675;
    goto LABEL_35;
  }
  P = IopVerifierExAllocatePool_0(NonPagedPoolNx, Length + 8);
  v9 = (unsigned __int16 *)P;
  if ( !P )
  {
    DriverNameFromKeyNode = -1073741670;
    goto LABEL_35;
  }
  DriverNameFromKeyNode = NtQueryKey(KeyHandle, KeyBasicInformation, P, Length, &Length);
  if ( DriverNameFromKeyNode >= 0 )
  {
    v11 = v9[6];
    Destination.Length = v11;
    Destination.MaximumLength = v11 + 8;
    Destination.Buffer = v9 + 8;
    Pool_0 = IopVerifierExAllocatePool_0(PagedPool, v11 + 2);
    v38 = Pool_0;
    v7 = Pool_0;
    if ( Pool_0 )
    {
      LOWORD(v37) = Destination.Length;
      WORD1(v37) = Destination.Length + 2;
      memmove(Pool_0, Destination.Buffer, Destination.Length);
      v7[(unsigned __int64)Destination.Length >> 1] = 0;
      RtlAppendUnicodeToString(&Destination, L".SYS");
      HeadlessKernelAddLogEntry();
      PnpDiagnosticTraceObject(&KMPnPEvt_DriverLoad_Start, (unsigned __int16 *)&v37);
      if ( InitSafeBootMode )
      {
        if ( a2 )
        {
          v45 = 0;
          DestinationString = 0LL;
          RtlInitUnicodeString(&DestinationString, L"Group");
          memset(KeyValueInformation, 0, 0x4CuLL);
          if ( NtQueryValueKey(
                 KeyHandle,
                 &DestinationString,
                 KeyValuePartialInformation,
                 KeyValueInformation,
                 0x4Cu,
                 &v45) < 0
            || (DestinationString.Length = KeyValueInformation[4] - 2,
                DestinationString.MaximumLength = KeyValueInformation[4] - 2,
                DestinationString.Buffer = &KeyValueInformation[6],
                !(unsigned __int8)IopSafebootDriverLoad(&DestinationString)) )
          {
            if ( !(unsigned __int8)IopSafebootDriverLoad(&Destination) )
            {
              IopBootLog(&Destination);
              DbgPrint("SAFEBOOT: skipping device = %wZ(%wZ)\n", &Destination, &DestinationString);
              HeadlessKernelAddLogEntry();
              ObCloseHandle(KeyHandle, 0);
              return 3221226335LL;
            }
          }
        }
      }
      DriverNameFromKeyNode = IopBuildFullDriverPath(&v37, KeyHandle, &Destination);
      if ( DriverNameFromKeyNode >= 0 )
      {
        DriverNameFromKeyNode = IopGetDriverNameFromKeyNode(KeyHandle, &v40);
        if ( DriverNameFromKeyNode >= 0 )
        {
          v54[0] = 48;
          v55 = 0LL;
          v56 = &v40;
          v57 = IopCaseInsensitive != 0 ? 592 : 528;
          v59 = 0LL;
          ExAcquireResourceExclusiveLite(&IopDriverLoadResource, 1u);
          SystemImage = MmLoadSystemImage(
                          (unsigned int)&Destination,
                          0,
                          0,
                          0,
                          (__int64)&BugCheckParameter2,
                          (__int64)&BaseOfImage);
          DriverNameFromKeyNode = SystemImage;
          if ( SystemImage < 0 )
          {
            if ( SystemImage == -1073741554 )
              goto LABEL_53;
            if ( (unsigned __int8)IopCheckIfNotNativeDriver((unsigned int)SystemImage, &Destination) == 1 )
            {
              DriverNameFromKeyNode = ((_BYTE)v5 != 0) - 1073740949;
              IopLogBlockedDriverEvent(&Destination, v32, (unsigned int)DriverNameFromKeyNode);
            }
            if ( DriverNameFromKeyNode == -1073741554 )
            {
LABEL_53:
              DriverNameFromKeyNode = ObOpenObjectByName(
                                        (__int64)v54,
                                        (__int64)IoDriverObjectType,
                                        0,
                                        0LL,
                                        0,
                                        0LL,
                                        (__int64)&Handle);
              if ( DriverNameFromKeyNode < 0 )
              {
                ExReleaseResourceLite(&IopDriverLoadResource);
                IopBootLog(&Destination);
                if ( DriverNameFromKeyNode == -1073741772 )
                  DriverNameFromKeyNode = -1073740914;
                goto LABEL_35;
              }
              v47 = 0LL;
              DriverNameFromKeyNode = ObReferenceObjectByHandle(Handle, 0, IoDriverObjectType, 0, &v47, 0LL);
              ZwClose(Handle);
              if ( DriverNameFromKeyNode >= 0 )
              {
                DriverNameFromKeyNode = IopResurrectDriver((__int64)v47);
                HalPutDmaAdapter((PADAPTER_OBJECT)v47);
              }
            }
            ExReleaseResourceLite(&IopDriverLoadResource);
            IopBootLog(&Destination);
          }
          else
          {
            v14 = RtlImageNtHeader(BaseOfImage);
            *(_WORD *)v39 = v14->OptionalHeader.MinorImageVersion;
            *(_WORD *)&v39[2] = v14->OptionalHeader.MajorImageVersion;
            DriverNameFromKeyNode = PnpPrepareDriverLoading(&v37, KeyHandle, BaseOfImage, v5, &v42);
            if ( DriverNameFromKeyNode < 0
              || (LOBYTE(v15) = KeGetCurrentThread()->PreviousMode,
                  DriverNameFromKeyNode = ObCreateObject(v15, (int)IoDriverObjectType, (int)v54, 0),
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
              ReturnLength = 28;
              memset64(v16 + 14, (unsigned __int64)IopInvalidDeviceRequest, 0x1CuLL);
              *(_DWORD *)v16 = 22020100;
              v17 = RtlImageNtHeader(BaseOfImage);
              *(_WORD *)v39 = v17->OptionalHeader.MinorImageVersion;
              *(_WORD *)&v39[2] = v17->OptionalHeader.MajorImageVersion;
              v18 = (char *)BaseOfImage + v17->OptionalHeader.AddressOfEntryPoint;
              if ( (v17->OptionalHeader.DllCharacteristics & 0x2000) == 0 )
                *((_DWORD *)v16 + 4) |= 2u;
              v16[11] = v18;
              v16[5] = BugCheckParameter2;
              v16[3] = BaseOfImage;
              *((_DWORD *)v16 + 8) = v17->OptionalHeader.SizeOfImage;
              DriverNameFromKeyNode = ObInsertObject(v16, 0LL, 1u, 0, 0LL, &Handle);
              ExReleaseResourceLite(&IopDriverLoadResource);
              if ( DriverNameFromKeyNode >= 0 )
              {
                v19 = Handle;
                PreviousMode = KeGetCurrentThread()->PreviousMode;
                v48 = 0LL;
                v21 = ObReferenceObjectByHandle(Handle, 0, IoDriverObjectType, PreviousMode, &v48, 0LL);
                if ( v21 )
                  KeBugCheckEx(0x11Fu, (ULONG_PTR)v19, v21, (ULONG_PTR)v48, 0LL);
                ZwClose(v19);
                v22 = (char *)v48;
                *((_QWORD *)v48 + 9) = &CmRegistryMachineHardwareDescriptionSystemName;
                v23 = IopVerifierExAllocatePool_0(NonPagedPoolNx, v40.MaximumLength);
                *((_QWORD *)v22 + 8) = v23;
                if ( v23 )
                {
                  *((_WORD *)v22 + 29) = v40.MaximumLength;
                  *((_WORD *)v22 + 28) = v40.Length;
                  memmove(*((void **)v22 + 8), v40.Buffer, v40.MaximumLength);
                }
                v24 = IopVerifierExAllocatePool_0(NonPagedPoolNx, 0x1000uLL);
                if ( v24 )
                {
                  DriverNameFromKeyNode = NtQueryObject(KeyHandle, ObjectNameInformation, v24, 0x1000u, &ReturnLength);
                  if ( DriverNameFromKeyNode < 0 )
                  {
                    ObMakeTemporaryObject(v22);
                    HalPutDmaAdapter((PADAPTER_OBJECT)v22);
                    ExFreePoolWithTag(v24, 0);
                    v7 = v38;
                  }
                  else
                  {
                    v7 = v38;
                    if ( v38 )
                    {
                      v25 = WORD1(v37);
                      *(_QWORD *)(*((_QWORD *)v22 + 6) + 32LL) = IopVerifierExAllocatePool_0(NonPagedPoolNx, WORD1(v37));
                      v26 = *((_QWORD *)v22 + 6);
                      if ( *(_QWORD *)(v26 + 32) )
                      {
                        *(_WORD *)(v26 + 26) = v25;
                        *(_WORD *)(*((_QWORD *)v22 + 6) + 24LL) = v37;
                        memmove(*(void **)(*((_QWORD *)v22 + 6) + 32LL), v7, v25);
                      }
                    }
                    if ( (v42 & 1) != 0 )
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
                    *v53 = DriverNameFromKeyNode;
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
                  v7 = v38;
                  DriverNameFromKeyNode = -1073741670;
                }
                goto LABEL_35;
              }
            }
            IopBootLog(&Destination);
            v7 = v38;
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
    v51 = 0LL;
    if ( DriverNameFromKeyNode != -1073741554 )
    {
      PnpDriverLoadingFailed(KeyHandle);
      if ( DriverNameFromKeyNode != -1073740955 && IopGetRegistryValue(KeyHandle, L"ErrorControl", 0, &v51) >= 0 )
      {
        if ( *((_DWORD *)v51 + 3)
          && (_BYTE)CmFirstTime == 1
          && (unsigned int)(*(_DWORD *)((char *)v51 + *((unsigned int *)v51 + 2)) - 2) <= 1 )
        {
          if ( ((unsigned __int64)&Destination & -(__int64)(Destination.Buffer != 0LL)) != 0 )
            v33 = *(_QWORD *)(((unsigned __int64)&Destination & -(__int64)(Destination.Buffer != 0LL)) + 8);
          else
            v33 = 0LL;
          if ( ((unsigned __int64)&v40 & -(__int64)(v40.Buffer != 0LL)) != 0 )
            v4 = *(_QWORD *)(((unsigned __int64)&v40 & -(__int64)(v40.Buffer != 0LL)) + 8);
          KeBugCheckEx(0x5Au, 1uLL, v4, v33, DriverNameFromKeyNode);
        }
        ExFreePoolWithTag(v51, 0);
      }
    }
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v7 )
  {
    PnpDiagnosticTraceDriverFullInfo(
      &KMPnPEvt_DriverLoad_Stop,
      (unsigned __int16 *)&v37,
      DriverNameFromKeyNode,
      (__int64)&v40,
      v39[0]);
    ExFreePoolWithTag(v7, 0);
  }
  if ( v40.Buffer )
    ExFreePoolWithTag(v40.Buffer, 0);
  if ( Destination.Buffer )
    ExFreePoolWithTag(Destination.Buffer, 0);
  ObCloseHandle(KeyHandle, 0);
  return (unsigned int)DriverNameFromKeyNode;
}
