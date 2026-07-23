/*
 * XREFs of MiComputePageHash @ 0x14038A2E0
 * Callers:
 *     MiWritePageFileHash @ 0x14038A114 (MiWritePageFileHash.c)
 *     MiValidatePagefilePageHash @ 0x14055D95C (MiValidatePagefilePageHash.c)
 * Callees:
 *     MiGetPagingFileOffset @ 0x14025F240 (MiGetPagingFileOffset.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14033C800 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140353660 (MiUnmapPageInHyperSpaceWorker.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiComputePageHash(__int64 a1, _QWORD *a2)
{
  unsigned __int64 v2; // r14
  _QWORD *v3; // rsi
  unsigned __int8 CurrentIrql; // di
  unsigned int PagingFileOffset; // eax
  __int64 v7; // r8
  _QWORD *v8; // rcx
  __int64 v9; // r9
  __int64 v10; // r10
  __int64 v11; // rbx
  __int64 v12; // rbx
  __int64 result; // rax
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v15; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v17; // r8
  int v18; // eax
  bool v19; // zf

  v2 = 0LL;
  v3 = a2;
  if ( a2 )
  {
    CurrentIrql = 17;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
    }
    v2 = MiMapPageInHyperSpaceWorker((a1 + 0x58000000000LL) / 48, 0LL, 0);
    v3 = (_QWORD *)v2;
  }
  PagingFileOffset = MiGetPagingFileOffset(a1 + 16);
  v7 = v3[1];
  v8 = v3 + 2;
  v9 = v3[2];
  v10 = v3[3];
  v11 = *v3 + PagingFileOffset;
  do
  {
    v8 += 4;
    v7 += *(v8 - 1);
    v11 += *(v8 - 2);
    v9 += *v8;
    v10 += v8[1];
  }
  while ( v8 - 2 != v3 + 508 );
  v12 = v7 + v10 + v9 + v11;
  if ( v2 )
  {
    MiUnmapPageInHyperSpaceWorker(v2, 0x11u, 0);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v15 = KeGetCurrentIrql();
        if ( v15 <= 0xFu && CurrentIrql <= 0xFu && v15 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v17 = CurrentPrcb->SchedulerAssist;
          v18 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v19 = (v18 & v17[5]) == 0;
          v17[5] &= v18;
          if ( v19 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
  }
  result = (unsigned int)(v12 + HIDWORD(v12));
  if ( (unsigned int)result < 3 )
    return 3LL;
  return result;
}
