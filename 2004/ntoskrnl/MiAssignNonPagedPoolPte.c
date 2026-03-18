/*
 * XREFs of MiAssignNonPagedPoolPte @ 0x14025F380
 * Callers:
 *     MiFillPoolCommitPageTable @ 0x1402B6940 (MiFillPoolCommitPageTable.c)
 * Callees:
 *     MiMakeValidPte @ 0x1402342E0 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiSetPfnOwnedAndActive @ 0x14025F5D0 (MiSetPfnOwnedAndActive.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     MiSwizzleInvalidPte @ 0x1402B6040 (MiSwizzleInvalidPte.c)
 *     MiGetContainingPageTable @ 0x1402B9DD0 (MiGetContainingPageTable.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 */

__int64 __fastcall MiAssignNonPagedPoolPte(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v6; // r14
  __int64 v7; // rax
  unsigned __int16 v8; // bx
  __int64 v9; // rsi
  __int64 v10; // r9
  unsigned __int64 ValidPte; // rdi
  __int64 ContainingPageTable; // rax
  __int64 v13; // r10
  __int64 v14; // r15
  __int64 v15; // rcx
  __int64 v16; // rbx
  unsigned int v17; // esi
  __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rbx
  int v25; // [rsp+60h] [rbp+8h] BYREF

  v6 = (__int64 *)(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v7 = MiSwizzleInvalidPte(128LL, a2, a3, a4);
  v8 = *(_WORD *)(a1 + 78);
  v9 = v7;
  ValidPte = MiMakeValidPte((unsigned __int64)v6, 0LL, (v8 >> 3) & 0x1F | 0xA0000000, v10);
  ContainingPageTable = MiGetContainingPageTable(v6);
  v13 = *(_QWORD *)(a1 + 16);
  v14 = ContainingPageTable;
  if ( (v8 & 0x100) != 0 )
  {
    v17 = 1;
    v16 = *(_QWORD *)(v13 + 8 * ((a2 - *(_QWORD *)a1) >> 12));
  }
  else
  {
    *(_QWORD *)(a1 + 16) = *(_QWORD *)v13;
    v15 = *(_QWORD *)(v13 + 40);
    v16 = (v13 + 0x58000000000LL) / 48;
    if ( (*(_BYTE *)(v13 + 35) & 0x10) != 0 )
    {
      v17 = 0;
    }
    else
    {
      *(_QWORD *)(v13 + 16) = v9;
      v15 &= ~0x8000000000000000uLL;
      v17 = 1;
    }
    *(_QWORD *)(v13 + 40) = v15 ^ (ContainingPageTable ^ v15) & 0xFFFFFFFFFLL;
    MiSetPfnOwnedAndActive(v13, 0, (_DWORD)v6, 1, 1);
  }
  v18 = ValidPte ^ (ValidPte ^ (v16 << 12)) & 0xFFFFFFFFF000LL;
  if ( !MiPteInShadowRange((unsigned __int64)v6) )
  {
LABEL_16:
    *v6 = v18;
    goto LABEL_17;
  }
  if ( !(unsigned int)MiPteHasShadow(v20, v19, v21, v22) )
  {
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 && (v18 & 1) != 0 )
      v18 |= 0x8000000000000000uLL;
    goto LABEL_16;
  }
  if ( !HIBYTE(word_140C4DE08) && (v18 & 1) != 0 )
    v18 |= 0x8000000000000000uLL;
  *v6 = v18;
  MiWritePteShadow(v6, v18);
LABEL_17:
  v23 = 48 * v14 - 0x58000000000LL;
  v25 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v23 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v25, v19);
    while ( *(__int64 *)(v23 + 24) < 0 );
  }
  *(_QWORD *)(v23 + 24) ^= (*(_QWORD *)(v23 + 24) ^ (*(_QWORD *)(v23 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return v17;
}
