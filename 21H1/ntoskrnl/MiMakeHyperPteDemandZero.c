/*
 * XREFs of MiMakeHyperPteDemandZero @ 0x1402AC7F4
 * Callers:
 *     MiMakeHyperRangeAccessible @ 0x14021AAC0 (MiMakeHyperRangeAccessible.c)
 *     MiFillHyperPtes @ 0x1402AC9AC (MiFillHyperPtes.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x1402233C0 (MiSwizzleInvalidPte.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
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
  if ( MiPteInShadowRange((unsigned __int64)a1) )
  {
    if ( (unsigned int)MiPteHasShadow(v8, v7) )
    {
      v6 = 1;
      if ( HIBYTE(word_140C4DF48) )
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
    MiWritePteShadow(a1, v5);
LABEL_5:
  ++*(_QWORD *)(a3 + 8);
}
