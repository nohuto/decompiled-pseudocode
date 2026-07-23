/*
 * XREFs of MiCommitEnclavePages @ 0x1405499C4
 * Callers:
 *     MiAllocateVirtualMemory @ 0x1406E7DB0 (MiAllocateVirtualMemory.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x140202790 (MiUnlockPageTableInternal.c)
 *     KeShouldYieldProcessor @ 0x140211F40 (KeShouldYieldProcessor.c)
 *     MiUnlockWorkingSetShared @ 0x1402B4090 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402BE5B0 (MiLockWorkingSetShared.c)
 *     MiPageTableLockIsContended @ 0x1403131B0 (MiPageTableLockIsContended.c)
 *     MiWorkingSetIsContended @ 0x140316520 (MiWorkingSetIsContended.c)
 *     MiMakeSystemAddressValid @ 0x1403190E0 (MiMakeSystemAddressValid.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiAddPagesToEnclave @ 0x140549344 (MiAddPagesToEnclave.c)
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
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // r13
  unsigned int v10; // ebx
  ULONG_PTR v11; // rbp
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // rdi
  unsigned __int64 *v14; // rsi
  unsigned __int8 v15; // al
  unsigned __int8 v16; // r15
  __int64 v17; // rdx
  __int64 v18; // r8
  _DWORD *v19; // r9
  bool v20; // zf
  unsigned __int64 v21; // rax
  unsigned __int8 v23[8]; // [rsp+80h] [rbp+28h]

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
  v15 = MiLockWorkingSetShared((__int64)v14, 0x7FFFFFFFF8LL, a3, (_DWORD *)a4);
  v23[0] = v15;
  if ( v8 > v9 )
    goto LABEL_27;
  v16 = v15;
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
          MiUnlockPageTableInternal((__int64)v14, v13);
          v13 = 0LL;
        }
        MiUnlockWorkingSetShared((__int64)v14, v16);
        MiLockWorkingSetShared((__int64)v14, v17, v18, v19);
      }
    }
    if ( v13 )
    {
      if ( (v11 & 0xFFF) != 0 )
        goto LABEL_21;
      MiUnlockPageTableInternal((__int64)v14, v13);
    }
LABEL_20:
    v13 = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    MiMakeSystemAddressValid(v11, 0LL, (*(_DWORD *)(a2 + 48) >> 12) & 0x3F, v16, 0);
LABEL_21:
    v20 = (MI_READ_PTE_LOCK_FREE(v11) & 1) == 0;
    v21 = v12 + 1;
    if ( !v20 )
      v21 = v12;
    v11 += 8LL;
    v12 = v21;
  }
  while ( v11 <= v9 );
  v7 = a6;
  if ( v13 )
    MiUnlockPageTableInternal((__int64)v14, v13);
  v15 = v23[0];
LABEL_27:
  MiUnlockWorkingSetShared((__int64)v14, v15);
  if ( v12 )
    return (unsigned int)MiAddPagesToEnclave(a2, v12, v8, v9, v7);
  return v10;
}
