/*
 * XREFs of MiAbortCombineScan @ 0x140353270
 * Callers:
 *     MiCopyPage @ 0x140221A00 (MiCopyPage.c)
 *     MiChangePageAttributeContiguous @ 0x14031F698 (MiChangePageAttributeContiguous.c)
 *     MiInitializeMdlPfn @ 0x140342EAC (MiInitializeMdlPfn.c)
 *     MiChangePageAttribute @ 0x140350E98 (MiChangePageAttribute.c)
 *     MiChangePageAttributeBatch @ 0x1403530A0 (MiChangePageAttributeBatch.c)
 *     MiUpdateSlabPagePlaceholderState @ 0x140372248 (MiUpdateSlabPagePlaceholderState.c)
 *     MiAllocateSlabEntry @ 0x14038F3C8 (MiAllocateSlabEntry.c)
 *     MiInitializeDynamicPfns @ 0x140528A80 (MiInitializeDynamicPfns.c)
 *     MiCompleteSecureProcessFault @ 0x140542664 (MiCompleteSecureProcessFault.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14027D690 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14027D890 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     KeFlushSingleTb @ 0x14034C17C (KeFlushSingleTb.c)
 *     MiPageCombiningActive @ 0x140353320 (MiPageCombiningActive.c)
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
    v4 = *(_QWORD *)(qword_140C4E588 + 8 * ((*(_QWORD *)(a1 + 40) >> 39) & 0x3FFLL));
    ExAcquireSpinLockSharedAtDpcLevel(&dword_140C4E480);
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
      if ( MiPteInShadowRange(v6[7]) )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          v9 = 1;
          if ( !HIBYTE(word_140C4DF48) )
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
    ExReleaseSpinLockSharedFromDpcLevel(&dword_140C4E480);
  }
}
