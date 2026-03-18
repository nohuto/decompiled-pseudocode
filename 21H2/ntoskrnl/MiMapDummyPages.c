/*
 * XREFs of MiMapDummyPages @ 0x140B2D454
 * Callers:
 *     MiInitNucleus @ 0x140AF47DC (MiInitNucleus.c)
 * Callees:
 *     MiComputeHash64 @ 0x1402225D0 (MiComputeHash64.c)
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MiMakeValidPte @ 0x1402CBD10 (MiMakeValidPte.c)
 *     MiReservePtes @ 0x1403095B0 (MiReservePtes.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 */

ULONG_PTR MiMapDummyPages()
{
  ULONG_PTR result; // rax
  unsigned __int64 v1; // rsi
  unsigned __int64 ValidPte; // rdi
  unsigned __int64 v3; // rbx
  int v4; // r14d
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rsi
  __int64 v7; // rbx
  int v8; // edi
  bool v9; // zf
  bool v10; // zf

  result = MiReservePtes((__int64)&qword_140C534C0, 2u);
  v1 = result;
  if ( !result )
    return result;
  ValidPte = MiMakeValidPte(result, qword_140C53290, 536870913);
  v3 = ValidPte;
  v4 = 0;
  if ( MiPteInShadowRange(v1) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v4 = 1;
      if ( HIBYTE(word_140C51864) )
        goto LABEL_3;
      v9 = (ValidPte & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_3;
      v9 = (ValidPte & 1) == 0;
    }
    if ( !v9 )
      v3 = ValidPte | 0x8000000000000000uLL;
  }
LABEL_3:
  *(_QWORD *)v1 = v3;
  if ( v4 )
    MiWritePteShadow(v1, v3);
  qword_140C53298 = (__int64)(v1 << 25) >> 16;
  v5 = MiComputeHash64((__int64)(v1 << 25) >> 16);
  v6 = v1 + 8;
  qword_140C532A8 = v5;
  v7 = ValidPte ^ (ValidPte ^ (qword_140C53278 << 12)) & 0xFFFFFFFFFF000LL;
  v8 = 0;
  if ( !MiPteInShadowRange(v6) )
    goto LABEL_6;
  if ( (unsigned int)MiPteHasShadow() )
  {
    v8 = 1;
    if ( !HIBYTE(word_140C51864) )
    {
      v10 = (v7 & 1) == 0;
      goto LABEL_22;
    }
  }
  else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
  {
    v10 = (v7 & 1) == 0;
LABEL_22:
    if ( !v10 )
      v7 |= 0x8000000000000000uLL;
  }
LABEL_6:
  *(_QWORD *)v6 = v7;
  if ( v8 )
    MiWritePteShadow(v6, v7);
  qword_140C532A0 = (PVOID)((__int64)(v6 << 25) >> 16);
  qword_140C532B0 = MiComputeHash64((__int64)qword_140C532A0);
  return 1LL;
}
