/*
 * XREFs of MiMakeHyperPteDemandZero @ 0x14022C278
 * Callers:
 *     MiFillHyperPtes @ 0x14022C0EC (MiFillHyperPtes.c)
 *     MiMakeHyperRangeAccessible @ 0x1402BFDE0 (MiMakeHyperRangeAccessible.c)
 * Callees:
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiSwizzleInvalidPte @ 0x140334CE0 (MiSwizzleInvalidPte.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 */

void __fastcall MiMakeHyperPteDemandZero(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rbx
  int v6; // ebp
  __int64 v7; // rdx
  __int64 v8; // rcx
  bool v9; // zf

  if ( !*(_DWORD *)a3 )
    goto LABEL_5;
  v5 = MiSwizzleInvalidPte(128LL);
  v6 = 0;
  if ( (unsigned int)MiPteInShadowRange(a1) )
  {
    if ( (unsigned int)MiPteHasShadow(v8, v7) )
    {
      v6 = 1;
      if ( HIBYTE(word_140C4E048) )
        goto LABEL_3;
      v9 = (v5 & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_3;
      v9 = (v5 & 1) == 0;
    }
    if ( !v9 )
      v5 |= 0x8000000000000000uLL;
  }
LABEL_3:
  *a1 = v5;
  if ( v6 )
    MiWritePteShadow(a1);
LABEL_5:
  ++*(_QWORD *)(a3 + 8);
}
