/*
 * XREFs of MmAllocateNonCachedMemory @ 0x1408C6850
 * Callers:
 *     <none>
 * Callees:
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MmFreePagesFromMdl @ 0x14024E380 (MmFreePagesFromMdl.c)
 *     MiAllocatePagesForMdl @ 0x140294744 (MiAllocatePagesForMdl.c)
 *     MiReservePtes @ 0x1402CAEB0 (MiReservePtes.c)
 *     MiMakeValidPte @ 0x140339480 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

PVOID __stdcall MmAllocateNonCachedMemory(SIZE_T NumberOfBytes)
{
  SIZE_T v1; // rbp
  struct _MDL *PagesForMdl; // rbx
  __int64 v3; // r8
  unsigned __int64 v4; // r9
  ULONG_PTR v5; // rsi
  __int64 v7; // r14
  unsigned __int64 ValidPte; // rdi
  char *v9; // r12
  int v10; // r15d
  unsigned __int64 v11; // rbx
  bool v12; // zf

  if ( NumberOfBytes >= 0x100000000LL )
    return 0LL;
  v1 = (NumberOfBytes >> 12) + ((NumberOfBytes & 0xFFF) != 0);
  PagesForMdl = (struct _MDL *)MiAllocatePagesForMdl(
                                 (int)&MiSystemPartition,
                                 0LL,
                                 -1LL,
                                 0LL,
                                 NumberOfBytes,
                                 0,
                                 *(unsigned __int16 *)(*(_QWORD *)(KiProcessorBlock[KeGetCurrentThread()->IdealProcessor]
                                                                 + 192)
                                                     + 146LL),
                                 4);
  if ( !PagesForMdl )
    return 0LL;
  v5 = MiReservePtes((__int64)&qword_140C4EF80, v1, v3, v4);
  if ( !v5 )
  {
    MmFreePagesFromMdl(PagesForMdl);
    ExFreePoolWithTag(PagesForMdl, 0);
    return 0LL;
  }
  *(_QWORD *)(48 * (__int64)PagesForMdl[1].Next - 0x57FFFFFFFF0LL) = PagesForMdl;
  v7 = (__int64)(v5 << 25) >> 16;
  ValidPte = MiMakeValidPte(v5, 0LL, -1610612724);
  v9 = (char *)&PagesForMdl[1] - v5;
  do
  {
    v10 = 0;
    ValidPte ^= (ValidPte ^ (*(_QWORD *)&v9[v5] << 12)) & 0xFFFFFFFFF000LL;
    v11 = ValidPte;
    if ( !MiPteInShadowRange(v5) )
      goto LABEL_15;
    if ( (unsigned int)MiPteHasShadow() )
    {
      v10 = 1;
      if ( HIBYTE(word_140C4E048) )
        goto LABEL_15;
      v12 = (ValidPte & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_15;
      v12 = (ValidPte & 1) == 0;
    }
    if ( !v12 )
      v11 = ValidPte | 0x8000000000000000uLL;
LABEL_15:
    *(_QWORD *)v5 = v11;
    if ( v10 )
      MiWritePteShadow(v5, v11);
    v5 += 8LL;
    --v1;
  }
  while ( v1 );
  return (PVOID)v7;
}
