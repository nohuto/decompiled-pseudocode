/*
 * XREFs of IoReuseIrp @ 0x14020BE20
 * Callers:
 *     PopAllocateIrp @ 0x1403A3F0C (PopAllocateIrp.c)
 *     PopPrepareIoctl @ 0x140850D98 (PopPrepareIoctl.c)
 *     SmKmFileInfoCleanup @ 0x1409D57BC (SmKmFileInfoCleanup.c)
 * Callees:
 *     IopIrpHasExtensionType @ 0x14020C0F0 (IopIrpHasExtensionType.c)
 *     IoSetActivityIdIrp @ 0x14020C120 (IoSetActivityIdIrp.c)
 *     EtwActivityIdControl @ 0x1402DFD70 (EtwActivityIdControl.c)
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     IopIsActivityTracingEventEnabled @ 0x140386368 (IopIsActivityTracingEventEnabled.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     IopFreeCopyObjectsFromIrp @ 0x1404182AC (IopFreeCopyObjectsFromIrp.c)
 *     memset @ 0x140435E00 (memset.c)
 *     FeatureServicing_40851744_EnableKey @ 0x14065863C (FeatureServicing_40851744_EnableKey.c)
 *     IovpLogStackTrace @ 0x140A80FC8 (IovpLogStackTrace.c)
 *     VfIoInitializeIrp @ 0x140A8D070 (VfIoInitializeIrp.c)
 */

void __stdcall IoReuseIrp(PIRP Irp, NTSTATUS Iostatus)
{
  char v2; // bp
  __int64 StackCount; // r15
  UCHAR v6; // r14
  size_t Size; // r12
  __int64 v8; // rax
  signed __int8 AllocationFlags; // cl
  __int64 v10; // rbx
  char v11; // al
  __int64 v12; // rcx
  __int64 v13; // rsi
  USHORT v14; // bx
  CCHAR ApcStateIndex; // cl
  GUID ActivityId; // [rsp+40h] [rbp-48h] BYREF
  void *retaddr; // [rsp+88h] [rbp+0h]

  v2 = 0;
  ActivityId = 0LL;
  if ( (MmVerifierData & 0x10) != 0 )
  {
    VfIoInitializeIrp(Irp, retaddr, 1);
    IovpLogStackTrace(Irp);
  }
  StackCount = Irp->StackCount;
  v6 = Irp->AllocationFlags & 0x6D;
  Size = Irp->Size;
  v8 = *((_QWORD *)&Irp->Tail.CompletionKey + 10);
  AllocationFlags = Irp->AllocationFlags;
  if ( AllocationFlags >= 0 && v8 && (*(_BYTE *)(v8 + 2) & 1) != 0 )
  {
    v2 = 1;
    ActivityId = *(GUID *)(*((_QWORD *)&Irp->Tail.CompletionKey + 10) + 24LL);
  }
  if ( EnableFeatureServicing_40851744 == 1 )
  {
    v10 = *((_QWORD *)&Irp->Tail.CompletionKey + 10);
    goto LABEL_14;
  }
  if ( EnableFeatureServicing_40851744 )
  {
    v11 = FeatureServicing_40851744_EnableKey();
    AllocationFlags = Irp->AllocationFlags;
    v10 = *((_QWORD *)&Irp->Tail.CompletionKey + 10);
    if ( v11 )
    {
LABEL_14:
      if ( AllocationFlags < 0 )
      {
        *((_QWORD *)&Irp->Tail.CompletionKey + 10) = 0LL;
        Irp->AllocationFlags = AllocationFlags & 0x7F;
        goto LABEL_26;
      }
      if ( v10 )
      {
        if ( (unsigned __int8)IopIrpHasExtensionType(Irp, 5LL) )
          *(_QWORD *)(v10 + 40) = 0LL;
        if ( (unsigned __int8)IopIrpHasExtensionType(v12, 9LL) && (Irp->Flags & 0x200) != 0 )
        {
          IopFreeCopyObjectsFromIrp();
          Irp->PendingReturned = 1;
        }
LABEL_25:
        *(_WORD *)(v10 + 2) = 0;
        goto LABEL_26;
      }
      goto LABEL_26;
    }
  }
  else
  {
    v10 = *((_QWORD *)&Irp->Tail.CompletionKey + 10);
  }
  if ( AllocationFlags < 0 )
  {
    *((_QWORD *)&Irp->Tail.CompletionKey + 10) = 0LL;
    Irp->AllocationFlags = AllocationFlags & 0x7F;
    goto LABEL_26;
  }
  if ( v10 )
  {
    if ( (unsigned __int8)IopIrpHasExtensionType(Irp, 5LL) )
      *(_QWORD *)(v10 + 40) = 0LL;
    goto LABEL_25;
  }
LABEL_26:
  v13 = *((_QWORD *)&Irp->Tail.CompletionKey + 10);
  v14 = *(&Irp->Size + 1);
  memset(Irp, 0, Size);
  Irp->Size = Size;
  Irp->Type = 6;
  Irp->CurrentLocation = StackCount + 1;
  Irp->StackCount = StackCount;
  ApcStateIndex = KeGetCurrentThread()->ApcStateIndex;
  Irp->ThreadListEntry.Blink = &Irp->ThreadListEntry;
  Irp->ThreadListEntry.Flink = &Irp->ThreadListEntry;
  Irp->ApcEnvironment = ApcStateIndex;
  *(&Irp->Size + 1) = v14;
  Irp->AllocationFlags = v6;
  Irp->IoStatus.Status = Iostatus;
  Irp->Tail.Overlay.CurrentStackLocation = (struct _IO_STACK_LOCATION *)((char *)&Irp[1]
                                                                       + 64 * StackCount
                                                                       + 8 * StackCount);
  if ( v13 )
  {
    *((_QWORD *)&Irp->Tail.CompletionKey + 10) = v13;
    if ( v2 == 1 )
      IoSetActivityIdIrp(Irp, &ActivityId);
    if ( (IopFunctionPointerMask & 4) != 0
      && (IopIrpExtensionStatus & 1) != 0
      && (!(unsigned __int8)IopIrpHasExtensionType(Irp, 0LL)
       || (unsigned __int8)IopIsActivityTracingEventEnabled(&IoTrace_KernelIo_ReuseIrp)) )
    {
      ActivityId = 0LL;
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned __int8)IopIsActivityTracingEventEnabled(&IoTrace_KernelIo_ReuseIrp) )
        EtwWriteEx(IoTraceHandle, &IoTrace_KernelIo_ReuseIrp, 0LL, 0, (LPCGUID)(v13 + 24), &ActivityId, 0, 0LL);
      IoSetActivityIdIrp(Irp, &ActivityId);
    }
  }
}
