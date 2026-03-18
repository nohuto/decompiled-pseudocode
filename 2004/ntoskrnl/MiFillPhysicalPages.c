/*
 * XREFs of MiFillPhysicalPages @ 0x1402F51CC
 * Callers:
 *     MiGetPoolPages @ 0x1402E1A7C (MiGetPoolPages.c)
 *     MiInitializeSystemPageTable @ 0x1402E28D4 (MiInitializeSystemPageTable.c)
 *     MiZeroPhysicalPage @ 0x1402F50E4 (MiZeroPhysicalPage.c)
 *     MxMapVa @ 0x140A3EDAC (MxMapVa.c)
 *     MiInitializeDummyPages @ 0x140A53CBC (MiInitializeDummyPages.c)
 * Callees:
 *     MiMakeValidPte @ 0x1402342E0 (MiMakeValidPte.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1402385A0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1402F7480 (MiMapPageInHyperSpaceWorker.c)
 *     KeFlushSingleTb @ 0x14031CE3C (KeFlushSingleTb.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     KeZeroPages @ 0x1403FB000 (KeZeroPages.c)
 *     MxGetPhase0Mapping @ 0x140A55794 (MxGetPhase0Mapping.c)
 */

__int64 __fastcall MiFillPhysicalPages(ULONG_PTR BugCheckParameter2, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 *v3; // rbx
  __int64 v6; // r15
  void *HyperPte; // r12
  void *v8; // rsi
  __int64 v9; // r8
  __int64 result; // rax
  unsigned __int64 Phase0Mapping; // rax
  __int64 v12; // r9
  unsigned __int64 ValidPte; // rdi
  int v14; // r14d
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r9
  unsigned __int64 v18; // rdi
  int v19; // r14d
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  bool v24; // zf
  bool v25; // zf
  __int64 v26; // [rsp+68h] [rbp+10h] BYREF

  v26 = a2;
  LOBYTE(v26) = 17;
  v3 = 0LL;
  v6 = 0LL;
  HyperPte = KeGetCurrentPrcb()->HyperPte;
  do
  {
    if ( HyperPte )
    {
      v8 = (void *)MiMapPageInHyperSpaceWorker(BugCheckParameter2, &v26, 0x80000000LL);
      goto LABEL_4;
    }
    Phase0Mapping = MxGetPhase0Mapping();
    v8 = (void *)Phase0Mapping;
    if ( !Phase0Mapping )
      KeBugCheckEx(0x1Au, 0x3030305uLL, BugCheckParameter2, 0LL, 0LL);
    v3 = (unsigned __int64 *)(((Phase0Mapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    ValidPte = MiMakeValidPte((unsigned __int64)v3, BugCheckParameter2, 2684354564LL, v12);
    v14 = 0;
    if ( MiPteInShadowRange((unsigned __int64)v3) )
    {
      if ( (unsigned int)MiPteHasShadow(v16, v15, v9, v17) )
      {
        v14 = 1;
        if ( HIBYTE(word_140C4DE08) )
          goto LABEL_12;
        v24 = (ValidPte & 1) == 0;
      }
      else
      {
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
          goto LABEL_12;
        v24 = (ValidPte & 1) == 0;
      }
      if ( !v24 )
        ValidPte |= 0x8000000000000000uLL;
    }
LABEL_12:
    *v3 = ValidPte;
    if ( v14 )
      MiWritePteShadow(v3, ValidPte);
LABEL_4:
    if ( a3 )
      memset64(v8, a3, 0x200uLL);
    else
      KeZeroPages(v8, 4096LL, v9);
    if ( HyperPte )
    {
      result = MiUnmapPageInHyperSpaceWorker((unsigned __int64)v8, v26, 0x80000000);
      goto LABEL_8;
    }
    v18 = ZeroPte;
    v19 = 0;
    if ( MiPteInShadowRange((unsigned __int64)v3) )
    {
      if ( (unsigned int)MiPteHasShadow(v21, v20, v22, v23) )
      {
        v19 = 1;
        if ( HIBYTE(word_140C4DE08) )
          goto LABEL_15;
        v25 = (ZeroPte & 1) == 0;
      }
      else
      {
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
          goto LABEL_15;
        v25 = (ZeroPte & 1) == 0;
      }
      if ( !v25 )
        v18 = ZeroPte | 0x8000000000000000uLL;
    }
LABEL_15:
    *v3 = v18;
    if ( v19 )
      MiWritePteShadow(v3, v18);
    result = KeFlushSingleTb(v8, 0LL, 1LL);
LABEL_8:
    ++v6;
    ++BugCheckParameter2;
  }
  while ( !v6 );
  return result;
}
