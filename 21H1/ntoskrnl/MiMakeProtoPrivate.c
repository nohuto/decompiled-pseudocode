/*
 * XREFs of MiMakeProtoPrivate @ 0x140541EC4
 * Callers:
 *     MiProtectPrivateMemory @ 0x1402ADD80 (MiProtectPrivateMemory.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14020EC60 (MiUnlockWorkingSetShared.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiCopyOnWrite @ 0x140291750 (MiCopyOnWrite.c)
 *     MiUnlockPageTableInternal @ 0x1402DB860 (MiUnlockPageTableInternal.c)
 *     MiLocateCloneAddress @ 0x1402FD5A4 (MiLocateCloneAddress.c)
 *     MiCopyOnWriteCheckConditions @ 0x140556408 (MiCopyOnWriteCheckConditions.c)
 */

__int64 __fastcall MiMakeProtoPrivate(__int64 a1, unsigned __int8 a2, unsigned __int64 a3)
{
  unsigned int v4; // ebx
  __int64 v5; // rsi
  unsigned __int64 v8; // rdx
  unsigned __int64 CloneAddress; // rax
  __int64 v10; // rcx
  int v11; // ebp
  __int64 v12; // r8
  __int64 v14; // [rsp+60h] [rbp+18h] BYREF

  v4 = 0;
  v5 = 0LL;
  v14 = MI_READ_PTE_LOCK_FREE(a3);
  v8 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v14) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  if ( (*(_QWORD *)(v8 + 40) & 0x1000000000LL) != 0 || *(__int64 *)(v8 + 8) <= 0 )
  {
    CloneAddress = (unsigned __int64)MiLocateCloneAddress(
                                       (__int64)KeGetCurrentThread()->ApcState.Process,
                                       *(_QWORD *)(v8 + 8) | 0x8000000000000000uLL);
    v5 = CloneAddress & -(__int64)(*(_QWORD *)(CloneAddress + 96) < *(_QWORD *)(*(_QWORD *)(v10 + 1680) + 360LL));
  }
  v11 = MiCopyOnWrite((__int64)(a3 << 25) >> 16, (ULONG_PTR *)a3, 0xFFFFFFFFFFFFFFFFuLL, 0);
  if ( v11 >= 0 )
  {
    LOBYTE(v4) = v5 != 0;
    return v4;
  }
  else
  {
    MiUnlockPageTableInternal(a1, ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, v12);
    MiUnlockWorkingSetShared(a1, a2);
    MiCopyOnWriteCheckConditions(a1, (unsigned int)v11);
    return 2LL;
  }
}
