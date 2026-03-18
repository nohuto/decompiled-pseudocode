/*
 * XREFs of MmAllocateNonCachedMemory @ 0x1408C1DA0
 * Callers:
 *     <none>
 * Callees:
 *     MiReservePtes @ 0x1402743A0 (MiReservePtes.c)
 *     MiMakeValidPte @ 0x14028D330 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MmFreePagesFromMdl @ 0x14031FCB0 (MmFreePagesFromMdl.c)
 *     MiAllocatePagesForMdl @ 0x140342ADC (MiAllocatePagesForMdl.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

PVOID __stdcall MmAllocateNonCachedMemory(SIZE_T NumberOfBytes)
{
  SIZE_T v1; // rbp
  struct _MDL *PagesForMdl; // rbx
  ULONG_PTR v3; // rsi
  __int64 v4; // r9
  __int64 v6; // r14
  unsigned __int64 ValidPte; // rdi
  char *v8; // r12
  int v9; // r15d
  unsigned __int64 v10; // rbx
  bool v11; // zf

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
  v3 = MiReservePtes((__int64)&qword_140C4EE80, (unsigned int)v1);
  if ( !v3 )
  {
    MmFreePagesFromMdl(PagesForMdl);
    ExFreePoolWithTag(PagesForMdl, 0);
    return 0LL;
  }
  *(_QWORD *)(48 * (__int64)PagesForMdl[1].Next - 0x57FFFFFFFF0LL) = PagesForMdl;
  v6 = (__int64)(v3 << 25) >> 16;
  ValidPte = MiMakeValidPte(v3, 0LL, 2684354572LL, v4);
  v8 = (char *)&PagesForMdl[1] - v3;
  do
  {
    v9 = 0;
    ValidPte ^= (ValidPte ^ (*(_QWORD *)&v8[v3] << 12)) & 0xFFFFFFFFF000LL;
    v10 = ValidPte;
    if ( !MiPteInShadowRange(v3) )
      goto LABEL_15;
    if ( (unsigned int)MiPteHasShadow() )
    {
      v9 = 1;
      if ( HIBYTE(word_140C4DF48) )
        goto LABEL_15;
      v11 = (ValidPte & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_15;
      v11 = (ValidPte & 1) == 0;
    }
    if ( !v11 )
      v10 = ValidPte | 0x8000000000000000uLL;
LABEL_15:
    *(_QWORD *)v3 = v10;
    if ( v9 )
      MiWritePteShadow(v3, v10);
    v3 += 8LL;
    --v1;
  }
  while ( v1 );
  return (PVOID)v6;
}
