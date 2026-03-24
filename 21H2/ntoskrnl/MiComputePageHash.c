/*
 * XREFs of MiComputePageHash @ 0x14038A190
 * Callers:
 *     MiWritePageFileHash @ 0x140389FC4 (MiWritePageFileHash.c)
 *     MiValidatePagefilePageHash @ 0x14055D71C (MiValidatePagefilePageHash.c)
 * Callees:
 *     MiGetPagingFileOffset @ 0x1402712A0 (MiGetPagingFileOffset.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140331AB0 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140348910 (MiUnmapPageInHyperSpaceWorker.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiComputePageHash(__int64 a1, _QWORD *a2)
{
  unsigned __int64 v2; // r14
  _QWORD *v3; // rsi
  unsigned __int8 CurrentIrql; // di
  unsigned int PagingFileOffset; // eax
  __int64 v7; // rdx
  __int64 v8; // r8
  _QWORD *v9; // rcx
  __int64 v10; // r9
  __int64 v11; // r10
  __int64 v12; // rbx
  __int64 v13; // rbx
  __int64 result; // rax
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v16; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v18; // r8
  int v19; // eax
  bool v20; // zf

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
  v8 = v3[1];
  v9 = v3 + 2;
  v10 = v3[2];
  v11 = v3[3];
  v12 = *v3 + PagingFileOffset;
  do
  {
    v9 += 4;
    v8 += *(v9 - 1);
    v12 += *(v9 - 2);
    v10 += *v9;
    v11 += v9[1];
  }
  while ( v9 - 2 != v3 + 508 );
  v13 = v8 + v11 + v10 + v12;
  if ( v2 )
  {
    LOBYTE(v7) = 17;
    MiUnmapPageInHyperSpaceWorker(v2, v7, 0);
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
  result = (unsigned int)(v13 + HIDWORD(v13));
  if ( (unsigned int)result < 3 )
    return 3LL;
  return result;
}
