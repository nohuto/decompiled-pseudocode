/*
 * XREFs of MiUnlockPageTableRange @ 0x1402D0E1C
 * Callers:
 *     MiLockPageTableRange @ 0x1402C8C5C (MiLockPageTableRange.c)
 *     MmStoreFreeVirtualMemory @ 0x1406BEF90 (MmStoreFreeVirtualMemory.c)
 * Callees:
 *     MiLockPageTableInternal @ 0x14020EAF0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x14020F790 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219CB0 (MiLockWorkingSetShared.c)
 *     MiUnlockPageTableCharges @ 0x14026FD98 (MiUnlockPageTableCharges.c)
 *     MiUnlockPageTableInternal @ 0x1402855F0 (MiUnlockPageTableInternal.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 */

__int64 __fastcall MiUnlockPageTableRange(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, _DWORD *a4)
{
  unsigned __int64 *v4; // rsi
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // r14
  unsigned __int8 v7; // r15
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx

  v4 = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[6];
  v5 = ((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v6 = ((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v7 = MiLockWorkingSetShared((__int64)v4, 0xFFFFF6FB40000000uLL, 1073741816LL, a4);
  if ( v5 <= v6 )
  {
    v8 = v5;
    do
    {
      MiLockPageTableInternal((__int64)v4, v5, 0LL);
      v9 = *(_QWORD *)v5;
      if ( (unsigned int)MiPteInShadowRange(v8, v10)
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v9 & 1) != 0
        && ((v9 & 0x20) == 0 || (v9 & 0x42) == 0) )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v15 = *((_QWORD *)&Flink->Flink + ((v5 >> 3) & 0x1FF));
          v16 = v9 | 0x20;
          if ( (v15 & 0x20) == 0 )
            v16 = v9;
          v9 = v16;
          if ( (v15 & 0x42) != 0 )
            v9 = v16 | 0x42;
        }
      }
      MiUnlockPageTableCharges(48 * ((v9 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL, 2uLL, v11, v12);
      MiUnlockPageTableInternal((__int64)v4, v5);
      v5 += 8LL;
      v8 = v5;
    }
    while ( v5 <= v6 );
  }
  return MiUnlockWorkingSetShared((__int64)v4, v7);
}
