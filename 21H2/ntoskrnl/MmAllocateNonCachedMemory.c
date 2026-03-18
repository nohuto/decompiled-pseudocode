/*
 * XREFs of MmAllocateNonCachedMemory @ 0x14096A490
 * Callers:
 *     DifMmAllocateNonCachedMemoryWrapper @ 0x1406168D0 (DifMmAllocateNonCachedMemoryWrapper.c)
 * Callees:
 *     MmFreePagesFromMdl @ 0x140221A10 (MmFreePagesFromMdl.c)
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MiAllocatePagesForMdl @ 0x140265428 (MiAllocatePagesForMdl.c)
 *     MiMakeValidPte @ 0x1402CBD10 (MiMakeValidPte.c)
 *     MiReservePtes @ 0x1403095B0 (MiReservePtes.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     KeGetIdealNodeNumberThread @ 0x14056D710 (KeGetIdealNodeNumberThread.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

PVOID __stdcall MmAllocateNonCachedMemory(SIZE_T NumberOfBytes)
{
  SIZE_T v1; // rbp
  unsigned __int16 IdealNodeNumberThread; // ax
  unsigned __int64 v3; // r8
  struct _MDL *PagesForMdl; // rbx
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
  IdealNodeNumberThread = KeGetIdealNodeNumberThread((__int64)KeGetCurrentThread());
  PagesForMdl = (struct _MDL *)MiAllocatePagesForMdl(
                                 (__int64)&MiSystemPartition,
                                 0LL,
                                 0xFFFFFFFFFFFFFFFFuLL,
                                 0LL,
                                 v3,
                                 0,
                                 IdealNodeNumberThread,
                                 4,
                                 (__int64)KeGetCurrentThread()->ApcState.Process);
  if ( !PagesForMdl )
    return 0LL;
  v5 = MiReservePtes((__int64)&qword_140C534C0, v1);
  if ( !v5 )
  {
    MmFreePagesFromMdl(PagesForMdl);
    ExFreePoolWithTag(PagesForMdl, 0);
    return 0LL;
  }
  *(_QWORD *)(48 * (__int64)PagesForMdl[1].Next - 0x21FFFFFFFFF0LL) = PagesForMdl;
  v7 = (__int64)(v5 << 25) >> 16;
  ValidPte = MiMakeValidPte(v5, 0LL, -1610612724);
  v9 = (char *)&PagesForMdl[1] - v5;
  do
  {
    v10 = 0;
    ValidPte ^= (ValidPte ^ (*(_QWORD *)&v9[v5] << 12)) & 0xFFFFFFFFFF000LL;
    v11 = ValidPte;
    if ( !MiPteInShadowRange(v5) )
      goto LABEL_15;
    if ( (unsigned int)MiPteHasShadow() )
    {
      v10 = 1;
      if ( HIBYTE(word_140C51864) )
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
