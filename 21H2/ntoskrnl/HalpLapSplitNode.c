/*
 * XREFs of HalpLapSplitNode @ 0x1404DB8EC
 * Callers:
 *     HalpLaAllocateBlt @ 0x1404DB044 (HalpLaAllocateBlt.c)
 *     HalpLaReserveRange @ 0x1404DB614 (HalpLaReserveRange.c)
 * Callees:
 *     HalpMmAllocCtxFree @ 0x140378FB0 (HalpMmAllocCtxFree.c)
 *     HalpMmAllocCtxAlloc @ 0x14037C598 (HalpMmAllocCtxAlloc.c)
 */

__int64 __fastcall HalpLapSplitNode(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 result; // rax
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rax

  v5 = HalpMmAllocCtxAlloc(a1, 80LL);
  if ( !v5 )
    return 3221225626LL;
  ++*(_DWORD *)(a1 + 24);
  v6 = HalpMmAllocCtxAlloc(v4, 80LL);
  if ( !v6 )
  {
    HalpMmAllocCtxFree(0LL, v5);
    --*(_DWORD *)(a1 + 24);
    return 3221225626LL;
  }
  ++*(_DWORD *)(a1 + 24);
  *(_QWORD *)(v5 + 24) = 0LL;
  *(_QWORD *)(v5 + 32) = 0LL;
  *(_QWORD *)(v5 + 16) = a2;
  *(_QWORD *)(v5 + 48) = *(_QWORD *)(a2 + 48);
  *(_BYTE *)(v5 + 56) = 0;
  v8 = *(_QWORD *)(a2 + 64);
  *(_QWORD *)(v5 + 72) = 0LL;
  *(_QWORD *)(v5 + 40) = 0LL;
  *(_QWORD *)(v5 + 8) = v5;
  *(_QWORD *)v5 = v5;
  *(_QWORD *)(v5 + 64) = v8 >> 1;
  *(_QWORD *)(v6 + 24) = 0LL;
  *(_QWORD *)(v6 + 32) = 0LL;
  *(_QWORD *)(v6 + 16) = a2;
  *(_QWORD *)(v6 + 48) = *(_QWORD *)(a2 + 48) + (*(_QWORD *)(a2 + 64) >> 1);
  *(_BYTE *)(v6 + 56) = 0;
  v9 = *(_QWORD *)(a2 + 64);
  *(_QWORD *)(v6 + 72) = 0LL;
  *(_QWORD *)(v6 + 40) = 0LL;
  *(_QWORD *)(v6 + 8) = v6;
  *(_QWORD *)v6 = v6;
  *(_QWORD *)(v6 + 64) = v9 >> 1;
  result = 0LL;
  *(_BYTE *)(a2 + 56) = 1;
  *(_QWORD *)(a2 + 24) = v5;
  *(_QWORD *)(a2 + 32) = v6;
  return result;
}
