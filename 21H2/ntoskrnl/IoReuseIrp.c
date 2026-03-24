/*
 * XREFs of IoReuseIrp @ 0x1402EDC30
 * Callers:
 *     PopAllocateIrp @ 0x14036DF40 (PopAllocateIrp.c)
 *     PopPrepareIoctl @ 0x1407C06A4 (PopPrepareIoctl.c)
 *     SmKmFileInfoCleanup @ 0x14092B278 (SmKmFileInfoCleanup.c)
 * Callees:
 *     EtwWriteEx @ 0x14025DD10 (EtwWriteEx.c)
 *     EtwActivityIdControl @ 0x1402B1640 (EtwActivityIdControl.c)
 *     IopIrpHasExtensionType @ 0x1402EDEC0 (IopIrpHasExtensionType.c)
 *     IoSetActivityIdIrp @ 0x140379200 (IoSetActivityIdIrp.c)
 *     IopIsActivityTracingEventEnabled @ 0x140399398 (IopIsActivityTracingEventEnabled.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     IopFreeCopyObjectsFromIrp @ 0x1403F1B94 (IopFreeCopyObjectsFromIrp.c)
 *     memset @ 0x140414200 (memset.c)
 *     IovpLogStackTrace @ 0x1409C5978 (IovpLogStackTrace.c)
 *     VfIoInitializeIrp @ 0x1409D1404 (VfIoInitializeIrp.c)
 */

void __stdcall IoReuseIrp(PIRP Irp, NTSTATUS Iostatus)
{
  char v2; // bp
  __int64 StackCount; // r15
  UCHAR v6; // r14
  size_t Size; // r13
  __int64 v8; // rax
  signed __int8 AllocationFlags; // cl
  __int64 v10; // rbx
  __int64 v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // r8
  __int16 v14; // r8
  USHORT v15; // bx
  CCHAR ApcStateIndex; // cl
  __int128 v17; // [rsp+40h] [rbp-58h] BYREF
  GUID ActivityId; // [rsp+50h] [rbp-48h] BYREF
  void *retaddr; // [rsp+98h] [rbp+0h]

  v2 = 0;
  v17 = 0LL;
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
    v10 = *((_QWORD *)&Irp->Tail.CompletionKey + 10);
    v2 = 1;
    v11 = v10;
    v17 = *(_OWORD *)(v10 + 24);
  }
  else
  {
    v10 = *((_QWORD *)&Irp->Tail.CompletionKey + 10);
    v11 = v10;
    if ( AllocationFlags < 0 )
    {
      *((_QWORD *)&Irp->Tail.CompletionKey + 10) = 0LL;
      Irp->AllocationFlags = AllocationFlags & 0x7F;
      v11 = 0LL;
      goto LABEL_14;
    }
  }
  if ( v10 )
  {
    if ( (unsigned __int8)IopIrpHasExtensionType(Irp, 5LL) )
      *(_QWORD *)(v10 + 40) = v13;
    if ( (unsigned __int8)IopIrpHasExtensionType(v12, 9LL) && (Irp->Flags & 0x200) != 0 )
    {
      IopFreeCopyObjectsFromIrp();
      v14 = 0;
      Irp->PendingReturned = 1;
    }
    *(_WORD *)(v10 + 2) = v14;
    v11 = *((_QWORD *)&Irp->Tail.CompletionKey + 10);
  }
LABEL_14:
  v15 = *(&Irp->Size + 1);
  memset(Irp, 0, Size);
  Irp->Size = Size;
  Irp->Type = 6;
  Irp->CurrentLocation = StackCount + 1;
  Irp->StackCount = StackCount;
  ApcStateIndex = KeGetCurrentThread()->ApcStateIndex;
  Irp->ThreadListEntry.Blink = &Irp->ThreadListEntry;
  Irp->ThreadListEntry.Flink = &Irp->ThreadListEntry;
  Irp->ApcEnvironment = ApcStateIndex;
  *(&Irp->Size + 1) = v15;
  Irp->AllocationFlags = v6;
  Irp->IoStatus.Status = Iostatus;
  Irp->Tail.Overlay.CurrentStackLocation = (struct _IO_STACK_LOCATION *)((char *)&Irp[1]
                                                                       + 64 * StackCount
                                                                       + 8 * StackCount);
  if ( v11 )
  {
    *((_QWORD *)&Irp->Tail.CompletionKey + 10) = v11;
    if ( v2 == 1 )
      IoSetActivityIdIrp(Irp, &v17);
    if ( (IopFunctionPointerMask & 4) != 0
      && (IopIrpExtensionStatus & 1) != 0
      && (!(unsigned __int8)IopIrpHasExtensionType(Irp, 0LL)
       || (unsigned __int8)IopIsActivityTracingEventEnabled(&IoTrace_KernelIo_ReuseIrp)) )
    {
      ActivityId = 0LL;
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned __int8)IopIsActivityTracingEventEnabled(&IoTrace_KernelIo_ReuseIrp) )
        EtwWriteEx(IoTraceHandle, &IoTrace_KernelIo_ReuseIrp, 0LL, 0, (LPCGUID)(v11 + 24), &ActivityId, 0, 0LL);
      IoSetActivityIdIrp(Irp, &ActivityId);
    }
  }
}
