/*
 * XREFs of MiFillPhysicalPages @ 0x1403511A8
 * Callers:
 *     MiGetPoolPages @ 0x140326CB4 (MiGetPoolPages.c)
 *     MiInitializeSystemPageTable @ 0x140328C34 (MiInitializeSystemPageTable.c)
 *     MiZeroPhysicalPage @ 0x1403510C0 (MiZeroPhysicalPage.c)
 *     MxMapVa @ 0x140A45B74 (MxMapVa.c)
 *     MiInitializeDummyPages @ 0x140A4DFBC (MiInitializeDummyPages.c)
 * Callees:
 *     MiMakeValidPte @ 0x14028D330 (MiMakeValidPte.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1402915F0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     KeFlushSingleTb @ 0x14034C17C (KeFlushSingleTb.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140353460 (MiMapPageInHyperSpaceWorker.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     KeZeroPages @ 0x1403F9D70 (KeZeroPages.c)
 *     MxGetPhase0Mapping @ 0x140A4FA94 (MxGetPhase0Mapping.c)
 */

char __fastcall MiFillPhysicalPages(ULONG_PTR BugCheckParameter2, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  unsigned __int64 *v4; // rbx
  __int64 v7; // r15
  void *HyperPte; // r12
  __int64 v9; // rdx
  void *v10; // rsi
  char result; // al
  unsigned __int64 Phase0Mapping; // rax
  __int64 v13; // r9
  unsigned __int64 ValidPte; // rdi
  int v15; // r14d
  unsigned __int64 v16; // rdi
  int v17; // r14d
  bool v18; // zf
  bool v19; // zf
  __int64 v20; // [rsp+68h] [rbp+10h] BYREF

  v20 = a2;
  LOBYTE(v20) = 17;
  v4 = 0LL;
  v7 = 0LL;
  HyperPte = KeGetCurrentPrcb()->HyperPte;
  do
  {
    if ( HyperPte )
    {
      v10 = (void *)MiMapPageInHyperSpaceWorker(BugCheckParameter2, &v20, 0x80000000LL, a4);
      goto LABEL_4;
    }
    Phase0Mapping = MxGetPhase0Mapping();
    v10 = (void *)Phase0Mapping;
    if ( !Phase0Mapping )
      KeBugCheckEx(0x1Au, 0x3030305uLL, BugCheckParameter2, 0LL, 0LL);
    v4 = (unsigned __int64 *)(((Phase0Mapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    ValidPte = MiMakeValidPte((unsigned __int64)v4, BugCheckParameter2, 2684354564LL, v13);
    v15 = 0;
    if ( MiPteInShadowRange((unsigned __int64)v4) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v15 = 1;
        if ( HIBYTE(word_140C4DF48) )
          goto LABEL_12;
        v18 = (ValidPte & 1) == 0;
      }
      else
      {
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
          goto LABEL_12;
        v18 = (ValidPte & 1) == 0;
      }
      if ( !v18 )
        ValidPte |= 0x8000000000000000uLL;
    }
LABEL_12:
    *v4 = ValidPte;
    if ( v15 )
      MiWritePteShadow((__int64)v4, ValidPte);
LABEL_4:
    if ( a3 )
      memset64(v10, a3, 0x200uLL);
    else
      KeZeroPages(v10, 4096LL);
    if ( HyperPte )
    {
      LOBYTE(v9) = v20;
      result = MiUnmapPageInHyperSpaceWorker((unsigned __int64)v10, v9, 0x80000000);
      goto LABEL_8;
    }
    v16 = ZeroPte;
    v17 = 0;
    if ( MiPteInShadowRange((unsigned __int64)v4) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v17 = 1;
        if ( HIBYTE(word_140C4DF48) )
          goto LABEL_15;
        v19 = (ZeroPte & 1) == 0;
      }
      else
      {
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
          goto LABEL_15;
        v19 = (ZeroPte & 1) == 0;
      }
      if ( !v19 )
        v16 = ZeroPte | 0x8000000000000000uLL;
    }
LABEL_15:
    *v4 = v16;
    if ( v17 )
      MiWritePteShadow((__int64)v4, v16);
    result = KeFlushSingleTb((unsigned __int64)v10, 0, 1u);
LABEL_8:
    ++v7;
    ++BugCheckParameter2;
  }
  while ( !v7 );
  return result;
}
