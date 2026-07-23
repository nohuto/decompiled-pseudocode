/*
 * XREFs of IopUnloadDriver @ 0x140769958
 * Callers:
 *     PnpUnloadAttachedDriver @ 0x14073E7C8 (PnpUnloadAttachedDriver.c)
 *     NtUnloadDriver @ 0x14089B3E0 (NtUnloadDriver.c)
 *     PipUnloadEarlyLaunchDrivers @ 0x140A738A8 (PipUnloadEarlyLaunchDrivers.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     DbgPrint @ 0x140272780 (DbgPrint.c)
 *     ExQueueWorkItem @ 0x1402E2FA0 (ExQueueWorkItem.c)
 *     RtlImageNtHeader @ 0x1403276A0 (RtlImageNtHeader.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     PsIsCurrentThreadInServerSilo @ 0x14035BF80 (PsIsCurrentThreadInServerSilo.c)
 *     KeInitializeEvent @ 0x14035E640 (KeInitializeEvent.c)
 *     PnpDiagnosticTraceObject @ 0x140364E1C (PnpDiagnosticTraceObject.c)
 *     PnpDiagnosticTraceDriverFullInfo @ 0x14037BD08 (PnpDiagnosticTraceDriverFullInfo.c)
 *     IopCleanupNotifications @ 0x14037BFA8 (IopCleanupNotifications.c)
 *     IopCheckUnloadDriver @ 0x14037C03C (IopCheckUnloadDriver.c)
 *     IopVerifierExAllocatePoolWithQuota_2 @ 0x1403CB09C (IopVerifierExAllocatePoolWithQuota_2.c)
 *     ZwUnloadDriver @ 0x1403FDE80 (ZwUnloadDriver.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     ObMakeTemporaryObject @ 0x14061C330 (ObMakeTemporaryObject.c)
 *     ObOpenObjectByName @ 0x14064AA70 (ObOpenObjectByName.c)
 *     ObCloseHandle @ 0x1406847E0 (ObCloseHandle.c)
 *     SeSinglePrivilegeCheck @ 0x140693750 (SeSinglePrivilegeCheck.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
 *     PnpIsLegacyDriver @ 0x1407404AC (PnpIsLegacyDriver.c)
 *     IopGetDriverNameFromKeyNode @ 0x140742AC0 (IopGetDriverNameFromKeyNode.c)
 *     EtwTiLogDriverObjectUnLoad @ 0x140769BFC (EtwTiLogDriverObjectUnLoad.c)
 *     IopOpenRegistryKey @ 0x140769C64 (IopOpenRegistryKey.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BFB0 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopUnloadDriver(unsigned __int16 *a1, char a2)
{
  unsigned __int16 MinorImageVersion; // r14
  KPROCESSOR_MODE PreviousMode; // dl
  __int64 v6; // rdx
  __int64 v7; // rcx
  int DriverNameFromKeyNode; // edi
  struct _DMA_ADAPTER *v9; // rbx
  _DMA_OPERATIONS *DmaOperations; // rax
  __int64 v12; // rax
  int v13; // edx
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  PVOID PoolWithQuota_2; // rdi
  unsigned int v17; // ebx
  struct _DMA_ADAPTER *v18; // rcx
  HANDLE Handle; // [rsp+40h] [rbp-E8h] BYREF
  HANDLE v20; // [rsp+48h] [rbp-E0h] BYREF
  void *Src[2]; // [rsp+50h] [rbp-D8h] BYREF
  UNICODE_STRING Destination; // [rsp+60h] [rbp-C8h] BYREF
  PVOID v23; // [rsp+70h] [rbp-B8h]
  _DWORD v24[2]; // [rsp+78h] [rbp-B0h] BYREF
  __int64 v25; // [rsp+80h] [rbp-A8h]
  UNICODE_STRING *p_Destination; // [rsp+88h] [rbp-A0h]
  int v27; // [rsp+90h] [rbp-98h]
  int v28; // [rsp+94h] [rbp-94h]
  __int128 v29; // [rsp+98h] [rbp-90h]
  struct _WORK_QUEUE_ITEM WorkItem[3]; // [rsp+B0h] [rbp-78h] BYREF
  char v31; // [rsp+140h] [rbp+18h] BYREF
  PVOID Object; // [rsp+148h] [rbp+20h] BYREF

  *(_OWORD *)Src = 0LL;
  v23 = 0LL;
  v24[1] = 0;
  v28 = 0;
  Handle = 0LL;
  *(_DWORD *)(&Destination.MaximumLength + 1) = 0;
  v20 = 0LL;
  v31 = 0;
  LOBYTE(MinorImageVersion) = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !PreviousMode || a2 )
  {
    PnpDiagnosticTraceObject(&KMPnPEvt_DriverUnload_Start, a1);
    Destination.Buffer = 0LL;
    *(_DWORD *)&Destination.Length = 0;
    if ( PsIsCurrentThreadInServerSilo(v7, v6) )
    {
      DbgPrint("Server Silo attempting to unload driver %wZ\n", a1);
      return 3221225569LL;
    }
    DriverNameFromKeyNode = IopOpenRegistryKey(&Handle, 0LL, a1, 131097LL, 0);
    if ( DriverNameFromKeyNode >= 0 )
    {
      DriverNameFromKeyNode = IopGetDriverNameFromKeyNode(Handle, &Destination);
      ObCloseHandle(Handle, 0);
      if ( DriverNameFromKeyNode >= 0 )
      {
        v24[0] = 48;
        v25 = 0LL;
        v27 = 576;
        p_Destination = &Destination;
        v29 = 0LL;
        DriverNameFromKeyNode = ObOpenObjectByName(
                                  (__int64)v24,
                                  (__int64)IoDriverObjectType,
                                  0,
                                  0LL,
                                  1,
                                  0LL,
                                  (__int64)&v20);
        if ( DriverNameFromKeyNode >= 0 )
        {
          Object = 0LL;
          DriverNameFromKeyNode = ObReferenceObjectByHandle(v20, 0, IoDriverObjectType, 0, &Object, 0LL);
          ObCloseHandle(v20, 0);
          if ( DriverNameFromKeyNode >= 0 )
          {
            v9 = (struct _DMA_ADAPTER *)Object;
            MinorImageVersion = RtlImageNtHeader(*((PVOID *)Object + 3))->OptionalHeader.MinorImageVersion;
            if ( v9[6].DmaOperations && v9[2].DmaOperations )
            {
              if ( a2 || PnpIsLegacyDriver((__int64)v9) )
              {
                DriverNameFromKeyNode = IopCheckUnloadDriver(v9, &v31);
                if ( (int)(DriverNameFromKeyNode + 0x80000000) >= 0 && DriverNameFromKeyNode != -1073741808 )
                {
                  if ( v31 )
                  {
                    if ( KeGetCurrentThread()->ApcState.Process == PsInitialSystemProcess )
                    {
                      DmaOperations = v9[6].DmaOperations;
                      v9 = (struct _DMA_ADAPTER *)Object;
                      ((void (__fastcall *)(PVOID))DmaOperations)(Object);
                      EtwTiLogDriverObjectUnLoad(&v9[3].DmaOperations);
                    }
                    else
                    {
                      memset(WorkItem, 0, 0x50uLL);
                      KeInitializeEvent((PRKEVENT)&WorkItem[1], NotificationEvent, 0);
                      v9 = (struct _DMA_ADAPTER *)Object;
                      WorkItem[1].Parameter = Object;
                      WorkItem[0].WorkerRoutine = (void (__fastcall *)(void *))IopLoadUnloadDriver;
                      WorkItem[0].Parameter = WorkItem;
                      WorkItem[0].List.Flink = 0LL;
                      ExQueueWorkItem(WorkItem, DelayedWorkQueue);
                      KeWaitForSingleObject(&WorkItem[1], Executive, 0, 0, 0LL);
                    }
                    IopCleanupNotifications(v9, v9);
                    ObMakeTemporaryObject(v9);
                    HalPutDmaAdapter(v9);
                  }
                  HalPutDmaAdapter(v9);
                  DriverNameFromKeyNode = 0;
                }
                goto LABEL_17;
              }
            }
            else
            {
              v18 = v9;
            }
            HalPutDmaAdapter(v18);
            DriverNameFromKeyNode = -1073741808;
          }
        }
      }
    }
LABEL_17:
    PnpDiagnosticTraceDriverFullInfo(
      &KMPnPEvt_DriverUnload_Stop,
      a1,
      DriverNameFromKeyNode,
      (__int64)&Destination,
      MinorImageVersion);
    if ( Destination.Buffer )
      ExFreePoolWithTag(Destination.Buffer, 0);
    return (unsigned int)DriverNameFromKeyNode;
  }
  if ( !SeSinglePrivilegeCheck(SeLoadDriverPrivilege, PreviousMode) )
    return 3221225569LL;
  v12 = 0x7FFFFFFF0000LL;
  if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
    v12 = (__int64)a1;
  v13 = *(_DWORD *)v12;
  LODWORD(Src[0]) = v13;
  v14 = *(_QWORD *)(v12 + 8);
  Src[1] = (void *)v14;
  if ( !(_WORD)v13 )
    return 3221225485LL;
  if ( (v14 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v15 = v14 + (unsigned __int16)v13;
  if ( v15 > 0x7FFFFFFF0000LL || v15 < v14 )
    MEMORY[0x7FFFFFFF0000] = 0;
  PoolWithQuota_2 = IopVerifierExAllocatePoolWithQuota_2(v14, LOWORD(Src[0]));
  v23 = PoolWithQuota_2;
  memmove(PoolWithQuota_2, Src[1], LOWORD(Src[0]));
  Src[1] = PoolWithQuota_2;
  v17 = ZwUnloadDriver((PUNICODE_STRING)Src);
  ExFreePoolWithTag(PoolWithQuota_2, 0);
  return v17;
}
