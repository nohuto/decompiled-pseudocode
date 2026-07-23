/*
 * XREFs of IopLoadDriver @ 0x140725EF8
 * Callers:
 *     PipCallDriverAddDeviceQueryRoutine @ 0x140727BA8 (PipCallDriverAddDeviceQueryRoutine.c)
 *     IopLoadUnloadDriver @ 0x14076B870 (IopLoadUnloadDriver.c)
 *     IopInitializeSystemDrivers @ 0x140A567E8 (IopInitializeSystemDrivers.c)
 * Callees:
 *     IopVerifierExAllocatePool @ 0x1402033E4 (IopVerifierExAllocatePool.c)
 *     RtlInitUnicodeString @ 0x140206450 (RtlInitUnicodeString.c)
 *     RtlAppendUnicodeToString @ 0x14025BA90 (RtlAppendUnicodeToString.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140261C10 (ExAcquireResourceExclusiveLite.c)
 *     RtlImageNtHeader @ 0x14027DAE0 (RtlImageNtHeader.c)
 *     DbgPrint @ 0x14033C6D0 (DbgPrint.c)
 *     PnpDiagnosticTraceObject @ 0x14036206C (PnpDiagnosticTraceObject.c)
 *     PnpDiagnosticTraceObjectWithStatus @ 0x1403621E4 (PnpDiagnosticTraceObjectWithStatus.c)
 *     HeadlessKernelAddLogEntry @ 0x14036AF8C (HeadlessKernelAddLogEntry.c)
 *     PnpDiagnosticTraceDriverFullInfo @ 0x140379478 (PnpDiagnosticTraceDriverFullInfo.c)
 *     VfDifCaptureIoCallbacks @ 0x14037B100 (VfDifCaptureIoCallbacks.c)
 *     VfDifCaptureDriverEntry @ 0x14037B124 (VfDifCaptureDriverEntry.c)
 *     IopResurrectDriver @ 0x1403A3DF0 (IopResurrectDriver.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     memset @ 0x140408F80 (memset.c)
 *     NtQueryObject @ 0x1405D95E0 (NtQueryObject.c)
 *     ObOpenObjectByName @ 0x1405EB090 (ObOpenObjectByName.c)
 *     NtQueryKey @ 0x1405EBF30 (NtQueryKey.c)
 *     NtQueryValueKey @ 0x1405EC5D0 (NtQueryValueKey.c)
 *     ObReferenceObjectByHandle @ 0x14062B200 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x140637550 (ObCloseHandle.c)
 *     ObInsertObject @ 0x140642820 (ObInsertObject.c)
 *     ObCreateObject @ 0x140643F10 (ObCreateObject.c)
 *     MmReleaseLoadLock @ 0x1406EF8C0 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1406EF920 (MmAcquireLoadLock.c)
 *     ObMakeTemporaryObject @ 0x140704430 (ObMakeTemporaryObject.c)
 *     PnpPrepareDriverLoading @ 0x14072311C (PnpPrepareDriverLoading.c)
 *     IopBuildFullDriverPath @ 0x140725998 (IopBuildFullDriverPath.c)
 *     IopGetDriverNameFromKeyNode @ 0x140727F90 (IopGetDriverNameFromKeyNode.c)
 *     IopGetRegistryValue @ 0x140728128 (IopGetRegistryValue.c)
 *     KseShimDriverIoCallbacks @ 0x140740FF4 (KseShimDriverIoCallbacks.c)
 *     MmLoadSystemImage @ 0x140744480 (MmLoadSystemImage.c)
 *     MiFreeDriverInitialization @ 0x140747594 (MiFreeDriverInitialization.c)
 *     PnpCallDriverEntry @ 0x14075B558 (PnpCallDriverEntry.c)
 *     IopReadyDeviceObjects @ 0x14075C77C (IopReadyDeviceObjects.c)
 *     IopBootLog @ 0x14075CC40 (IopBootLog.c)
 *     MmUnloadSystemImage @ 0x14075D670 (MmUnloadSystemImage.c)
 *     EtwTiLogDriverObjectLoad @ 0x14075D6E0 (EtwTiLogDriverObjectLoad.c)
 *     PnpDriverLoadingFailed @ 0x1407BCE60 (PnpDriverLoadingFailed.c)
 *     IopCheckIfNotNativeDriver @ 0x14088CEB0 (IopCheckIfNotNativeDriver.c)
 *     IopLogBlockedDriverEvent @ 0x14088D784 (IopLogBlockedDriverEvent.c)
 *     IopSafebootDriverLoad @ 0x14088DB84 (IopSafebootDriverLoad.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopLoadDriver(HANDLE KeyHandle, char a2, unsigned __int8 a3, int *a4)
{
  ULONG_PTR v4; // rsi
  int v5; // ebx
  wchar_t *Buffer; // r12
  NTSTATUS v8; // eax
  unsigned __int16 *v9; // rdi
  int DriverNameFromKeyNode; // r14d
  __int64 v11; // rcx
  wchar_t *Pool; // rax
  int SystemImage; // eax
  PIMAGE_NT_HEADERS v14; // rax
  _QWORD *v15; // rbx
  PIMAGE_NT_HEADERS v16; // rdx
  char *v17; // rax
  HANDLE v18; // rdi
  KPROCESSOR_MODE PreviousMode; // r9
  NTSTATUS v20; // eax
  char *v21; // r15
  PVOID v22; // rax
  PVOID v23; // rdi
  unsigned int MaximumLength; // ebx
  __int64 v25; // rax
  __int64 v26; // rdx
  unsigned int i; // eax
  __int64 v28; // rdi
  struct _KTHREAD *Lock; // rbx
  __int64 v31; // rdx
  int RegistryValue; // eax
  ULONG_PTR v33; // r9
  UNICODE_STRING Destination; // [rsp+58h] [rbp-A8h] BYREF
  ULONG Length; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING v37; // [rsp+70h] [rbp-90h] BYREF
  char v38[4]; // [rsp+80h] [rbp-80h]
  UNICODE_STRING v39; // [rsp+88h] [rbp-78h] BYREF
  PVOID BaseOfImage; // [rsp+98h] [rbp-68h] BYREF
  int v41; // [rsp+A0h] [rbp-60h] BYREF
  HANDLE Handle; // [rsp+A8h] [rbp-58h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+B0h] [rbp-50h] BYREF
  ULONG v44; // [rsp+B8h] [rbp-48h] BYREF
  ULONG ReturnLength; // [rsp+BCh] [rbp-44h] BYREF
  PVOID v46; // [rsp+C0h] [rbp-40h] BYREF
  PVOID v47; // [rsp+C8h] [rbp-38h] BYREF
  UNICODE_STRING DestinationString; // [rsp+D0h] [rbp-30h] BYREF
  PVOID Object; // [rsp+E0h] [rbp-20h] BYREF
  PVOID v50; // [rsp+E8h] [rbp-18h]
  PVOID P; // [rsp+F0h] [rbp-10h]
  int *v52; // [rsp+F8h] [rbp-8h]
  _DWORD v53[2]; // [rsp+100h] [rbp+0h] BYREF
  __int64 v54; // [rsp+108h] [rbp+8h]
  UNICODE_STRING *v55; // [rsp+110h] [rbp+10h]
  int v56; // [rsp+118h] [rbp+18h]
  int v57; // [rsp+11Ch] [rbp+1Ch]
  __int128 v58; // [rsp+120h] [rbp+20h]
  _WORD KeyValueInformation[40]; // [rsp+130h] [rbp+30h] BYREF

  v4 = 0LL;
  v52 = a4;
  *a4 = 0;
  v5 = a3;
  P = 0LL;
  Length = 0;
  *(_QWORD *)&Destination.Length = 0LL;
  Buffer = 0LL;
  *(_QWORD *)&v37.Length = 0LL;
  v37.Buffer = 0LL;
  v53[1] = 0;
  v57 = 0;
  BugCheckParameter2 = 0LL;
  *(_QWORD *)&v39.Length = 0LL;
  Object = 0LL;
  BaseOfImage = 0LL;
  *(_DWORD *)v38 = 0;
  Handle = 0LL;
  v39.Buffer = 0LL;
  Destination.Buffer = 0LL;
  v41 = 0;
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
  P = IopVerifierExAllocatePool(NonPagedPoolNx, Length + 8);
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
    Pool = (wchar_t *)IopVerifierExAllocatePool(PagedPool, v11 + 2);
    v37.Buffer = Pool;
    Buffer = Pool;
    if ( Pool )
    {
      v37.Length = Destination.Length;
      v37.MaximumLength = Destination.Length + 2;
      memmove(Pool, Destination.Buffer, Destination.Length);
      Buffer[(unsigned __int64)Destination.Length >> 1] = 0;
      RtlAppendUnicodeToString(&Destination, L".SYS");
      HeadlessKernelAddLogEntry();
      PnpDiagnosticTraceObject(&KMPnPEvt_DriverLoad_Start, &v37.Length);
      if ( InitSafeBootMode )
      {
        if ( a2 )
        {
          v44 = 0;
          DestinationString = 0LL;
          RtlInitUnicodeString(&DestinationString, L"Group");
          memset(KeyValueInformation, 0, 0x4CuLL);
          if ( NtQueryValueKey(
                 KeyHandle,
                 &DestinationString,
                 KeyValuePartialInformation,
                 KeyValueInformation,
                 0x4Cu,
                 &v44) < 0
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
        DriverNameFromKeyNode = IopGetDriverNameFromKeyNode(KeyHandle, &v39);
        if ( DriverNameFromKeyNode >= 0 )
        {
          v53[0] = 48;
          v54 = 0LL;
          v55 = &v39;
          v56 = IopCaseInsensitive != 0 ? 592 : 528;
          v58 = 0LL;
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
              IopLogBlockedDriverEvent(&Destination, v31, (unsigned int)DriverNameFromKeyNode);
            }
            if ( DriverNameFromKeyNode == -1073741554 )
            {
LABEL_53:
              DriverNameFromKeyNode = ObOpenObjectByName(
                                        (__int64)v53,
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
              v46 = 0LL;
              DriverNameFromKeyNode = ObReferenceObjectByHandle(Handle, 0, IoDriverObjectType, 0, &v46, 0LL);
              ZwClose(Handle);
              if ( DriverNameFromKeyNode >= 0 )
              {
                DriverNameFromKeyNode = IopResurrectDriver((__int64)v46);
                HalPutDmaAdapter((PADAPTER_OBJECT)v46);
              }
            }
            ExReleaseResourceLite(&IopDriverLoadResource);
            IopBootLog(&Destination);
          }
          else
          {
            v14 = RtlImageNtHeader(BaseOfImage);
            *(_WORD *)v38 = v14->OptionalHeader.MinorImageVersion;
            *(_WORD *)&v38[2] = v14->OptionalHeader.MajorImageVersion;
            DriverNameFromKeyNode = PnpPrepareDriverLoading((int)&v37, KeyHandle, BaseOfImage, v5, &v41);
            if ( DriverNameFromKeyNode < 0
              || (DriverNameFromKeyNode = ObCreateObject(
                                            KeGetCurrentThread()->PreviousMode,
                                            IoDriverObjectType,
                                            (__int64)v53,
                                            0,
                                            0,
                                            416,
                                            0,
                                            0,
                                            &Object),
                  DriverNameFromKeyNode < 0) )
            {
              MmUnloadSystemImage(BugCheckParameter2);
              ExReleaseResourceLite(&IopDriverLoadResource);
            }
            else
            {
              v15 = Object;
              memset(Object, 0, 0x1A0uLL);
              v15[6] = v15 + 42;
              v15[42] = v15;
              ReturnLength = 28;
              memset64(v15 + 14, (unsigned __int64)IopInvalidDeviceRequest, 0x1CuLL);
              *(_DWORD *)v15 = 22020100;
              v16 = RtlImageNtHeader(BaseOfImage);
              *(_WORD *)v38 = v16->OptionalHeader.MinorImageVersion;
              *(_WORD *)&v38[2] = v16->OptionalHeader.MajorImageVersion;
              v17 = (char *)BaseOfImage + v16->OptionalHeader.AddressOfEntryPoint;
              if ( (v16->OptionalHeader.DllCharacteristics & 0x2000) == 0 )
                *((_DWORD *)v15 + 4) |= 2u;
              v15[11] = v17;
              v15[5] = BugCheckParameter2;
              v15[3] = BaseOfImage;
              *((_DWORD *)v15 + 8) = v16->OptionalHeader.SizeOfImage;
              DriverNameFromKeyNode = ObInsertObject(v15, 0LL, 1u, 0, 0LL, &Handle);
              ExReleaseResourceLite(&IopDriverLoadResource);
              if ( DriverNameFromKeyNode >= 0 )
              {
                v18 = Handle;
                PreviousMode = KeGetCurrentThread()->PreviousMode;
                v47 = 0LL;
                v20 = ObReferenceObjectByHandle(Handle, 0, IoDriverObjectType, PreviousMode, &v47, 0LL);
                if ( v20 )
                  KeBugCheckEx(0x11Fu, (ULONG_PTR)v18, v20, (ULONG_PTR)v47, 0LL);
                ZwClose(v18);
                v21 = (char *)v47;
                *((_QWORD *)v47 + 9) = &CmRegistryMachineHardwareDescriptionSystemName;
                v22 = IopVerifierExAllocatePool(NonPagedPoolNx, v39.MaximumLength);
                *((_QWORD *)v21 + 8) = v22;
                if ( v22 )
                {
                  *((_WORD *)v21 + 29) = v39.MaximumLength;
                  *((_WORD *)v21 + 28) = v39.Length;
                  memmove(*((void **)v21 + 8), v39.Buffer, v39.MaximumLength);
                }
                v23 = IopVerifierExAllocatePool(NonPagedPoolNx, 0x1000uLL);
                if ( v23 )
                {
                  DriverNameFromKeyNode = NtQueryObject(KeyHandle, ObjectNameInformation, v23, 0x1000u, &ReturnLength);
                  if ( DriverNameFromKeyNode < 0 )
                  {
                    ObMakeTemporaryObject(v21);
                    HalPutDmaAdapter((PADAPTER_OBJECT)v21);
                    ExFreePoolWithTag(v23, 0);
                    Buffer = v37.Buffer;
                  }
                  else
                  {
                    Buffer = v37.Buffer;
                    if ( v37.Buffer )
                    {
                      MaximumLength = v37.MaximumLength;
                      *(_QWORD *)(*((_QWORD *)v21 + 6) + 32LL) = IopVerifierExAllocatePool(
                                                                   NonPagedPoolNx,
                                                                   v37.MaximumLength);
                      v25 = *((_QWORD *)v21 + 6);
                      if ( *(_QWORD *)(v25 + 32) )
                      {
                        *(_WORD *)(v25 + 26) = MaximumLength;
                        *(_WORD *)(*((_QWORD *)v21 + 6) + 24LL) = v37.Length;
                        memmove(*(void **)(*((_QWORD *)v21 + 6) + 32LL), Buffer, MaximumLength);
                      }
                    }
                    if ( (v41 & 1) != 0 )
                      *((_DWORD *)v21 + 4) |= 0x100u;
                    PnpDiagnosticTraceObject(&KMPnPEvt_DriverInit_Start, (unsigned __int16 *)v23);
                    VfDifCaptureDriverEntry((__int64)v21);
                    DriverNameFromKeyNode = PnpCallDriverEntry(v21, v23);
                    if ( DriverNameFromKeyNode >= 0 )
                    {
                      VfDifCaptureIoCallbacks((__int64)v21);
                      KseShimDriverIoCallbacks(v21, v26, &Destination);
                    }
                    PnpDiagnosticTraceObjectWithStatus(
                      &KMPnPEvt_DriverInit_Stop,
                      (unsigned __int16 *)v23,
                      DriverNameFromKeyNode);
                    *v52 = DriverNameFromKeyNode;
                    if ( DriverNameFromKeyNode < 0 )
                      DriverNameFromKeyNode = -1073740955;
                    for ( i = 0; i <= 0x1B; ++i )
                    {
                      if ( !*(_QWORD *)&v21[8 * i + 112] )
                        *(_QWORD *)&v21[8 * i + 112] = IopInvalidDeviceRequest;
                    }
                    ExFreePoolWithTag(v23, 0);
                    if ( DriverNameFromKeyNode < 0 )
                    {
                      ObMakeTemporaryObject(v21);
                      HalPutDmaAdapter((PADAPTER_OBJECT)v21);
                    }
                    else
                    {
                      IopBootLog(&Destination);
                      v28 = *((_QWORD *)v21 + 5);
                      Lock = MmAcquireLoadLock();
                      MiFreeDriverInitialization(v28);
                      MmReleaseLoadLock((__int64)Lock);
                      IopReadyDeviceObjects(v21);
                      EtwTiLogDriverObjectLoad(v21 + 56);
                    }
                  }
                }
                else
                {
                  ObMakeTemporaryObject(v21);
                  HalPutDmaAdapter((PADAPTER_OBJECT)v21);
                  Buffer = v37.Buffer;
                  DriverNameFromKeyNode = -1073741670;
                }
                goto LABEL_35;
              }
            }
            IopBootLog(&Destination);
            Buffer = v37.Buffer;
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
    v50 = 0LL;
    if ( DriverNameFromKeyNode != -1073741554 )
    {
      PnpDriverLoadingFailed(KeyHandle);
      if ( DriverNameFromKeyNode != -1073740955 )
      {
        RegistryValue = IopGetRegistryValue(KeyHandle);
        if ( RegistryValue >= 0 )
        {
          if ( *((_DWORD *)v50 + 3)
            && (_BYTE)CmFirstTime == 1
            && (unsigned int)(*(_DWORD *)((char *)v50 + *((unsigned int *)v50 + 2)) - 2) <= 1 )
          {
            if ( ((unsigned __int64)&Destination & -(__int64)(Destination.Buffer != 0LL)) != 0 )
              v33 = *(_QWORD *)(((unsigned __int64)&Destination & -(__int64)(Destination.Buffer != 0LL)) + 8);
            else
              v33 = 0LL;
            if ( ((unsigned __int64)&v39 & -(__int64)(v39.Buffer != 0LL)) != 0 )
              v4 = *(_QWORD *)(((unsigned __int64)&v39 & -(__int64)(v39.Buffer != 0LL)) + 8);
            KeBugCheckEx(0x5Au, 1uLL, v4, v33, DriverNameFromKeyNode);
          }
          ExFreePoolWithTag(v50, 0);
        }
      }
    }
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( Buffer )
  {
    PnpDiagnosticTraceDriverFullInfo(
      &KMPnPEvt_DriverLoad_Stop,
      &v37.Length,
      DriverNameFromKeyNode,
      (__int64)&v39,
      v38[0]);
    ExFreePoolWithTag(Buffer, 0);
  }
  if ( v39.Buffer )
    ExFreePoolWithTag(v39.Buffer, 0);
  if ( Destination.Buffer )
    ExFreePoolWithTag(Destination.Buffer, 0);
  ObCloseHandle(KeyHandle, 0);
  return (unsigned int)DriverNameFromKeyNode;
}
