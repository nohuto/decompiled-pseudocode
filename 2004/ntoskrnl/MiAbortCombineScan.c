/*
 * XREFs of MiAbortCombineScan @ 0x1402F7290
 * Callers:
 *     MiCopyPage @ 0x1402B4680 (MiCopyPage.c)
 *     MiChangePageAttribute @ 0x1402F4EBC (MiChangePageAttribute.c)
 *     MiChangePageAttributeBatch @ 0x1402F70C0 (MiChangePageAttributeBatch.c)
 *     MiInitializeMdlPfn @ 0x140313B6C (MiInitializeMdlPfn.c)
 *     MiChangePageAttributeContiguous @ 0x14035D13C (MiChangePageAttributeContiguous.c)
 *     MiUpdateSlabPagePlaceholderState @ 0x140373058 (MiUpdateSlabPagePlaceholderState.c)
 *     MiAllocateSlabEntry @ 0x14038FF38 (MiAllocateSlabEntry.c)
 *     MiInitializeDynamicPfns @ 0x1405290D0 (MiInitializeDynamicPfns.c)
 *     MiCompleteSecureProcessFault @ 0x140542CB4 (MiCompleteSecureProcessFault.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140224640 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140224840 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiPageCombiningActive @ 0x1402F7340 (MiPageCombiningActive.c)
 *     KeFlushSingleTb @ 0x14031CE3C (KeFlushSingleTb.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 */

void __fastcall MiAbortCombineScan(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r14
  _QWORD *v5; // r14
  _QWORD *v6; // rsi
  _BYTE *v7; // rdi
  unsigned __int64 v8; // rbx
  int v9; // ebp
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  bool v14; // zf

  if ( (unsigned int)MiPageCombiningActive(0LL, a2, a3) )
  {
    v4 = *(_QWORD *)(qword_140C4E448 + 8 * ((*(_QWORD *)(a1 + 40) >> 39) & 0x3FFLL));
    ExAcquireSpinLockSharedAtDpcLevel(&dword_140C4E340);
    v5 = (_QWORD *)(v4 + 6456);
    v6 = (_QWORD *)*v5;
    if ( (_QWORD *)*v5 != v5 )
    {
      while ( 1 )
      {
        if ( v6[6] == a1 )
        {
          v7 = (_BYTE *)v6[7];
          if ( (*v7 & 1) != 0 )
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
        if ( (unsigned int)MiPteHasShadow(v11, v10, v12, v13) )
        {
          v9 = 1;
          if ( !HIBYTE(word_140C4DE08) )
          {
            v14 = (ZeroPte & 1) == 0;
            goto LABEL_13;
          }
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        {
          v14 = (ZeroPte & 1) == 0;
LABEL_13:
          if ( !v14 )
            v8 = ZeroPte | 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v7 = v8;
      if ( v9 )
        MiWritePteShadow(v7, v8);
      KeFlushSingleTb((__int64)((_QWORD)v7 << 25) >> 16, 0LL, 1LL);
      goto LABEL_4;
    }
LABEL_5:
    ExReleaseSpinLockSharedFromDpcLevel(&dword_140C4E340);
  }
}
