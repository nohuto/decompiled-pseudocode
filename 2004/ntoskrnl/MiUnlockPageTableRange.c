/*
 * XREFs of MiUnlockPageTableRange @ 0x14035E44C
 * Callers:
 *     MiLockPageTableRange @ 0x14035708C (MiLockPageTableRange.c)
 *     MmStoreFreeVirtualMemory @ 0x14070CACC (MmStoreFreeVirtualMemory.c)
 * Callees:
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiUnlockPageTableCharges @ 0x14025E10C (MiUnlockPageTableCharges.c)
 *     MiUnlockPageTableInternal @ 0x140278B10 (MiUnlockPageTableInternal.c)
 *     MiLockPageTableInternal @ 0x1402A0AD0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1402A1770 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402AC150 (MiLockWorkingSetShared.c)
 */

__int64 __fastcall MiUnlockPageTableRange(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 *v2; // rsi
  unsigned __int64 v3; // rdi
  unsigned __int64 v4; // r14
  unsigned __int8 v5; // r15
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // rbx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v10; // rax
  __int64 v11; // rdx

  v2 = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[6];
  v3 = ((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v4 = ((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v5 = MiLockWorkingSetShared((__int64)v2);
  if ( v3 <= v4 )
  {
    v6 = v3;
    do
    {
      MiLockPageTableInternal((__int64)v2, v3, 0LL);
      v7 = *(_QWORD *)v3;
      if ( MiPteInShadowRange(v6)
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v7 & 1) != 0
        && ((v7 & 0x20) == 0 || (v7 & 0x42) == 0) )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v10 = *((_QWORD *)&Flink->Flink + ((v3 >> 3) & 0x1FF));
          v11 = v7 | 0x20;
          if ( (v10 & 0x20) == 0 )
            v11 = v7;
          v7 = v11;
          if ( (v10 & 0x42) != 0 )
            v7 = v11 | 0x42;
        }
      }
      MiUnlockPageTableCharges(48 * ((v7 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL, 2uLL);
      MiUnlockPageTableInternal((__int64)v2, v3);
      v3 += 8LL;
      v6 = v3;
    }
    while ( v3 <= v4 );
  }
  return MiUnlockWorkingSetShared((__int64)v2, v5);
}
