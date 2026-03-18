/*
 * XREFs of IoReuseIrp @ 0x1402F4000
 * Callers:
 *     PopAllocateIrp @ 0x14036F900 (PopAllocateIrp.c)
 *     PopPrepareIoctl @ 0x1407BC2A4 (PopPrepareIoctl.c)
 *     SmKmFileInfoCleanup @ 0x14092DAA8 (SmKmFileInfoCleanup.c)
 * Callees:
 *     EtwWriteEx @ 0x14020E0B0 (EtwWriteEx.c)
 *     IopIrpHasExtensionType @ 0x1402F42C0 (IopIrpHasExtensionType.c)
 *     EtwActivityIdControl @ 0x1403640E0 (EtwActivityIdControl.c)
 *     IoSetActivityIdIrp @ 0x140379000 (IoSetActivityIdIrp.c)
 *     IopIsActivityTracingEventEnabled @ 0x140398F28 (IopIsActivityTracingEventEnabled.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     IopFreeCopyObjectsFromIrp @ 0x1403F0DCC (IopFreeCopyObjectsFromIrp.c)
 *     memset @ 0x140411300 (memset.c)
 *     FeatureServicing_40524482_EnableKey @ 0x1405CBC40 (FeatureServicing_40524482_EnableKey.c)
 *     IovpLogStackTrace @ 0x1409C8988 (IovpLogStackTrace.c)
 *     VfIoInitializeIrp @ 0x1409D4414 (VfIoInitializeIrp.c)
 */

void __stdcall IoReuseIrp(PIRP Irp, NTSTATUS Iostatus)
{
  char v2; // bp
  __int64 StackCount; // r15
  UCHAR v6; // r14
  size_t Size; // r12
  __int64 v8; // rax
  signed __int8 AllocationFlags; // cl
  int v10; // eax
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // rsi
  USHORT v14; // bx
  CCHAR ApcStateIndex; // cl
  __int128 v16; // [rsp+40h] [rbp-58h] BYREF
  GUID ActivityId; // [rsp+50h] [rbp-48h] BYREF
  void *retaddr; // [rsp+98h] [rbp+0h]

  v2 = 0;
  v16 = 0LL;
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
    v16 = *(_OWORD *)(*((_QWORD *)&Irp->Tail.CompletionKey + 10) + 24LL);
  }
  v10 = EnableFeatureServicing_40524482;
  if ( EnableFeatureServicing_40524482 != 1 )
  {
    if ( EnableFeatureServicing_40524482 )
    {
      LOBYTE(v10) = FeatureServicing_40524482_EnableKey();
      AllocationFlags = Irp->AllocationFlags;
      v10 = (unsigned __int8)v10;
    }
    else
    {
      v10 = 0;
    }
  }
  v11 = *((_QWORD *)&Irp->Tail.CompletionKey + 10);
  if ( v10 )
  {
    if ( AllocationFlags < 0 )
    {
      *((_QWORD *)&Irp->Tail.CompletionKey + 10) = 0LL;
      Irp->AllocationFlags = AllocationFlags & 0x7F;
      goto LABEL_26;
    }
    if ( v11 )
    {
      if ( (unsigned __int8)IopIrpHasExtensionType(Irp, 5LL) )
        *(_QWORD *)(v11 + 40) = 0LL;
      if ( (unsigned __int8)IopIrpHasExtensionType(v12, 9LL) && (Irp->Flags & 0x200) != 0 )
      {
        IopFreeCopyObjectsFromIrp();
        Irp->PendingReturned = 1;
      }
LABEL_25:
      *(_WORD *)(v11 + 2) = 0;
    }
  }
  else
  {
    if ( AllocationFlags < 0 )
    {
      *((_QWORD *)&Irp->Tail.CompletionKey + 10) = 0LL;
      Irp->AllocationFlags = AllocationFlags & 0x7F;
      goto LABEL_26;
    }
    if ( v11 )
    {
      if ( (unsigned __int8)IopIrpHasExtensionType(Irp, 5LL) )
        *(_QWORD *)(v11 + 40) = 0LL;
      goto LABEL_25;
    }
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
      IoSetActivityIdIrp(Irp, &v16);
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
