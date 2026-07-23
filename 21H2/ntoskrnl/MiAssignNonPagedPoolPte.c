/*
 * XREFs of MiAssignNonPagedPoolPte @ 0x1402E0240
 * Callers:
 *     MiFillPoolCommitPageTable @ 0x140316730 (MiFillPoolCommitPageTable.c)
 * Callees:
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiSetPfnOwnedAndActive @ 0x1402E0490 (MiSetPfnOwnedAndActive.c)
 *     MiGetContainingPageTable @ 0x1402E2CA0 (MiGetContainingPageTable.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MiSwizzleInvalidPte @ 0x140334CE0 (MiSwizzleInvalidPte.c)
 *     MiMakeValidPte @ 0x140339480 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 */

__int64 __fastcall MiAssignNonPagedPoolPte(__int64 a1, unsigned __int64 a2)
{
  __int64 *v4; // r14
  __int64 v5; // rax
  unsigned __int16 v6; // bx
  __int64 v7; // rsi
  __int64 ValidPte; // rdi
  __int64 ContainingPageTable; // rax
  __int64 v10; // r10
  __int64 v11; // r15
  __int64 v12; // rcx
  __int64 v13; // rbx
  unsigned int v14; // esi
  __int64 v15; // rbx
  __int64 v16; // rbx
  int v18; // [rsp+60h] [rbp+8h] BYREF

  v4 = (__int64 *)(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v5 = MiSwizzleInvalidPte(128LL);
  v6 = *(_WORD *)(a1 + 78);
  v7 = v5;
  ValidPte = MiMakeValidPte(v4, 0LL, (v6 >> 3) & 0x1F | 0xA0000000);
  ContainingPageTable = MiGetContainingPageTable(v4);
  v10 = *(_QWORD *)(a1 + 16);
  v11 = ContainingPageTable;
  if ( (v6 & 0x100) != 0 )
  {
    v14 = 1;
    v13 = *(_QWORD *)(v10 + 8 * ((a2 - *(_QWORD *)a1) >> 12));
  }
  else
  {
    *(_QWORD *)(a1 + 16) = *(_QWORD *)v10;
    v12 = *(_QWORD *)(v10 + 40);
    v13 = (v10 + 0x58000000000LL) / 48;
    if ( (*(_BYTE *)(v10 + 35) & 0x10) != 0 )
    {
      v14 = 0;
    }
    else
    {
      *(_QWORD *)(v10 + 16) = v7;
      v12 &= ~0x8000000000000000uLL;
      v14 = 1;
    }
    *(_QWORD *)(v10 + 40) = v12 ^ (ContainingPageTable ^ v12) & 0xFFFFFFFFFLL;
    MiSetPfnOwnedAndActive(v10, 0, (_DWORD)v4, 1, 1);
  }
  v15 = ValidPte ^ (ValidPte ^ (v13 << 12)) & 0xFFFFFFFFF000LL;
  if ( !(unsigned int)MiPteInShadowRange(v4) )
  {
LABEL_16:
    *v4 = v15;
    goto LABEL_17;
  }
  if ( !(unsigned int)MiPteHasShadow() )
  {
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 && (v15 & 1) != 0 )
      v15 |= 0x8000000000000000uLL;
    goto LABEL_16;
  }
  if ( !HIBYTE(word_140C4E048) && (v15 & 1) != 0 )
    v15 |= 0x8000000000000000uLL;
  *v4 = v15;
  MiWritePteShadow((__int64)v4, v15);
LABEL_17:
  v16 = 48 * v11 - 0x58000000000LL;
  v18 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v18);
    while ( *(__int64 *)(v16 + 24) < 0 );
  }
  *(_QWORD *)(v16 + 24) ^= (*(_QWORD *)(v16 + 24) ^ (*(_QWORD *)(v16 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return v14;
}
