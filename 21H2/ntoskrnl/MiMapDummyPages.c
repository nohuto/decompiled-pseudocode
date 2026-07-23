/*
 * XREFs of MiMapDummyPages @ 0x140A71FCC
 * Callers:
 *     MiInitNucleus @ 0x140A43F34 (MiInitNucleus.c)
 * Callees:
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiReservePtes @ 0x1402CAEB0 (MiReservePtes.c)
 *     MiMakeValidPte @ 0x140339480 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     MiComputeHash64 @ 0x140370250 (MiComputeHash64.c)
 */

ULONG_PTR __fastcall MiMapDummyPages(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  ULONG_PTR result; // rax
  unsigned __int64 v5; // rsi
  unsigned __int64 ValidPte; // rdi
  unsigned __int64 v7; // rbx
  int v8; // ebp
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rsi
  __int64 v11; // rbx
  int v12; // edi
  bool v13; // zf
  bool v14; // zf

  result = MiReservePtes((__int64)&qword_140C4EF80, 2u, a3, a4);
  v5 = result;
  if ( !result )
    return result;
  ValidPte = MiMakeValidPte(result, qword_140C4EDC0, 536870913);
  v7 = ValidPte;
  v8 = 0;
  if ( MiPteInShadowRange(v5) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v8 = 1;
      if ( HIBYTE(word_140C4E048) )
        goto LABEL_3;
      v13 = (ValidPte & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_3;
      v13 = (ValidPte & 1) == 0;
    }
    if ( !v13 )
      v7 = ValidPte | 0x8000000000000000uLL;
  }
LABEL_3:
  *(_QWORD *)v5 = v7;
  if ( v8 )
    MiWritePteShadow(v5, v7);
  qword_140C4EDC8 = (__int64)(v5 << 25) >> 16;
  v9 = MiComputeHash64((__int64)(v5 << 25) >> 16);
  v10 = v5 + 8;
  qword_140C4EDD8 = v9;
  v11 = ValidPte ^ (ValidPte ^ (qword_140C4EDA8 << 12)) & 0xFFFFFFFFF000LL;
  v12 = 0;
  if ( !MiPteInShadowRange(v10) )
    goto LABEL_6;
  if ( (unsigned int)MiPteHasShadow() )
  {
    v12 = 1;
    if ( !HIBYTE(word_140C4E048) )
    {
      v14 = (v11 & 1) == 0;
      goto LABEL_22;
    }
  }
  else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
  {
    v14 = (v11 & 1) == 0;
LABEL_22:
    if ( !v14 )
      v11 |= 0x8000000000000000uLL;
  }
LABEL_6:
  *(_QWORD *)v10 = v11;
  if ( v12 )
    MiWritePteShadow(v10, v11);
  qword_140C4EDD0 = (__int64)(v10 << 25) >> 16;
  qword_140C4EDE0 = MiComputeHash64(qword_140C4EDD0);
  return 1LL;
}
