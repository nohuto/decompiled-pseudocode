/*
 * XREFs of MiMapDummyPages @ 0x140A7404C
 * Callers:
 *     MiInitNucleus @ 0x140A43414 (MiInitNucleus.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MiReservePtes @ 0x140285DC0 (MiReservePtes.c)
 *     MiMakeValidPte @ 0x1402B1B40 (MiMakeValidPte.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     MiComputeHash64 @ 0x140370550 (MiComputeHash64.c)
 */

ULONG_PTR MiMapDummyPages()
{
  ULONG_PTR result; // rax
  __int64 v1; // r9
  unsigned __int64 v2; // rsi
  unsigned __int64 ValidPte; // rdi
  unsigned __int64 v4; // rbx
  int v5; // ebp
  __int64 v6; // r8
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rsi
  __int64 v9; // rbx
  int v10; // edi
  __int64 v11; // r8
  bool v12; // zf
  bool v13; // zf

  result = MiReservePtes((__int64)&qword_140C4EDC0, 2u);
  v2 = result;
  if ( !result )
    return result;
  ValidPte = MiMakeValidPte(result, qword_140C4EC00, 536870913LL, v1);
  v4 = ValidPte;
  v5 = 0;
  if ( MiPteInShadowRange(v2) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v5 = 1;
      if ( HIBYTE(word_140C4DE88) )
        goto LABEL_3;
      v12 = (ValidPte & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_3;
      v12 = (ValidPte & 1) == 0;
    }
    if ( !v12 )
      v4 = ValidPte | 0x8000000000000000uLL;
  }
LABEL_3:
  *(_QWORD *)v2 = v4;
  if ( v5 )
    MiWritePteShadow(v2, v4, v6);
  qword_140C4EC08 = (__int64)(v2 << 25) >> 16;
  v7 = MiComputeHash64((__int64)(v2 << 25) >> 16);
  v8 = v2 + 8;
  qword_140C4EC18 = v7;
  v9 = ValidPte ^ (ValidPte ^ (qword_140C4EBE8 << 12)) & 0xFFFFFFFFF000LL;
  v10 = 0;
  if ( !MiPteInShadowRange(v8) )
    goto LABEL_6;
  if ( (unsigned int)MiPteHasShadow() )
  {
    v10 = 1;
    if ( !HIBYTE(word_140C4DE88) )
    {
      v13 = (v9 & 1) == 0;
      goto LABEL_22;
    }
  }
  else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
  {
    v13 = (v9 & 1) == 0;
LABEL_22:
    if ( !v13 )
      v9 |= 0x8000000000000000uLL;
  }
LABEL_6:
  *(_QWORD *)v8 = v9;
  if ( v10 )
    MiWritePteShadow(v8, v9, v11);
  qword_140C4EC10 = (__int64)(v8 << 25) >> 16;
  qword_140C4EC20 = MiComputeHash64(qword_140C4EC10);
  return 1LL;
}
