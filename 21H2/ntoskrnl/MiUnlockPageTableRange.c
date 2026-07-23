/*
 * XREFs of MiUnlockPageTableRange @ 0x14024F2AC
 * Callers:
 *     MiLockPageTableRange @ 0x1402474BC (MiLockPageTableRange.c)
 *     MmStoreFreeVirtualMemory @ 0x14061E080 (MmStoreFreeVirtualMemory.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x140202790 (MiUnlockPageTableInternal.c)
 *     MiUnlockPageTableCharges @ 0x14025DD38 (MiUnlockPageTableCharges.c)
 *     MiLockPageTableInternal @ 0x1402B33F0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1402B4090 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402BE5B0 (MiLockWorkingSetShared.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 */

__int64 __fastcall MiUnlockPageTableRange(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 *v2; // rsi
  unsigned __int64 v3; // rdi
  unsigned __int64 v4; // r14
  __int64 v5; // rdx
  char v6; // r15
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // rbx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v11; // rax
  __int64 v12; // rdx

  v2 = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[6];
  v3 = ((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v4 = ((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v6 = MiLockWorkingSetShared(v2);
  if ( v3 <= v4 )
  {
    v7 = v3;
    do
    {
      MiLockPageTableInternal(v2, v3, 0LL);
      v8 = *(_QWORD *)v3;
      if ( (unsigned int)MiPteInShadowRange(v7)
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v8 & 1) != 0
        && ((v8 & 0x20) == 0 || (v8 & 0x42) == 0) )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v11 = *((_QWORD *)&Flink->Flink + ((v3 >> 3) & 0x1FF));
          v12 = v8 | 0x20;
          if ( (v11 & 0x20) == 0 )
            v12 = v8;
          v8 = v12;
          if ( (v11 & 0x42) != 0 )
            v8 = v12 | 0x42;
        }
      }
      MiUnlockPageTableCharges(48 * ((v8 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
      MiUnlockPageTableInternal((__int64)v2, v3);
      v3 += 8LL;
      v7 = v3;
    }
    while ( v3 <= v4 );
  }
  LOBYTE(v5) = v6;
  return MiUnlockWorkingSetShared(v2, v5);
}
