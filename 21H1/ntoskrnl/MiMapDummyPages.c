/*
 * XREFs of MiMapDummyPages @ 0x140A6D284
 * Callers:
 *     MiInitNucleus @ 0x140A43F3C (MiInitNucleus.c)
 * Callees:
 *     MiReservePtes @ 0x1402743A0 (MiReservePtes.c)
 *     MiMakeValidPte @ 0x14028D330 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MiComputeHash64 @ 0x14036D9D0 (MiComputeHash64.c)
 */

ULONG_PTR MiMapDummyPages()
{
  ULONG_PTR result; // rax
  __int64 v1; // r9
  unsigned __int64 v2; // rsi
  unsigned __int64 ValidPte; // rdi
  unsigned __int64 v4; // rbx
  int v5; // ebp
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rsi
  __int64 v8; // rbx
  int v9; // edi
  bool v10; // zf
  bool v11; // zf

  result = MiReservePtes((__int64)&qword_140C4EE80, 2LL);
  v2 = result;
  if ( !result )
    return result;
  ValidPte = MiMakeValidPte(result, qword_140C4ECC0, 536870913LL, v1);
  v4 = ValidPte;
  v5 = 0;
  if ( MiPteInShadowRange(v2) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v5 = 1;
      if ( HIBYTE(word_140C4DF48) )
        goto LABEL_3;
      v10 = (ValidPte & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_3;
      v10 = (ValidPte & 1) == 0;
    }
    if ( !v10 )
      v4 = ValidPte | 0x8000000000000000uLL;
  }
LABEL_3:
  *(_QWORD *)v2 = v4;
  if ( v5 )
    MiWritePteShadow(v2, v4);
  qword_140C4ECC8 = (__int64)(v2 << 25) >> 16;
  v6 = MiComputeHash64((__int64)(v2 << 25) >> 16);
  v7 = v2 + 8;
  qword_140C4ECD8 = v6;
  v8 = ValidPte ^ (ValidPte ^ (qword_140C4ECA8 << 12)) & 0xFFFFFFFFF000LL;
  v9 = 0;
  if ( !MiPteInShadowRange(v7) )
    goto LABEL_6;
  if ( (unsigned int)MiPteHasShadow() )
  {
    v9 = 1;
    if ( !HIBYTE(word_140C4DF48) )
    {
      v11 = (v8 & 1) == 0;
      goto LABEL_22;
    }
  }
  else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
  {
    v11 = (v8 & 1) == 0;
LABEL_22:
    if ( !v11 )
      v8 |= 0x8000000000000000uLL;
  }
LABEL_6:
  *(_QWORD *)v7 = v8;
  if ( v9 )
    MiWritePteShadow(v7, v8);
  qword_140C4ECD0 = (__int64)(v7 << 25) >> 16;
  qword_140C4ECE0 = MiComputeHash64(qword_140C4ECD0);
  return 1LL;
}
