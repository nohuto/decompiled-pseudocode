/*
 * XREFs of MiCommitEnclavePages @ 0x140543C64
 * Callers:
 *     MiAllocateVirtualMemory @ 0x1405ED060 (MiAllocateVirtualMemory.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14020EC60 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219640 (MiLockWorkingSetShared.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeSystemAddressValid @ 0x1402AE710 (MiMakeSystemAddressValid.c)
 *     MiWorkingSetIsContended @ 0x1402B19F0 (MiWorkingSetIsContended.c)
 *     MiPageTableLockIsContended @ 0x1402B32C0 (MiPageTableLockIsContended.c)
 *     MiUnlockPageTableInternal @ 0x1402DB860 (MiUnlockPageTableInternal.c)
 *     KeShouldYieldProcessor @ 0x1402EE280 (KeShouldYieldProcessor.c)
 *     MiAddPagesToEnclave @ 0x1405435E4 (MiAddPagesToEnclave.c)
 */

__int64 __fastcall MiCommitEnclavePages(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        int a5,
        unsigned int a6)
{
  unsigned int v7; // r15d
  ULONG_PTR v8; // r12
  ULONG_PTR v9; // r13
  unsigned int v10; // ebx
  ULONG_PTR v11; // rbp
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // rdi
  unsigned __int64 *v14; // rsi
  unsigned __int8 v15; // al
  __int64 v16; // r8
  unsigned __int8 v17; // r15
  bool v18; // zf
  unsigned __int64 v19; // rax
  unsigned __int8 v21[8]; // [rsp+80h] [rbp+28h]

  if ( a5 != 4096 )
    return 3221225715LL;
  v7 = a6;
  if ( (a6 & 7) == 0 || a6 > 7 || (a6 & 5) == 5 )
    return 3221225714LL;
  v8 = ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v9 = ((a4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v10 = 0;
  v11 = v8;
  v12 = 0LL;
  v13 = 0LL;
  v14 = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[6];
  v15 = MiLockWorkingSetShared((__int64)v14);
  v21[0] = v15;
  if ( v8 > v9 )
    goto LABEL_27;
  v17 = v15;
  do
  {
    if ( (v11 & 0x78) == 0 && v11 != v8 )
    {
      if ( MiWorkingSetIsContended((__int64)v14) || KeShouldYieldProcessor() )
        goto LABEL_14;
      if ( !v13 )
        goto LABEL_20;
      if ( (unsigned int)MiPageTableLockIsContended((__int64)v14, v13) )
      {
LABEL_14:
        if ( v13 )
        {
          MiUnlockPageTableInternal((__int64)v14, v13, v16);
          v13 = 0LL;
        }
        MiUnlockWorkingSetShared((__int64)v14, v17);
        MiLockWorkingSetShared((__int64)v14);
      }
    }
    if ( v13 )
    {
      if ( (v11 & 0xFFF) != 0 )
        goto LABEL_21;
      MiUnlockPageTableInternal((__int64)v14, v13, v16);
    }
LABEL_20:
    v13 = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    MiMakeSystemAddressValid(v11, 0LL, (*(_DWORD *)(a2 + 48) >> 12) & 0x3F, v17, 0);
LABEL_21:
    v18 = (MI_READ_PTE_LOCK_FREE(v11) & 1) == 0;
    v19 = v12 + 1;
    if ( !v18 )
      v19 = v12;
    v11 += 8LL;
    v12 = v19;
  }
  while ( v11 <= v9 );
  v7 = a6;
  if ( v13 )
    MiUnlockPageTableInternal((__int64)v14, v13, v16);
  v15 = v21[0];
LABEL_27:
  MiUnlockWorkingSetShared((__int64)v14, v15);
  if ( v12 )
    return (unsigned int)MiAddPagesToEnclave(a2, v12, v8, v9, v7);
  return v10;
}
