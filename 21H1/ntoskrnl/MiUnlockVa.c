/*
 * XREFs of MiUnlockVa @ 0x14030B15C
 * Callers:
 *     MiSetProtectionOnSection @ 0x14021B170 (MiSetProtectionOnSection.c)
 *     NtLockVirtualMemory @ 0x1402A5D80 (NtLockVirtualMemory.c)
 *     NtUnlockVirtualMemory @ 0x1402AF520 (NtUnlockVirtualMemory.c)
 *     MiMakeVaRangeNoAccess @ 0x140319094 (MiMakeVaRangeNoAccess.c)
 * Callees:
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiUnlockWsle @ 0x1402B6FC0 (MiUnlockWsle.c)
 */

__int64 __fastcall MiUnlockVa(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rbx
  struct _LIST_ENTRY *Flink; // rax
  __int64 v7; // rdx
  __int64 v8; // rax

  v4 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v5 = *(_QWORD *)v4;
  if ( MiPteInShadowRange(v4)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v5 & 1) != 0
    && ((v5 & 0x20) == 0 || (v5 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v7 = v5 | 0x20;
      v8 = *((_QWORD *)&Flink->Flink + ((v4 >> 3) & 0x1FF));
      if ( (v8 & 0x20) == 0 )
        v7 = v5;
      v5 = v7;
      if ( (v8 & 0x42) != 0 )
        v5 = v7 | 0x42;
    }
  }
  return MiUnlockWsle(a1, a2, 48 * ((v5 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
}
