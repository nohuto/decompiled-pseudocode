/*
 * XREFs of MiUnlockPageTableRange @ 0x14032085C
 * Callers:
 *     MiLockPageTableRange @ 0x14031949C (MiLockPageTableRange.c)
 *     MmStoreFreeVirtualMemory @ 0x1406E8C30 (MmStoreFreeVirtualMemory.c)
 * Callees:
 *     MiLockPageTableInternal @ 0x14020DFC0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x14020EC60 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219640 (MiLockWorkingSetShared.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiUnlockPageTableCharges @ 0x1402B713C (MiUnlockPageTableCharges.c)
 *     MiUnlockPageTableInternal @ 0x1402DB860 (MiUnlockPageTableInternal.c)
 */

__int64 __fastcall MiUnlockPageTableRange(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 *v2; // rsi
  unsigned __int64 v3; // rdi
  unsigned __int64 v4; // r14
  unsigned __int8 v5; // r15
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // rbx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r8
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v13; // rax
  __int64 v14; // rdx

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
          v13 = *((_QWORD *)&Flink->Flink + ((v3 >> 3) & 0x1FF));
          v14 = v7 | 0x20;
          if ( (v13 & 0x20) == 0 )
            v14 = v7;
          v7 = v14;
          if ( (v13 & 0x42) != 0 )
            v7 = v14 | 0x42;
        }
      }
      MiUnlockPageTableCharges(48 * ((v7 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL, 2uLL, v8, v9);
      MiUnlockPageTableInternal((__int64)v2, v3, v10);
      v3 += 8LL;
      v6 = v3;
    }
    while ( v3 <= v4 );
  }
  return MiUnlockWorkingSetShared((__int64)v2, v5);
}
