/*
 * XREFs of IoReuseIrp @ 0x14020D600
 * Callers:
 *     PopAllocateIrp @ 0x14036E0F0 (PopAllocateIrp.c)
 *     PopPrepareIoctl @ 0x1407C0BC4 (PopPrepareIoctl.c)
 *     SmKmFileInfoCleanup @ 0x14092B3D8 (SmKmFileInfoCleanup.c)
 * Callees:
 *     IopIrpHasExtensionType @ 0x14020D890 (IopIrpHasExtensionType.c)
 *     EtwActivityIdControl @ 0x140272110 (EtwActivityIdControl.c)
 *     EtwWriteEx @ 0x14027F840 (EtwWriteEx.c)
 *     IoSetActivityIdIrp @ 0x140378D50 (IoSetActivityIdIrp.c)
 *     IopIsActivityTracingEventEnabled @ 0x1403994E8 (IopIsActivityTracingEventEnabled.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     IopFreeCopyObjectsFromIrp @ 0x1403F1A64 (IopFreeCopyObjectsFromIrp.c)
 *     memset @ 0x140414300 (memset.c)
 *     IovpLogStackTrace @ 0x1409C6978 (IovpLogStackTrace.c)
 *     VfIoInitializeIrp @ 0x1409D2404 (VfIoInitializeIrp.c)
 */

void __stdcall IoReuseIrp(PIRP Irp, NTSTATUS Iostatus)
{
  __int64 v2; // r9
  char v3; // bp
  __int64 StackCount; // r15
  UCHAR v7; // r14
  size_t Size; // r13
  __int64 v9; // rax
  signed __int8 AllocationFlags; // cl
  __int64 v11; // rbx
  __int64 v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int16 v16; // r8
  USHORT v17; // bx
  __int64 v18; // r8
  __int64 v19; // r9
  CCHAR ApcStateIndex; // cl
  __int128 v21; // [rsp+40h] [rbp-58h] BYREF
  GUID ActivityId; // [rsp+50h] [rbp-48h] BYREF
  void *retaddr; // [rsp+98h] [rbp+0h]

  v3 = 0;
  v21 = 0LL;
  if ( (MmVerifierData & 0x10) != 0 )
  {
    VfIoInitializeIrp(Irp, retaddr, 1);
    IovpLogStackTrace(Irp);
  }
  StackCount = Irp->StackCount;
  v7 = Irp->AllocationFlags & 0x6D;
  Size = Irp->Size;
  v9 = *((_QWORD *)&Irp->Tail.CompletionKey + 10);
  AllocationFlags = Irp->AllocationFlags;
  if ( AllocationFlags >= 0 && v9 && (*(_BYTE *)(v9 + 2) & 1) != 0 )
  {
    v11 = *((_QWORD *)&Irp->Tail.CompletionKey + 10);
    v3 = 1;
    v12 = v11;
    v21 = *(_OWORD *)(v11 + 24);
  }
  else
  {
    v11 = *((_QWORD *)&Irp->Tail.CompletionKey + 10);
    v12 = v11;
    if ( AllocationFlags < 0 )
    {
      *((_QWORD *)&Irp->Tail.CompletionKey + 10) = 0LL;
      Irp->AllocationFlags = AllocationFlags & 0x7F;
      v12 = 0LL;
      goto LABEL_14;
    }
  }
  if ( v11 )
  {
    if ( (unsigned __int8)IopIrpHasExtensionType(Irp, 5LL, 0LL, v2) )
      *(_QWORD *)(v11 + 40) = v14;
    if ( (unsigned __int8)IopIrpHasExtensionType(v13, 9LL, v14, v15) && (Irp->Flags & 0x200) != 0 )
    {
      IopFreeCopyObjectsFromIrp();
      v16 = 0;
      Irp->PendingReturned = 1;
    }
    *(_WORD *)(v11 + 2) = v16;
    v12 = *((_QWORD *)&Irp->Tail.CompletionKey + 10);
  }
LABEL_14:
  v17 = *(&Irp->Size + 1);
  memset(Irp, 0, Size);
  Irp->Size = Size;
  Irp->Type = 6;
  Irp->CurrentLocation = StackCount + 1;
  Irp->StackCount = StackCount;
  ApcStateIndex = KeGetCurrentThread()->ApcStateIndex;
  Irp->ThreadListEntry.Blink = &Irp->ThreadListEntry;
  Irp->ThreadListEntry.Flink = &Irp->ThreadListEntry;
  Irp->ApcEnvironment = ApcStateIndex;
  *(&Irp->Size + 1) = v17;
  Irp->AllocationFlags = v7;
  Irp->IoStatus.Status = Iostatus;
  Irp->Tail.Overlay.CurrentStackLocation = (struct _IO_STACK_LOCATION *)((char *)&Irp[1]
                                                                       + 64 * StackCount
                                                                       + 8 * StackCount);
  if ( v12 )
  {
    *((_QWORD *)&Irp->Tail.CompletionKey + 10) = v12;
    if ( v3 == 1 )
      IoSetActivityIdIrp(Irp, &v21);
    if ( (IopFunctionPointerMask & 4) != 0
      && (IopIrpExtensionStatus & 1) != 0
      && (!(unsigned __int8)IopIrpHasExtensionType(Irp, 0LL, v18, v19)
       || (unsigned __int8)IopIsActivityTracingEventEnabled(&IoTrace_KernelIo_ReuseIrp)) )
    {
      ActivityId = 0LL;
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned __int8)IopIsActivityTracingEventEnabled(&IoTrace_KernelIo_ReuseIrp) )
        EtwWriteEx(IoTraceHandle, &IoTrace_KernelIo_ReuseIrp, 0LL, 0, (LPCGUID)(v12 + 24), &ActivityId, 0, 0LL);
      IoSetActivityIdIrp(Irp, &ActivityId);
    }
  }
}
