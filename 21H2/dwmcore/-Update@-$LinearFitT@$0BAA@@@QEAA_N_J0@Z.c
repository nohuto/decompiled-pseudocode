/*
 * XREFs of ?Update@?$LinearFitT@$0BAA@@@QEAA_N_J0@Z @ 0x180079568
 * Callers:
 *     ?GetPresentStatisticsAndAdjustRates@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18007C608 (-GetPresentStatisticsAndAdjustRates@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 * Callees:
 *     ?RebaseSums@?$LinearFitT@$0BAA@@@QEAA_NXZ @ 0x180078B0C (-RebaseSums@-$LinearFitT@$0BAA@@@QEAA_NXZ.c)
 *     ?AddToSums@?$LinearFitT@$0BAA@@@QEAA_NAEBUPoint@1@@Z @ 0x180078C0C (-AddToSums@-$LinearFitT@$0BAA@@@QEAA_NAEBUPoint@1@@Z.c)
 *     ?Compute_b0_b1@?$LinearFitT@$0BAA@@@QEAAXXZ @ 0x180078CD8 (-Compute_b0_b1@-$LinearFitT@$0BAA@@@QEAAXXZ.c)
 *     ?InitWithPoint@?$LinearFitT@$0BAA@@@QEAAXAEBUPoint@1@@Z @ 0x1800DDBA4 (-InitWithPoint@-$LinearFitT@$0BAA@@@QEAAXAEBUPoint@1@@Z.c)
 */

char __fastcall LinearFitT<256>::Update(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // r9d
  _QWORD *v6; // rdi
  _QWORD *v7; // rbx
  bool v8; // si
  __int64 v9; // r12
  signed __int64 v10; // rbp
  __int64 v11; // rdx
  __int64 v12; // rcx

  v3 = *(_DWORD *)(a1 + 8);
  v6 = (_QWORD *)(16LL * (unsigned __int8)v3 + a1 + 104);
  v7 = (_QWORD *)a1;
  if ( !v3 )
  {
    *v6 = a2;
    v6[1] = a3;
    goto LABEL_16;
  }
  v8 = 0;
  v9 = 2LL * (unsigned __int8)(v3 - 1);
  v10 = abs64(a3 - *(_QWORD *)(a1 + 16LL * (unsigned __int8)(v3 - 1) + 112));
  if ( a2 > *(_QWORD *)(a1 + 16LL * (unsigned __int8)(v3 - 1) + 104) + *(_QWORD *)(a1 + 88)
    || v10 > *(_QWORD *)(a1 + 96) )
  {
    if ( v3 > 0x100 )
    {
      if ( (v3 & 0x1FF) == 0 )
        v8 = LinearFitT<256>::RebaseSums(a1) == 0;
      v11 = *v6 - v7[5];
      v12 = v6[1] - v7[6];
      v7[7] -= v11;
      v7[8] -= v12;
      v7[9] -= v11 * v12;
      v7[10] -= v11 * v11;
    }
    *v6 = a2;
    v6[1] = a3;
    if ( (LinearFitT<256>::AddToSums(v7, v6)
       || LinearFitT<256>::RebaseSums((__int64)v7) && LinearFitT<256>::AddToSums(v7, v6))
      && !v8
      && *v6 > v7[v9 + 13]
      && ((__int64)v7[12] <= 0 || v10 <= v7[12]) )
    {
      goto LABEL_12;
    }
    a1 = (__int64)v7;
LABEL_16:
    LinearFitT<256>::InitWithPoint(a1, v6);
LABEL_12:
    LinearFitT<256>::Compute_b0_b1((__int64)v7);
    return 1;
  }
  return 0;
}
