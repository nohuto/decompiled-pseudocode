/*
 * XREFs of MiDecommitLargePoolVa @ 0x14036DA70
 * Callers:
 *     MiDeleteNonPagedPoolPte @ 0x1402F2060 (MiDeleteNonPagedPoolPte.c)
 * Callees:
 *     MiGetContainingPageTable @ 0x140227150 (MiGetContainingPageTable.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiFlushTbList @ 0x140293410 (MiFlushTbList.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MiInsertLargeTbFlushEntry @ 0x1402FB584 (MiInsertLargeTbFlushEntry.c)
 *     MiFreeLargePageMemory @ 0x140345AB8 (MiFreeLargePageMemory.c)
 *     MiLockAndDecrementShareCount @ 0x140351040 (MiLockAndDecrementShareCount.c)
 *     MiReplicatePteChange @ 0x1403A1024 (MiReplicatePteChange.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     MiLogPerfMemoryRangeEvent @ 0x14052BAFC (MiLogPerfMemoryRangeEvent.c)
 */

__int64 __fastcall MiDecommitLargePoolVa(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned int v4; // esi
  unsigned __int64 v7; // r14
  __int64 ContainingPageTable; // rax
  __int64 v9; // r11
  __int64 v10; // r8
  _DWORD *v11; // r9
  unsigned __int64 v12; // rbx
  _KPROCESS *v13; // rdx
  __int64 v14; // rcx
  __int64 *v15; // rax
  __int64 result; // rax
  __int64 v17; // [rsp+20h] [rbp-108h] BYREF
  _QWORD v18[4]; // [rsp+30h] [rbp-F8h] BYREF
  __int128 v19; // [rsp+50h] [rbp-D8h]
  __int128 v20; // [rsp+60h] [rbp-C8h]
  __int128 v21; // [rsp+70h] [rbp-B8h]
  __int128 v22; // [rsp+80h] [rbp-A8h]
  __int128 v23; // [rsp+90h] [rbp-98h]
  __int128 v24; // [rsp+A0h] [rbp-88h]
  __int128 v25; // [rsp+B0h] [rbp-78h]
  __int128 v26; // [rsp+C0h] [rbp-68h]
  __int128 v27; // [rsp+D0h] [rbp-58h]
  __int64 v28; // [rsp+E0h] [rbp-48h]

  v18[0] = 0LL;
  v19 = 0LL;
  v4 = 0;
  v20 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v28 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v18[1] = 20LL;
  v18[2] = 0LL;
  v18[3] = 0LL;
  v17 = MI_READ_PTE_LOCK_FREE(a2);
  v7 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v17) >> 12) & 0xFFFFFFFFFLL;
  *(_QWORD *)(48 * v7 - 0x58000000000LL) = 0LL;
  ContainingPageTable = MiGetContainingPageTable(a2);
  MiLockAndDecrementShareCount(v9 + 48 * ContainingPageTable, 0LL, v10, v11);
  if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
    MiLogPerfMemoryRangeEvent(a1, 0LL, 10LL, a3);
  v12 = ZeroPte;
  if ( !MiPteInShadowRange(a2) )
    goto LABEL_12;
  if ( !(unsigned int)MiPteHasShadow() )
  {
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
      && (ZeroPte & 1) != 0 )
    {
      v12 = ZeroPte | 0x8000000000000000uLL;
    }
LABEL_12:
    *(_QWORD *)a2 = v12;
    goto LABEL_13;
  }
  if ( !HIBYTE(word_140C4DF48) && (ZeroPte & 1) != 0 )
    v12 = ZeroPte | 0x8000000000000000uLL;
  *(_QWORD *)a2 = v12;
  MiWritePteShadow(a2, v12);
LABEL_13:
  MiInsertLargeTbFlushEntry((__int64)v18, 1u, a2);
  if ( a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBEDFFFuLL )
  {
    v14 = (__int64)(a2 << 25) >> 16 << 25 >> 16 << 25 >> 16;
    MiReplicatePteChange(v14, v14);
  }
  MiFlushTbList((__int64)v18, v13);
  v15 = MiLargePageSizes;
  do
  {
    if ( *v15 == a3 )
      break;
    ++v4;
    ++v15;
  }
  while ( v4 < 3 );
  result = MiFreeLargePageMemory(v7, v4, 4);
  _InterlockedExchangeAdd64(&qword_140C4EEE0, -a3);
  return result;
}
