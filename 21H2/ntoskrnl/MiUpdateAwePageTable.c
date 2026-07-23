/*
 * XREFs of MiUpdateAwePageTable @ 0x14054E274
 * Callers:
 *     MiDeleteEnclavePage @ 0x14054A680 (MiDeleteEnclavePage.c)
 *     MiWriteEnclavePte @ 0x14054B7DC (MiWriteEnclavePte.c)
 *     MiFreePhysicalPages @ 0x14054C184 (MiFreePhysicalPages.c)
 *     MiWriteAwePtes @ 0x14054E4D8 (MiWriteAwePtes.c)
 * Callees:
 *     MiDecreaseUsedPtesCount @ 0x14023F794 (MiDecreaseUsedPtesCount.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MiIncreaseUsedPtesCount @ 0x140314524 (MiIncreaseUsedPtesCount.c)
 *     MiGetUsedPtesHandle @ 0x1403177B0 (MiGetUsedPtesHandle.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 */

__int64 __fastcall MiUpdateAwePageTable(unsigned __int64 a1, __int64 a2, int a3)
{
  unsigned int v6; // edi
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rbx
  __int64 Flink; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 UsedPtesHandle; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  int v18; // [rsp+50h] [rbp+8h] BYREF

  v6 = 0;
  v7 = (__int64)(a1 << 25) >> 16 << 25 >> 16;
  if ( a2 )
  {
    v8 = *(_QWORD *)a1;
    if ( MiPteInShadowRange(a1)
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v8 & 1) != 0
      && ((v8 & 0x20) == 0 || (v8 & 0x42) == 0) )
    {
      Flink = (__int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v12 = *(_QWORD *)(Flink + 8 * ((a1 >> 3) & 0x1FF));
        Flink = v8 | 0x20;
        if ( (v12 & 0x20) == 0 )
          Flink = v8;
        v8 = Flink;
        if ( (v12 & 0x42) != 0 )
          v8 = Flink | 0x42;
      }
    }
    v13 = 48 * ((v8 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    v18 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v18, Flink, v10, v11);
      while ( *(__int64 *)(v13 + 24) < 0 );
    }
    *(_QWORD *)(v13 + 24) ^= (*(_QWORD *)(v13 + 24) ^ (*(_QWORD *)(v13 + 24) + a2)) & 0x3FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  if ( a1 == 0xFFFFF6FB7DBEDF68uLL || !a3 )
    return 0LL;
  UsedPtesHandle = MiGetUsedPtesHandle(v7);
  if ( a3 <= 0 )
  {
    if ( !(unsigned int)MiDecreaseUsedPtesCount(UsedPtesHandle, (unsigned int)-a3) )
      return 1;
  }
  else
  {
    MiIncreaseUsedPtesCount(UsedPtesHandle, (unsigned int)a3, v15, v16);
  }
  return v6;
}
