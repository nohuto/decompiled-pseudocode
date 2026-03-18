/*
 * XREFs of MiMakeSystemCachePteValid @ 0x140367828
 * Callers:
 *     MmCopyToCachedPage @ 0x1402BE8E0 (MmCopyToCachedPage.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x14020D8D0 (MiUnlockPageTableInternal.c)
 *     MiLockAndDecrementShareCount @ 0x140228660 (MiLockAndDecrementShareCount.c)
 *     ObFastDereferenceObjectDeferDelete @ 0x140230680 (ObFastDereferenceObjectDeferDelete.c)
 *     MiReferenceControlAreaFileWithTag @ 0x14027A794 (MiReferenceControlAreaFileWithTag.c)
 *     MiUnlockWorkingSetShared @ 0x1402B0CE0 (MiUnlockWorkingSetShared.c)
 *     MiMakeValidPte @ 0x1402CBD10 (MiMakeValidPte.c)
 *     MiLockWorkingSetOptimal @ 0x1402D0490 (MiLockWorkingSetOptimal.c)
 *     MiLockPageInline @ 0x1402F2700 (MiLockPageInline.c)
 *     MiAllocateWsle @ 0x140322F10 (MiAllocateWsle.c)
 *     MiStartingOffset @ 0x1403342D0 (MiStartingOffset.c)
 *     PfSnLogPageFault @ 0x140365C94 (PfSnLogPageFault.c)
 */

void __fastcall MiMakeSystemCachePteValid(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, char a4)
{
  unsigned __int64 ValidPte; // rbx
  __int64 v6; // rsi
  __int64 v9; // rdi
  int v10; // r12d
  __int64 v11; // r13
  unsigned __int8 v12; // al
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rbp
  __int64 v19; // rsi
  __int64 v20; // rsi
  __int64 v21; // rdi
  __int64 v22; // rbx
  int v23; // eax
  unsigned __int64 v24; // [rsp+88h] [rbp+10h] BYREF
  unsigned __int8 v25; // [rsp+90h] [rbp+18h]

  LOBYTE(v24) = 0;
  ValidPte = a3;
  v6 = (a3 >> 12) & 0xFFFFFFFFFFLL;
  v9 = 48 * v6 - 0x220000000000LL;
  v10 = 0;
  v11 = 48 * ((*(_QWORD *)(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  v12 = MiLockPageInline(v11);
  v13 = *(_QWORD *)(v11 + 24);
  v25 = v12;
  *(_QWORD *)(v11 + 24) = v13 ^ (v13 ^ (v13 + 1)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v14 = MiLockWorkingSetOptimal(a1, a2, &v24);
  v15 = *(_QWORD *)a2;
  v24 = v14;
  if ( (v15 & 1) != 0 )
  {
    v18 = 0LL;
    v19 = 0LL;
LABEL_18:
    MiLockAndDecrementShareCount(v9, 0);
    MiLockAndDecrementShareCount(v11, 0);
    goto LABEL_7;
  }
  if ( (v15 & 8) != 0 )
    ValidPte = MiMakeValidPte(a2, v6, 536870913);
  v16 = ValidPte & 0xFFFFFFFFFFFFFEFBuLL;
  v17 = v16 | ((unsigned __int64)(word_140C51864 & 1) << 8);
  if ( (a4 & 8) != 0 && _bittest64((const signed __int64 *)(v9 + 40), 0x35u) )
    v17 = v16 & 0xFFFFFFFFFFFFFFBDuLL | ((unsigned __int64)(word_140C51864 & 1) << 8);
  v18 = *(_QWORD *)(v9 + 8) | 0x8000000000000000uLL;
  v19 = *(_QWORD *)(v9 + 16);
  if ( !(unsigned int)MiAllocateWsle(a1, a2, (_QWORD *)v9, 0, v17, 0, 0LL) )
    goto LABEL_18;
  if ( PfSnNumActiveTraces && (v19 & 0x400) != 0 )
    v10 = 1;
LABEL_7:
  MiUnlockPageTableInternal(a1, v24);
  MiUnlockWorkingSetShared(a1, v25);
  if ( v10 )
  {
    if ( qword_140C50780 )
    {
      if ( (v19 & 0x10) == 0 )
        v19 &= ~qword_140C50780;
    }
    v20 = v19 >> 16;
    v21 = *(_QWORD *)v20;
    v22 = MiReferenceControlAreaFileWithTag(*(_QWORD *)v20, 1666411853LL);
    v23 = MiStartingOffset(v20, v18, 0xFFFFFFFF);
    PfSnLogPageFault(v22, v23, 4u);
    ObFastDereferenceObjectDeferDelete((signed __int64 *)(v21 + 64), v22, 0x63536D4Du);
  }
}
