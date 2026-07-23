/*
 * XREFs of MiInitializeWorkingSetList @ 0x1402A3394
 * Callers:
 *     MmInitializeProcessAddressSpace @ 0x1406BFB24 (MmInitializeProcessAddressSpace.c)
 *     MiInitializeSystemWorkingSetList @ 0x14078697C (MiInitializeSystemWorkingSetList.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x140202790 (MiUnlockPageTableInternal.c)
 *     MiLockPageTableInternal @ 0x1402B33F0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1402B4090 (MiUnlockWorkingSetShared.c)
 *     MiAllocateWsle @ 0x1402B65C0 (MiAllocateWsle.c)
 *     MiLockWorkingSetShared @ 0x1402BE5B0 (MiLockWorkingSetShared.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 */

char __fastcall MiInitializeWorkingSetList(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  char v5; // al
  __int64 v6; // rax
  char v7; // r14
  unsigned __int64 v8; // rbx
  __int64 v9; // rdx
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *Blink; // rax
  __int64 v12; // rdx

  v5 = a3 ^ *(_BYTE *)(a1 + 184);
  *(_QWORD *)(a1 + 16) = a2;
  LOBYTE(v6) = *(_BYTE *)(a1 + 184) ^ v5 & 7;
  *(_BYTE *)(a1 + 184) = v6;
  if ( a3 )
  {
    *(_QWORD *)(a1 + 120) = 0LL;
    *(_QWORD *)(a1 + 128) = 0LL;
    *(_QWORD *)(a1 + 136) = 0LL;
    *(_QWORD *)(a1 + 144) = 0LL;
    if ( a3 == 1 )
    {
      *(_BYTE *)(a1 + 184) = v6 | 0x80;
      v6 = *(_QWORD *)(a1 + 112) + 6LL;
      *(_QWORD *)(a1 + 152) = v6;
    }
    else
    {
      *(_QWORD *)(a1 + 152) = a4;
    }
  }
  else
  {
    *(_QWORD *)(a1 - 392) = 1LL;
    v7 = MiLockWorkingSetShared(a1);
    MiLockPageTableInternal(a1, 0xFFFFF6FB7DBEDF68uLL, 0LL);
    v8 = MEMORY[0xFFFFF6FB7DBEDF68];
    if ( (unsigned int)MiPteInShadowRange(0xFFFFF6FB7DBEDF68uLL)
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v8 & 1) != 0
      && ((v8 & 0x20) == 0 || (v8 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        Blink = Flink[246].Blink;
        v12 = v8 | 0x20;
        if ( ((unsigned __int8)Blink & 0x20) == 0 )
          v12 = v8;
        v8 = v12;
        if ( ((unsigned __int8)Blink & 0x42) != 0 )
          v8 = v12 | 0x42;
      }
    }
    MiAllocateWsle(a1, 2109661032, 48 * (v8 >> 12), 0, ZeroPte, 0, 0LL);
    MiUnlockPageTableInternal(a1, 0xFFFFF6FB7DBEDF68uLL);
    LOBYTE(v9) = v7;
    LOBYTE(v6) = MiUnlockWorkingSetShared(a1, v9);
  }
  return v6;
}
