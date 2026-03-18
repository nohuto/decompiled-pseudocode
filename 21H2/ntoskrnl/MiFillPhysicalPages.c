/*
 * XREFs of MiFillPhysicalPages @ 0x140235AAC
 * Callers:
 *     MiZeroPhysicalPage @ 0x1402359C4 (MiZeroPhysicalPage.c)
 *     MiInitializeSystemPageTable @ 0x14027C784 (MiInitializeSystemPageTable.c)
 *     MiGetPoolPages @ 0x140284A20 (MiGetPoolPages.c)
 *     MxMapVa @ 0x140AF61F4 (MxMapVa.c)
 *     MiInitializeDummyPages @ 0x140B098F0 (MiInitializeDummyPages.c)
 * Callees:
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1402BEDD0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMakeValidPte @ 0x1402CBD10 (MiMakeValidPte.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1402CC7C0 (MiMapPageInHyperSpaceWorker.c)
 *     KeFlushSingleTb @ 0x1402EA644 (KeFlushSingleTb.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     KeZeroPages @ 0x140424F50 (KeZeroPages.c)
 *     MxGetPhase0Mapping @ 0x140AF4308 (MxGetPhase0Mapping.c)
 */

__int64 __fastcall MiFillPhysicalPages(ULONG_PTR BugCheckParameter2, __int64 a2, unsigned __int64 a3)
{
  void *HyperPte; // r15
  __int64 v6; // rdx
  void *v7; // rsi
  _QWORD *v8; // rbx
  unsigned __int64 Phase0Mapping; // rax
  __int64 ValidPte; // rdi
  int v12; // r14d
  unsigned __int64 v13; // rdi
  int v14; // ebp
  bool v15; // zf
  bool v16; // zf
  __int64 v17; // [rsp+58h] [rbp+10h] BYREF

  v17 = a2;
  LOBYTE(v17) = 17;
  HyperPte = KeGetCurrentPrcb()->HyperPte;
  if ( HyperPte )
  {
    v7 = (void *)MiMapPageInHyperSpaceWorker(BugCheckParameter2, &v17, 0x80000000LL);
    v8 = 0LL;
    goto LABEL_3;
  }
  Phase0Mapping = MxGetPhase0Mapping();
  v7 = (void *)Phase0Mapping;
  if ( !Phase0Mapping )
    KeBugCheckEx(0x1Au, 0x3030305uLL, BugCheckParameter2, 0LL, 0LL);
  v8 = (_QWORD *)(((Phase0Mapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  ValidPte = MiMakeValidPte(v8, BugCheckParameter2, 2684354564LL);
  v12 = 0;
  if ( (unsigned int)MiPteInShadowRange(v8) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v12 = 1;
      if ( HIBYTE(word_140C51864) )
        goto LABEL_9;
      v15 = (ValidPte & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_9;
      v15 = (ValidPte & 1) == 0;
    }
    if ( !v15 )
      ValidPte |= 0x8000000000000000uLL;
  }
LABEL_9:
  *v8 = ValidPte;
  if ( v12 )
    MiWritePteShadow((__int64)v8, ValidPte);
LABEL_3:
  if ( a3 )
    memset64(v7, a3, 0x200uLL);
  else
    KeZeroPages(v7, 4096LL);
  if ( HyperPte )
  {
    LOBYTE(v6) = v17;
    return MiUnmapPageInHyperSpaceWorker(v7, v6, 0x80000000LL);
  }
  v13 = ZeroPte;
  v14 = 0;
  if ( (unsigned int)MiPteInShadowRange(v8) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v14 = 1;
      if ( HIBYTE(word_140C51864) )
        goto LABEL_13;
      v16 = (ZeroPte & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_13;
      v16 = (ZeroPte & 1) == 0;
    }
    if ( !v16 )
      v13 = ZeroPte | 0x8000000000000000uLL;
  }
LABEL_13:
  *v8 = v13;
  if ( v14 )
    MiWritePteShadow((__int64)v8, v13);
  return KeFlushSingleTb(v7, 0LL, 1LL);
}
