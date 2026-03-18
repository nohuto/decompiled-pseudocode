/*
 * XREFs of MiCreatePfnDatabase @ 0x140A43B9C
 * Callers:
 *     MiInitNucleus @ 0x140A43414 (MiInitNucleus.c)
 * Callees:
 *     MiGetPartitionLargePageListCount @ 0x1403F52FC (MiGetPartitionLargePageListCount.c)
 *     MiInitializePartition @ 0x14078E400 (MiInitializePartition.c)
 *     MiInitializeNumaGraph @ 0x140A43DB8 (MiInitializeNumaGraph.c)
 *     MiInitializePartitions @ 0x140A43E7C (MiInitializePartitions.c)
 *     MiCreateSparsePfnDatabase @ 0x140A44BF8 (MiCreateSparsePfnDatabase.c)
 *     MiInitializeColors @ 0x140A455D4 (MiInitializeColors.c)
 */

__int64 __fastcall MiCreatePfnDatabase(__int64 a1)
{
  int v2; // esi
  __int64 v3; // rdx
  __int64 v4; // r8
  unsigned __int64 *v5; // rax
  unsigned __int64 v6; // rbx
  __int64 v7; // r8
  __int64 v8; // r10
  unsigned __int64 *v9; // r11
  __int64 v10; // r8
  __int64 *v11; // rcx
  __int64 result; // rax

  MiInitializeColors();
  v2 = (unsigned __int16)KeNumberNodes;
  v3 = (unsigned __int16)KeNumberNodes * (unsigned int)(unsigned __int8)MiChannelMaximumPowerOf2 * dword_140C4DD7C;
  qword_140C51480 = 0x30000000000LL;
  v4 = (unsigned int)v3;
  dword_140C4DD7C *= (unsigned __int16)KeNumberNodes * (unsigned __int8)MiChannelMaximumPowerOf2;
  v3 *= 5LL;
  qword_140C51488 = 8 * v3 + 0x30000000000LL;
  v5 = (unsigned __int64 *)&unk_140C51C68;
  v6 = (qword_140C51488 + 8 * v3 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
  v7 = 16 * v4;
  do
  {
    *v5 = v6;
    v6 += v7;
    ++v5;
  }
  while ( (__int64)v5 < (__int64)qword_140C51C78 );
  qword_140C51FE8 = 4544LL * (unsigned __int16)KeNumberNodes + v6;
  qword_140C52410 = qword_140C51FE8 + 24LL * (unsigned int)MiGetPartitionLargePageListCount();
  SListHead = (PSLIST_HEADER)((qword_140C52410 + 16 * v8 * (unsigned int)dword_140C4DE00[0] + 23) & 0xFFFFFFFFFFFFFFF0uLL);
  qword_140C4DD18 = (__int64)&SListHead[11 * v8];
  qword_140C4E968 = (qword_140C4DD18 + 4LL * v2 * v2 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
  v10 = 144 * v8 + qword_140C4E968;
  MxPfnAllocation = (unsigned __int64)(v10 + 72 * v8 + 4095) >> 12;
  MmPfnDatabase = 0xFFFFFA8000000000uLL;
  v11 = &qword_140C51480;
  do
    *v11++ -= 0x58000000000LL;
  while ( (__int64)v11 < (__int64)qword_140C51490 );
  do
    *v9++ -= 0x58000000000LL;
  while ( (__int64)v9 < (__int64)qword_140C51C78 );
  qword_140C51FE8 -= 0x58000000000LL;
  qword_140C52410 -= 0x58000000000LL;
  SListHead -= 0x5800000000uLL;
  qword_140C4DD18 -= 0x58000000000LL;
  qword_140C4E968 -= 0x58000000000LL;
  qword_140C4E970 = v10 - 0x58000000000LL;
  qword_140C50C10 = v6 - 0x58000000000LL;
  result = MiCreateSparsePfnDatabase(a1);
  if ( (_DWORD)result )
  {
    MiInitializePartitions(0LL);
    MiInitializePartition((unsigned __int64)&MiSystemPartition, 0);
    MiInitializeNumaGraph(a1);
    return 1LL;
  }
  return result;
}
