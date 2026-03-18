/*
 * XREFs of MmAllocateNonCachedMemory @ 0x1408C30F0
 * Callers:
 *     <none>
 * Callees:
 *     MiReservePtes @ 0x14021B350 (MiReservePtes.c)
 *     MiMakeValidPte @ 0x1402342E0 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiAllocatePagesForMdl @ 0x14031379C (MiAllocatePagesForMdl.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     MmFreePagesFromMdl @ 0x14035D760 (MmFreePagesFromMdl.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

PVOID __stdcall MmAllocateNonCachedMemory(SIZE_T NumberOfBytes)
{
  SIZE_T v1; // rbp
  struct _MDL *PagesForMdl; // rbx
  __int64 v3; // r8
  unsigned __int64 v4; // r9
  ULONG_PTR v5; // rsi
  __int64 v6; // r9
  __int64 v8; // r14
  unsigned __int64 ValidPte; // rdi
  char *v10; // r12
  int v11; // r15d
  unsigned __int64 v12; // rbx
  __int64 v13; // r8
  bool v14; // zf

  if ( NumberOfBytes >= 0x100000000LL )
    return 0LL;
  v1 = (NumberOfBytes >> 12) + ((NumberOfBytes & 0xFFF) != 0);
  PagesForMdl = (struct _MDL *)MiAllocatePagesForMdl(
                                 (__int64)&MiSystemPartition,
                                 0LL,
                                 0xFFFFFFFFFFFFFFFFuLL,
                                 0LL,
                                 NumberOfBytes,
                                 0,
                                 *(unsigned __int16 *)(*(_QWORD *)(KiProcessorBlock[KeGetCurrentThread()->IdealProcessor]
                                                                 + 192)
                                                     + 146LL),
                                 4);
  if ( !PagesForMdl )
    return 0LL;
  v5 = MiReservePtes((__int64)&qword_140C4ED40, v1, v3, v4);
  if ( !v5 )
  {
    MmFreePagesFromMdl(PagesForMdl);
    ExFreePoolWithTag(PagesForMdl, 0);
    return 0LL;
  }
  *(_QWORD *)(48 * (__int64)PagesForMdl[1].Next - 0x57FFFFFFFF0LL) = PagesForMdl;
  v8 = (__int64)(v5 << 25) >> 16;
  ValidPte = MiMakeValidPte(v5, 0LL, 2684354572LL, v6);
  v10 = (char *)&PagesForMdl[1] - v5;
  do
  {
    v11 = 0;
    ValidPte ^= (ValidPte ^ (*(_QWORD *)&v10[v5] << 12)) & 0xFFFFFFFFF000LL;
    v12 = ValidPte;
    if ( !MiPteInShadowRange(v5) )
      goto LABEL_15;
    if ( (unsigned int)MiPteHasShadow() )
    {
      v11 = 1;
      if ( HIBYTE(word_140C4DE08) )
        goto LABEL_15;
      v14 = (ValidPte & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_15;
      v14 = (ValidPte & 1) == 0;
    }
    if ( !v14 )
      v12 = ValidPte | 0x8000000000000000uLL;
LABEL_15:
    *(_QWORD *)v5 = v12;
    if ( v11 )
      MiWritePteShadow(v5, v12, v13);
    v5 += 8LL;
    --v1;
  }
  while ( v1 );
  return (PVOID)v8;
}
