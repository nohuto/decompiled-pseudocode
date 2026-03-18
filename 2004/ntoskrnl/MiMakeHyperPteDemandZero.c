/*
 * XREFs of MiMakeHyperPteDemandZero @ 0x1402537C4
 * Callers:
 *     MiFillHyperPtes @ 0x14025397C (MiFillHyperPtes.c)
 *     MiMakeHyperRangeAccessible @ 0x1402AD740 (MiMakeHyperRangeAccessible.c)
 * Callees:
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiSwizzleInvalidPte @ 0x1402B6040 (MiSwizzleInvalidPte.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 */

void __fastcall MiMakeHyperPteDemandZero(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rbx
  int v7; // ebp
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  bool v12; // zf

  if ( !*(_DWORD *)a3 )
    goto LABEL_5;
  v6 = MiSwizzleInvalidPte(128LL, a2, a3, a4);
  v7 = 0;
  if ( MiPteInShadowRange((unsigned __int64)a1) )
  {
    if ( (unsigned int)MiPteHasShadow(v9, v8, v10, v11) )
    {
      v7 = 1;
      if ( HIBYTE(word_140C4DE08) )
        goto LABEL_3;
      v12 = (v6 & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_3;
      v12 = (v6 & 1) == 0;
    }
    if ( !v12 )
      v6 |= 0x8000000000000000uLL;
  }
LABEL_3:
  *a1 = v6;
  if ( v7 )
    MiWritePteShadow(a1, v6);
LABEL_5:
  ++*(_QWORD *)(a3 + 8);
}
