/*
 * XREFs of MiAbortCombineScan @ 0x14030E4C0
 * Callers:
 *     MiChangePageAttributeContiguous @ 0x14024DC38 (MiChangePageAttributeContiguous.c)
 *     MiInitializeMdlPfn @ 0x140294B14 (MiInitializeMdlPfn.c)
 *     MiCopyPage @ 0x1402E4A70 (MiCopyPage.c)
 *     MiChangePageAttributeBatch @ 0x14030E2F0 (MiChangePageAttributeBatch.c)
 *     MiChangePageAttribute @ 0x14030EF34 (MiChangePageAttribute.c)
 *     MiUpdateSlabPagePlaceholderState @ 0x140375478 (MiUpdateSlabPagePlaceholderState.c)
 *     MiAllocateSlabEntry @ 0x1403929B8 (MiAllocateSlabEntry.c)
 *     MiInitializeDynamicPfns @ 0x14052E7E0 (MiInitializeDynamicPfns.c)
 *     MiCompleteSecureProcessFault @ 0x1405483C4 (MiCompleteSecureProcessFault.c)
 * Callees:
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     KeFlushSingleTb @ 0x1402599A8 (KeFlushSingleTb.c)
 *     MiPageCombiningActive @ 0x14030E570 (MiPageCombiningActive.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140327550 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140327620 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 */

void __fastcall MiAbortCombineScan(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r14
  _QWORD *v5; // r14
  _QWORD *v6; // rsi
  __int64 v7; // rdi
  unsigned __int64 v8; // rbx
  int v9; // ebp
  bool v10; // zf

  if ( (unsigned int)MiPageCombiningActive(0LL, a2, a3) )
  {
    v4 = *(_QWORD *)(qword_140C4E688 + 8 * ((*(_QWORD *)(a1 + 40) >> 39) & 0x3FFLL));
    ExAcquireSpinLockSharedAtDpcLevel(&dword_140C4E580);
    v5 = (_QWORD *)(v4 + 6456);
    v6 = (_QWORD *)*v5;
    if ( (_QWORD *)*v5 != v5 )
    {
      while ( 1 )
      {
        if ( v6[6] == a1 )
        {
          v7 = v6[7];
          if ( (*(_BYTE *)v7 & 1) != 0 )
            break;
        }
LABEL_4:
        v6 = (_QWORD *)*v6;
        if ( v6 == v5 )
          goto LABEL_5;
      }
      v8 = ZeroPte;
      v9 = 0;
      if ( (unsigned int)MiPteInShadowRange(v6[7]) )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          v9 = 1;
          if ( !HIBYTE(word_140C4E048) )
          {
            v10 = (ZeroPte & 1) == 0;
            goto LABEL_13;
          }
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        {
          v10 = (ZeroPte & 1) == 0;
LABEL_13:
          if ( !v10 )
            v8 = ZeroPte | 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v7 = v8;
      if ( v9 )
        MiWritePteShadow(v7, v8);
      KeFlushSingleTb(v7 << 25 >> 16, 0, 1u);
      goto LABEL_4;
    }
LABEL_5:
    ExReleaseSpinLockSharedFromDpcLevel(&dword_140C4E580);
  }
}
