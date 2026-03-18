/*
 * XREFs of ExpFreeHeapSpecialPool @ 0x1405B86B0
 * Callers:
 *     ExFreeHeapPool @ 0x1402176E0 (ExFreeHeapPool.c)
 * Callees:
 *     RtlpHpFreeHeap @ 0x140237EEC (RtlpHpFreeHeap.c)
 *     MiDeterminePoolType @ 0x1402381E0 (MiDeterminePoolType.c)
 *     ExpFreePoolChecks @ 0x140261188 (ExpFreePoolChecks.c)
 *     ExpRemovePoolTrackerExpansion @ 0x140314B3C (ExpRemovePoolTrackerExpansion.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     VerifierFreeTrackedPool @ 0x1405A0270 (VerifierFreeTrackedPool.c)
 *     EtwTracePool @ 0x1405A6294 (EtwTracePool.c)
 */

__int64 __fastcall ExpFreeHeapSpecialPool(__int128 *a1, unsigned __int64 a2)
{
  int v4; // eax
  __int16 v5; // dx
  __int16 v6; // r14
  ULONG_PTR v7; // rbp
  int v8; // r15d
  unsigned __int8 CurrentIrql; // dl
  _DWORD *v10; // rsi
  unsigned __int64 v11; // rbx
  _BYTE *i; // r8
  __int64 v13; // rbp
  __int64 v14; // rax
  __int64 v15; // r9
  int v16; // r10d
  __int64 v17; // r11
  unsigned int v18; // edx
  __int64 v19; // rcx
  _DWORD *v20; // r8
  int v21; // eax
  int v22; // ecx

  v4 = MiDeterminePoolType(a2);
  v6 = 0;
  if ( v4 != 32 )
    v6 = v4;
  v7 = 4096 - (v5 & 0xFFFu);
  ExpFreePoolChecks(a2, v7, 0LL);
  v8 = v6 & 1;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > (unsigned __int8)(2 - (v8 != 0)) )
    KeBugCheckEx(0xC1u, CurrentIrql, 1uLL, a2, 0x31uLL);
  v10 = (_DWORD *)(a2 & 0xFFFFFFFFFFFFF000uLL);
  v11 = *(_WORD *)(a2 & 0xFFFFFFFFFFFFF000uLL) & 0x1FFF;
  if ( ((v11 + 15) & 0xFFFFFFFFFFFFFFF0uLL) != v7 )
    KeBugCheckEx(0xC1u, a2, *(_WORD *)(a2 & 0xFFFFFFFFFFFFF000uLL) & 0x1FFF, v7, 0x21uLL);
  for ( i = (char *)v10 + ((*v10 & 0x4000) != 0 ? 24LL : 16LL); (unsigned __int64)i < a2; ++i )
  {
    if ( *i != *(_BYTE *)((a2 & 0xFFFFFFFFFFFFF000uLL) + 2) )
      KeBugCheckEx(0xC1u, a2, (ULONG_PTR)i, (unsigned int)*v10, 0x23uLL);
  }
  if ( (*v10 & 0x4000) != 0 )
    VerifierFreeTrackedPool(a2, *(_WORD *)(a2 & 0xFFFFFFFFFFFFF000uLL) & 0x1FFF);
  v13 = *(unsigned int *)((a2 & 0xFFFFFFFFFFFFF000uLL) + 4);
  if ( (_DWORD)v13 == PoolHitTag )
    __debugbreak();
  v14 = DWORD1(PerfGlobalGroupMask);
  if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
    EtwTracePool(0xE22u, v6, v13, a2, v11);
  v15 = v6 & 0x20;
  if ( (v6 & 0x20) != 0 )
  {
    v17 = ExpSessionPoolTrackTable;
    v16 = ExpSessionPoolTrackTableMask;
  }
  else
  {
    LODWORD(v14) = KeGetPcr()->Prcb.Number;
    v16 = PoolTrackTableMask;
    v17 = (__int64)*(&ExPoolTagTables + v14);
  }
  v18 = v16 & ((40543 * v13) ^ ((unsigned __int64)(40543 * v13) >> 32));
  while ( 1 )
  {
    v19 = 56LL * v18;
    v20 = (_DWORD *)(v19 + v17);
    v21 = *(_DWORD *)(v19 + v17);
    if ( v21 == (_DWORD)v13 )
      break;
    if ( v21 || (v6 & 0x20) != 0 || (v22 = *(_DWORD *)(v19 + PoolTrackTable)) == 0 )
    {
      v18 = v16 & (v18 + 1);
      if ( v18 == (v16 & ((40543 * (int)v13) ^ ((unsigned __int64)(40543 * v13) >> 32))) )
      {
        ExpRemovePoolTrackerExpansion(v13, v11, v6);
        return RtlpHpFreeHeap(a1, (__int64)v10, 0, v15);
      }
    }
    else
    {
      *v20 = v22;
    }
  }
  _InterlockedIncrement64((volatile signed __int64 *)((char *)v20 + (v8 != 0 ? 0x18 : 0) + 24));
  _InterlockedExchangeAdd64((volatile signed __int64 *)((char *)v20 + (v8 != 0 ? 0x18 : 0) + 8), -(__int64)v11);
  return RtlpHpFreeHeap(a1, (__int64)v10, 0, v15);
}
