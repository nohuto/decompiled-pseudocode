/*
 * XREFs of MiCreatePfnDatabase @ 0x140AF4DB0
 * Callers:
 *     MiInitNucleus @ 0x140AF47DC (MiInitNucleus.c)
 * Callees:
 *     MiPopulateFreeKernelShadowStackCacheEntries @ 0x1403B72B4 (MiPopulateFreeKernelShadowStackCacheEntries.c)
 *     MiGetPartitionLargePageListCount @ 0x1403B7A60 (MiGetPartitionLargePageListCount.c)
 *     MiInitializePartition @ 0x14081D450 (MiInitializePartition.c)
 *     MiInitializeNumaGraph @ 0x140AF502C (MiInitializeNumaGraph.c)
 *     MiInitializePartitions @ 0x140AF50EC (MiInitializePartitions.c)
 *     MiCreateSparsePfnDatabase @ 0x140AF5D1C (MiCreateSparsePfnDatabase.c)
 *     MiInitializeColors @ 0x140AF67F0 (MiInitializeColors.c)
 */

__int64 __fastcall MiCreatePfnDatabase(__int64 a1)
{
  int v2; // edi
  unsigned int v3; // r8d
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rdx
  unsigned __int64 *v7; // rax
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // r14
  __int64 v10; // r10
  unsigned __int64 *v11; // r11
  __int64 v12; // rax
  __int64 v13; // rdi
  unsigned __int64 v14; // rbx
  __int64 *v15; // rcx

  MiInitializeColors();
  v2 = (unsigned __int16)KeNumberNodes;
  v3 = dword_140C5073C * (unsigned __int16)KeNumberNodes * (unsigned __int8)MiChannelMaximumPowerOf2;
  v4 = qword_140C50840 + 1;
  dword_140C5073C = v3;
  if ( qword_140C52CE0 == qword_140C50840 + 1 )
    v4 = qword_140C50840 + 2049;
  v5 = 88LL * v3;
  qword_140C55900 = 48 * v4;
  v6 = v5 + 48 * v4;
  v7 = (unsigned __int64 *)&unk_140C56958;
  qword_140C55908 = v6;
  v8 = (v6 + v5 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
  do
  {
    *v7 = v8;
    v8 += 16LL * v3;
    ++v7;
  }
  while ( (__int64)v7 < (__int64)qword_140C56968 );
  v9 = v8;
  qword_140C58D68 = 24512LL * (unsigned __int16)KeNumberNodes + v8;
  qword_140C58DF0 = qword_140C58D68 + 24LL * (unsigned int)MiGetPartitionLargePageListCount();
  qword_140C506E0 = (qword_140C58DF0 + v10 * (16LL * (unsigned int)dword_140C507C0[0] + 8) + 15) & 0xFFFFFFFFFFFFFFF0uLL;
  v12 = v2 * v2;
  qword_140C506D8 = 120 * v10 + qword_140C506E0;
  v13 = 24576 * v10;
  qword_140C52F28 = (qword_140C506D8 + 4 * v12 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
  qword_140C52F30 = 144 * v10 + qword_140C52F28;
  qword_140C52F38 = 72 * v10 + qword_140C52F30;
  v14 = (qword_140C52F38 + 72 * v10 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
  MxPfnAllocation = (v14 + 24576 * v10 + 4095) >> 12;
  MmPfnDatabase = 0xFFFFDE0000000000uLL;
  v15 = &qword_140C55900;
  do
    *v15++ -= 0x220000000000LL;
  while ( (__int64)v15 < (__int64)qword_140C55910 );
  do
    *v11++ -= 0x220000000000LL;
  while ( (__int64)v11 < (__int64)qword_140C56968 );
  qword_140C58D68 -= 0x220000000000LL;
  qword_140C58DF0 -= 0x220000000000LL;
  qword_140C506E0 -= 0x220000000000LL;
  qword_140C506D8 -= 0x220000000000LL;
  qword_140C52F28 -= 0x220000000000LL;
  qword_140C52F30 -= 0x220000000000LL;
  qword_140C52F38 -= 0x220000000000LL;
  qword_140C54F90 = v9 - 0x220000000000LL;
  if ( !(unsigned int)MiCreateSparsePfnDatabase(a1) )
    return 0LL;
  MiInitializePartitions(0LL);
  MiInitializePartition((__int64)&MiSystemPartition, 0);
  MiPopulateFreeKernelShadowStackCacheEntries(
    (union _SLIST_HEADER *)&MiSystemPartition,
    (struct _SLIST_ENTRY *)(v14 + MmPfnDatabase),
    v13);
  MiInitializeNumaGraph(a1);
  return 1LL;
}
