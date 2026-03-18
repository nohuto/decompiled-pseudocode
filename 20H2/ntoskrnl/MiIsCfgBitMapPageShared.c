/*
 * XREFs of MiIsCfgBitMapPageShared @ 0x140235BB4
 * Callers:
 *     MiMarkSharedImageCfgBits @ 0x14062A758 (MiMarkSharedImageCfgBits.c)
 * Callees:
 *     MiGetNextPageTable @ 0x140235D70 (MiGetNextPageTable.c)
 *     MiIsPrototypePteVadLookup @ 0x140236D50 (MiIsPrototypePteVadLookup.c)
 *     MiUnlockWorkingSetShared @ 0x140270AB0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x14027B490 (MiLockWorkingSetShared.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetProtoPteAddress @ 0x1402B3F50 (MiGetProtoPteAddress.c)
 *     MiUnlockPageTableInternal @ 0x14035B910 (MiUnlockPageTableInternal.c)
 *     MI_PFN_IS_PROTO @ 0x1403F3080 (MI_PFN_IS_PROTO.c)
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
  __int64 v13; // rbp
  unsigned __int64 v14; // rax
  __int64 v15; // rcx
  bool v16; // zf
  int v18; // [rsp+70h] [rbp+8h] BYREF
  __int64 v19; // [rsp+80h] [rbp+18h] BYREF
  char v20; // [rsp+88h] [rbp+20h] BYREF

  v18 = 0;
  v4 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v5 = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[6];
  v6 = MiLockWorkingSetShared(v5);
  LOBYTE(v7) = v6;
  if ( v4 != MiGetNextPageTable(v4, v4, 0, v7, 0, (__int64)&v18) )
  {
    v9 = 3;
    goto LABEL_19;
  }
  v10 = ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v19 = MI_READ_PTE_LOCK_FREE(v4);
  v11 = v19;
  if ( !v19 )
  {
    v9 = 2;
    goto LABEL_17;
  }
  ProtoPteAddress = MiGetProtoPteAddress(a2, a1 >> 12, 0LL, &v20);
  v9 = 1;
  v13 = ProtoPteAddress;
  if ( (v11 & 1) != 0 )
  {
    v14 = MI_READ_PTE_LOCK_FREE(&v19);
    if ( (unsigned int)MI_PFN_IS_PROTO(48 * ((v14 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL) )
    {
      v8 = 0x8000000000000000uLL;
      v16 = (*(_QWORD *)(v15 + 8) | 0x8000000000000000uLL) == v13;
      goto LABEL_15;
    }
  }
  else if ( (v11 & 0x400) != 0 )
  {
    if ( (unsigned int)MiIsPrototypePteVadLookup(v11) )
      goto LABEL_17;
    if ( qword_140C4DDC0 )
    {
      if ( (v11 & 0x10) != 0 )
        v11 &= ~0x10uLL;
      else
        v11 &= ~qword_140C4DDC0;
    }
    v16 = v13 == v11 >> 16;
LABEL_15:
    if ( v16 )
      goto LABEL_17;
  }
  v9 = 0;
LABEL_17:
  if ( v10 )
    MiUnlockPageTableInternal(v5);
LABEL_19:
  LOBYTE(v8) = v6;
  MiUnlockWorkingSetShared(v5, v8);
  return v9;
}
