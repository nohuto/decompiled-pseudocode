/*
 * XREFs of IopBuildDeviceIoControlRequest @ 0x140279670
 * Callers:
 *     IoBuildDeviceIoControlRequest @ 0x1402042E0 (IoBuildDeviceIoControlRequest.c)
 *     FsRtlGetVirtualDiskNestingLevel @ 0x14031C300 (FsRtlGetVirtualDiskNestingLevel.c)
 *     IopCreateArcNamesCd @ 0x140A53AE0 (IopCreateArcNamesCd.c)
 *     IopAssignBootDriveLetter @ 0x140A54414 (IopAssignBootDriveLetter.c)
 *     IopGetBootDiskInformation @ 0x140A8D88C (IopGetBootDiskInformation.c)
 *     VhdiMountVhdFile @ 0x140A92A98 (VhdiMountVhdFile.c)
 *     SbpAddTransportToInstance @ 0x140A933E8 (SbpAddTransportToInstance.c)
 *     SbpStartLanman @ 0x140A935E8 (SbpStartLanman.c)
 * Callees:
 *     IopVerifierExAllocatePool @ 0x1402033E4 (IopVerifierExAllocatePool.c)
 *     IopAllocateIrpExReturn @ 0x140252F80 (IopAllocateIrpExReturn.c)
 *     IoFreeIrp @ 0x1402541B0 (IoFreeIrp.c)
 *     KxAcquireSpinLock @ 0x1402773A0 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140277410 (KxReleaseSpinLock.c)
 *     PsGetBaseIoPriorityThread @ 0x14027B270 (PsGetBaseIoPriorityThread.c)
 *     IoAllocateMdl @ 0x1402BE6D0 (IoAllocateMdl.c)
 *     IoFreeMdl @ 0x1402C0A80 (IoFreeMdl.c)
 *     IopProbeAndLockPages_0 @ 0x140340370 (IopProbeAndLockPages_0.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

IRP *__fastcall IopBuildDeviceIoControlRequest(
        int a1,
        int a2,
        const void *a3,
        unsigned int a4,
        PVOID VirtualAddress,
        unsigned int Length,
        char a7,
        struct _KEVENT *a8,
        struct _IO_STATUS_BLOCK *a9)
{
  SIZE_T v9; // r14
  __int64 Irp; // rax
  IRP *v14; // rbx
  __int64 v15; // rdi
  unsigned int v16; // esi
  SIZE_T v17; // rdx
  struct _IRP *v18; // rax
  int Flags; // ecx
  struct _KTHREAD *CurrentThread; // r10
  struct _LIST_ENTRY *p_SystemCallNumber; // rdi
  LIST_ENTRY *p_ThreadListEntry; // rsi
  unsigned __int8 CurrentIrql; // r15
  KSPIN_LOCK *p_Thread; // r14
  struct _LIST_ENTRY *Flink; // rax
  __int64 v26; // rdx
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

  v9 = a4;
  Irp = IopAllocateIrpExReturn();
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
      goto LABEL_13;
    }
    if ( a3 )
    {
      Pool = (struct _IRP *)IopVerifierExAllocatePool(NonPagedPoolNxCacheAligned, v9);
      v14->AssociatedIrp.MasterIrp = Pool;
      if ( !Pool )
        goto LABEL_36;
      memmove(Pool, a3, v9);
      v31 = 48;
      v32 = 0;
    }
    else
    {
      v32 = 0;
      v31 = 0;
    }
    v14->Flags = v31;
    if ( !VirtualAddress )
      goto LABEL_13;
    Mdl = IoAllocateMdl(VirtualAddress, Length, 0, 0, 0LL);
    v14->MdlAddress = Mdl;
    if ( Mdl )
    {
      if ( v16 != 1 )
        v32 = 1;
      IopProbeAndLockPages_0((_DWORD)Mdl, v34, v32, a2, *(unsigned __int8 *)(v15 - 72));
      goto LABEL_13;
    }
    if ( a3 )
      ExFreePoolWithTag(v14->AssociatedIrp.MasterIrp, 0);
LABEL_36:
    IoFreeIrp(v14);
    return 0LL;
  }
  if ( (_DWORD)v9 || Length )
  {
    v17 = (unsigned int)v9;
    if ( (unsigned int)v9 <= Length )
      v17 = Length;
    v18 = (struct _IRP *)IopVerifierExAllocatePool(NonPagedPoolNxCacheAligned, v17);
    v14->AssociatedIrp.MasterIrp = v18;
    if ( v18 )
    {
      if ( a3 )
        memmove(v18, a3, v9);
      v14->Flags = 48;
      v14->UserBuffer = VirtualAddress;
      Flags = v14->Flags;
      if ( VirtualAddress )
        Flags = 112;
      v14->Flags = Flags;
      goto LABEL_13;
    }
    goto LABEL_36;
  }
  *(_DWORD *)(Irp + 16) = 0;
  *(_QWORD *)(Irp + 112) = 0LL;
LABEL_13:
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
      v36 = KeGetCurrentIrql();
      if ( v36 <= 0xFu && CurrentIrql <= 0xFu && v36 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v38 = CurrentPrcb->SchedulerAssist;
        v39 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v40 = (v39 & v38[5]) == 0;
        v26 = (unsigned int)v39 & v38[5];
        v38[5] = v26;
        if ( v40 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  BaseIoPriorityThread = PsGetBaseIoPriorityThread(v14->Tail.Overlay.Thread, v26);
  if ( BaseIoPriorityThread < 2 && (struct _KTHREAD *)v28 == KeGetCurrentThread() )
  {
    if ( *(_DWORD *)(v28 + 1360) )
      BaseIoPriorityThread = 2;
  }
  v14->Flags = v14->Flags & 0xFFF1FFFF | ((BaseIoPriorityThread << 17) + 0x20000);
  return v14;
}
