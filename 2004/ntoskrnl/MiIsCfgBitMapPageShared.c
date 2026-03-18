/*
 * XREFs of MiIsCfgBitMapPageShared @ 0x140255F44
 * Callers:
 *     MiMarkSharedImageCfgBits @ 0x140608258 (MiMarkSharedImageCfgBits.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetNextPageTable @ 0x140256100 (MiGetNextPageTable.c)
 *     MiUnlockPageTableInternal @ 0x140278B10 (MiUnlockPageTableInternal.c)
 *     MiGetProtoPteAddress @ 0x14029A830 (MiGetProtoPteAddress.c)
 *     MiUnlockWorkingSetShared @ 0x1402A1770 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402AC150 (MiLockWorkingSetShared.c)
 *     MiIsPrototypePteVadLookup @ 0x140315EC0 (MiIsPrototypePteVadLookup.c)
 *     MI_PFN_IS_PROTO @ 0x1403EEC18 (MI_PFN_IS_PROTO.c)
 */

__int64 __fastcall MiIsCfgBitMapPageShared(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rbx
  unsigned __int64 *v5; // r14
  char v6; // r15
  int v7; // r9d
  unsigned __int64 v8; // rdx
  unsigned int v9; // edi
  __int64 v10; // rsi
  __int64 v11; // rbx
  __int64 ProtoPteAddress; // rax
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rbp
  unsigned __int64 v16; // rax
  __int64 v17; // rcx
  bool v18; // zf
  int v20; // [rsp+70h] [rbp+8h] BYREF
  __int64 v21; // [rsp+80h] [rbp+18h] BYREF
  char v22; // [rsp+88h] [rbp+20h] BYREF

  v20 = 0;
  v4 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v5 = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[6];
  v6 = MiLockWorkingSetShared(v5);
  LOBYTE(v7) = v6;
  if ( v4 != MiGetNextPageTable(v4, v4, 0, v7, 0, (__int64)&v20) )
  {
    v9 = 3;
    goto LABEL_19;
  }
  v10 = ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v21 = MI_READ_PTE_LOCK_FREE(v4);
  v11 = v21;
  if ( !v21 )
  {
    v9 = 2;
    goto LABEL_17;
  }
  ProtoPteAddress = MiGetProtoPteAddress(a2, a1 >> 12, 0LL, &v22);
  v9 = 1;
  v15 = ProtoPteAddress;
  if ( (v11 & 1) != 0 )
  {
    v16 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v21);
    if ( (unsigned int)MI_PFN_IS_PROTO(48 * ((v16 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL) )
    {
      v8 = 0x8000000000000000uLL;
      v18 = (*(_QWORD *)(v17 + 8) | 0x8000000000000000uLL) == v15;
      goto LABEL_15;
    }
  }
  else if ( (v11 & 0x400) != 0 )
  {
    if ( (unsigned int)MiIsPrototypePteVadLookup(v11, v8, v13, v14) )
      goto LABEL_17;
    if ( qword_140C4DD40 )
    {
      if ( (v11 & 0x10) != 0 )
        v11 &= ~0x10uLL;
      else
        v11 &= ~qword_140C4DD40;
    }
    v18 = v15 == v11 >> 16;
LABEL_15:
    if ( v18 )
      goto LABEL_17;
  }
  v9 = 0;
LABEL_17:
  if ( v10 )
    MiUnlockPageTableInternal(v5, v10);
LABEL_19:
  LOBYTE(v8) = v6;
  MiUnlockWorkingSetShared(v5, v8);
  return v9;
}
