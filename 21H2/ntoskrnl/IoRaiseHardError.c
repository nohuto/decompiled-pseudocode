/*
 * XREFs of IoRaiseHardError @ 0x140505C70
 * Callers:
 *     <none>
 * Callees:
 *     KiUnstackDetachProcess @ 0x140207000 (KiUnstackDetachProcess.c)
 *     ExQueueWorkItem @ 0x14023E750 (ExQueueWorkItem.c)
 *     IofCompleteRequest @ 0x140243490 (IofCompleteRequest.c)
 *     KiStackAttachProcess @ 0x14025C2E0 (KiStackAttachProcess.c)
 *     KeInsertQueueApc @ 0x14025F8C0 (KeInsertQueueApc.c)
 *     KeInitializeApc @ 0x140278E60 (KeInitializeApc.c)
 *     ExReleaseRundownProtection_0 @ 0x14027C4F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14027C9B0 (ExAcquireRundownProtection_0.c)
 *     MmGetSessionIdEx @ 0x14034AE60 (MmGetSessionIdEx.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     IopGetThreadActiveConsoleId @ 0x1408942CC (IopGetThreadActiveConsoleId.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
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
  _DWORD *v15; // r9
  _DWORD *Teb; // r15
  _KPROCESS *Process; // rbx
  char v18; // si
  int v19; // eax
  unsigned __int64 v20; // rcx
  __int16 v21; // dx
  struct _WORK_QUEUE_ITEM *v22; // rax
  _OWORD v23[3]; // [rsp+58h] [rbp-70h] BYREF

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
      memset(v23, 0, sizeof(v23));
      Teb = Thread->Teb;
      Process = Thread->Process;
      if ( Process == KeGetCurrentThread()->ApcState.Process )
      {
        v18 = 0;
      }
      else
      {
        v18 = 1;
        KiStackAttachProcess(Process, 0LL, (__int64)v23, v15);
      }
      v19 = Teb[1452];
      v20 = Process[1].AffinityPadding[10];
      if ( v20 )
      {
        v21 = *(_WORD *)(v20 + 8);
        if ( v21 == 332 || v21 == 452 )
          v19 |= Teb[3018];
      }
      v13 = (v19 & 0x10) != 0;
      if ( v18 )
        KiUnstackDetachProcess((__int64)v23, 0);
      ExReleaseRundownProtection_0(p_WaitStatus);
    }
    if ( v13 )
      goto LABEL_27;
  }
  v22 = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x72456F49u);
  if ( v22 )
  {
    v22->WorkerRoutine = (void (__fastcall *)(void *))IopStartApcHardError;
    v22->Parameter = v22;
    v22->List.Flink = 0LL;
    v22[1].List.Flink = (struct _LIST_ENTRY *)Irp;
    v22[1].List.Blink = (struct _LIST_ENTRY *)Vpb;
    v22[1].WorkerRoutine = (void (__fastcall *)(void *))RealDeviceObject;
    ExQueueWorkItem(v22, CriticalWorkQueue);
    return;
  }
LABEL_28:
  IofCompleteRequest(Irp, 1);
}
