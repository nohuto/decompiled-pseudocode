/*
 * XREFs of KiAddThreadToScbQueue @ 0x14029D044
 * Callers:
 *     KiGroupSchedulingQuantumEnd @ 0x140279D50 (KiGroupSchedulingQuantumEnd.c)
 *     KiQueueReadyThread @ 0x14027A920 (KiQueueReadyThread.c)
 *     KiDeferGroupSchedulingPreemption @ 0x14027B680 (KiDeferGroupSchedulingPreemption.c)
 *     KiDeferredReadySingleThread @ 0x14034EC10 (KiDeferredReadySingleThread.c)
 *     KiSelectReadyThread @ 0x140352650 (KiSelectReadyThread.c)
 *     KiAddThreadToReadyQueue @ 0x14051F134 (KiAddThreadToReadyQueue.c)
 * Callees:
 *     KiInsertNonMaxOverQuotaScb @ 0x14029D0EC (KiInsertNonMaxOverQuotaScb.c)
 */

__int64 __fastcall KiAddThreadToScbQueue(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // r10
  unsigned int v5; // r11d
  _QWORD *v7; // rcx
  _QWORD *v8; // rdx
  __int64 v9; // rax
  _QWORD *v11; // rax
  __int64 v12; // rax

  v4 = a2;
  v5 = *(char *)(a3 + 195);
  if ( !*(_DWORD *)(a2 + 116) )
  {
    do
    {
      v12 = *(_QWORD *)(v4 + 408);
      if ( !v12 )
        break;
      v4 = *(_QWORD *)(v4 + 408);
    }
    while ( !*(_DWORD *)(v12 + 116) );
  }
  v7 = (_QWORD *)(a3 + 216);
  v8 = (_QWORD *)(v4 + 16LL * v5 + 136);
  if ( !a4 )
  {
    v11 = (_QWORD *)v8[1];
    if ( (_QWORD *)*v11 == v8 )
    {
      *v7 = v8;
      *(_QWORD *)(a3 + 224) = v11;
      *v11 = v7;
      v8[1] = v7;
      goto LABEL_5;
    }
LABEL_8:
    __fastfail(3u);
  }
  v9 = *v8;
  if ( *(_QWORD **)(*v8 + 8LL) != v8 )
    goto LABEL_8;
  *v7 = v9;
  *(_QWORD *)(a3 + 224) = v8;
  *(_QWORD *)(v9 + 8) = v7;
  *v8 = v7;
LABEL_5:
  *(_DWORD *)(a3 + 116) |= 0x2000u;
  *(_QWORD *)(a3 + 944) = v4;
  LOBYTE(a3) = 1;
  *(_WORD *)(v4 + 114) |= 1 << v5;
  return KiInsertNonMaxOverQuotaScb(v4, a1, a3);
}
