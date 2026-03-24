/*
 * XREFs of MiAbortCombineScan @ 0x140303770
 * Callers:
 *     MiCopyPage @ 0x140240220 (MiCopyPage.c)
 *     MiChangePageAttributeContiguous @ 0x1402CF8B8 (MiChangePageAttributeContiguous.c)
 *     MiInitializeMdlPfn @ 0x1402E37C4 (MiInitializeMdlPfn.c)
 *     MiChangePageAttributeBatch @ 0x1403035A0 (MiChangePageAttributeBatch.c)
 *     MiChangePageAttribute @ 0x1403041E4 (MiChangePageAttribute.c)
 *     MiUpdateSlabPagePlaceholderState @ 0x140375928 (MiUpdateSlabPagePlaceholderState.c)
 *     MiAllocateSlabEntry @ 0x140392868 (MiAllocateSlabEntry.c)
 *     MiInitializeDynamicPfns @ 0x14052E5A0 (MiInitializeDynamicPfns.c)
 *     MiCompleteSecureProcessFault @ 0x140548184 (MiCompleteSecureProcessFault.c)
 * Callees:
 *     KeFlushSingleTb @ 0x14026BA08 (KeFlushSingleTb.c)
 *     MiWritePteShadow @ 0x1402B69BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     MiPageCombiningActive @ 0x140303820 (MiPageCombiningActive.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14031C800 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14031C8D0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 */

void __fastcall MiAbortCombineScan(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r14
  __int64 v5; // rdx
  _QWORD *v6; // r14
  _QWORD *v7; // rsi
  __int64 v8; // rdi
  unsigned __int64 v9; // rbx
  int v10; // ebp
  __int64 v11; // r8
  bool v12; // zf

  if ( (unsigned int)MiPageCombiningActive(0LL, a2, a3) )
  {
    v4 = *(_QWORD *)(qword_140C4E648 + 8 * ((*(_QWORD *)(a1 + 40) >> 39) & 0x3FFLL));
    ExAcquireSpinLockSharedAtDpcLevel(&dword_140C4E540);
    v6 = (_QWORD *)(v4 + 6456);
    v7 = (_QWORD *)*v6;
    if ( (_QWORD *)*v6 != v6 )
    {
      while ( 1 )
      {
        if ( v7[6] == a1 )
        {
          v8 = v7[7];
          if ( (*(_BYTE *)v8 & 1) != 0 )
            break;
        }
LABEL_4:
        v7 = (_QWORD *)*v7;
        if ( v7 == v6 )
          goto LABEL_5;
      }
      v9 = ZeroPte;
      v10 = 0;
      if ( (unsigned int)MiPteInShadowRange(v7[7], v5) )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          v10 = 1;
          if ( !HIBYTE(word_140C4E008) )
          {
            v12 = (ZeroPte & 1) == 0;
            goto LABEL_13;
          }
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        {
          v12 = (ZeroPte & 1) == 0;
LABEL_13:
          if ( !v12 )
            v9 = ZeroPte | 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v8 = v9;
      if ( v10 )
        MiWritePteShadow(v8, v9, v11);
      KeFlushSingleTb(v8 << 25 >> 16, 0, 1u);
      goto LABEL_4;
    }
LABEL_5:
    ExReleaseSpinLockSharedFromDpcLevel(&dword_140C4E540);
  }
}
