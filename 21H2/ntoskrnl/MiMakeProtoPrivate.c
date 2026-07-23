/*
 * XREFs of MiMakeProtoPrivate @ 0x140547C24
 * Callers:
 *     MiProtectPrivateMemory @ 0x140318750 (MiProtectPrivateMemory.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x140202790 (MiUnlockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1402B4090 (MiUnlockWorkingSetShared.c)
 *     MiLocateCloneAddress @ 0x1402E3758 (MiLocateCloneAddress.c)
 *     MiCopyOnWrite @ 0x1402E3B50 (MiCopyOnWrite.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiCopyOnWriteCheckConditions @ 0x14055C138 (MiCopyOnWriteCheckConditions.c)
 */

__int64 __fastcall MiMakeProtoPrivate(__int64 a1, unsigned __int8 a2, unsigned __int64 a3)
{
  unsigned int v4; // ebx
  __int64 v5; // rsi
  unsigned __int64 v8; // rdx
  unsigned __int64 CloneAddress; // rax
  __int64 v10; // rcx
  int v11; // ebp
  __int64 v13; // [rsp+60h] [rbp+18h] BYREF

  v4 = 0;
  v5 = 0LL;
  v13 = MI_READ_PTE_LOCK_FREE(a3);
  v8 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v13) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  if ( (*(_QWORD *)(v8 + 40) & 0x1000000000LL) != 0 || *(__int64 *)(v8 + 8) <= 0 )
  {
    CloneAddress = (unsigned __int64)MiLocateCloneAddress(
                                       (__int64)KeGetCurrentThread()->ApcState.Process,
                                       *(_QWORD *)(v8 + 8) | 0x8000000000000000uLL);
    v5 = CloneAddress & -(__int64)(*(_QWORD *)(CloneAddress + 96) < *(_QWORD *)(*(_QWORD *)(v10 + 1680) + 360LL));
  }
  v11 = MiCopyOnWrite((__int64)(a3 << 25) >> 16, (ULONG_PTR *)a3, -1LL, 0);
  if ( v11 >= 0 )
  {
    LOBYTE(v4) = v5 != 0;
    return v4;
  }
  else
  {
    MiUnlockPageTableInternal(a1, ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    MiUnlockWorkingSetShared(a1, a2);
    MiCopyOnWriteCheckConditions(a1, (unsigned int)v11);
    return 2LL;
  }
}
