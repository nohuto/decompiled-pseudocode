/*
 * XREFs of MiDecommitLargePoolVa @ 0x140228464
 * Callers:
 *     MiDeleteNonPagedPoolPte @ 0x140228170 (MiDeleteNonPagedPoolPte.c)
 * Callees:
 *     MiInsertLargeTbFlushEntry @ 0x1402285E8 (MiInsertLargeTbFlushEntry.c)
 *     MiLockAndDecrementShareCount @ 0x140228660 (MiLockAndDecrementShareCount.c)
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MiFreeLargePageMemory @ 0x14028CA70 (MiFreeLargePageMemory.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     MiFlushTbList @ 0x14032F1B0 (MiFlushTbList.c)
 *     MiGetContainingPageTable @ 0x14033AC10 (MiGetContainingPageTable.c)
 *     MiReplicatePteChange @ 0x14036CB28 (MiReplicatePteChange.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiLogPerfMemoryRangeEvent @ 0x1405852C0 (MiLogPerfMemoryRangeEvent.c)
 */

__int64 __fastcall MiDecommitLargePoolVa(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned int v6; // esi
  unsigned __int64 v7; // r15
  __int64 ContainingPageTable; // rax
  unsigned __int64 v9; // rbx
  int v10; // r14d
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 *v13; // rax
  __int64 result; // rax
  bool v15; // zf
  __int64 v16; // rcx
  __int64 v17; // [rsp+20h] [rbp-108h] BYREF
  _QWORD v18[24]; // [rsp+30h] [rbp-F8h] BYREF

  memset(v18, 0, 0xB8uLL);
  v6 = 0;
  LODWORD(v18[1]) = 20;
  v18[3] = 0LL;
  v17 = MI_READ_PTE_LOCK_FREE(a2);
  v7 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v17) >> 12) & 0xFFFFFFFFFFLL;
  *(_QWORD *)(48 * v7 - 0x220000000000LL) = 0LL;
  ContainingPageTable = MiGetContainingPageTable(a2);
  MiLockAndDecrementShareCount(48 * ContainingPageTable - 0x220000000000LL, 0LL);
  if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
    MiLogPerfMemoryRangeEvent(a1, 0LL, 10LL, a3);
  v9 = ZeroPte;
  v10 = 0;
  if ( (unsigned int)MiPteInShadowRange(a2) )
  {
    if ( (unsigned int)MiPteHasShadow(v12, v11) )
    {
      v10 = 1;
      if ( HIBYTE(word_140C51864) )
        goto LABEL_4;
      v15 = (ZeroPte & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_4;
      v15 = (ZeroPte & 1) == 0;
    }
    if ( !v15 )
      v9 = ZeroPte | 0x8000000000000000uLL;
  }
LABEL_4:
  *(_QWORD *)a2 = v9;
  if ( v10 )
    MiWritePteShadow(a2, v9);
  MiInsertLargeTbFlushEntry(v18, 1LL, a2);
  if ( a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBEDFFFuLL )
  {
    v16 = 3LL;
    do
    {
      a2 = (__int64)(a2 << 25) >> 16;
      --v16;
    }
    while ( v16 );
    MiReplicatePteChange(a2, a2);
  }
  MiFlushTbList(v18);
  v13 = MiLargePageSizes;
  do
  {
    if ( *v13 == a3 )
      break;
    ++v6;
    ++v13;
  }
  while ( v6 < 3 );
  result = MiFreeLargePageMemory(v7, v6, 4LL);
  _InterlockedExchangeAdd64(&qword_140C53518, -a3);
  return result;
}
