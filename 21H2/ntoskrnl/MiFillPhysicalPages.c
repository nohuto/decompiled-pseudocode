/*
 * XREFs of MiFillPhysicalPages @ 0x1402977C0
 * Callers:
 *     MiGetPoolPages @ 0x1402629AC (MiGetPoolPages.c)
 *     MiInitializeSystemPageTable @ 0x1402967D4 (MiInitializeSystemPageTable.c)
 *     MiZeroPhysicalPage @ 0x1402976D0 (MiZeroPhysicalPage.c)
 *     MxMapVa @ 0x140A45B6C (MxMapVa.c)
 *     MiInitializeDummyPages @ 0x140A56944 (MiInitializeDummyPages.c)
 * Callees:
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     KeFlushSingleTb @ 0x1402599A8 (KeFlushSingleTb.c)
 *     MiMakeValidPte @ 0x140339480 (MiMakeValidPte.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14033C800 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140353660 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     KeZeroPages @ 0x140402F90 (KeZeroPages.c)
 *     MxGetPhase0Mapping @ 0x140A58438 (MxGetPhase0Mapping.c)
 */

__int64 __fastcall MiFillPhysicalPages(ULONG_PTR BugCheckParameter2, __int64 a2, unsigned __int64 a3)
{
  _QWORD *v3; // r12
  __int64 v6; // rbx
  void *HyperPte; // r14
  void *v8; // rbp
  __int64 result; // rax
  unsigned __int64 Phase0Mapping; // rax
  __int64 ValidPte; // rdi
  unsigned __int64 v12; // rdi
  __int64 v13; // [rsp+68h] [rbp+10h] BYREF

  v13 = a2;
  v3 = 0LL;
  LOBYTE(v13) = 17;
  v6 = 0LL;
  HyperPte = KeGetCurrentPrcb()->HyperPte;
  do
  {
    if ( HyperPte )
    {
      v8 = (void *)MiMapPageInHyperSpaceWorker(BugCheckParameter2, &v13, 0x80000000LL);
      goto LABEL_4;
    }
    Phase0Mapping = MxGetPhase0Mapping();
    v8 = (void *)Phase0Mapping;
    if ( !Phase0Mapping )
      KeBugCheckEx(0x1Au, 0x3030305uLL, BugCheckParameter2, 0LL, 0LL);
    v3 = (_QWORD *)(((Phase0Mapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    ValidPte = MiMakeValidPte(v3, BugCheckParameter2, 2684354564LL);
    if ( !(unsigned int)MiPteInShadowRange(v3) )
      goto LABEL_13;
    if ( !(unsigned int)MiPteHasShadow() )
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (ValidPte & 1) != 0 )
      {
        ValidPte |= 0x8000000000000000uLL;
      }
LABEL_13:
      *v3 = ValidPte;
      goto LABEL_4;
    }
    if ( !HIBYTE(word_140C4E048) && (ValidPte & 1) != 0 )
      ValidPte |= 0x8000000000000000uLL;
    *v3 = ValidPte;
    MiWritePteShadow((__int64)v3, ValidPte);
LABEL_4:
    if ( a3 )
      memset64(v8, a3, 0x200uLL);
    else
      KeZeroPages(v8, 4096LL);
    if ( HyperPte )
    {
      result = MiUnmapPageInHyperSpaceWorker(v8, (unsigned __int8)v13, 0x80000000LL);
      goto LABEL_8;
    }
    v12 = ZeroPte;
    if ( (unsigned int)MiPteInShadowRange(v3) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        if ( !HIBYTE(word_140C4E048) && (ZeroPte & 1) != 0 )
          v12 = ZeroPte | 0x8000000000000000uLL;
        *v3 = v12;
        MiWritePteShadow((__int64)v3, v12);
        goto LABEL_16;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (ZeroPte & 1) != 0 )
      {
        v12 = ZeroPte | 0x8000000000000000uLL;
      }
    }
    *v3 = v12;
LABEL_16:
    result = KeFlushSingleTb((unsigned __int64)v8, 0, 1u);
LABEL_8:
    ++v6;
    ++BugCheckParameter2;
  }
  while ( !v6 );
  return result;
}
