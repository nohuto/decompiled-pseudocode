/*
 * XREFs of MiLockPageTableRange @ 0x14035708C
 * Callers:
 *     MmStoreAllocateVirtualMemory @ 0x140704130 (MmStoreAllocateVirtualMemory.c)
 * Callees:
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiLockPageTablePage @ 0x14024F390 (MiLockPageTablePage.c)
 *     MiMakeSystemAddressValid @ 0x1402556E0 (MiMakeSystemAddressValid.c)
 *     MiUnlockPageTableInternal @ 0x140278B10 (MiUnlockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1402A1770 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402AC150 (MiLockWorkingSetShared.c)
 *     MiUnlockPageTableRange @ 0x14035E44C (MiUnlockPageTableRange.c)
 */

__int64 __fastcall MiLockPageTableRange(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 *v3; // rsi
  unsigned __int64 v4; // r12
  ULONG_PTR v5; // rdi
  unsigned __int64 v6; // rbp
  unsigned __int8 v7; // r14
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rbx
  int v10; // ebx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v13; // rax
  __int64 v14; // rdx

  v3 = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[6];
  v4 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v5 = v4;
  v6 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v7 = MiLockWorkingSetShared((__int64)v3);
  if ( v4 > v6 )
  {
LABEL_5:
    MiUnlockWorkingSetShared((__int64)v3, v7);
    return 0LL;
  }
  else
  {
    while ( 1 )
    {
      v8 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiMakeSystemAddressValid(v5, 0LL, 0, v7, 0);
      v9 = *(_QWORD *)v8;
      if ( MiPteInShadowRange(v8)
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v9 & 1) != 0
        && ((v9 & 0x20) == 0 || (v9 & 0x42) == 0) )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v13 = *((_QWORD *)&Flink->Flink + ((v8 >> 3) & 0x1FF));
          v14 = v9 | 0x20;
          if ( (v13 & 0x20) == 0 )
            v14 = v9;
          v9 = v14;
          if ( (v13 & 0x42) != 0 )
            v9 = v14 | 0x42;
        }
      }
      v10 = MiLockPageTablePage(48 * ((v9 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL, 2uLL);
      MiUnlockPageTableInternal((__int64)v3, v8);
      if ( !v10 )
        break;
      v5 = (v5 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      if ( v5 > v6 )
        goto LABEL_5;
    }
    MiUnlockWorkingSetShared((__int64)v3, v7);
    if ( v5 != v4 )
      MiUnlockPageTableRange(a1, (__int64)((v5 - 8) << 25) >> 16);
    return 3221225626LL;
  }
}
