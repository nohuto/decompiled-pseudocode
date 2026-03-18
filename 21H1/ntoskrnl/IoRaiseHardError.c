/*
 * XREFs of IoRaiseHardError @ 0x1405001D0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140206420 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402068E0 (ExAcquireRundownProtection_0.c)
 *     ExQueueWorkItem @ 0x140226F40 (ExQueueWorkItem.c)
 *     IofCompleteRequest @ 0x140248710 (IofCompleteRequest.c)
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     MmGetSessionIdEx @ 0x140260EB0 (MmGetSessionIdEx.c)
 *     KiStackAttachProcess @ 0x1402A88C0 (KiStackAttachProcess.c)
 *     KeInitializeApc @ 0x140355490 (KeInitializeApc.c)
 *     KeInsertQueueApc @ 0x1403575C0 (KeInsertQueueApc.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     IopGetThreadActiveConsoleId @ 0x14088FEEC (IopGetThreadActiveConsoleId.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

void __stdcall IoRaiseHardError(PIRP Irp, PVPB Vpb, PDEVICE_OBJECT RealDeviceObject)
{
  bool v6; // r14
  PETHREAD Thread; // rsi
  int SessionId; // ebx
  int ThreadActiveConsoleId; // eax
  int v10; // ecx
  LONG SpareLong; // ecx
  PVOID PoolWithTag; // rbx
  bool v13; // bl
  struct _EX_RUNDOWN_REF *p_WaitStatus; // r14
  __int64 v15; // r8
  _DWORD *v16; // r9
  _DWORD *Teb; // r15
  _KPROCESS *Process; // rbx
  char v19; // si
  int v20; // eax
  unsigned __int64 v21; // rcx
  __int16 v22; // dx
  struct _WORK_QUEUE_ITEM *v23; // rax
  _OWORD v24[3]; // [rsp+58h] [rbp-70h] BYREF

  v6 = 0;
  Thread = Irp->Tail.Overlay.Thread;
  if ( (*(_DWORD *)(&Thread[1].SwapListEntry + 1) & 0x10) != 0 )
    goto LABEL_26;
  SessionId = MmGetSessionIdEx((__int64)Thread->Process);
  ThreadActiveConsoleId = IopGetThreadActiveConsoleId(Thread);
  v10 = 0;
  if ( SessionId != -1 )
    v10 = SessionId;
  if ( v10 != ThreadActiveConsoleId )
  {
LABEL_26:
    if ( (Irp->Flags & 0x40) == 0 )
      goto LABEL_28;
LABEL_27:
    Irp->IoStatus.Information = 0LL;
    goto LABEL_28;
  }
  if ( (Irp->Flags & 0x3FF1FFFF) != 0x43 && Irp->Tail.Overlay.CurrentStackLocation->MajorFunction != 18 )
  {
    SpareLong = KeGetCurrentThread()->WaitBlock[3].SpareLong;
    v6 = SpareLong != 0;
    if ( !SpareLong )
    {
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x58uLL, 0x4350414Bu);
      if ( PoolWithTag )
      {
        KeInitializeApc(
          (__int64)PoolWithTag,
          (__int64)Thread,
          Irp->ApcEnvironment,
          (__int64)SC_ENV::Free,
          (__int64)IopAbortRequest,
          (__int64)IopRaiseHardError,
          0,
          (__int64)Irp);
        KeInsertQueueApc((__int64)PoolWithTag, (__int64)Vpb, (__int64)RealDeviceObject, 0);
        return;
      }
      goto LABEL_28;
    }
  }
  if ( v6 && (Thread->MiscFlags & 0x400) == 0 )
  {
    v13 = 1;
    p_WaitStatus = (struct _EX_RUNDOWN_REF *)&Thread[1].WaitStatus;
    if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&Thread[1].WaitStatus) )
    {
      memset(v24, 0, sizeof(v24));
      Teb = Thread->Teb;
      Process = Thread->Process;
      if ( Process == KeGetCurrentThread()->ApcState.Process )
      {
        v19 = 0;
      }
      else
      {
        v19 = 1;
        KiStackAttachProcess(Process, 0LL, (__int64)v24, v16);
      }
      v20 = Teb[1452];
      v21 = Process[1].AffinityPadding[10];
      if ( v21 )
      {
        v22 = *(_WORD *)(v21 + 8);
        if ( v22 == 332 || v22 == 452 )
          v20 |= Teb[3018];
      }
      v13 = (v20 & 0x10) != 0;
      if ( v19 )
        KiUnstackDetachProcess((__int64)v24, 0LL, v15, v16);
      ExReleaseRundownProtection_0(p_WaitStatus);
    }
    if ( v13 )
      goto LABEL_27;
  }
  v23 = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x72456F49u);
  if ( v23 )
  {
    v23->WorkerRoutine = (void (__fastcall *)(void *))IopStartApcHardError;
    v23->Parameter = v23;
    v23->List.Flink = 0LL;
    v23[1].List.Flink = (struct _LIST_ENTRY *)Irp;
    v23[1].List.Blink = (struct _LIST_ENTRY *)Vpb;
    v23[1].WorkerRoutine = (void (__fastcall *)(void *))RealDeviceObject;
    ExQueueWorkItem(v23, CriticalWorkQueue);
    return;
  }
LABEL_28:
  IofCompleteRequest(Irp, 1);
}
