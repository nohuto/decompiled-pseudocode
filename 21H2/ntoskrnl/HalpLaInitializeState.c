/*
 * XREFs of HalpLaInitializeState @ 0x1404DB440
 * Callers:
 *     HalpDmaAllocateDomain @ 0x1403C7388 (HalpDmaAllocateDomain.c)
 * Callees:
 *     HalpMmAllocCtxFree @ 0x140378FB0 (HalpMmAllocCtxFree.c)
 *     HalpMmAllocCtxAlloc @ 0x14037C598 (HalpMmAllocCtxAlloc.c)
 *     HalpLaReserveRange @ 0x1404DB614 (HalpLaReserveRange.c)
 *     HalpLapDeleteSubtree @ 0x1404DB830 (HalpLapDeleteSubtree.c)
 */

__int64 __fastcall HalpLaInitializeState(__int64 a1, __int64 *a2)
{
  int v2; // ebx
  unsigned int v4; // r15d
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // r14
  __int64 v7; // rcx
  __int64 v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // r12
  __int64 v12; // rcx
  unsigned int v13; // r15d
  _QWORD *v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 *v17; // rcx
  _UNKNOWN **i; // r14

  v2 = 0;
  v4 = 64;
  if ( (unsigned int)a1 <= 0x40 )
    v4 = a1;
  if ( v4 == 64 )
  {
    v5 = -1LL;
  }
  else
  {
    a1 = v4;
    v5 = (1LL << v4) - 1;
  }
  v6 = 4096LL;
  do
  {
    if ( 2 * v6 - 1 > v5 )
      break;
    v6 *= 2LL;
  }
  while ( 2 * v6 > v6 );
  v8 = HalpMmAllocCtxAlloc(a1, 72LL);
  if ( !v8 )
    return (unsigned int)-1073741670;
  v10 = HalpMmAllocCtxAlloc(v7, 80LL);
  if ( !v10 )
  {
    v2 = -1073741670;
LABEL_18:
    HalpMmAllocCtxFree(v9, v8);
    return (unsigned int)v2;
  }
  v11 = HalpMmAllocCtxAlloc(v9, 16LL * (v4 - 11));
  if ( !v11 )
  {
    v2 = -1073741670;
LABEL_15:
    HalpLapDeleteSubtree(v8, v10);
    if ( v11 )
      HalpMmAllocCtxFree(v12, v11);
    HalpMmAllocCtxFree(v12, v10);
    goto LABEL_18;
  }
  *(_QWORD *)v8 = 4096LL;
  v13 = v4 - 12;
  *(_QWORD *)(v8 + 8) = v6;
  v14 = (_QWORD *)v11;
  *(_QWORD *)(v8 + 16) = v5;
  *(_DWORD *)(v8 + 24) = 1;
  *(_QWORD *)(v8 + 32) = 0LL;
  v15 = v13 + 1;
  *(_QWORD *)(v8 + 40) = 0LL;
  *(_QWORD *)(v8 + 48) = 0LL;
  *(_QWORD *)(v8 + 56) = v10;
  *(_QWORD *)(v8 + 64) = v11;
  *(_QWORD *)(v10 + 16) = 0LL;
  *(_QWORD *)(v10 + 24) = 0LL;
  *(_QWORD *)(v10 + 32) = 0LL;
  *(_QWORD *)(v10 + 48) = 0LL;
  *(_BYTE *)(v10 + 56) = 0;
  *(_QWORD *)(v10 + 64) = v6;
  *(_QWORD *)(v10 + 72) = 0LL;
  *(_QWORD *)(v10 + 40) = 0LL;
  *(_QWORD *)(v10 + 8) = v10;
  *(_QWORD *)v10 = v10;
  do
  {
    v14[1] = v14;
    *v14 = v14;
    v14 += 2;
    --v15;
  }
  while ( v15 );
  v16 = v11 + 16LL * v13;
  v17 = *(__int64 **)(v16 + 8);
  if ( *v17 != v16 )
    __fastfail(3u);
  *(_QWORD *)v10 = v16;
  *(_QWORD *)(v10 + 8) = v17;
  *v17 = v10;
  *(_QWORD *)(v16 + 8) = v10;
  for ( i = (_UNKNOWN **)HalpLaReservedRanges; i != &HalpLaReservedRanges; i = (_UNKNOWN **)*i )
  {
    v2 = HalpLaReserveRange(v8, i[2], i[3]);
    if ( v2 < 0 )
      goto LABEL_15;
  }
  *a2 = v8;
  return (unsigned int)v2;
}
