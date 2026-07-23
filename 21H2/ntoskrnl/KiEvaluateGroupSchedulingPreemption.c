/*
 * XREFs of KiEvaluateGroupSchedulingPreemption @ 0x1402F0EF0
 * Callers:
 *     KiDeferredReadySingleThread @ 0x14034EC10 (KiDeferredReadySingleThread.c)
 * Callees:
 *     KiGetComparisonRanks @ 0x14024341C (KiGetComparisonRanks.c)
 *     KiShouldPreemptionBeDeferred @ 0x14027B894 (KiShouldPreemptionBeDeferred.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x1402F1D50 (KiGetThreadEffectiveRankNonZero.c)
 */

bool __fastcall KiEvaluateGroupSchedulingPreemption(struct _KPRCB *a1, __int64 a2, __int64 a3, __int64 *a4)
{
  int v4; // edi
  __int64 *v5; // r15
  struct _KPRCB *v8; // r10
  __int64 v9; // rsi
  __int64 v10; // r14
  unsigned int v11; // r10d
  unsigned int v12; // eax
  __int64 v14; // rax
  int v15; // eax
  unsigned int v16; // [rsp+60h] [rbp+8h] BYREF
  unsigned int ThreadEffectiveRankNonZero; // [rsp+68h] [rbp+10h] BYREF

  v4 = 0;
  v5 = a4;
  v8 = a1;
  ThreadEffectiveRankNonZero = 0;
  LOBYTE(a4) = a1->NextThread == (_KTHREAD *)a2 || a1 == KeGetCurrentPrcb();
  v9 = *(_QWORD *)(a2 + 104);
  if ( v9 )
  {
    v9 += a1->ScbOffset;
    if ( v9 )
      ThreadEffectiveRankNonZero = KiGetThreadEffectiveRankNonZero(a2, v9, a3, (_DWORD)a4, 0LL);
  }
  v10 = *(_QWORD *)(a3 + 104);
  v16 = 0;
  *v5 = 0LL;
  if ( !v10 )
    goto LABEL_5;
  v10 += v8->ScbOffset;
  if ( !v10 )
    goto LABEL_5;
  LOBYTE(a4) = 1;
  v16 = KiGetThreadEffectiveRankNonZero(a3, v10, a3, (_DWORD)a4, 0LL);
  v11 = v16;
  if ( v16 )
  {
    *v5 = v10;
    goto LABEL_6;
  }
  v14 = v10;
  do
  {
    v4 += *(_DWORD *)(v14 + 116);
    v14 = *(_QWORD *)(v14 + 408);
  }
  while ( v14 );
  if ( v4 )
  {
    v15 = *(_DWORD *)(a3 + 120);
    if ( (v15 & 0x200) == 0 && *(char *)(a3 + 195) < 16 && (v15 & 0xC00) == 0 && KiShouldPreemptionBeDeferred(a3) )
    {
      _interlockedbittestandset((volatile signed __int32 *)(a3 + 120), 0xBu);
LABEL_5:
      v11 = v16;
    }
  }
LABEL_6:
  if ( !v9 || !v10 )
    goto LABEL_7;
  v12 = ThreadEffectiveRankNonZero;
  if ( ThreadEffectiveRankNonZero && v11 )
  {
    KiGetComparisonRanks(v9, v10, &ThreadEffectiveRankNonZero, &v16);
    v11 = v16;
LABEL_7:
    v12 = ThreadEffectiveRankNonZero;
  }
  return v11 < v12 || v11 == v12 && *(_BYTE *)(a3 + 195) > *(_BYTE *)(a2 + 195);
}
