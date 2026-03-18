/*
 * XREFs of MmIsFileObjectAPagingFile @ 0x14024E4A8
 * Callers:
 *     IoPageReadEx @ 0x14024E230 (IoPageReadEx.c)
 *     IoSynchronousPageWriteEx @ 0x14024E538 (IoSynchronousPageWriteEx.c)
 *     IoAsynchronousPageWrite @ 0x140329CA0 (IoAsynchronousPageWrite.c)
 *     FsRtlIsSystemPagingFile @ 0x14036C350 (FsRtlIsSystemPagingFile.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402970F0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1402D2DC0 (ExAcquireSpinLockShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MmIsFileObjectAPagingFile(unsigned __int64 a1)
{
  unsigned int v2; // ebx
  unsigned __int64 v3; // rdi
  _QWORD *v4; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rax
  _DWORD *SchedulerAssist; // r9
  int v9; // edx
  bool v10; // zf

  v2 = 0;
  v3 = ExAcquireSpinLockShared(&dword_140C4EB38);
  v4 = (_QWORD *)qword_140C4EB30;
  while ( v4 )
  {
    if ( a1 < *(v4 - 25) )
    {
      v4 = (_QWORD *)*v4;
    }
    else
    {
      if ( a1 <= *(v4 - 25) )
      {
        v2 = 1;
        break;
      }
      v4 = (_QWORD *)v4[1];
    }
  }
  ExReleaseSpinLockSharedFromDpcLevel(&dword_140C4EB38);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v3 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v9 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
        v10 = (v9 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v9;
        if ( v10 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v3);
  return v2;
}
