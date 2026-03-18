/*
 * XREFs of IopBuildDeviceIoControlRequest @ 0x1403428E0
 * Callers:
 *     IoBuildDeviceIoControlRequest @ 0x140342880 (IoBuildDeviceIoControlRequest.c)
 *     FsRtlGetVirtualDiskNestingLevel @ 0x140387570 (FsRtlGetVirtualDiskNestingLevel.c)
 *     IopCreateArcNamesCd @ 0x140B0E310 (IopCreateArcNamesCd.c)
 *     IopAssignBootDriveLetter @ 0x140B0EB5C (IopAssignBootDriveLetter.c)
 *     IopGetBootDiskInformation @ 0x140B4F04C (IopGetBootDiskInformation.c)
 *     VhdiMountVhdFile @ 0x140B54AE4 (VhdiMountVhdFile.c)
 *     SbpAddTransportToInstance @ 0x140B55478 (SbpAddTransportToInstance.c)
 *     SbpStartLanman @ 0x140B55668 (SbpStartLanman.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140211E00 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     IopProbeAndLockPages_0 @ 0x14029C568 (IopProbeAndLockPages_0.c)
 *     IoAllocateMdl @ 0x14029C7F0 (IoAllocateMdl.c)
 *     IopAllocateIrpExReturn @ 0x1402AACA0 (IopAllocateIrpExReturn.c)
 *     PsGetBaseIoPriorityThread @ 0x140343770 (PsGetBaseIoPriorityThread.c)
 *     IoFreeIrp @ 0x140348610 (IoFreeIrp.c)
 *     IoFreeMdl @ 0x140349550 (IoFreeMdl.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
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
        struct _IO_STATUS_BLOCK *a9)
{
  size_t v9; // r14
  __int64 Irp; // rax
  IRP *v14; // rbx
  __int64 v15; // rdi
  unsigned int v16; // esi
  __int64 v17; // rdx
  struct _IRP *v18; // rax
  struct _KTHREAD *CurrentThread; // r10
  struct _LIST_ENTRY *p_SystemCallNumber; // rdi
  LIST_ENTRY *p_ThreadListEntry; // rsi
  unsigned __int8 CurrentIrql; // r15
  KSPIN_LOCK *p_Thread; // r14
  struct _LIST_ENTRY *Flink; // rax
  int BaseIoPriorityThread; // edx
  __int64 v26; // r8
  _DWORD *SchedulerAssist; // r9
  struct _IRP *Pool2; // rax
  int v30; // eax
  unsigned int v31; // r14d
  __int64 v32; // rdx
  PMDL Mdl; // rcx
  unsigned __int8 v34; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v36; // r8
  int v37; // eax
  bool v38; // zf

  v9 = a4;
  Irp = IopAllocateIrpExReturn(a2, *(unsigned __int8 *)(a2 + 76), 0LL);
  v14 = (IRP *)Irp;
  if ( !Irp )
    return 0LL;
  v15 = *(_QWORD *)(Irp + 184);
  *(_BYTE *)(v15 - 72) = (a7 != 0) + 14;
  *(_DWORD *)(v15 - 64) = Length;
  *(_DWORD *)(v15 - 56) = v9;
  *(_DWORD *)(v15 - 48) = a1;
  v16 = a1 & 3;
  if ( v16 )
  {
    if ( v16 > 2 )
    {
      *(_QWORD *)(Irp + 112) = VirtualAddress;
      *(_QWORD *)(v15 - 40) = a3;
      goto LABEL_12;
    }
    if ( a3 )
    {
      Pool2 = (struct _IRP *)ExAllocatePool2(72LL, v9, 1112764233LL);
      v14->AssociatedIrp.MasterIrp = Pool2;
      if ( !Pool2 )
        goto LABEL_38;
      memmove(Pool2, a3, v9);
      v30 = 48;
      v31 = 0;
    }
    else
    {
      v31 = 0;
      v30 = 0;
    }
    v14->Flags = v30;
    if ( !VirtualAddress )
      goto LABEL_12;
    Mdl = IoAllocateMdl(VirtualAddress, Length, 0, 0, 0LL);
    v14->MdlAddress = Mdl;
    if ( Mdl )
    {
      if ( v16 != 1 )
        v31 = 1;
      IopProbeAndLockPages_0((__int64)Mdl, v32, v31, a2, *(unsigned __int8 *)(v15 - 72));
      goto LABEL_12;
    }
    if ( a3 )
      ExFreePoolWithTag(v14->AssociatedIrp.MasterIrp, 0);
LABEL_38:
    IoFreeIrp(v14);
    return 0LL;
  }
  if ( (_DWORD)v9 || Length )
  {
    v17 = (unsigned int)v9;
    if ( (unsigned int)v9 <= Length )
      v17 = Length;
    v18 = (struct _IRP *)ExAllocatePool2(72LL, v17, 1112764233LL);
    v14->AssociatedIrp.MasterIrp = v18;
    if ( v18 )
    {
      if ( a3 )
        memmove(v18, a3, v9);
      v14->Flags = 48;
      v14->UserBuffer = VirtualAddress;
      if ( VirtualAddress )
        v14->Flags = 112;
      goto LABEL_12;
    }
    goto LABEL_38;
  }
  *(_DWORD *)(Irp + 16) = 0;
  *(_QWORD *)(Irp + 112) = 0LL;
LABEL_12:
  v14->UserIosb = a9;
  v14->UserEvent = a8;
  CurrentThread = KeGetCurrentThread();
  v14->Tail.Overlay.Thread = CurrentThread;
  p_SystemCallNumber = (struct _LIST_ENTRY *)&CurrentThread[1].SystemCallNumber;
  p_ThreadListEntry = &v14->ThreadListEntry;
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
  v14->ThreadListEntry.Blink = p_SystemCallNumber;
  Flink->Blink = p_ThreadListEntry;
  p_SystemCallNumber->Flink = p_ThreadListEntry;
  KxReleaseSpinLock(p_Thread);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v34 = KeGetCurrentIrql();
      if ( v34 <= 0xFu && CurrentIrql <= 0xFu && v34 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v36 = CurrentPrcb->SchedulerAssist;
        v37 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v38 = (v37 & v36[5]) == 0;
        v36[5] &= v37;
        if ( v38 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  BaseIoPriorityThread = PsGetBaseIoPriorityThread(v14->Tail.Overlay.Thread);
  if ( BaseIoPriorityThread < 2 && (struct _KTHREAD *)v26 == KeGetCurrentThread() )
  {
    if ( *(_DWORD *)(v26 + 1440) )
      BaseIoPriorityThread = 2;
  }
  v14->Flags = v14->Flags & 0xFFF1FFFF | ((BaseIoPriorityThread << 17) + 0x20000);
  return v14;
}
