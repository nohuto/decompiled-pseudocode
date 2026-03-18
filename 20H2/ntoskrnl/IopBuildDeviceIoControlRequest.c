/*
 * XREFs of IopBuildDeviceIoControlRequest @ 0x14020A0F0
 * Callers:
 *     IoBuildDeviceIoControlRequest @ 0x14020A090 (IoBuildDeviceIoControlRequest.c)
 *     FsRtlGetVirtualDiskNestingLevel @ 0x14032A7D0 (FsRtlGetVirtualDiskNestingLevel.c)
 *     IopCreateArcNamesCd @ 0x140A59EDC (IopCreateArcNamesCd.c)
 *     IopAssignBootDriveLetter @ 0x140A5A814 (IopAssignBootDriveLetter.c)
 *     IopGetBootDiskInformation @ 0x140A92B7C (IopGetBootDiskInformation.c)
 *     VhdiMountVhdFile @ 0x140A97E08 (VhdiMountVhdFile.c)
 *     SbpAddTransportToInstance @ 0x140A98758 (SbpAddTransportToInstance.c)
 *     SbpStartLanman @ 0x140A98958 (SbpStartLanman.c)
 * Callees:
 *     IoFreeMdl @ 0x14020A410 (IoFreeMdl.c)
 *     PsGetBaseIoPriorityThread @ 0x14020AC30 (PsGetBaseIoPriorityThread.c)
 *     IopVerifierExAllocatePool @ 0x14020AC94 (IopVerifierExAllocatePool.c)
 *     IopAllocateIrpExReturn @ 0x1402113B0 (IopAllocateIrpExReturn.c)
 *     IoFreeIrp @ 0x140218F40 (IoFreeIrp.c)
 *     KxAcquireSpinLock @ 0x14021E680 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x14021E780 (KxReleaseSpinLock.c)
 *     IoAllocateMdl @ 0x140248500 (IoAllocateMdl.c)
 *     IopProbeAndLockPages_0 @ 0x1403186D0 (IopProbeAndLockPages_0.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     memmove @ 0x140411040 (memmove.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

IRP *__fastcall IopBuildDeviceIoControlRequest(
        int a1,
        __int64 a2,
        const void *a3,
        unsigned int a4,
        PVOID VirtualAddress,
        unsigned int Length,
        char a7,
        struct _KEVENT *a8,
        struct _IO_STATUS_BLOCK *a9,
        __int64 a10)
{
  size_t v10; // r14
  int v12; // r13d
  __int64 Irp; // rax
  IRP *v15; // rbx
  __int64 v16; // rdi
  unsigned int v17; // esi
  __int64 v18; // rdx
  struct _IRP *v19; // rax
  int Flags; // ecx
  struct _KTHREAD *CurrentThread; // r10
  struct _LIST_ENTRY *p_SystemCallNumber; // rdi
  LIST_ENTRY *p_ThreadListEntry; // rsi
  unsigned __int8 CurrentIrql; // r15
  KSPIN_LOCK *p_Thread; // r14
  struct _LIST_ENTRY *Flink; // rax
  int BaseIoPriorityThread; // edx
  __int64 v28; // r8
  struct _IRP *Pool; // rax
  int v31; // eax
  int v32; // r14d
  PMDL Mdl; // rax
  int v34; // edx
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v36; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v38; // r8
  int v39; // eax
  bool v40; // zf

  v10 = a4;
  v12 = a2;
  Irp = IopAllocateIrpExReturn(a2, *(unsigned __int8 *)(a2 + 76), 0LL, a10);
  v15 = (IRP *)Irp;
  if ( !Irp )
    return 0LL;
  v16 = *(_QWORD *)(Irp + 184);
  *(_BYTE *)(v16 - 72) = (a7 != 0) + 14;
  *(_DWORD *)(v16 - 64) = Length;
  *(_DWORD *)(v16 - 56) = v10;
  *(_DWORD *)(v16 - 48) = a1;
  v17 = a1 & 3;
  if ( v17 )
  {
    if ( v17 > 2 )
    {
      *(_QWORD *)(Irp + 112) = VirtualAddress;
      *(_QWORD *)(v16 - 40) = a3;
      goto LABEL_13;
    }
    if ( a3 )
    {
      Pool = (struct _IRP *)IopVerifierExAllocatePool(516LL, v10);
      v15->AssociatedIrp.MasterIrp = Pool;
      if ( !Pool )
        goto LABEL_36;
      memmove(Pool, a3, v10);
      v31 = 48;
      v32 = 0;
    }
    else
    {
      v32 = 0;
      v31 = 0;
    }
    v15->Flags = v31;
    if ( !VirtualAddress )
      goto LABEL_13;
    Mdl = IoAllocateMdl(VirtualAddress, Length, 0, 0, 0LL);
    v15->MdlAddress = Mdl;
    if ( Mdl )
    {
      if ( v17 != 1 )
        v32 = 1;
      IopProbeAndLockPages_0((_DWORD)Mdl, v34, v32, v12, *(unsigned __int8 *)(v16 - 72));
      goto LABEL_13;
    }
    if ( a3 )
      ExFreePoolWithTag(v15->AssociatedIrp.MasterIrp, 0);
LABEL_36:
    IoFreeIrp(v15);
    return 0LL;
  }
  if ( (_DWORD)v10 || Length )
  {
    v18 = (unsigned int)v10;
    if ( (unsigned int)v10 <= Length )
      v18 = Length;
    v19 = (struct _IRP *)IopVerifierExAllocatePool(516LL, v18);
    v15->AssociatedIrp.MasterIrp = v19;
    if ( v19 )
    {
      if ( a3 )
        memmove(v19, a3, v10);
      v15->Flags = 48;
      v15->UserBuffer = VirtualAddress;
      Flags = v15->Flags;
      if ( VirtualAddress )
        Flags = 112;
      v15->Flags = Flags;
      goto LABEL_13;
    }
    goto LABEL_36;
  }
  *(_DWORD *)(Irp + 16) = 0;
  *(_QWORD *)(Irp + 112) = 0LL;
LABEL_13:
  v15->UserIosb = a9;
  v15->UserEvent = a8;
  CurrentThread = KeGetCurrentThread();
  v15->Tail.Overlay.Thread = CurrentThread;
  p_SystemCallNumber = (struct _LIST_ENTRY *)&CurrentThread[1].SystemCallNumber;
  p_ThreadListEntry = &v15->ThreadListEntry;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  p_Thread = (KSPIN_LOCK *)&CurrentThread[1].WaitBlock[0].Thread;
  KxAcquireSpinLock((PKSPIN_LOCK)&CurrentThread[1].WaitBlock[0].Thread);
  Flink = p_SystemCallNumber->Flink;
  if ( p_SystemCallNumber->Flink->Blink != p_SystemCallNumber )
    __fastfail(3u);
  p_ThreadListEntry->Flink = Flink;
  v15->ThreadListEntry.Blink = p_SystemCallNumber;
  Flink->Blink = p_ThreadListEntry;
  p_SystemCallNumber->Flink = p_ThreadListEntry;
  KxReleaseSpinLock(p_Thread);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v36 = KeGetCurrentIrql();
      if ( v36 <= 0xFu && CurrentIrql <= 0xFu && v36 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v38 = CurrentPrcb->SchedulerAssist;
        v39 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v40 = (v39 & v38[5]) == 0;
        v38[5] &= v39;
        if ( v40 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  BaseIoPriorityThread = PsGetBaseIoPriorityThread(v15->Tail.Overlay.Thread);
  if ( BaseIoPriorityThread < 2 && (struct _KTHREAD *)v28 == KeGetCurrentThread() )
  {
    if ( *(_DWORD *)(v28 + 1360) )
      BaseIoPriorityThread = 2;
  }
  v15->Flags = v15->Flags & 0xFFF1FFFF | ((BaseIoPriorityThread << 17) + 0x20000);
  return v15;
}
