/*
 * XREFs of MiMakeHyperPteDemandZero @ 0x140315444
 * Callers:
 *     MiFillHyperPtes @ 0x140233F64 (MiFillHyperPtes.c)
 *     MiMakeHyperRangeAccessible @ 0x14027CCC0 (MiMakeHyperRangeAccessible.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MiSwizzleInvalidPte @ 0x1402AD3A0 (MiSwizzleInvalidPte.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 */

void __fastcall MiMakeHyperPteDemandZero(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rbx
  int v6; // ebp
  __int64 v7; // r8
  bool v8; // zf

  if ( !*(_DWORD *)a3 )
    goto LABEL_5;
  v5 = MiSwizzleInvalidPte(128LL);
  v6 = 0;
  if ( MiPteInShadowRange((unsigned __int64)a1) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v6 = 1;
      if ( HIBYTE(word_140C4DE88) )
        goto LABEL_3;
      v8 = (v5 & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_3;
      v8 = (v5 & 1) == 0;
    }
    if ( !v8 )
      v5 |= 0x8000000000000000uLL;
  }
LABEL_3:
  *a1 = v5;
  if ( v6 )
    MiWritePteShadow((__int64)a1, v5, v7);
LABEL_5:
  ++*(_QWORD *)(a3 + 8);
}
