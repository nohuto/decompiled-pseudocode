/*
 * XREFs of MiCreatePfnDatabase @ 0x140A3D8FC
 * Callers:
 *     MiInitNucleus @ 0x140A3D174 (MiInitNucleus.c)
 * Callees:
 *     MiGetPartitionLargePageListCount @ 0x1403F0DE8 (MiGetPartitionLargePageListCount.c)
 *     MiInitializePartition @ 0x140780EE8 (MiInitializePartition.c)
 *     MiInitializeNumaGraph @ 0x140A3DB18 (MiInitializeNumaGraph.c)
 *     MiInitializePartitions @ 0x140A3DBDC (MiInitializePartitions.c)
 *     MiCreateSparsePfnDatabase @ 0x140A3E958 (MiCreateSparsePfnDatabase.c)
 *     MiInitializeColors @ 0x140A3F334 (MiInitializeColors.c)
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
  v3 = (unsigned __int16)KeNumberNodes * (unsigned int)(unsigned __int8)MiChannelMaximumPowerOf2 * dword_140C4DCFC;
  qword_140C51400 = 0x30000000000LL;
  v4 = (unsigned int)v3;
  dword_140C4DCFC *= (unsigned __int16)KeNumberNodes * (unsigned __int8)MiChannelMaximumPowerOf2;
  v3 *= 5LL;
  qword_140C51408 = 8 * v3 + 0x30000000000LL;
  v5 = (unsigned __int64 *)&unk_140C51BE8;
  v6 = (qword_140C51408 + 8 * v3 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
  v7 = 16 * v4;
  do
  {
    *v5 = v6;
    v6 += v7;
    ++v5;
  }
  while ( (__int64)v5 < (__int64)qword_140C51BF8 );
  qword_140C51F68 = 4544LL * (unsigned __int16)KeNumberNodes + v6;
  qword_140C52390 = qword_140C51F68 + 24LL * (unsigned int)MiGetPartitionLargePageListCount();
  SListHead = (PSLIST_HEADER)((qword_140C52390 + 16 * v8 * (unsigned int)dword_140C4DD80[0] + 23) & 0xFFFFFFFFFFFFFFF0uLL);
  qword_140C4DC98 = (__int64)&SListHead[11 * v8];
  qword_140C4E8E8 = (qword_140C4DC98 + 4LL * v2 * v2 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
  v10 = 144 * v8 + qword_140C4E8E8;
  MxPfnAllocation = (unsigned __int64)(v10 + 72 * v8 + 4095) >> 12;
  MmPfnDatabase = 0xFFFFFA8000000000uLL;
  v11 = &qword_140C51400;
  do
    *v11++ -= 0x58000000000LL;
  while ( (__int64)v11 < (__int64)qword_140C51410 );
  do
    *v9++ -= 0x58000000000LL;
  while ( (__int64)v9 < (__int64)qword_140C51BF8 );
  qword_140C51F68 -= 0x58000000000LL;
  qword_140C52390 -= 0x58000000000LL;
  SListHead -= 0x5800000000uLL;
  qword_140C4DC98 -= 0x58000000000LL;
  qword_140C4E8E8 -= 0x58000000000LL;
  qword_140C4E8F0 = v10 - 0x58000000000LL;
  qword_140C50B90 = v6 - 0x58000000000LL;
  result = MiCreateSparsePfnDatabase(a1);
  if ( (_DWORD)result )
  {
    MiInitializePartitions(0LL);
    MiInitializePartition((__int64)&MiSystemPartition, 0);
    MiInitializeNumaGraph(a1);
    return 1LL;
  }
  return result;
}
