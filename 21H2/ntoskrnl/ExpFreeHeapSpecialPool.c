/*
 * XREFs of ExpFreeHeapSpecialPool @ 0x1405BA310
 * Callers:
 *     ExFreeHeapPool @ 0x14034C810 (ExFreeHeapPool.c)
 * Callees:
 *     ExpFreePoolChecks @ 0x14021898C (ExpFreePoolChecks.c)
 *     ExpRemovePoolTrackerExpansion @ 0x1402361C0 (ExpRemovePoolTrackerExpansion.c)
 *     MiDeterminePoolType @ 0x140305AEC (MiDeterminePoolType.c)
 *     RtlpHpFreeHeap @ 0x14034CE50 (RtlpHpFreeHeap.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     VerifierFreeTrackedPool @ 0x1405A1ED0 (VerifierFreeTrackedPool.c)
 *     EtwTracePool @ 0x1405A7EF4 (EtwTracePool.c)
 */

__int64 __fastcall ExpFreeHeapSpecialPool(__int64 a1, ULONG_PTR a2)
{
  int v4; // eax
  __int16 v5; // r14
  ULONG_PTR v6; // rbp
  int v7; // r15d
  unsigned __int8 CurrentIrql; // dl
  _DWORD *v9; // rsi
  unsigned __int64 v10; // rbx
  _BYTE *i; // r8
  __int64 v12; // rbp
  __int64 v13; // rax
  int v14; // r10d
  __int64 v15; // r11
  unsigned int v16; // edx
  __int64 v17; // rcx
  _DWORD *v18; // r8
  int v19; // eax
  int v20; // ecx

  v4 = MiDeterminePoolType(a2);
  v5 = 0;
  if ( v4 != 32 )
    v5 = v4;
  v6 = 4096 - (unsigned int)(a2 & 0xFFF);
  ExpFreePoolChecks(a2, v6, 0);
  v7 = v5 & 1;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > (unsigned __int8)(2 - (v7 != 0)) )
    KeBugCheckEx(0xC1u, CurrentIrql, 1uLL, a2, 0x31uLL);
  v9 = (_DWORD *)(a2 & 0xFFFFFFFFFFFFF000uLL);
  v10 = *(_WORD *)(a2 & 0xFFFFFFFFFFFFF000uLL) & 0x1FFF;
  if ( ((v10 + 15) & 0xFFFFFFFFFFFFFFF0uLL) != v6 )
    KeBugCheckEx(0xC1u, a2, *(_WORD *)(a2 & 0xFFFFFFFFFFFFF000uLL) & 0x1FFF, v6, 0x21uLL);
  for ( i = (char *)v9 + ((*v9 & 0x4000) != 0 ? 24LL : 16LL); (unsigned __int64)i < a2; ++i )
  {
    if ( *i != *(_BYTE *)((a2 & 0xFFFFFFFFFFFFF000uLL) + 2) )
      KeBugCheckEx(0xC1u, a2, (ULONG_PTR)i, (unsigned int)*v9, 0x23uLL);
  }
  if ( (*v9 & 0x4000) != 0 )
    VerifierFreeTrackedPool(a2, *(_WORD *)(a2 & 0xFFFFFFFFFFFFF000uLL) & 0x1FFF);
  v12 = *(unsigned int *)((a2 & 0xFFFFFFFFFFFFF000uLL) + 4);
  if ( (_DWORD)v12 == PoolHitTag )
    __debugbreak();
  v13 = DWORD1(PerfGlobalGroupMask);
  if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
    EtwTracePool(0xE22u, v5, v12, a2, v10);
  if ( (v5 & 0x20) != 0 )
  {
    v15 = ExpSessionPoolTrackTable;
    v14 = ExpSessionPoolTrackTableMask;
  }
  else
  {
    LODWORD(v13) = KeGetPcr()->Prcb.Number;
    v14 = PoolTrackTableMask;
    v15 = (__int64)*(&ExPoolTagTables + v13);
  }
  v16 = v14 & ((40543 * v12) ^ ((unsigned __int64)(40543 * v12) >> 32));
  while ( 1 )
  {
    v17 = 56LL * v16;
    v18 = (_DWORD *)(v17 + v15);
    v19 = *(_DWORD *)(v17 + v15);
    if ( v19 == (_DWORD)v12 )
      break;
    if ( v19 || (v5 & 0x20) != 0 || (v20 = *(_DWORD *)(v17 + PoolTrackTable)) == 0 )
    {
      v16 = v14 & (v16 + 1);
      if ( v16 == (v14 & ((40543 * (int)v12) ^ ((unsigned __int64)(40543 * v12) >> 32))) )
      {
        ExpRemovePoolTrackerExpansion(v12, v10, v5);
        return RtlpHpFreeHeap(a1, (unsigned __int64)v9, 0);
      }
    }
    else
    {
      *v18 = v20;
    }
  }
  _InterlockedIncrement64((volatile signed __int64 *)((char *)v18 + (v7 != 0 ? 0x18 : 0) + 24));
  _InterlockedExchangeAdd64((volatile signed __int64 *)((char *)v18 + (v7 != 0 ? 0x18 : 0) + 8), -(__int64)v10);
  return RtlpHpFreeHeap(a1, (unsigned __int64)v9, 0);
}
