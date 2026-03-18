/*
 * XREFs of MiAssignNonPagedPoolPte @ 0x1402CA210
 * Callers:
 *     MiFillPoolCommitPageTable @ 0x1402CA5C0 (MiFillPoolCommitPageTable.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MiGetContainingPageTable @ 0x14029C940 (MiGetContainingPageTable.c)
 *     MiSwizzleInvalidPte @ 0x1402AD3A0 (MiSwizzleInvalidPte.c)
 *     MiMakeValidPte @ 0x1402B1B40 (MiMakeValidPte.c)
 *     MiSetPfnOwnedAndActive @ 0x1402CA460 (MiSetPfnOwnedAndActive.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 */

__int64 __fastcall MiAssignNonPagedPoolPte(__int64 a1, unsigned __int64 a2)
{
  __int64 *v4; // r14
  __int64 v5; // rax
  unsigned __int16 v6; // bx
  __int64 v7; // rsi
  __int64 v8; // r9
  unsigned __int64 ValidPte; // rdi
  __int64 ContainingPageTable; // rax
  __int64 v11; // r10
  __int64 v12; // r15
  __int64 v13; // rcx
  __int64 v14; // rbx
  unsigned int v15; // esi
  __int64 v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rbx
  int v23; // [rsp+60h] [rbp+8h] BYREF

  v4 = (__int64 *)(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v5 = MiSwizzleInvalidPte(128LL);
  v6 = *(_WORD *)(a1 + 78);
  v7 = v5;
  ValidPte = MiMakeValidPte((unsigned __int64)v4, 0LL, (v6 >> 3) & 0x1F | 0xA0000000, v8);
  ContainingPageTable = MiGetContainingPageTable((unsigned __int64)v4);
  v11 = *(_QWORD *)(a1 + 16);
  v12 = ContainingPageTable;
  if ( (v6 & 0x100) != 0 )
  {
    v15 = 1;
    v14 = *(_QWORD *)(v11 + 8 * ((a2 - *(_QWORD *)a1) >> 12));
  }
  else
  {
    *(_QWORD *)(a1 + 16) = *(_QWORD *)v11;
    v13 = *(_QWORD *)(v11 + 40);
    v14 = (v11 + 0x58000000000LL) / 48;
    if ( (*(_BYTE *)(v11 + 35) & 0x10) != 0 )
    {
      v15 = 0;
    }
    else
    {
      *(_QWORD *)(v11 + 16) = v7;
      v13 &= ~0x8000000000000000uLL;
      v15 = 1;
    }
    *(_QWORD *)(v11 + 40) = v13 ^ (ContainingPageTable ^ v13) & 0xFFFFFFFFFLL;
    MiSetPfnOwnedAndActive(v11, 0, (_DWORD)v4, 1, 1);
  }
  v16 = ValidPte ^ (ValidPte ^ (v14 << 12)) & 0xFFFFFFFFF000LL;
  if ( !MiPteInShadowRange((unsigned __int64)v4) )
  {
LABEL_16:
    *v4 = v16;
    goto LABEL_17;
  }
  if ( !(unsigned int)MiPteHasShadow(v18, v17, v19, v20) )
  {
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 && (v16 & 1) != 0 )
      v16 |= 0x8000000000000000uLL;
    goto LABEL_16;
  }
  if ( !HIBYTE(word_140C4DE88) && (v16 & 1) != 0 )
    v16 |= 0x8000000000000000uLL;
  *v4 = v16;
  MiWritePteShadow(v4, v16);
LABEL_17:
  v21 = 48 * v12 - 0x58000000000LL;
  v23 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v21 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v23);
    while ( *(__int64 *)(v21 + 24) < 0 );
  }
  *(_QWORD *)(v21 + 24) ^= (*(_QWORD *)(v21 + 24) ^ (*(_QWORD *)(v21 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return v15;
}
