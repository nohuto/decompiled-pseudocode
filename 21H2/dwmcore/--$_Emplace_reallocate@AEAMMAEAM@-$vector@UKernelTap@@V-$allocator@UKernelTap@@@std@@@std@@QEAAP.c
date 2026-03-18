/*
 * XREFs of ??$_Emplace_reallocate@AEAMMAEAM@?$vector@UKernelTap@@V?$allocator@UKernelTap@@@std@@@std@@QEAAPEAUKernelTap@@QEAU2@AEAM$$QEAM1@Z @ 0x1802B2AD0
 * Callers:
 *     ?GenerateTaps@CGaussianKernel@@SAXAEAV?$vector@UKernelTap@@V?$allocator@UKernelTap@@@std@@@std@@W4SeparableKernelPass@@MM@Z @ 0x1800318E8 (-GenerateTaps@CGaussianKernel@@SAXAEAV-$vector@UKernelTap@@V-$allocator@UKernelTap@@@std@@@std@@.c)
 * Callees:
 *     ??$_Get_size_of_n@$0M@@std@@YA_K_K@Z @ 0x180031B34 (--$_Get_size_of_n@$0M@@std@@YA_K_K@Z.c)
 *     ?_Change_array@?$vector@UKernelTap@@V?$allocator@UKernelTap@@@std@@@std@@AEAAXQEAUKernelTap@@_K1@Z @ 0x180031B64 (-_Change_array@-$vector@UKernelTap@@V-$allocator@UKernelTap@@@std@@@std@@AEAAXQEAUKernelTap@@_K1.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800B6F20 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Xlength@?$vector@UKernelTap@@V?$allocator@UKernelTap@@@std@@@std@@CAXXZ @ 0x18019180C (-_Xlength@-$vector@UKernelTap@@V-$allocator@UKernelTap@@@std@@@std@@CAXXZ.c)
 *     ?_Calculate_growth@?$vector@UKernelTap@@V?$allocator@UKernelTap@@@std@@@std@@AEBA_K_K@Z @ 0x1802B3148 (-_Calculate_growth@-$vector@UKernelTap@@V-$allocator@UKernelTap@@@std@@@std@@AEBA_K_K@Z.c)
 */

_DWORD *__fastcall std::vector<KernelTap>::_Emplace_reallocate<float &,float,float &>(
        __int64 *a1,
        __int64 a2,
        int *a3,
        _DWORD *a4,
        int *a5)
{
  __int64 v5; // rsi
  unsigned __int64 v9; // rax
  __int64 v11; // r15
  __int64 v12; // r12
  SIZE_T size_of; // rax
  __int64 v14; // r10
  _QWORD *v15; // r8
  int v16; // xmm1_4
  int v17; // eax
  _DWORD *v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rcx
  int v21; // eax
  _QWORD *v22; // r9
  int v23; // ecx
  int v25; // eax

  v5 = *a1;
  v9 = 0xAAAAAAAAAAAAAAABuLL * ((a1[1] - *a1) >> 2);
  if ( v9 == 0x1555555555555555LL )
    std::vector<KernelTap>::_Xlength();
  v11 = v9 + 1;
  v12 = std::vector<KernelTap>::_Calculate_growth(a1, v9 + 1);
  size_of = std::_Get_size_of_n<12>(v12);
  v14 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v15 = (_QWORD *)v14;
  v16 = *a5;
  v17 = *a3;
  v18 = (_DWORD *)(v14 + 12 * ((a2 - v5) / 12));
  v18[1] = *a4;
  v18[2] = v16;
  *v18 = v17;
  v19 = a1[1];
  v20 = *a1;
  if ( a2 == v19 )
  {
    while ( v20 != v19 )
    {
      *v15 = *(_QWORD *)v20;
      v15 = (_QWORD *)((char *)v15 + 12);
      v25 = *(_DWORD *)(v20 + 8);
      v20 += 12LL;
      *((_DWORD *)v15 - 1) = v25;
    }
  }
  else
  {
    if ( v20 != a2 )
    {
      do
      {
        *v15 = *(_QWORD *)v20;
        v15 = (_QWORD *)((char *)v15 + 12);
        v21 = *(_DWORD *)(v20 + 8);
        v20 += 12LL;
        *((_DWORD *)v15 - 1) = v21;
      }
      while ( v20 != a2 );
      v19 = a1[1];
    }
    if ( a2 != v19 )
    {
      v22 = v18 + 3;
      do
      {
        *v22 = *(_QWORD *)a2;
        v22 = (_QWORD *)((char *)v22 + 12);
        v23 = *(_DWORD *)(a2 + 8);
        a2 += 12LL;
        *((_DWORD *)v22 - 1) = v23;
      }
      while ( a2 != v19 );
    }
  }
  std::vector<KernelTap>::_Change_array(a1, v14, v11, v12);
  return v18;
}
