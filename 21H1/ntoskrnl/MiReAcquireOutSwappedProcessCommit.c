/*
 * XREFs of MiReAcquireOutSwappedProcessCommit @ 0x140526848
 * Callers:
 *     KiInSwapProcesses @ 0x1402445C8 (KiInSwapProcesses.c)
 * Callees:
 *     MiChargeCommit @ 0x14021A460 (MiChargeCommit.c)
 *     MiGetSharedVm @ 0x14021A770 (MiGetSharedVm.c)
 *     ExQueueWorkItem @ 0x140226F40 (ExQueueWorkItem.c)
 *     ExAcquireSpinLockExclusive @ 0x14023C6E0 (ExAcquireSpinLockExclusive.c)
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 *     ObfReferenceObjectWithTag @ 0x14025A2D0 (ObfReferenceObjectWithTag.c)
 *     MiUnlockWorkingSetExclusive @ 0x14026C350 (MiUnlockWorkingSetExclusive.c)
 *     KeForceAttachProcess @ 0x1402A680C (KeForceAttachProcess.c)
 *     MiBeginProcessClean @ 0x1402CC91C (MiBeginProcessClean.c)
 *     KeForceDetachProcess @ 0x140308594 (KeForceDetachProcess.c)
 *     KeFreezeProcess @ 0x140358E9C (KeFreezeProcess.c)
 *     MiLogOutswappedProcessCommitReacquire @ 0x140525BE4 (MiLogOutswappedProcessCommitReacquire.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiReAcquireOutSwappedProcessCommit(unsigned __int16 *Object)
{
  LONG *SharedVm; // rax
  struct _KTHREAD *CurrentThread; // r12
  unsigned int v4; // edi
  LONG *v5; // rbp
  int v6; // r15d
  int v7; // ebx
  LONG *v8; // rbx
  KIRQL v9; // al
  _QWORD *v10; // rax
  LONG *v11; // rbx
  KIRQL v12; // al
  struct _WORK_QUEUE_ITEM *v13; // rbx
  __int64 v14; // r8
  _DWORD *v15; // r9
  struct _KEVENT *Blink; // rcx

  KeForceAttachProcess((ULONG_PTR)Object, 0LL);
  SharedVm = MiGetSharedVm((__int64)(Object + 832));
  CurrentThread = KeGetCurrentThread();
  v4 = 0;
  v5 = SharedVm;
  if ( dword_140CFB1D0 != 1 )
  {
    if ( (*((_DWORD *)Object + 281) & 8) != 0 )
    {
      v7 = 1;
      v6 = 0;
    }
    else
    {
      v7 = 0;
      v6 = MiChargeCommit(*(_QWORD *)(qword_140C4E588 + 8LL * Object[919]), *((_QWORD *)SharedVm + 1), 1u);
      if ( v6 )
        goto LABEL_15;
    }
    MiLogOutswappedProcessCommitReacquire((__int64)Object, *((_QWORD *)v5 + 1), 1, v7);
    _InterlockedOr((volatile signed __int32 *)Object + 543, 0x100u);
    v8 = MiGetSharedVm((__int64)(Object + 832));
    v9 = ExAcquireSpinLockExclusive(v8);
    v8[1] = 0;
    *((_BYTE *)Object + 1851) |= 0x60u;
    MiUnlockWorkingSetExclusive((__int64)(Object + 832), v9);
    MiBeginProcessClean((__int64)CurrentThread, (__int64)Object);
    KeFreezeProcess((__int64)Object, 0);
    ObfReferenceObjectWithTag(Object, 0x746C6644u);
    v10 = (_QWORD *)*((_QWORD *)v5 + 4);
    v10[2] = MiReAcquireCommitFailWorker;
    v10[3] = Object;
    *v10 = 0LL;
    goto LABEL_6;
  }
  v6 = 1;
LABEL_15:
  MiLogOutswappedProcessCommitReacquire((__int64)Object, *((_QWORD *)v5 + 1), 0, 0);
LABEL_6:
  v11 = MiGetSharedVm((__int64)(Object + 832));
  v12 = ExAcquireSpinLockExclusive(v11);
  v11[1] = 0;
  if ( (*((_BYTE *)Object + 1851) & 0x60) == 0x40 )
    *((_BYTE *)Object + 1851) = *((_BYTE *)Object + 1851) & 0x9F | 0x20;
  v13 = (struct _WORK_QUEUE_ITEM *)*((_QWORD *)v5 + 4);
  if ( v6 )
  {
    *((_QWORD *)v5 + 1) = 0LL;
    *((_QWORD *)v5 + 4) = 0LL;
  }
  MiUnlockWorkingSetExclusive((__int64)(Object + 832), v12);
  KeForceDetachProcess(0LL, 0, v14, v15);
  Blink = (struct _KEVENT *)v13[1].List.Blink;
  if ( Blink )
    KeSetEvent(Blink, 0, 0);
  if ( v6 )
  {
    ExFreePoolWithTag(v13, 0);
  }
  else
  {
    ExQueueWorkItem(v13, CriticalWorkQueue);
    return (unsigned int)-1073741523;
  }
  return v4;
}
