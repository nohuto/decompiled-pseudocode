/*
 * XREFs of MiDecommitLargePoolVa @ 0x1403705F0
 * Callers:
 *     MiDeleteNonPagedPoolPte @ 0x1403015D0 (MiDeleteNonPagedPoolPte.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MiLockAndDecrementShareCount @ 0x140250E00 (MiLockAndDecrementShareCount.c)
 *     MiGetContainingPageTable @ 0x14029C940 (MiGetContainingPageTable.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiFlushTbList @ 0x1402BFA90 (MiFlushTbList.c)
 *     MiFreeLargePageMemory @ 0x1402F19BC (MiFreeLargePageMemory.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     MiInsertLargeTbFlushEntry @ 0x140319B24 (MiInsertLargeTbFlushEntry.c)
 *     MiReplicatePteChange @ 0x1403A3C84 (MiReplicatePteChange.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     MiLogPerfMemoryRangeEvent @ 0x14052FB1C (MiLogPerfMemoryRangeEvent.c)
 */

__int64 __fastcall MiDecommitLargePoolVa(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned int v4; // esi
  unsigned __int64 v7; // r14
  __int64 ContainingPageTable; // rax
  __int64 v9; // r11
  unsigned __int64 v10; // rbx
  __int64 v11; // r8
  _KPROCESS *v12; // rdx
  __int64 v13; // rcx
  __int64 *v14; // rax
  __int64 result; // rax
  __int64 v16; // [rsp+20h] [rbp-108h] BYREF
  _QWORD v17[4]; // [rsp+30h] [rbp-F8h] BYREF
  __int128 v18; // [rsp+50h] [rbp-D8h]
  __int128 v19; // [rsp+60h] [rbp-C8h]
  __int128 v20; // [rsp+70h] [rbp-B8h]
  __int128 v21; // [rsp+80h] [rbp-A8h]
  __int128 v22; // [rsp+90h] [rbp-98h]
  __int128 v23; // [rsp+A0h] [rbp-88h]
  __int128 v24; // [rsp+B0h] [rbp-78h]
  __int128 v25; // [rsp+C0h] [rbp-68h]
  __int128 v26; // [rsp+D0h] [rbp-58h]
  __int64 v27; // [rsp+E0h] [rbp-48h]

  v17[0] = 0LL;
  v18 = 0LL;
  v4 = 0;
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v27 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v17[1] = 20LL;
  v17[2] = 0LL;
  v17[3] = 0LL;
  v16 = MI_READ_PTE_LOCK_FREE(a2);
  v7 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v16) >> 12) & 0xFFFFFFFFFLL;
  *(_QWORD *)(48 * v7 - 0x58000000000LL) = 0LL;
  ContainingPageTable = MiGetContainingPageTable(a2);
  MiLockAndDecrementShareCount(v9 + 48 * ContainingPageTable, 0);
  if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
    MiLogPerfMemoryRangeEvent(a1, 0LL, 10LL, a3);
  v10 = ZeroPte;
  if ( !MiPteInShadowRange(a2) )
    goto LABEL_12;
  if ( !(unsigned int)MiPteHasShadow() )
  {
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
      && (ZeroPte & 1) != 0 )
    {
      v10 = ZeroPte | 0x8000000000000000uLL;
    }
LABEL_12:
    *(_QWORD *)a2 = v10;
    goto LABEL_13;
  }
  if ( !HIBYTE(word_140C4DE88) && (ZeroPte & 1) != 0 )
    v10 = ZeroPte | 0x8000000000000000uLL;
  *(_QWORD *)a2 = v10;
  MiWritePteShadow(a2, v10, v11);
LABEL_13:
  MiInsertLargeTbFlushEntry((__int64)v17, 1u, a2);
  if ( a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBEDFFFuLL )
  {
    v13 = (__int64)(a2 << 25) >> 16 << 25 >> 16 << 25 >> 16;
    MiReplicatePteChange(v13, v13);
  }
  MiFlushTbList((unsigned int *)v17, v12);
  v14 = MiLargePageSizes;
  do
  {
    if ( *v14 == a3 )
      break;
    ++v4;
    ++v14;
  }
  while ( v4 < 3 );
  result = MiFreeLargePageMemory(v7, v4, 4);
  _InterlockedExchangeAdd64(&qword_140C4EE20, -a3);
  return result;
}
