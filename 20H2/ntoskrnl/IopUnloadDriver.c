/*
 * XREFs of IopUnloadDriver @ 0x140766018
 * Callers:
 *     PnpUnloadAttachedDriver @ 0x1407395CC (PnpUnloadAttachedDriver.c)
 *     NtUnloadDriver @ 0x14089DCB0 (NtUnloadDriver.c)
 *     PipUnloadEarlyLaunchDrivers @ 0x140A75928 (PipUnloadEarlyLaunchDrivers.c)
 * Callees:
 *     KeInitializeEvent @ 0x14020D960 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x14021B560 (KeWaitForSingleObject.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140227380 (PsIsCurrentThreadInServerSilo.c)
 *     RtlImageNtHeader @ 0x140297240 (RtlImageNtHeader.c)
 *     ExQueueWorkItem @ 0x1402D49A0 (ExQueueWorkItem.c)
 *     DbgPrint @ 0x1403647B0 (DbgPrint.c)
 *     PnpDiagnosticTraceObject @ 0x140364A08 (PnpDiagnosticTraceObject.c)
 *     PnpDiagnosticTraceDriverFullInfo @ 0x14037C050 (PnpDiagnosticTraceDriverFullInfo.c)
 *     IopCleanupNotifications @ 0x14037C2F0 (IopCleanupNotifications.c)
 *     IopCheckUnloadDriver @ 0x14037C384 (IopCheckUnloadDriver.c)
 *     IopVerifierExAllocatePoolWithQuota_2 @ 0x1403CA55C (IopVerifierExAllocatePoolWithQuota_2.c)
 *     ZwUnloadDriver @ 0x1403FBA50 (ZwUnloadDriver.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     memmove @ 0x140411040 (memmove.c)
 *     memset @ 0x140411300 (memset.c)
 *     ObMakeTemporaryObject @ 0x1405D6DB0 (ObMakeTemporaryObject.c)
 *     ObOpenObjectByName @ 0x14060CA70 (ObOpenObjectByName.c)
 *     ObReferenceObjectByHandle @ 0x1406118C0 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x140627D70 (ObCloseHandle.c)
 *     SeSinglePrivilegeCheck @ 0x14063B9A0 (SeSinglePrivilegeCheck.c)
 *     IopGetDriverNameFromKeyNode @ 0x14073714C (IopGetDriverNameFromKeyNode.c)
 *     PnpIsLegacyDriver @ 0x140738AA8 (PnpIsLegacyDriver.c)
 *     EtwTiLogDriverObjectUnLoad @ 0x1407662BC (EtwTiLogDriverObjectUnLoad.c)
 *     IopOpenRegistryKey @ 0x140766324 (IopOpenRegistryKey.c)
 *     ExRaiseDatatypeMisalignment @ 0x140777E40 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopUnloadDriver(unsigned __int16 *a1, char a2)
{
  unsigned __int16 MinorImageVersion; // r14
  KPROCESSOR_MODE PreviousMode; // dl
  int DriverNameFromKeyNode; // edi
  struct _DMA_ADAPTER *v7; // rbx
  _DMA_OPERATIONS *DmaOperations; // rax
  __int64 v10; // rax
  int v11; // edx
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  PVOID PoolWithQuota_2; // rdi
  unsigned int v15; // ebx
  struct _DMA_ADAPTER *v16; // rcx
  HANDLE Handle; // [rsp+40h] [rbp-E8h] BYREF
  HANDLE v18; // [rsp+48h] [rbp-E0h] BYREF
  void *Src[2]; // [rsp+50h] [rbp-D8h] BYREF
  UNICODE_STRING Destination; // [rsp+60h] [rbp-C8h] BYREF
  PVOID v21; // [rsp+70h] [rbp-B8h]
  _DWORD v22[2]; // [rsp+78h] [rbp-B0h] BYREF
  __int64 v23; // [rsp+80h] [rbp-A8h]
  UNICODE_STRING *p_Destination; // [rsp+88h] [rbp-A0h]
  int v25; // [rsp+90h] [rbp-98h]
  int v26; // [rsp+94h] [rbp-94h]
  __int128 v27; // [rsp+98h] [rbp-90h]
  struct _WORK_QUEUE_ITEM WorkItem[3]; // [rsp+B0h] [rbp-78h] BYREF
  char v29; // [rsp+140h] [rbp+18h] BYREF
  PVOID Object; // [rsp+148h] [rbp+20h] BYREF

  *(_OWORD *)Src = 0LL;
  v21 = 0LL;
  v22[1] = 0;
  v26 = 0;
  Handle = 0LL;
  *(_DWORD *)(&Destination.MaximumLength + 1) = 0;
  v18 = 0LL;
  v29 = 0;
  LOBYTE(MinorImageVersion) = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !PreviousMode || a2 )
  {
    PnpDiagnosticTraceObject(&KMPnPEvt_DriverUnload_Start, a1);
    Destination.Buffer = 0LL;
    *(_DWORD *)&Destination.Length = 0;
    if ( PsIsCurrentThreadInServerSilo() )
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
        v22[0] = 48;
        v23 = 0LL;
        v25 = 576;
        p_Destination = &Destination;
        v27 = 0LL;
        DriverNameFromKeyNode = ObOpenObjectByName(
                                  (__int64)v22,
                                  (__int64)IoDriverObjectType,
                                  0,
                                  0LL,
                                  1,
                                  0LL,
                                  (__int64)&v18);
        if ( DriverNameFromKeyNode >= 0 )
        {
          Object = 0LL;
          DriverNameFromKeyNode = ObReferenceObjectByHandle(v18, 0, IoDriverObjectType, 0, &Object, 0LL);
          ObCloseHandle(v18, 0);
          if ( DriverNameFromKeyNode >= 0 )
          {
            v7 = (struct _DMA_ADAPTER *)Object;
            MinorImageVersion = RtlImageNtHeader(*((PVOID *)Object + 3))->OptionalHeader.MinorImageVersion;
            if ( v7[6].DmaOperations && v7[2].DmaOperations )
            {
              if ( a2 || PnpIsLegacyDriver((__int64)v7) )
              {
                DriverNameFromKeyNode = IopCheckUnloadDriver(v7, &v29);
                if ( (int)(DriverNameFromKeyNode + 0x80000000) >= 0 && DriverNameFromKeyNode != -1073741808 )
                {
                  if ( v29 )
                  {
                    if ( KeGetCurrentThread()->ApcState.Process == PsInitialSystemProcess )
                    {
                      DmaOperations = v7[6].DmaOperations;
                      v7 = (struct _DMA_ADAPTER *)Object;
                      ((void (__fastcall *)(PVOID))DmaOperations)(Object);
                      EtwTiLogDriverObjectUnLoad(&v7[3].DmaOperations);
                    }
                    else
                    {
                      memset(WorkItem, 0, 0x50uLL);
                      KeInitializeEvent((PRKEVENT)&WorkItem[1], NotificationEvent, 0);
                      v7 = (struct _DMA_ADAPTER *)Object;
                      WorkItem[1].Parameter = Object;
                      WorkItem[0].WorkerRoutine = (void (__fastcall *)(void *))IopLoadUnloadDriver;
                      WorkItem[0].Parameter = WorkItem;
                      WorkItem[0].List.Flink = 0LL;
                      ExQueueWorkItem(WorkItem, DelayedWorkQueue);
                      KeWaitForSingleObject(&WorkItem[1], Executive, 0, 0, 0LL);
                    }
                    IopCleanupNotifications(v7, v7);
                    ObMakeTemporaryObject(v7);
                    HalPutDmaAdapter(v7);
                  }
                  HalPutDmaAdapter(v7);
                  DriverNameFromKeyNode = 0;
                }
                goto LABEL_17;
              }
            }
            else
            {
              v16 = v7;
            }
            HalPutDmaAdapter(v16);
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
  v10 = 0x7FFFFFFF0000LL;
  if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
    v10 = (__int64)a1;
  v11 = *(_DWORD *)v10;
  LODWORD(Src[0]) = v11;
  v12 = *(_QWORD *)(v10 + 8);
  Src[1] = (void *)v12;
  if ( !(_WORD)v11 )
    return 3221225485LL;
  if ( (v12 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v13 = v12 + (unsigned __int16)v11;
  if ( v13 > 0x7FFFFFFF0000LL || v13 < v12 )
    MEMORY[0x7FFFFFFF0000] = 0;
  PoolWithQuota_2 = IopVerifierExAllocatePoolWithQuota_2(v12, LOWORD(Src[0]));
  v21 = PoolWithQuota_2;
  memmove(PoolWithQuota_2, Src[1], LOWORD(Src[0]));
  Src[1] = PoolWithQuota_2;
  v15 = ZwUnloadDriver((PUNICODE_STRING)Src);
  ExFreePoolWithTag(PoolWithQuota_2, 0);
  return v15;
}
