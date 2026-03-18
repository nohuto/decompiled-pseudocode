/*
 * XREFs of MiUpdateHugePageCounts @ 0x14058938C
 * Callers:
 *     MiAddPartitionHugeRange @ 0x14058617C (MiAddPartitionHugeRange.c)
 *     MiHotRemoveHugeRange @ 0x140586A44 (MiHotRemoveHugeRange.c)
 *     MiInsertHugeRangeInList @ 0x1405875A0 (MiInsertHugeRangeInList.c)
 *     MiReleasePartitionHugeIoSpace @ 0x140588C48 (MiReleasePartitionHugeIoSpace.c)
 *     MiSetHugeRangePartitionId @ 0x140588F74 (MiSetHugeRangePartitionId.c)
 * Callees:
 *     MiSearchNumaNodeTable @ 0x1402C1550 (MiSearchNumaNodeTable.c)
 */

__int64 __fastcall MiUpdateHugePageCounts(__int64 a1, int a2, unsigned __int64 a3, int a4)
{
  _QWORD *v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int64 v10; // rcx
  __int64 result; // rax

  v7 = MiSearchNumaNodeTable((unsigned __int64)(a2 & 0x3FFFFF) << 18);
  v8 = *(_QWORD *)(a1 + 16);
  v9 = 24512LL * *((unsigned int *)v7 + 2);
  v10 = a3 + *(_QWORD *)(v9 + v8 + 22632);
  if ( !a4 )
    v10 = *(_QWORD *)(v9 + v8 + 22632) - a3;
  result = -(__int64)a3;
  *(_QWORD *)(v9 + v8 + 22632) = v10;
  if ( !a4 )
    a3 = -(__int64)a3;
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 424), a3);
  return result;
}
