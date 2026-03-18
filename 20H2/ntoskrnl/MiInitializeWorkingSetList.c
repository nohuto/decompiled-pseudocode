/*
 * XREFs of MiInitializeWorkingSetList @ 0x140338B74
 * Callers:
 *     MmInitializeProcessAddressSpace @ 0x1406EEAB4 (MmInitializeProcessAddressSpace.c)
 *     MiInitializeSystemWorkingSetList @ 0x1407829DC (MiInitializeSystemWorkingSetList.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MiLockPageTableInternal @ 0x14026FE10 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x140270AB0 (MiUnlockWorkingSetShared.c)
 *     MiAllocateWsle @ 0x140272FE0 (MiAllocateWsle.c)
 *     MiLockWorkingSetShared @ 0x14027B490 (MiLockWorkingSetShared.c)
 *     MiUnlockPageTableInternal @ 0x14035B910 (MiUnlockPageTableInternal.c)
 */

char __fastcall MiInitializeWorkingSetList(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  char v5; // al
  __int64 v6; // rax
  unsigned __int8 v7; // r14
  unsigned __int64 v8; // rbx
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *Blink; // rax
  __int64 v11; // rdx

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
    if ( MiPteInShadowRange(0xFFFFF6FB7DBEDF68uLL)
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v8 & 1) != 0
      && ((v8 & 0x20) == 0 || (v8 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        Blink = Flink[246].Blink;
        v11 = v8 | 0x20;
        if ( ((unsigned __int8)Blink & 0x20) == 0 )
          v11 = v8;
        v8 = v11;
        if ( ((unsigned __int8)Blink & 0x42) != 0 )
          v8 = v11 | 0x42;
      }
    }
    MiAllocateWsle(
      a1,
      0xFFFFF6FB7DBEDF68uLL,
      (_QWORD *)(48 * ((v8 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL),
      0,
      ZeroPte,
      0,
      0LL);
    MiUnlockPageTableInternal(a1);
    LOBYTE(v6) = MiUnlockWorkingSetShared(a1, v7);
  }
  return v6;
}
