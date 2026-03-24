/*
 * XREFs of MiMapDummyPages @ 0x140A70FCC
 * Callers:
 *     MiInitNucleus @ 0x140A42F34 (MiInitNucleus.c)
 * Callees:
 *     MiReservePtes @ 0x1402265B0 (MiReservePtes.c)
 *     MiWritePteShadow @ 0x1402B69BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     MiMakeValidPte @ 0x14032E730 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 *     MiComputeHash64 @ 0x140370700 (MiComputeHash64.c)
 */

ULONG_PTR __fastcall MiMapDummyPages(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  ULONG_PTR result; // rax
  unsigned __int64 v5; // rsi
  unsigned __int64 ValidPte; // rdi
  unsigned __int64 v7; // rbx
  int v8; // ebp
  __int64 v9; // r8
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rsi
  __int64 v12; // rbx
  int v13; // edi
  __int64 v14; // r8
  bool v15; // zf
  bool v16; // zf

  result = MiReservePtes((__int64)&qword_140C4EF40, 2u, a3, a4);
  v5 = result;
  if ( !result )
    return result;
  ValidPte = MiMakeValidPte(result, qword_140C4ED80, 536870913);
  v7 = ValidPte;
  v8 = 0;
  if ( MiPteInShadowRange(v5) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v8 = 1;
      if ( HIBYTE(word_140C4E008) )
        goto LABEL_3;
      v15 = (ValidPte & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_3;
      v15 = (ValidPte & 1) == 0;
    }
    if ( !v15 )
      v7 = ValidPte | 0x8000000000000000uLL;
  }
LABEL_3:
  *(_QWORD *)v5 = v7;
  if ( v8 )
    MiWritePteShadow(v5, v7, v9);
  qword_140C4ED88 = (__int64)(v5 << 25) >> 16;
  v10 = MiComputeHash64((__int64)(v5 << 25) >> 16);
  v11 = v5 + 8;
  qword_140C4ED98 = v10;
  v12 = ValidPte ^ (ValidPte ^ (qword_140C4ED68 << 12)) & 0xFFFFFFFFF000LL;
  v13 = 0;
  if ( !MiPteInShadowRange(v11) )
    goto LABEL_6;
  if ( (unsigned int)MiPteHasShadow() )
  {
    v13 = 1;
    if ( !HIBYTE(word_140C4E008) )
    {
      v16 = (v12 & 1) == 0;
      goto LABEL_22;
    }
  }
  else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
  {
    v16 = (v12 & 1) == 0;
LABEL_22:
    if ( !v16 )
      v12 |= 0x8000000000000000uLL;
  }
LABEL_6:
  *(_QWORD *)v11 = v12;
  if ( v13 )
    MiWritePteShadow(v11, v12, v14);
  qword_140C4ED90 = (__int64)(v11 << 25) >> 16;
  qword_140C4EDA0 = MiComputeHash64(qword_140C4ED90);
  return 1LL;
}
