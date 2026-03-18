/*
 * XREFs of MiAbortCombineScan @ 0x140349794
 * Callers:
 *     MiChangePageAttribute @ 0x14023DCD0 (MiChangePageAttribute.c)
 *     MiCopyPage @ 0x1402907D0 (MiCopyPage.c)
 *     MiChangePageAttributeContiguous @ 0x14032DB94 (MiChangePageAttributeContiguous.c)
 *     MiInitializeMdlPfn @ 0x1403346A4 (MiInitializeMdlPfn.c)
 *     MiChangePageAttributeBatch @ 0x1403495C4 (MiChangePageAttributeBatch.c)
 *     MiUpdateSlabPagePlaceholderState @ 0x140375718 (MiUpdateSlabPagePlaceholderState.c)
 *     MiAllocateSlabEntry @ 0x1403923F8 (MiAllocateSlabEntry.c)
 *     MiInitializeDynamicPfns @ 0x14052CAA0 (MiInitializeDynamicPfns.c)
 *     MiCompleteSecureProcessFault @ 0x140546684 (MiCompleteSecureProcessFault.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402970F0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1402971C0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     MiPageCombiningActive @ 0x140349844 (MiPageCombiningActive.c)
 *     KeFlushSingleTb @ 0x140353AC8 (KeFlushSingleTb.c)
 */

void __fastcall MiAbortCombineScan(__int64 a1)
{
  __int64 v2; // r14
  _QWORD *v3; // r14
  _QWORD *v4; // rsi
  __int64 v5; // rdi
  unsigned __int64 v6; // rbx
  int v7; // ebp
  __int64 v8; // r8
  bool v9; // zf

  if ( (unsigned int)MiPageCombiningActive(0LL) )
  {
    v2 = *(_QWORD *)(qword_140C4E4C8 + 8 * ((*(_QWORD *)(a1 + 40) >> 39) & 0x3FFLL));
    ExAcquireSpinLockSharedAtDpcLevel(&dword_140C4E3C0);
    v3 = (_QWORD *)(v2 + 6456);
    v4 = (_QWORD *)*v3;
    if ( (_QWORD *)*v3 != v3 )
    {
      while ( 1 )
      {
        if ( v4[6] == a1 )
        {
          v5 = v4[7];
          if ( (*(_BYTE *)v5 & 1) != 0 )
            break;
        }
LABEL_4:
        v4 = (_QWORD *)*v4;
        if ( v4 == v3 )
          goto LABEL_5;
      }
      v6 = ZeroPte;
      v7 = 0;
      if ( MiPteInShadowRange(v4[7]) )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          v7 = 1;
          if ( !HIBYTE(word_140C4DE88) )
          {
            v9 = (ZeroPte & 1) == 0;
            goto LABEL_13;
          }
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        {
          v9 = (ZeroPte & 1) == 0;
LABEL_13:
          if ( !v9 )
            v6 = ZeroPte | 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v5 = v6;
      if ( v7 )
        MiWritePteShadow(v5, v6, v8);
      KeFlushSingleTb(v5 << 25 >> 16, 0LL);
      goto LABEL_4;
    }
LABEL_5:
    ExReleaseSpinLockSharedFromDpcLevel(&dword_140C4E3C0);
  }
}
