/*
 * XREFs of MiIsCfgBitMapPageShared @ 0x1403183BC
 * Callers:
 *     MiMarkSharedImageCfgBits @ 0x1407009E4 (MiMarkSharedImageCfgBits.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x140202790 (MiUnlockPageTableInternal.c)
 *     MiIsPrototypePteVadLookup @ 0x14020A670 (MiIsPrototypePteVadLookup.c)
 *     MiUnlockWorkingSetShared @ 0x1402B4090 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402BE5B0 (MiLockWorkingSetShared.c)
 *     MiGetNextPageTable @ 0x140318570 (MiGetNextPageTable.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetProtoPteAddress @ 0x14033B890 (MiGetProtoPteAddress.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 */

__int64 __fastcall MiIsCfgBitMapPageShared(unsigned __int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  unsigned __int64 v6; // rbx
  unsigned __int64 *v7; // r14
  unsigned __int8 v8; // r15
  int v9; // r9d
  unsigned int v10; // edi
  unsigned __int64 v11; // rsi
  signed __int64 v12; // rbx
  __int64 ProtoPteAddress; // rax
  __int64 v14; // rbp
  unsigned __int64 v15; // rax
  __int64 v16; // rcx
  bool v17; // zf
  int v19; // [rsp+70h] [rbp+8h] BYREF
  __int64 v20; // [rsp+80h] [rbp+18h] BYREF
  char v21; // [rsp+88h] [rbp+20h] BYREF

  v19 = 0;
  v6 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v7 = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[6];
  v8 = MiLockWorkingSetShared((__int64)v7, a2, a3, a4);
  LOBYTE(v9) = v8;
  if ( v6 != MiGetNextPageTable(v6, v6, 0, v9, 0, (__int64)&v19) )
  {
    v10 = 3;
    goto LABEL_19;
  }
  v11 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v20 = MI_READ_PTE_LOCK_FREE(v6);
  v12 = v20;
  if ( !v20 )
  {
    v10 = 2;
    goto LABEL_17;
  }
  ProtoPteAddress = MiGetProtoPteAddress(a2, a1 >> 12, 0LL, &v21);
  v10 = 1;
  v14 = ProtoPteAddress;
  if ( (v12 & 1) != 0 )
  {
    v15 = MI_READ_PTE_LOCK_FREE(&v20);
    if ( (unsigned int)MI_PFN_IS_PROTO(48 * ((v15 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL) )
    {
      v17 = (*(_QWORD *)(v16 + 8) | 0x8000000000000000uLL) == v14;
      goto LABEL_15;
    }
  }
  else if ( (v12 & 0x400) != 0 )
  {
    if ( MiIsPrototypePteVadLookup(v12) )
      goto LABEL_17;
    if ( qword_140C4DF80 )
    {
      if ( (v12 & 0x10) != 0 )
        v12 &= ~0x10uLL;
      else
        v12 &= ~qword_140C4DF80;
    }
    v17 = v14 == v12 >> 16;
LABEL_15:
    if ( v17 )
      goto LABEL_17;
  }
  v10 = 0;
LABEL_17:
  if ( v11 )
    MiUnlockPageTableInternal((__int64)v7, v11);
LABEL_19:
  MiUnlockWorkingSetShared((__int64)v7, v8);
  return v10;
}
