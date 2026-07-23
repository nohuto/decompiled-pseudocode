/*
 * XREFs of MiClearFileOnlyPfn @ 0x14053FF1C
 * Callers:
 *     MiInsertPageInFreeOrZeroedList @ 0x1402D9760 (MiInsertPageInFreeOrZeroedList.c)
 * Callees:
 *     MiQueueExtentPfnDeletion @ 0x1405421AC (MiQueueExtentPfnDeletion.c)
 */

__int64 __fastcall MiClearFileOnlyPfn(__int64 a1)
{
  __int64 v1; // rax
  __int128 v3; // [rsp+30h] [rbp-20h]
  __int128 v4; // [rsp+40h] [rbp-10h]

  *(_QWORD *)&v4 = 4521984LL;
  *(_QWORD *)&v3 = 0LL;
  *((_QWORD *)&v3 + 1) = 0x8000000000000000uLL;
  v1 = 0LL;
  if ( ((*(_QWORD *)(a1 + 40) >> 60) & 7) == 3 )
    v1 = 0x3000000000000000LL;
  *(_OWORD *)a1 = 0LL;
  *((_QWORD *)&v4 + 1) = v1 | 0x6000000000000LL;
  *(_OWORD *)(a1 + 16) = v3;
  *(_OWORD *)(a1 + 32) = v4;
  return MiQueueExtentPfnDeletion(a1);
}
