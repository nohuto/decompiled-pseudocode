/*
 * XREFs of ??$_Emplace_reallocate@AEBVCMilPoint2F@@@?$vector@VCMilPoint2F@@V?$allocator@VCMilPoint2F@@@std@@@std@@QEAAPEAVCMilPoint2F@@QEAV2@AEBV2@@Z @ 0x1800B68DC
 * Callers:
 *     ?AddNonIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAXPEAUID2D1GeometrySink@@@Z @ 0x1800B6188 (-AddNonIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAXPEAUID2D1GeometrySink@@@Z.c)
 * Callees:
 *     ?_Calculate_growth@?$vector@VCMilPoint2F@@V?$allocator@VCMilPoint2F@@@std@@@std@@AEBA_K_K@Z @ 0x180005590 (-_Calculate_growth@-$vector@VCMilPoint2F@@V-$allocator@VCMilPoint2F@@@std@@@std@@AEBA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800B6F20 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x1800B7030 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800D7338 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Xlength@?$vector@UKernelTap@@V?$allocator@UKernelTap@@@std@@@std@@CAXXZ @ 0x18019180C (-_Xlength@-$vector@UKernelTap@@V-$allocator@UKernelTap@@@std@@@std@@CAXXZ.c)
 */

char *__fastcall std::vector<CMilPoint2F>::_Emplace_reallocate<CMilPoint2F const &>(char **a1, char *a2, _QWORD *a3)
{
  char *v3; // rbp
  __int64 v6; // rax
  __int64 v8; // r15
  __int64 v9; // r12
  SIZE_T size_of; // rax
  char *v11; // rax
  char *v12; // rsi
  char *v13; // rbp
  char *v14; // rdx
  char *v15; // rcx
  __int64 v16; // xmm0_8
  char *result; // rax
  __int64 v18; // xmm0_8
  signed __int64 v19; // rax

  v3 = *a1;
  v6 = (a1[1] - *a1) >> 3;
  if ( v6 == 0x1FFFFFFFFFFFFFFFLL )
    std::vector<KernelTap>::_Xlength();
  v8 = v6 + 1;
  v9 = std::vector<CMilPoint2F>::_Calculate_growth(a1, v6 + 1);
  size_of = std::_Get_size_of_n<8>(v9);
  v11 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v12 = v11;
  v13 = &v11[8 * ((a2 - v3) >> 3)];
  *(_QWORD *)v13 = *a3;
  v14 = a1[1];
  v15 = *a1;
  if ( a2 == v14 )
  {
    while ( v15 != v14 )
    {
      v16 = *(_QWORD *)v15;
      v15 += 8;
      *(_QWORD *)v11 = v16;
      v11 += 8;
    }
  }
  else
  {
    if ( v15 != a2 )
    {
      do
      {
        v18 = *(_QWORD *)v15;
        v15 += 8;
        *(_QWORD *)v11 = v18;
        v11 += 8;
      }
      while ( v15 != a2 );
      v14 = a1[1];
    }
    if ( a2 != v14 )
    {
      v19 = v13 - a2;
      do
      {
        *(_QWORD *)&a2[v19 + 8] = *(_QWORD *)a2;
        a2 += 8;
      }
      while ( a2 != v14 );
    }
  }
  if ( *a1 )
    std::_Deallocate<16,0>(*a1, (a1[2] - *a1) & 0xFFFFFFFFFFFFFFF8uLL);
  *a1 = v12;
  result = v13;
  a1[1] = &v12[8 * v8];
  a1[2] = &v12[8 * v9];
  return result;
}
