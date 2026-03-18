/*
 * XREFs of MiComputePageHash @ 0x140389A40
 * Callers:
 *     MiWritePageFileHash @ 0x140389874 (MiWritePageFileHash.c)
 *     MiValidatePagefilePageHash @ 0x14055BC4C (MiValidatePagefilePageHash.c)
 * Callees:
 *     MiUnmapPageInHyperSpaceWorker @ 0x14021E940 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiGetPagingFileOffset @ 0x1402397FC (MiGetPagingFileOffset.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140349980 (MiMapPageInHyperSpaceWorker.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiComputePageHash(__int64 a1, _QWORD *a2, __int64 a3, _DWORD *SchedulerAssist)
{
  unsigned __int64 v4; // r14
  _QWORD *v5; // rsi
  unsigned __int8 CurrentIrql; // di
  unsigned int PagingFileOffset; // eax
  __int64 v9; // r8
  _QWORD *v10; // rcx
  __int64 v11; // r9
  __int64 v12; // r10
  __int64 v13; // rbx
  __int64 v14; // rbx
  __int64 result; // rax
  unsigned __int8 v16; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v18; // r8
  int v19; // eax
  bool v20; // zf

  v4 = 0LL;
  v5 = a2;
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
    v4 = MiMapPageInHyperSpaceWorker((a1 + 0x58000000000LL) / 48, 0LL, 0, (__int64)SchedulerAssist);
    v5 = (_QWORD *)v4;
  }
  PagingFileOffset = MiGetPagingFileOffset(a1 + 16);
  v9 = v5[1];
  v10 = v5 + 2;
  v11 = v5[2];
  v12 = v5[3];
  v13 = *v5 + PagingFileOffset;
  do
  {
    v10 += 4;
    v9 += *(v10 - 1);
    v13 += *(v10 - 2);
    v11 += *v10;
    v12 += v10[1];
  }
  while ( v10 - 2 != v5 + 508 );
  v14 = v9 + v12 + v11 + v13;
  if ( v4 )
  {
    MiUnmapPageInHyperSpaceWorker(v4, 0x11u, 0);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v16 = KeGetCurrentIrql();
        if ( v16 <= 0xFu && CurrentIrql <= 0xFu && v16 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v18 = CurrentPrcb->SchedulerAssist;
          v19 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v20 = (v19 & v18[5]) == 0;
          v18[5] &= v19;
          if ( v20 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
  }
  result = (unsigned int)(v14 + HIDWORD(v14));
  if ( (unsigned int)result < 3 )
    return 3LL;
  return result;
}
