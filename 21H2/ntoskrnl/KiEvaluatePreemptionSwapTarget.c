/*
 * XREFs of KiEvaluatePreemptionSwapTarget @ 0x140573B50
 * Callers:
 *     KiHeteroAttemptPreemptionSwap @ 0x140573DBC (KiHeteroAttemptPreemptionSwap.c)
 * Callees:
 *     KiGenerateHeteroSets @ 0x14045ADBE (KiGenerateHeteroSets.c)
 *     KiHeteroComputeThreadImportance @ 0x140573FB4 (KiHeteroComputeThreadImportance.c)
 *     KiHeteroIsSwapBeneficialForPerformance @ 0x140574244 (KiHeteroIsSwapBeneficialForPerformance.c)
 */

char __fastcall KiEvaluatePreemptionSwapTarget(__int64 a1, __int64 a2, char *a3)
{
  bool v4; // zf
  __int64 v5; // rsi
  _BYTE *v7; // rbx
  int v8; // edi
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rax
  _WORD *v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // r14
  unsigned int v15; // r8d
  unsigned int v16; // r9d
  __int64 v17; // r11
  __int64 v18; // rcx
  unsigned __int16 v19; // ax
  __int64 v20; // rdx
  __int64 v21; // r9
  unsigned __int8 v22; // r10
  __int64 v23; // r11
  __int64 v25; // [rsp+30h] [rbp-28h] BYREF
  __int64 v26; // [rsp+40h] [rbp-18h]

  v4 = (*(_BYTE *)(a1 + 35) & 2) == 0;
  v5 = a2;
  v26 = 0LL;
  if ( !v4 )
    return 0;
  v7 = *(_BYTE **)(a1 + 56);
  v8 = *a3;
  v9 = *v7 & 0x7F;
  if ( v9 > v8 )
    return 0;
  if ( v9 == v8 )
  {
    v10 = *(_QWORD *)(a1 + 16);
    if ( !v10 )
      v10 = *(_QWORD *)(a1 + 8);
    v11 = *(unsigned __int8 *)(a2 + 208);
    v12 = *(_WORD **)(v10 + 576);
    v13 = (unsigned __int16)v11 >= *v12 ? 0LL : *(_QWORD *)&v12[4 * v11 + 4];
    v14 = *(_QWORD *)(v5 + 200);
    if ( (v14 & v13) == 0 )
      return 0;
    v15 = *(unsigned __int8 *)(v10 + 125);
    v16 = (unsigned __int8)v7[64];
    if ( v15 >= 5 )
      v15 = *((_DWORD *)&KiDynamicHeteroCpuPolicy + 2 * (v16 & 7) + ((v16 >> 6) & 1));
    KiGenerateHeteroSets(*(_QWORD *)(v5 + 192), v13, v15, ((unsigned __int8)v16 >> 3) & 7, &v25);
    if ( (v14 & v26) == 0 )
      return 0;
    a2 = (unsigned int)(1 << v8);
    if ( ((unsigned int)a2 & *(_DWORD *)(v17 + 32472)) != 0
      || ((unsigned int)a2 & *(_DWORD *)(*(_QWORD *)(v17 + 34888) + 8LL)) != 0 )
    {
      return 0;
    }
  }
  if ( ((v18 = v7[64] & 7, (unsigned int)v18 <= 2) || (_DWORD)v18 == 5)
    && (LOBYTE(a2) = *v7 & 0x7F, v19 = KiHeteroComputeThreadImportance(v18, a2), v19 <= *((_WORD *)a3 + 9))
    && (v19 < *((_WORD *)a3 + 9)
     || (LOBYTE(v21) = a3[16],
         LOBYTE(v20) = (v22 >> 3) & 7,
         (unsigned int)KiHeteroIsSwapBeneficialForPerformance(v23, v20, v5, v21))) )
  {
    return 1;
  }
  else
  {
    return 0;
  }
}
