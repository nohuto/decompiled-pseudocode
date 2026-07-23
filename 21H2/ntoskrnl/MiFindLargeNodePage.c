/*
 * XREFs of MiFindLargeNodePage @ 0x140395020
 * Callers:
 *     MiFindContiguousPages @ 0x14030C430 (MiFindContiguousPages.c)
 *     MiAllocatePartitionPhysicalPages @ 0x1408DAAD8 (MiAllocatePartitionPhysicalPages.c)
 * Callees:
 *     MiSetPfnOwnedAndActive @ 0x1402E0490 (MiSetPfnOwnedAndActive.c)
 *     MiUpdateLargePageBitMap @ 0x14030ADE0 (MiUpdateLargePageBitMap.c)
 *     MiGetLargePagesDemoteAsNeeded @ 0x1403F5870 (MiGetLargePagesDemoteAsNeeded.c)
 *     MiConvertEntireLargePageToSmall @ 0x1403F5C28 (MiConvertEntireLargePageToSmall.c)
 *     MiGetFreeZeroLargePages @ 0x1403F6914 (MiGetFreeZeroLargePages.c)
 *     MiGetPfnPageSizeIndex @ 0x1403F6AD8 (MiGetPfnPageSizeIndex.c)
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
  __int64 v18; // rdi
  unsigned int PfnPageSizeIndex; // eax
  unsigned __int64 v21; // r14
  __int64 v22; // rbx
  unsigned __int64 v23; // rbp
  int v24; // esi
  int v25; // [rsp+40h] [rbp-38h]
  int v26; // [rsp+90h] [rbp+18h]
  int v27; // [rsp+A0h] [rbp+28h]

  v9 = MiLargePageSizes[*a3];
  v26 = v9;
  if ( a2 >= (unsigned __int16)KeNumberNodes )
  {
    a2 = *(_DWORD *)(KiProcessorBlock[KeGetCurrentThread()->IdealProcessor] + 32532);
    v10 = (unsigned int *)(qword_140C4DED8 + 4LL * a2 * (unsigned __int16)KeNumberNodes);
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
  v25 = v15;
  v27 = v16;
  while ( 1 )
  {
    v17 = v16
        ? MiGetFreeZeroLargePages(a1, *a3, 1, v14, a2, 0, 4, a7)
        : MiGetLargePagesDemoteAsNeeded(a1, a2, v9, v15, 0, v14, a7);
    v18 = v17;
    if ( v17 )
      break;
    if ( ++v10 == (unsigned int *)v11 )
      return 0LL;
    a2 = *v10;
    v16 = v27;
    LODWORD(v9) = v26;
    LODWORD(v15) = v25;
  }
  PfnPageSizeIndex = MiGetPfnPageSizeIndex(v17);
  *a3 = PfnPageSizeIndex;
  v21 = MiLargePageSizes[PfnPageSizeIndex];
  MiUpdateLargePageBitMap(a1, (v18 + 0x58000000000LL) / 48, v21, 1, 1);
  MiConvertEntireLargePageToSmall(v18, *a3, 0, 1, 0LL, 0LL);
  if ( (a5 & 0x40000000) == 0 )
  {
    v22 = *(_QWORD *)(v18 + 16);
    v23 = v21;
    v24 = ((a5 & 0x100000) != 0) + 1;
    do
    {
      MiSetPfnOwnedAndActive(v18, a6, -8LL, a7, v24);
      *(_QWORD *)(v18 + 16) = v22;
      v18 += 48LL;
      --v23;
    }
    while ( v23 );
    v18 += -48LL * v21;
  }
  return v18;
}
