/*
 * XREFs of MiFillPhysicalPages @ 0x1402E6470
 * Callers:
 *     MiGetPoolPages @ 0x140274A0C (MiGetPoolPages.c)
 *     MiInitializeSystemPageTable @ 0x1402E5484 (MiInitializeSystemPageTable.c)
 *     MiZeroPhysicalPage @ 0x1402E6380 (MiZeroPhysicalPage.c)
 *     MxMapVa @ 0x140A44B6C (MxMapVa.c)
 *     MiInitializeDummyPages @ 0x140A55944 (MiInitializeDummyPages.c)
 * Callees:
 *     KeFlushSingleTb @ 0x14026BA08 (KeFlushSingleTb.c)
 *     MiWritePteShadow @ 0x1402B69BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     MiMakeValidPte @ 0x14032E730 (MiMakeValidPte.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140331AB0 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140348910 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     KeZeroPages @ 0x140402DB0 (KeZeroPages.c)
 *     MxGetPhase0Mapping @ 0x140A57438 (MxGetPhase0Mapping.c)
 */

__int64 __fastcall MiFillPhysicalPages(ULONG_PTR BugCheckParameter2, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  _QWORD *v4; // r12
  __int64 v7; // rbx
  void *HyperPte; // r14
  __int64 v9; // rdx
  void *v10; // rbp
  __int64 v11; // r8
  __int64 result; // rax
  unsigned __int64 Phase0Mapping; // rax
  __int64 ValidPte; // rdi
  __int64 v15; // rdx
  unsigned __int64 v16; // rdi
  __int64 v17; // r8
  __int64 v18; // [rsp+68h] [rbp+10h] BYREF

  v18 = a2;
  v4 = 0LL;
  LOBYTE(v18) = 17;
  v7 = 0LL;
  HyperPte = KeGetCurrentPrcb()->HyperPte;
  do
  {
    if ( HyperPte )
    {
      v10 = (void *)MiMapPageInHyperSpaceWorker(BugCheckParameter2, &v18, 0x80000000LL, a4);
      goto LABEL_4;
    }
    Phase0Mapping = MxGetPhase0Mapping();
    v10 = (void *)Phase0Mapping;
    if ( !Phase0Mapping )
      KeBugCheckEx(0x1Au, 0x3030305uLL, BugCheckParameter2, 0LL, 0LL);
    v4 = (_QWORD *)(((Phase0Mapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    ValidPte = MiMakeValidPte(v4, BugCheckParameter2, 2684354564LL);
    if ( !(unsigned int)MiPteInShadowRange(v4, v15) )
      goto LABEL_13;
    if ( !(unsigned int)MiPteHasShadow() )
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (ValidPte & 1) != 0 )
      {
        ValidPte |= 0x8000000000000000uLL;
      }
LABEL_13:
      *v4 = ValidPte;
      goto LABEL_4;
    }
    if ( !HIBYTE(word_140C4E008) && (ValidPte & 1) != 0 )
      ValidPte |= 0x8000000000000000uLL;
    *v4 = ValidPte;
    MiWritePteShadow((__int64)v4, ValidPte, v11);
LABEL_4:
    if ( a3 )
      memset64(v10, a3, 0x200uLL);
    else
      KeZeroPages(v10, 4096LL, v11);
    if ( HyperPte )
    {
      result = MiUnmapPageInHyperSpaceWorker(v10, (unsigned __int8)v18, 0x80000000LL);
      goto LABEL_8;
    }
    v16 = ZeroPte;
    if ( (unsigned int)MiPteInShadowRange(v4, v9) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        if ( !HIBYTE(word_140C4E008) && (ZeroPte & 1) != 0 )
          v16 = ZeroPte | 0x8000000000000000uLL;
        *v4 = v16;
        MiWritePteShadow((__int64)v4, v16, v17);
        goto LABEL_16;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (ZeroPte & 1) != 0 )
      {
        v16 = ZeroPte | 0x8000000000000000uLL;
      }
    }
    *v4 = v16;
LABEL_16:
    result = KeFlushSingleTb((unsigned __int64)v10, 0, 1u);
LABEL_8:
    ++v7;
    ++BugCheckParameter2;
  }
  while ( !v7 );
  return result;
}
