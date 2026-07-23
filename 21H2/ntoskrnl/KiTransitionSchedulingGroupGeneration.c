/*
 * XREFs of KiTransitionSchedulingGroupGeneration @ 0x14027B260
 * Callers:
 *     KiGroupSchedulingGenerationEnd @ 0x14027AF4C (KiGroupSchedulingGenerationEnd.c)
 * Callees:
 *     KiAddThreadToPrcbQueue @ 0x140214370 (KiAddThreadToPrcbQueue.c)
 *     KiChargeSchedulingGroupCycleTime @ 0x14027B610 (KiChargeSchedulingGroupCycleTime.c)
 *     KiInsertNonMaxOverQuotaScb @ 0x14029D0EC (KiInsertNonMaxOverQuotaScb.c)
 *     KiIsThreadRankNonZero @ 0x1402F1CA0 (KiIsThreadRankNonZero.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x1402F1D50 (KiGetThreadEffectiveRankNonZero.c)
 *     KiSetSchedulerAssistPriority @ 0x140520B94 (KiSetSchedulerAssistPriority.c)
 */

unsigned __int64 __fastcall KiTransitionSchedulingGroupGeneration(__int64 a1, unsigned __int64 a2, char a3)
{
  char v4; // r15
  unsigned __int64 v5; // rcx
  unsigned int v6; // r12d
  __int64 v7; // r10
  unsigned __int64 result; // rax
  _QWORD *v9; // r14
  _QWORD *v10; // r13
  _QWORD *v11; // rdi
  _QWORD *v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  char *v15; // rsi
  unsigned __int64 v16; // r8
  volatile signed __int32 *v17; // rdx
  unsigned int v18; // ecx
  unsigned int v19; // ecx
  unsigned int v20; // esi
  unsigned __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  char IsThreadRankNonZero; // al
  char v25; // dl
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // r14
  _QWORD *v29; // r15
  int v30; // r10d
  __int64 v31; // r10
  __int64 v32; // rdx
  __int64 v33; // rax
  char v34; // cl
  unsigned __int64 v35; // [rsp+30h] [rbp-68h]
  _QWORD *v36; // [rsp+38h] [rbp-60h]
  char v37; // [rsp+A0h] [rbp+8h] BYREF
  char v38; // [rsp+A8h] [rbp+10h]
  char v39; // [rsp+B0h] [rbp+18h]
  int v40; // [rsp+B8h] [rbp+20h]

  v39 = a3;
  v4 = a3;
  v5 = *(_QWORD *)(a1 + 33624);
  v6 = 1;
  if ( a2 > v5 )
    v6 = (a2 - 1 + (unsigned int)KiGenerationTicks - v5) / (unsigned int)KiGenerationTicks + 1;
  v7 = 0LL;
  *(_QWORD *)(a1 + 33624) = KiGenerationEndTick;
  *(_QWORD *)(a1 + 31856) = 0LL;
  *(_QWORD *)(a1 + 31864) = 0LL;
  result = *(_QWORD *)(a1 + 16);
  v38 = 0;
  v35 = result;
  if ( !result )
  {
    result = *(_QWORD *)(a1 + 8);
    v35 = result;
  }
  v9 = *(_QWORD **)(result + 104);
  v36 = v9;
  if ( v9 )
  {
    result = *(unsigned int *)(a1 + 216);
    v9 = (_QWORD *)((char *)v9 + result);
    v36 = v9;
  }
  v10 = (_QWORD *)(a1 + 33288);
  v11 = *(_QWORD **)(a1 + 33288);
  if ( v11 == (_QWORD *)(a1 + 33288) )
  {
LABEL_26:
    if ( *(_BYTE *)(a1 + 32409) )
    {
      v33 = *(unsigned int *)(a1 + 36);
      *(_BYTE *)(a1 + 32409) = 0;
      v34 = KiProcessorIndexToNumberMappingTable[v33];
      result = (unsigned __int64)(unsigned int)KiProcessorIndexToNumberMappingTable[v33] >> 6;
      _InterlockedAnd64(&qword_140C111F8[result], ~(1LL << (v34 & 0x3F)));
    }
    return result;
  }
  LOBYTE(result) = v6;
  do
  {
    v12 = v11 - 9;
    if ( v6 >= 0x40 )
      v13 = v7;
    else
      v13 = v12[6] << result;
    v14 = v13 | 1;
    if ( (v12[14] & 4) == 0 )
      v14 = v13;
    v12[6] = v14;
    v15 = (char *)v12 - *(unsigned int *)(a1 + 216);
    KiChargeSchedulingGroupCycleTime(v15, v11 - 9);
    if ( !v4 )
    {
      if ( *(_BYTE *)(a1 + 33) )
      {
        if ( (v12[14] & 0x10) == 0 )
        {
          v21 = *((_QWORD *)v15 + 5);
          v22 = v21 + _InterlockedExchangeAdd64((volatile signed __int64 *)v15 + 6, v21);
          v23 = *((_QWORD *)v15 + 5);
          if ( v22 > v23 )
            _InterlockedExchange64((volatile __int64 *)v15 + 6, v23);
        }
      }
    }
    if ( v12[1] != v12[2] )
    {
      v16 = (unsigned int)KiGroupSchedulingNumerator * (*v12 >> 10)
          + ((v12[4] * (unsigned __int64)(unsigned int)(1024 - KiGroupSchedulingNumerator)) >> 10);
      v12[4] = v16;
    }
    v17 = (volatile signed __int32 *)v12[15];
    v7 = 0LL;
    *v12 = 0LL;
    v12[5] = 0LL;
    if ( v17 )
    {
      v18 = ((*((unsigned __int8 *)v12 + 112) >> 3) & 1) - *((_DWORD *)v12 + 29);
      if ( (int)(v18 + _InterlockedExchangeAdd(v17, v18)) < 0 )
        *(_DWORD *)v12[15] = 0;
    }
    v19 = *((unsigned __int8 *)v12 + 112);
    v12[3] = 0LL;
    *((_BYTE *)v12 + 112) = v19 & 0xFC;
    *((_DWORD *)v12 + 29) = (v19 >> 3) & 1;
    *(_OWORD *)(v12 + 11) = 0LL;
    v12[13] = 0LL;
    v12[49] = 0LL;
    v12[50] = 0LL;
    if ( !*((_DWORD *)v12 + 29) )
    {
      *((_BYTE *)v12 + 112) &= ~4u;
      if ( v12 == v9 )
      {
        if ( (*(_BYTE *)(v35 + 2) & 4) != 0 )
        {
          IsThreadRankNonZero = KiIsThreadRankNonZero(v35, a1);
          v25 = 1;
          if ( !IsThreadRankNonZero )
            v25 = *(_BYTE *)(v35 + 195);
          v7 = 0LL;
        }
        else
        {
          v25 = *(_BYTE *)(v35 + 195);
        }
        **(_BYTE **)(a1 + 56) = v25;
        v26 = *(_QWORD *)(a1 + 33976);
        if ( v26 )
        {
          if ( v35 == *(_QWORD *)(a1 + 24) )
            v32 = (unsigned int)KiVpThreadSystemWorkPriority;
          else
            v32 = (unsigned int)v25;
          KiSetSchedulerAssistPriority(v26, v32, 0LL);
        }
      }
LABEL_22:
      v20 = *((unsigned __int16 *)v12 + 57);
      v40 = v7;
      v37 = 0;
      if ( v20 )
      {
        do
        {
          _BitScanReverse((unsigned int *)&v27, v20);
          v20 ^= 1 << v27;
          v40 = v27;
          v28 = (__int64)&v12[2 * v27 + 17];
          v29 = *(_QWORD **)v28;
          do
          {
            *((_DWORD *)v29 - 25) &= ~0x2000u;
            v30 = (_DWORD)v29 - 216;
            v29[91] = 0LL;
            v29 = (_QWORD *)*v29;
            KiGetThreadEffectiveRankNonZero(v30, (_DWORD)v11 - 72, v16, 0, (__int64)&v37);
            KiAddThreadToPrcbQueue(a1, v31, *(char *)(v31 + 195), 0, v37);
          }
          while ( v29 != (_QWORD *)v28 );
          *(_QWORD *)(v28 + 8) = v28;
          *(_QWORD *)v28 = v28;
        }
        while ( v20 );
        v9 = v36;
        v10 = (_QWORD *)(a1 + 33288);
        v4 = v39;
        v7 = 0LL;
      }
      *((_WORD *)v12 + 57) = v7;
      goto LABEL_24;
    }
    if ( v4 )
      goto LABEL_22;
    if ( *((_WORD *)v12 + 57) )
    {
      KiInsertNonMaxOverQuotaScb(v11 - 9, a1, 0LL);
      v7 = 0LL;
      v38 = 1;
    }
LABEL_24:
    v11 = (_QWORD *)*v11;
    result = v6;
  }
  while ( v11 != v10 );
  if ( !v38 )
    goto LABEL_26;
  return result;
}
