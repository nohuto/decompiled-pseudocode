/*
 * XREFs of MiMakeHyperPteDemandZero @ 0x1402ADF18
 * Callers:
 *     MiMakeHyperRangeAccessible @ 0x14021B4E0 (MiMakeHyperRangeAccessible.c)
 *     MiFillHyperPtes @ 0x1402ADD8C (MiFillHyperPtes.c)
 * Callees:
 *     MiWritePteShadow @ 0x1402B69BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     MiSwizzleInvalidPte @ 0x140329F90 (MiSwizzleInvalidPte.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 */

void __fastcall MiMakeHyperPteDemandZero(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rbx
  int v6; // ebp
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  bool v12; // zf

  if ( !*(_DWORD *)a3 )
    goto LABEL_5;
  v5 = MiSwizzleInvalidPte(128LL);
  v6 = 0;
  if ( (unsigned int)MiPteInShadowRange(a1, v7) )
  {
    if ( (unsigned int)MiPteHasShadow(v9, v8, v10, v11) )
    {
      v6 = 1;
      if ( HIBYTE(word_140C4E008) )
        goto LABEL_3;
      v12 = (v5 & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_3;
      v12 = (v5 & 1) == 0;
    }
    if ( !v12 )
      v5 |= 0x8000000000000000uLL;
  }
LABEL_3:
  *a1 = v5;
  if ( v6 )
    MiWritePteShadow(a1, v5);
LABEL_5:
  ++*(_QWORD *)(a3 + 8);
}
