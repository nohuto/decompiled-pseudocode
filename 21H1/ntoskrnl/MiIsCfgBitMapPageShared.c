/*
 * XREFs of MiIsCfgBitMapPageShared @ 0x1402AEF74
 * Callers:
 *     MiMarkSharedImageCfgBits @ 0x14063D3A8 (MiMarkSharedImageCfgBits.c)
 * Callees:
 *     MiGetProtoPteAddress @ 0x140207D20 (MiGetProtoPteAddress.c)
 *     MiUnlockWorkingSetShared @ 0x14020EC60 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219640 (MiLockWorkingSetShared.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetNextPageTable @ 0x1402AF130 (MiGetNextPageTable.c)
 *     MiUnlockPageTableInternal @ 0x1402DB860 (MiUnlockPageTableInternal.c)
 *     MiIsPrototypePteVadLookup @ 0x140345200 (MiIsPrototypePteVadLookup.c)
 *     MI_PFN_IS_PROTO @ 0x1403ED8B8 (MI_PFN_IS_PROTO.c)
 */

__int64 __fastcall MiIsCfgBitMapPageShared(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rbx
  unsigned __int64 *v5; // r14
  unsigned __int8 v6; // r15
  int v7; // r9d
  unsigned int v8; // edi
  __int64 v9; // rsi
  __int64 v10; // rbx
  __int64 ProtoPteAddress; // rax
  __int64 v12; // rbp
  unsigned __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rcx
  bool v17; // zf
  int v19; // [rsp+70h] [rbp+8h] BYREF
  __int64 v20; // [rsp+80h] [rbp+18h] BYREF
  __int64 v21; // [rsp+88h] [rbp+20h] BYREF

  v19 = 0;
  v4 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v5 = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[6];
  v6 = MiLockWorkingSetShared((__int64)v5);
  LOBYTE(v7) = v6;
  if ( v4 != MiGetNextPageTable(v4, v4, 0, v7, 0, (__int64)&v19) )
  {
    v8 = 3;
    goto LABEL_19;
  }
  v9 = ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v20 = MI_READ_PTE_LOCK_FREE(v4);
  v10 = v20;
  if ( !v20 )
  {
    v8 = 2;
    goto LABEL_17;
  }
  ProtoPteAddress = MiGetProtoPteAddress(a2, a1 >> 12, 0, &v21);
  v8 = 1;
  v12 = ProtoPteAddress;
  if ( (v10 & 1) != 0 )
  {
    v13 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v20);
    if ( (unsigned int)MI_PFN_IS_PROTO(48 * ((v13 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL, v14, v15) )
    {
      v17 = (*(_QWORD *)(v16 + 8) | 0x8000000000000000uLL) == v12;
      goto LABEL_15;
    }
  }
  else if ( (v10 & 0x400) != 0 )
  {
    if ( (unsigned int)MiIsPrototypePteVadLookup(v10) )
      goto LABEL_17;
    if ( qword_140C4DE80 )
    {
      if ( (v10 & 0x10) != 0 )
        v10 &= ~0x10uLL;
      else
        v10 &= ~qword_140C4DE80;
    }
    v17 = v12 == v10 >> 16;
LABEL_15:
    if ( v17 )
      goto LABEL_17;
  }
  v8 = 0;
LABEL_17:
  if ( v9 )
    MiUnlockPageTableInternal(v5, v9);
LABEL_19:
  MiUnlockWorkingSetShared((__int64)v5, v6);
  return v8;
}
