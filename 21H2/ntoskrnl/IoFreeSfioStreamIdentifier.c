/*
 * XREFs of IoFreeSfioStreamIdentifier @ 0x140505A20
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     IopGetFileObjectExtension @ 0x140361530 (IopGetFileObjectExtension.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140362F80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall IoFreeSfioStreamIdentifier(PFILE_OBJECT FileObject, PVOID Signature)
{
  void **FileObjectExtension; // rbx
  __int64 v4; // r9
  NTSTATUS v5; // esi
  KSPIN_LOCK *v6; // rbp
  KIRQL v7; // al
  PVOID *v8; // rcx
  unsigned __int64 v9; // rdi
  void **v10; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v14; // edx
  bool v15; // zf
  void **v17; // rax

  FileObjectExtension = (void **)IopGetFileObjectExtension((__int64)FileObject, 4, 0LL);
  v5 = -1073741275;
  if ( FileObjectExtension )
  {
    v6 = (KSPIN_LOCK *)(v4 + 184);
    v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 184));
    v8 = (PVOID *)*FileObjectExtension;
    v9 = v7;
    if ( *FileObjectExtension != FileObjectExtension )
    {
      while ( 1 )
      {
        v10 = (void **)*v8;
        if ( v8[3] == Signature )
          break;
        v8 = (PVOID *)*v8;
        if ( v10 == FileObjectExtension )
          goto LABEL_5;
      }
      v17 = (void **)v8[1];
      if ( v10[1] != v8 || *v17 != v8 )
        __fastfail(3u);
      *v17 = v10;
      v10[1] = v17;
      ExFreePoolWithTag(v8, 0);
      v5 = 0;
    }
LABEL_5:
    KxReleaseSpinLock(v6);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v14 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
          v15 = (v14 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v14;
          if ( v15 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v9);
  }
  return v5;
}
