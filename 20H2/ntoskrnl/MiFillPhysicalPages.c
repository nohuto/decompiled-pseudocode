/*
 * XREFs of MiFillPhysicalPages @ 0x1403333BC
 * Callers:
 *     MiZeroPhysicalPage @ 0x1403332D4 (MiZeroPhysicalPage.c)
 *     MiGetPoolPages @ 0x140333D10 (MiGetPoolPages.c)
 *     MiInitializeSystemPageTable @ 0x140336364 (MiInitializeSystemPageTable.c)
 *     MxMapVa @ 0x140A4504C (MxMapVa.c)
 *     MiInitializeDummyPages @ 0x140A5433C (MiInitializeDummyPages.c)
 * Callees:
 *     MiUnmapPageInHyperSpaceWorker @ 0x14021E940 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x1402B1B40 (MiMakeValidPte.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140349980 (MiMapPageInHyperSpaceWorker.c)
 *     KeFlushSingleTb @ 0x140353AC8 (KeFlushSingleTb.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     KeZeroPages @ 0x140400950 (KeZeroPages.c)
 *     MxGetPhase0Mapping @ 0x140A55E14 (MxGetPhase0Mapping.c)
 */

__int64 __fastcall MiFillPhysicalPages(ULONG_PTR BugCheckParameter2, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 *v3; // rbx
  __int64 v6; // r15
  void *HyperPte; // r12
  void *v8; // rsi
  __int64 result; // rax
  unsigned __int64 Phase0Mapping; // rax
  __int64 v11; // r9
  unsigned __int64 ValidPte; // rdi
  int v13; // r14d
  __int64 v14; // r8
  unsigned __int64 v15; // rdi
  int v16; // r14d
  __int64 v17; // r8
  bool v18; // zf
  bool v19; // zf
  __int64 v20; // [rsp+68h] [rbp+10h] BYREF

  v20 = a2;
  LOBYTE(v20) = 17;
  v3 = 0LL;
  v6 = 0LL;
  HyperPte = KeGetCurrentPrcb()->HyperPte;
  do
  {
    if ( HyperPte )
    {
      v8 = (void *)MiMapPageInHyperSpaceWorker(BugCheckParameter2, &v20, 0x80000000LL);
      goto LABEL_4;
    }
    Phase0Mapping = MxGetPhase0Mapping();
    v8 = (void *)Phase0Mapping;
    if ( !Phase0Mapping )
      KeBugCheckEx(0x1Au, 0x3030305uLL, BugCheckParameter2, 0LL, 0LL);
    v3 = (unsigned __int64 *)(((Phase0Mapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    ValidPte = MiMakeValidPte((unsigned __int64)v3, BugCheckParameter2, 2684354564LL, v11);
    v13 = 0;
    if ( MiPteInShadowRange((unsigned __int64)v3) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v13 = 1;
        if ( HIBYTE(word_140C4DE88) )
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
    *v3 = ValidPte;
    if ( v13 )
      MiWritePteShadow((__int64)v3, ValidPte, v14);
LABEL_4:
    if ( a3 )
      memset64(v8, a3, 0x200uLL);
    else
      KeZeroPages(v8, 4096LL);
    if ( HyperPte )
    {
      result = MiUnmapPageInHyperSpaceWorker((unsigned __int64)v8, v20, 0x80000000);
      goto LABEL_8;
    }
    v15 = ZeroPte;
    v16 = 0;
    if ( MiPteInShadowRange((unsigned __int64)v3) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v16 = 1;
        if ( HIBYTE(word_140C4DE88) )
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
        v15 = ZeroPte | 0x8000000000000000uLL;
    }
LABEL_15:
    *v3 = v15;
    if ( v16 )
      MiWritePteShadow((__int64)v3, v15, v17);
    result = KeFlushSingleTb(v8, 0LL);
LABEL_8:
    ++v6;
    ++BugCheckParameter2;
  }
  while ( !v6 );
  return result;
}
