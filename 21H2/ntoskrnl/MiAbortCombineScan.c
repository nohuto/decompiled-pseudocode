/*
 * XREFs of MiAbortCombineScan @ 0x140268998
 * Callers:
 *     MiInitializeMdlBatchPages @ 0x1402655A0 (MiInitializeMdlBatchPages.c)
 *     MiChangePageAttribute @ 0x140267E78 (MiChangePageAttribute.c)
 *     MiChangePageAttributeBatch @ 0x1402680C0 (MiChangePageAttributeBatch.c)
 *     MiChangePageAttributeContiguous @ 0x14026873C (MiChangePageAttributeContiguous.c)
 *     MiCopyPage @ 0x1402E7D60 (MiCopyPage.c)
 *     MiUpdateSlabPagePlaceholderState @ 0x1402EB8BC (MiUpdateSlabPagePlaceholderState.c)
 *     MiInitializeDynamicPfns @ 0x140582D7C (MiInitializeDynamicPfns.c)
 *     MiInitializeMdlPfn @ 0x140589CEC (MiInitializeMdlPfn.c)
 *     MiCompleteSecureProcessFault @ 0x1405A6E74 (MiCompleteSecureProcessFault.c)
 *     MiAllocateSlabEntry @ 0x1405B0B24 (MiAllocateSlabEntry.c)
 * Callees:
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MiPageCombiningActive @ 0x140268A48 (MiPageCombiningActive.c)
 *     KeFlushSingleTb @ 0x1402EA644 (KeFlushSingleTb.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1403127E0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 */

void __fastcall MiAbortCombineScan(__int64 a1)
{
  __int64 v2; // r14
  _QWORD *v3; // r14
  _QWORD *v4; // rsi
  __int64 v5; // rdi
  unsigned __int64 v6; // rbx
  int v7; // ebp
  bool v8; // zf

  if ( (unsigned int)MiPageCombiningActive(0LL) )
  {
    v2 = *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL));
    ExAcquireSpinLockSharedAtDpcLevel(&dword_140C51DC0);
    v3 = (_QWORD *)(v2 + 16208);
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
      if ( (unsigned int)MiPteInShadowRange(v4[7]) )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          v7 = 1;
          if ( !HIBYTE(word_140C51864) )
          {
            v8 = (ZeroPte & 1) == 0;
            goto LABEL_13;
          }
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        {
          v8 = (ZeroPte & 1) == 0;
LABEL_13:
          if ( !v8 )
            v6 = ZeroPte | 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v5 = v6;
      if ( v7 )
        MiWritePteShadow(v5, v6);
      KeFlushSingleTb(v5 << 25 >> 16, 0LL, 1LL);
      goto LABEL_4;
    }
LABEL_5:
    ExReleaseSpinLockSharedFromDpcLevel(&dword_140C51DC0);
  }
}
