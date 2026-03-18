/*
 * XREFs of MiFindLargeNodePage @ 0x140394A60
 * Callers:
 *     MiFindContiguousPages @ 0x14034B980 (MiFindContiguousPages.c)
 *     MiAllocatePartitionPhysicalPages @ 0x1408DD1B8 (MiAllocatePartitionPhysicalPages.c)
 * Callees:
 *     MiSetPfnOwnedAndActive @ 0x1402CA460 (MiSetPfnOwnedAndActive.c)
 *     MiUpdateLargePageBitMap @ 0x14034A334 (MiUpdateLargePageBitMap.c)
 *     MiGetLargePagesDemoteAsNeeded @ 0x1403F4030 (MiGetLargePagesDemoteAsNeeded.c)
 *     MiConvertEntireLargePageToSmall @ 0x1403F448C (MiConvertEntireLargePageToSmall.c)
 *     MiGetFreeZeroLargePages @ 0x1403F5178 (MiGetFreeZeroLargePages.c)
 *     MiGetPfnPageSizeIndex @ 0x1403F533C (MiGetPfnPageSizeIndex.c)
 */

__int64 __fastcall MiFindLargeNodePage(
        __int64 a1,
        unsigned int a2,
        unsigned int *a3,
        int a4,
        int a5,
        char a6,
        unsigned int a7)
{
  __int64 v9; // r11
  unsigned int *v10; // rbx
  __int64 v11; // rbp
  int v13; // ecx
  int v14; // r14d
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdi
  unsigned int PfnPageSizeIndex; // eax
  unsigned __int64 v24; // r14
  __int64 v25; // rbx
  unsigned __int64 v26; // rbp
  int v27; // esi
  int v28; // [rsp+40h] [rbp-38h]
  int v29; // [rsp+90h] [rbp+18h]
  int v30; // [rsp+A0h] [rbp+28h]

  v9 = MiLargePageSizes[*a3];
  v29 = v9;
  if ( a2 >= (unsigned __int16)KeNumberNodes )
  {
    a2 = *(_DWORD *)(KiProcessorBlock[KeGetCurrentThread()->IdealProcessor] + 32532);
    v10 = (unsigned int *)(qword_140C4DD18 + 4LL * a2 * (unsigned __int16)KeNumberNodes);
    v11 = (__int64)&v10[(unsigned __int16)KeNumberNodes];
  }
  else
  {
    v10 = 0LL;
    v11 = 4LL;
  }
  v13 = (4 * ((a5 & 1) == 0)) | 1;
  if ( (a5 & 0x8000) == 0 )
    v13 = 4 * ((a5 & 1) == 0);
  v14 = v13 | 0x10;
  if ( (a5 & 8) != 0 )
    v14 = v13;
  v15 = MiLargePageSizes[a4];
  v16 = a5 & 0x4000;
  v28 = v15;
  v30 = v16;
  while ( 1 )
  {
    v17 = v16
        ? MiGetFreeZeroLargePages(a1, *a3, 1, v14, a2, 0, 4, a7)
        : MiGetLargePagesDemoteAsNeeded(a1, a2, v9, v15, 0, v14, a7);
    v21 = v17;
    if ( v17 )
      break;
    if ( ++v10 == (unsigned int *)v11 )
      return 0LL;
    a2 = *v10;
    v16 = v30;
    LODWORD(v9) = v29;
    LODWORD(v15) = v28;
  }
  PfnPageSizeIndex = MiGetPfnPageSizeIndex(v17, v18, v19, v20);
  *a3 = PfnPageSizeIndex;
  v24 = MiLargePageSizes[PfnPageSizeIndex];
  MiUpdateLargePageBitMap(a1, (v21 + 0x58000000000LL) / 48, v24, 1, 1);
  MiConvertEntireLargePageToSmall(v21, *a3, 0, 1, 0LL, 0LL);
  if ( (a5 & 0x40000000) == 0 )
  {
    v25 = *(_QWORD *)(v21 + 16);
    v26 = v24;
    v27 = ((a5 & 0x100000) != 0) + 1;
    do
    {
      MiSetPfnOwnedAndActive(v21, a6, -8LL, a7, v27);
      *(_QWORD *)(v21 + 16) = v25;
      v21 += 48LL;
      --v26;
    }
    while ( v26 );
    v21 += -48LL * v24;
  }
  return v21;
}
