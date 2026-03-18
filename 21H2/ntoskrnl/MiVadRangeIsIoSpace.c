/*
 * XREFs of MiVadRangeIsIoSpace @ 0x1405941C0
 * Callers:
 *     MiCopyVirtualMemory @ 0x1407BB560 (MiCopyVirtualMemory.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x14020D8D0 (MiUnlockPageTableInternal.c)
 *     KeShouldYieldProcessor @ 0x140222100 (KeShouldYieldProcessor.c)
 *     MiPageTableLockIsContended @ 0x140274C80 (MiPageTableLockIsContended.c)
 *     MiUnlockWorkingSetShared @ 0x1402B0CE0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CF4F0 (MiLockWorkingSetShared.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeSystemAddressValid @ 0x14032CE60 (MiMakeSystemAddressValid.c)
 *     MiWorkingSetIsContended @ 0x1403531F0 (MiWorkingSetIsContended.c)
 */

__int64 __fastcall MiVadRangeIsIoSpace(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // r12
  unsigned __int64 v4; // r15
  __int64 v5; // rbx
  ULONG_PTR v6; // rdi
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rsi
  unsigned __int64 *v9; // rbp
  __int64 v10; // r9
  unsigned __int8 v11; // r13
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdi
  __int64 v15; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int64 v16; // [rsp+78h] [rbp+10h]
  __int64 v17; // [rsp+80h] [rbp+18h]

  v17 = a3;
  v16 = a2;
  v15 = a1;
  v3 = a2;
  v4 = a3;
  v5 = 0LL;
  v6 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v7 = (((a2 + a3 - 1) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v8 = 0LL;
  v9 = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[26];
  v11 = MiLockWorkingSetShared((__int64)v9);
  if ( v6 > v7 )
    goto LABEL_16;
  do
  {
    if ( v8 )
    {
      if ( (v6 & 0xFFF) != 0 )
        goto LABEL_6;
      MiUnlockPageTableInternal((__int64)v9, v8);
    }
    v8 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    LOBYTE(v10) = v11;
    MiMakeSystemAddressValid(v6, 0LL, 0, v10, 0);
LABEL_6:
    v15 = MI_READ_PTE_LOCK_FREE(v6);
    v12 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v15) >> 12) & 0xFFFFFFFFFFLL;
    if ( v12 > qword_140C50840 || ((*(_QWORD *)(48 * v12 - 0x21FFFFFFFFD8LL) >> 54) & 1) == 0 )
      break;
    v6 += 8LL;
    if ( (v6 & 0x78) == 0
      && (MiWorkingSetIsContended((__int64)v9)
       || (unsigned int)MiPageTableLockIsContended((__int64)v9, v8)
       || KeShouldYieldProcessor()) )
    {
      MiUnlockPageTableInternal((__int64)v9, v8);
      MiUnlockWorkingSetShared((__int64)v9, v11);
      v8 = 0LL;
      MiLockWorkingSetShared((__int64)v9);
    }
  }
  while ( v6 <= v7 );
  v4 = v17;
  v3 = v16;
  if ( v8 )
    MiUnlockPageTableInternal((__int64)v9, v8);
LABEL_16:
  MiUnlockWorkingSetShared((__int64)v9, v11);
  v13 = (__int64)(v6 << 25) >> 16;
  if ( v13 >= v3 )
  {
    v5 = v13 - v3;
    if ( v13 - v3 > v4 )
      return v4;
  }
  return v5;
}
