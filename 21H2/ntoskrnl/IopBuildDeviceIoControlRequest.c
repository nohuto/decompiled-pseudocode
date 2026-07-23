/*
 * XREFs of IopBuildDeviceIoControlRequest @ 0x1402D0240
 * Callers:
 *     FsRtlGetVirtualDiskNestingLevel @ 0x14024A300 (FsRtlGetVirtualDiskNestingLevel.c)
 *     IoBuildDeviceIoControlRequest @ 0x1402D09B0 (IoBuildDeviceIoControlRequest.c)
 *     IopAssignBootDriveLetter @ 0x140A62AA8 (IopAssignBootDriveLetter.c)
 *     IopCreateArcNamesCd @ 0x140A62E50 (IopCreateArcNamesCd.c)
 *     IopGetBootDiskInformation @ 0x140A909DC (IopGetBootDiskInformation.c)
 *     VhdiMountVhdFile @ 0x140A95C98 (VhdiMountVhdFile.c)
 *     SbpAddTransportToInstance @ 0x140A965E8 (SbpAddTransportToInstance.c)
 *     SbpStartLanman @ 0x140A967E8 (SbpStartLanman.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     IopVerifierExAllocatePool @ 0x1402336E0 (IopVerifierExAllocatePool.c)
 *     IopProbeAndLockPages_0 @ 0x140298DA0 (IopProbeAndLockPages_0.c)
 *     IoAllocateMdl @ 0x140299F00 (IoAllocateMdl.c)
 *     IoFreeMdl @ 0x14029A950 (IoFreeMdl.c)
 *     KxAcquireSpinLock @ 0x1402CDEB0 (KxAcquireSpinLock.c)
 *     PsGetBaseIoPriorityThread @ 0x1402D0980 (PsGetBaseIoPriorityThread.c)
 *     IopAllocateIrpExReturn @ 0x14035C790 (IopAllocateIrpExReturn.c)
 *     IoFreeIrp @ 0x14035E290 (IoFreeIrp.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
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
  SIZE_T v10; // r14
  __int64 Irp; // rax
  IRP *v15; // rbx
  __int64 v16; // rdi
  unsigned int v17; // esi
  SIZE_T v18; // rdx
  struct _IRP *v19; // rax
  int Flags; // ecx
  struct _KTHREAD *CurrentThread; // r10
  struct _LIST_ENTRY *p_SystemCallNumber; // rdi
  LIST_ENTRY *p_ThreadListEntry; // rsi
  unsigned __int8 CurrentIrql; // r15
  KSPIN_LOCK *p_Thread; // r14
  struct _LIST_ENTRY *Flink; // rax
  __int64 v27; // rdx
  int BaseIoPriorityThread; // edx
  __int64 v29; // r8
  struct _IRP *Pool; // rax
  int v32; // eax
  unsigned int v33; // r14d
  __int64 v34; // rdx
  PMDL Mdl; // rcx
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v37; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v39; // r8
  int v40; // eax
  bool v41; // zf

  v10 = a4;
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
      Pool = (struct _IRP *)IopVerifierExAllocatePool(NonPagedPoolNxCacheAligned, v10);
      v15->AssociatedIrp.MasterIrp = Pool;
      if ( !Pool )
        goto LABEL_36;
      memmove(Pool, a3, v10);
      v32 = 48;
      v33 = 0;
    }
    else
    {
      v33 = 0;
      v32 = 0;
    }
    v15->Flags = v32;
    if ( !VirtualAddress )
      goto LABEL_13;
    Mdl = IoAllocateMdl(VirtualAddress, Length, 0, 0, 0LL);
    v15->MdlAddress = Mdl;
    if ( Mdl )
    {
      if ( v17 != 1 )
        v33 = 1;
      IopProbeAndLockPages_0((__int64)Mdl, v34, v33, a2, *(unsigned __int8 *)(v16 - 72));
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
    v19 = (struct _IRP *)IopVerifierExAllocatePool(NonPagedPoolNxCacheAligned, v18);
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
      v37 = KeGetCurrentIrql();
      if ( v37 <= 0xFu && CurrentIrql <= 0xFu && v37 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v39 = CurrentPrcb->SchedulerAssist;
        v40 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v41 = (v40 & v39[5]) == 0;
        v27 = (unsigned int)v40 & v39[5];
        v39[5] = v27;
        if ( v41 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  BaseIoPriorityThread = PsGetBaseIoPriorityThread(v15->Tail.Overlay.Thread, v27);
  if ( BaseIoPriorityThread < 2 && (struct _KTHREAD *)v29 == KeGetCurrentThread() )
  {
    if ( *(_DWORD *)(v29 + 1360) )
      BaseIoPriorityThread = 2;
  }
  v15->Flags = v15->Flags & 0xFFF1FFFF | ((BaseIoPriorityThread << 17) + 0x20000);
  return v15;
}
