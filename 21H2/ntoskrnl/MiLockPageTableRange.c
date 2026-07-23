/*
 * XREFs of MiLockPageTableRange @ 0x1402474BC
 * Callers:
 *     MmStoreAllocateVirtualMemory @ 0x1406156AC (MmStoreAllocateVirtualMemory.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x140202790 (MiUnlockPageTableInternal.c)
 *     MiUnlockPageTableRange @ 0x14024F2AC (MiUnlockPageTableRange.c)
 *     MiLockPageTablePage @ 0x1402AE6F0 (MiLockPageTablePage.c)
 *     MiUnlockWorkingSetShared @ 0x1402B4090 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402BE5B0 (MiLockWorkingSetShared.c)
 *     MiMakeSystemAddressValid @ 0x1403190E0 (MiMakeSystemAddressValid.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 */

__int64 __fastcall MiLockPageTableRange(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 *v3; // rsi
  unsigned __int64 v4; // r12
  ULONG_PTR v5; // rdi
  unsigned __int64 v6; // rbp
  __int64 v7; // rdx
  char v8; // r14
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // rbx
  int v11; // ebx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx

  v3 = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[6];
  v4 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v5 = v4;
  v6 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v8 = MiLockWorkingSetShared(v3);
  if ( v4 > v6 )
  {
LABEL_5:
    LOBYTE(v7) = v8;
    MiUnlockWorkingSetShared(v3, v7);
    return 0LL;
  }
  else
  {
    while ( 1 )
    {
      v9 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiMakeSystemAddressValid(v5, 0);
      v10 = *(_QWORD *)v9;
      if ( (unsigned int)MiPteInShadowRange(v9)
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v10 & 1) != 0
        && ((v10 & 0x20) == 0 || (v10 & 0x42) == 0) )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v14 = *((_QWORD *)&Flink->Flink + ((v9 >> 3) & 0x1FF));
          v15 = v10 | 0x20;
          if ( (v14 & 0x20) == 0 )
            v15 = v10;
          v10 = v15;
          if ( (v14 & 0x42) != 0 )
            v10 = v15 | 0x42;
        }
      }
      v11 = MiLockPageTablePage(48 * ((v10 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL, 2LL);
      MiUnlockPageTableInternal((__int64)v3, v9);
      if ( !v11 )
        break;
      v5 = (v5 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      if ( v5 > v6 )
        goto LABEL_5;
    }
    LOBYTE(v7) = v8;
    MiUnlockWorkingSetShared(v3, v7);
    if ( v5 != v4 )
      MiUnlockPageTableRange(a1, (__int64)((v5 - 8) << 25) >> 16);
    return 3221225626LL;
  }
}
