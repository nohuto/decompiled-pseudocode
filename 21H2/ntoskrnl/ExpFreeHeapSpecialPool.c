/*
 * XREFs of ExpFreeHeapSpecialPool @ 0x1406423A4
 * Callers:
 *     ExFreeHeapPool @ 0x140348B40 (ExFreeHeapPool.c)
 *     ExAllocateHeapSpecialPool @ 0x140641F58 (ExAllocateHeapSpecialPool.c)
 * Callees:
 *     ExpPoolTrackerReturnLimit @ 0x140216928 (ExpPoolTrackerReturnLimit.c)
 *     ExpFreePoolChecks @ 0x140216974 (ExpFreePoolChecks.c)
 *     ExpRemovePoolTrackerExpansion @ 0x140221790 (ExpRemovePoolTrackerExpansion.c)
 *     RtlpHpFreeHeap @ 0x140364128 (RtlpHpFreeHeap.c)
 *     MiDeterminePoolType @ 0x140366FB0 (MiDeterminePoolType.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     VerifierFreeTrackedPool @ 0x1405FF880 (VerifierFreeTrackedPool.c)
 *     EtwTracePool @ 0x14062DEE4 (EtwTracePool.c)
 */

__int64 __fastcall ExpFreeHeapSpecialPool(__int128 *a1, unsigned __int64 a2)
{
  int v4; // eax
  __int64 v5; // rdx
  __int16 v6; // r14
  unsigned int *v7; // rdi
  ULONG_PTR v8; // rsi
  unsigned __int8 CurrentIrql; // dl
  ULONG_PTR v10; // rdx
  unsigned __int64 v11; // rbp
  _BYTE *i; // r8
  unsigned __int64 v13; // rax
  _BYTE *v14; // r8
  __int64 v15; // rsi
  __int64 v16; // rax
  int v17; // r10d
  __int64 v18; // rbx
  unsigned int v19; // edx
  __int64 v20; // r8
  int v21; // r11d
  __int64 v22; // r11

  v4 = MiDeterminePoolType(a2);
  v6 = 0;
  if ( v4 != 32 )
    v6 = v4;
  v7 = (unsigned int *)(v5 & 0xFFFFFFFFFFFFF000uLL);
  v8 = 4096 - (unsigned int)(v5 & 0xFFF);
  ExpFreePoolChecks(a2, *(_DWORD *)((v5 & 0xFFFFFFFFFFFFF000uLL) + 4), v8, 0, v5);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > (unsigned __int8)(2 - ((v6 & 1) != 0)) )
    KeBugCheckEx(0xC1u, CurrentIrql, 1uLL, a2, 0x31uLL);
  v10 = *(_WORD *)v7 & 0x1FFF;
  v11 = (v10 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
  if ( v11 != v8 )
    KeBugCheckEx(0xC1u, a2, *(_WORD *)v7 & 0x1FFF, v8, 0x21uLL);
  for ( i = (char *)v7 + ((*v7 & 0x4000) != 0 ? 8 : 0) + 16; (unsigned __int64)i < a2; ++i )
  {
    if ( *i != *((_BYTE *)v7 + 2) )
      KeBugCheckEx(0xC1u, a2, (ULONG_PTR)i, *v7, 0x23uLL);
  }
  v13 = (a2 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  v14 = (_BYTE *)(v10 + a2);
  if ( v10 + a2 < v13 )
  {
    do
    {
      if ( *v14 != *((_BYTE *)v7 + 2) )
        KeBugCheckEx(0xC1u, a2, (ULONG_PTR)v14, *v7, 0x24uLL);
      ++v14;
    }
    while ( (unsigned __int64)v14 < v13 );
  }
  if ( (*v7 & 0x4000) != 0 )
    VerifierFreeTrackedPool(a2, v10);
  v15 = v7[1];
  if ( (_DWORD)v15 == PoolHitTag )
    __debugbreak();
  v16 = DWORD1(PerfGlobalGroupMask);
  if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
    EtwTracePool(0xE22u, v6, v15, a2, v11);
  if ( (v6 & 0x20) != 0 )
  {
    v17 = ExpSessionPoolTrackTableMask;
    v18 = *(_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[25] + 896);
  }
  else
  {
    LODWORD(v16) = KeGetPcr()->Prcb.Number;
    v17 = PoolTrackTableMask;
    v18 = (__int64)*(&ExPoolTagTables + v16);
  }
  v19 = v17 & ((40543 * v15) ^ ((unsigned __int64)(40543 * v15) >> 32));
  while ( 1 )
  {
    v20 = v18 + 80LL * v19;
    if ( *(_DWORD *)v20 == (_DWORD)v15 )
      break;
    if ( *(_DWORD *)v20 || (v6 & 0x20) != 0 || (v21 = *(_DWORD *)(PoolTrackTable + 80LL * v19)) == 0 )
    {
      v19 = v17 & (v19 + 1);
      if ( v19 == (v17 & ((40543 * (int)v15) ^ ((unsigned __int64)(40543 * v15) >> 32))) )
      {
        ExpRemovePoolTrackerExpansion(v15, v11, v6);
        return RtlpHpFreeHeap(a1, (__int64)v7, 0, 0LL);
      }
    }
    else
    {
      *(_DWORD *)v20 = v21;
      v22 = *(_QWORD *)(PoolTrackTable + 80LL * v19 + 72);
      if ( v22 )
        *(_QWORD *)(v20 + 72) = v22;
    }
  }
  ExpPoolTrackerReturnLimit(!(v6 & 1), v11, v20);
  return RtlpHpFreeHeap(a1, (__int64)v7, 0, 0LL);
}
