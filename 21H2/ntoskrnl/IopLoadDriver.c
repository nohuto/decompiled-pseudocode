/*
 * XREFs of IopLoadDriver @ 0x140740A28
 * Callers:
 *     PipCallDriverAddDeviceQueryRoutine @ 0x1407426D8 (PipCallDriverAddDeviceQueryRoutine.c)
 *     IopLoadUnloadDriver @ 0x1407809E0 (IopLoadUnloadDriver.c)
 *     IopInitializeSystemDrivers @ 0x140A5E754 (IopInitializeSystemDrivers.c)
 * Callees:
 *     IopVerifierExAllocatePool @ 0x1402336E0 (IopVerifierExAllocatePool.c)
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     RtlAppendUnicodeToString @ 0x1402539E0 (RtlAppendUnicodeToString.c)
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     DbgPrint @ 0x140272780 (DbgPrint.c)
 *     RtlImageNtHeader @ 0x1403276A0 (RtlImageNtHeader.c)
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1403568F0 (ExAcquireResourceExclusiveLite.c)
 *     PnpDiagnosticTraceObject @ 0x140364E1C (PnpDiagnosticTraceObject.c)
 *     PnpDiagnosticTraceObjectWithStatus @ 0x140364F94 (PnpDiagnosticTraceObjectWithStatus.c)
 *     HeadlessKernelAddLogEntry @ 0x14036F7C0 (HeadlessKernelAddLogEntry.c)
 *     PnpDiagnosticTraceDriverFullInfo @ 0x14037BD08 (PnpDiagnosticTraceDriverFullInfo.c)
 *     VfDifCaptureIoCallbacks @ 0x14037DA90 (VfDifCaptureIoCallbacks.c)
 *     VfDifCaptureDriverEntry @ 0x14037DAB4 (VfDifCaptureDriverEntry.c)
 *     IopResurrectDriver @ 0x1403A7380 (IopResurrectDriver.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     ObMakeTemporaryObject @ 0x14061C330 (ObMakeTemporaryObject.c)
 *     ObOpenObjectByName @ 0x14064AA70 (ObOpenObjectByName.c)
 *     ObCloseHandle @ 0x1406847E0 (ObCloseHandle.c)
 *     MmReleaseLoadLock @ 0x1406A83F0 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1406A8450 (MmAcquireLoadLock.c)
 *     ObInsertObject @ 0x1406AB4A0 (ObInsertObject.c)
 *     ObCreateObject @ 0x1406ABDC0 (ObCreateObject.c)
 *     NtQueryObject @ 0x1406C6FA0 (NtQueryObject.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
 *     NtQueryValueKey @ 0x14070EEC0 (NtQueryValueKey.c)
 *     NtQueryKey @ 0x14070F950 (NtQueryKey.c)
 *     PnpPrepareDriverLoading @ 0x14073DBBC (PnpPrepareDriverLoading.c)
 *     IopBuildFullDriverPath @ 0x1407404C8 (IopBuildFullDriverPath.c)
 *     IopGetDriverNameFromKeyNode @ 0x140742AC0 (IopGetDriverNameFromKeyNode.c)
 *     IopGetRegistryValue @ 0x140742C58 (IopGetRegistryValue.c)
 *     KseShimDriverIoCallbacks @ 0x1407586E4 (KseShimDriverIoCallbacks.c)
 *     MmLoadSystemImage @ 0x14075BC80 (MmLoadSystemImage.c)
 *     MiFreeDriverInitialization @ 0x14075ED74 (MiFreeDriverInitialization.c)
 *     PnpCallDriverEntry @ 0x140770584 (PnpCallDriverEntry.c)
 *     IopReadyDeviceObjects @ 0x14077171C (IopReadyDeviceObjects.c)
 *     IopBootLog @ 0x140771BE0 (IopBootLog.c)
 *     MmUnloadSystemImage @ 0x140772310 (MmUnloadSystemImage.c)
 *     EtwTiLogDriverObjectLoad @ 0x140772380 (EtwTiLogDriverObjectLoad.c)
 *     PnpDriverLoadingFailed @ 0x1407D2DC0 (PnpDriverLoadingFailed.c)
 *     IopCheckIfNotNativeDriver @ 0x140891450 (IopCheckIfNotNativeDriver.c)
 *     IopLogBlockedDriverEvent @ 0x140891C8C (IopLogBlockedDriverEvent.c)
 *     IopSafebootDriverLoad @ 0x140892084 (IopSafebootDriverLoad.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
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
  unsigned int MaximumLength; // ebx
  __int64 v26; // rax
  __int64 v27; // rdx
  unsigned int i; // eax
  __int64 v29; // rdi
  struct _KTHREAD *Lock; // rbx
  __int64 v32; // rdx
  int RegistryValue; // eax
  ULONG_PTR v34; // r9
  UNICODE_STRING Destination; // [rsp+58h] [rbp-A8h] BYREF
  ULONG Length; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING v38; // [rsp+70h] [rbp-90h] BYREF
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
  PVOID v51; // [rsp+E8h] [rbp-18h]
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
  Buffer = 0LL;
  *(_QWORD *)&v38.Length = 0LL;
  v38.Buffer = 0LL;
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
    v38.Buffer = Pool;
    Buffer = Pool;
    if ( Pool )
    {
      v38.Length = Destination.Length;
      v38.MaximumLength = Destination.Length + 2;
      memmove(Pool, Destination.Buffer, Destination.Length);
      Buffer[(unsigned __int64)Destination.Length >> 1] = 0;
      RtlAppendUnicodeToString(&Destination, L".SYS");
      HeadlessKernelAddLogEntry();
      PnpDiagnosticTraceObject(&KMPnPEvt_DriverLoad_Start, &v38.Length);
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
      DriverNameFromKeyNode = IopBuildFullDriverPath(&v38, KeyHandle, &Destination);
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
            DriverNameFromKeyNode = PnpPrepareDriverLoading((int)&v38, KeyHandle, BaseOfImage, v5, &v42);
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
                v23 = IopVerifierExAllocatePool(NonPagedPoolNx, v40.MaximumLength);
                *((_QWORD *)v22 + 8) = v23;
                if ( v23 )
                {
                  *((_WORD *)v22 + 29) = v40.MaximumLength;
                  *((_WORD *)v22 + 28) = v40.Length;
                  memmove(*((void **)v22 + 8), v40.Buffer, v40.MaximumLength);
                }
                v24 = IopVerifierExAllocatePool(NonPagedPoolNx, 0x1000uLL);
                if ( v24 )
                {
                  DriverNameFromKeyNode = NtQueryObject(KeyHandle, ObjectNameInformation, v24, 0x1000u, &ReturnLength);
                  if ( DriverNameFromKeyNode < 0 )
                  {
                    ObMakeTemporaryObject(v22);
                    HalPutDmaAdapter((PADAPTER_OBJECT)v22);
                    ExFreePoolWithTag(v24, 0);
                    Buffer = v38.Buffer;
                  }
                  else
                  {
                    Buffer = v38.Buffer;
                    if ( v38.Buffer )
                    {
                      MaximumLength = v38.MaximumLength;
                      *(_QWORD *)(*((_QWORD *)v22 + 6) + 32LL) = IopVerifierExAllocatePool(
                                                                   NonPagedPoolNx,
                                                                   v38.MaximumLength);
                      v26 = *((_QWORD *)v22 + 6);
                      if ( *(_QWORD *)(v26 + 32) )
                      {
                        *(_WORD *)(v26 + 26) = MaximumLength;
                        *(_WORD *)(*((_QWORD *)v22 + 6) + 24LL) = v38.Length;
                        memmove(*(void **)(*((_QWORD *)v22 + 6) + 32LL), Buffer, MaximumLength);
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
                  Buffer = v38.Buffer;
                  DriverNameFromKeyNode = -1073741670;
                }
                goto LABEL_35;
              }
            }
            IopBootLog(&Destination);
            Buffer = v38.Buffer;
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
      if ( DriverNameFromKeyNode != -1073740955 )
      {
        RegistryValue = IopGetRegistryValue(KeyHandle);
        if ( RegistryValue >= 0 )
        {
          if ( *((_DWORD *)v51 + 3)
            && (_BYTE)CmFirstTime == 1
            && (unsigned int)(*(_DWORD *)((char *)v51 + *((unsigned int *)v51 + 2)) - 2) <= 1 )
          {
            if ( ((unsigned __int64)&Destination & -(__int64)(Destination.Buffer != 0LL)) != 0 )
              v34 = *(_QWORD *)(((unsigned __int64)&Destination & -(__int64)(Destination.Buffer != 0LL)) + 8);
            else
              v34 = 0LL;
            if ( ((unsigned __int64)&v40 & -(__int64)(v40.Buffer != 0LL)) != 0 )
              v4 = *(_QWORD *)(((unsigned __int64)&v40 & -(__int64)(v40.Buffer != 0LL)) + 8);
            KeBugCheckEx(0x5Au, 1uLL, v4, v34, DriverNameFromKeyNode);
          }
          ExFreePoolWithTag(v51, 0);
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
      &v38.Length,
      DriverNameFromKeyNode,
      (__int64)&v40,
      v39[0]);
    ExFreePoolWithTag(Buffer, 0);
  }
  if ( v40.Buffer )
    ExFreePoolWithTag(v40.Buffer, 0);
  if ( Destination.Buffer )
    ExFreePoolWithTag(Destination.Buffer, 0);
  ObCloseHandle(KeyHandle, 0);
  return (unsigned int)DriverNameFromKeyNode;
}
