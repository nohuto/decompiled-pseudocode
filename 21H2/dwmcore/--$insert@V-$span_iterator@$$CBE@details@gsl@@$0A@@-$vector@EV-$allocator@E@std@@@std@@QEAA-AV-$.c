/*
 * XREFs of ??$insert@V?$span_iterator@$$CBE@details@gsl@@$0A@@?$vector@EV?$allocator@E@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@E@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@E@std@@@std@@@1@V?$span_iterator@$$CBE@details@gsl@@1@Z @ 0x1800CE938
 * Callers:
 *     ??0CPathData@@QEAA@PEAUID2D1Factory@@V?$span@$$CBE$0?0@gsl@@@Z @ 0x1800CE838 (--0CPathData@@QEAA@PEAUID2D1Factory@@V-$span@$$CBE$0-0@gsl@@@Z.c)
 *     ?AppendSegment@CPathData@@AEAAXPEAUSegment@Path@@@Z @ 0x18026FCC4 (-AppendSegment@CPathData@@AEAAXPEAUSegment@Path@@@Z.c)
 *     ?AppendSegment@CTrimPathOperation@@AEAAXAEBUSegment@Path@@@Z @ 0x18029FF20 (-AppendSegment@CTrimPathOperation@@AEAAXAEBUSegment@Path@@@Z.c)
 *     ?Interpolate@CInterpolatePathsOperation@@QEAAJPEBVCPathData@@0MPEAPEAV2@@Z @ 0x1802A038C (-Interpolate@CInterpolatePathsOperation@@QEAAJPEBVCPathData@@0MPEAPEAV2@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800B6F20 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Calculate_growth@?$vector@DV?$allocator@D@std@@@std@@AEBA_K_K@Z @ 0x1800B6FF8 (-_Calculate_growth@-$vector@DV-$allocator@D@std@@@std@@AEBA_K_K@Z.c)
 *     ?_Change_array@?$vector@EV?$allocator@E@std@@@std@@AEAAXQEAE_K1@Z @ 0x1800CEC84 (-_Change_array@-$vector@EV-$allocator@E@std@@@std@@AEAAXQEAE_K1@Z.c)
 *     memmove_0 @ 0x18010518B (memmove_0.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180190BB4 (-terminate@details@gsl@@YAXXZ.c)
 *     ?_Xlength@?$vector@UKernelTap@@V?$allocator@UKernelTap@@@std@@@std@@CAXXZ @ 0x18019180C (-_Xlength@-$vector@UKernelTap@@V-$allocator@UKernelTap@@@std@@@std@@CAXXZ.c)
 */

_QWORD *__fastcall std::vector<unsigned char>::insert<gsl::details::span_iterator<unsigned char const>,0>(
        __int64 a1,
        _QWORD *a2,
        _BYTE *a3,
        __int64 a4,
        __int128 *a5)
{
  _BYTE *v6; // r13
  gsl::details *v8; // rcx
  _BYTE *v9; // rsi
  signed __int64 v10; // r12
  size_t v11; // rdi
  _BYTE *v12; // r15
  __int64 v13; // rbp
  _QWORD *result; // rax
  __int64 v15; // r15
  char *v16; // rbp
  size_t v17; // r8
  const void *v18; // rdx
  char *v19; // rcx
  __int128 v20; // [rsp+20h] [rbp-78h]
  SIZE_T v23; // [rsp+C0h] [rbp+28h]

  v6 = *(_BYTE **)a1;
  v8 = *(gsl::details **)a4;
  v20 = *a5;
  if ( *(_OWORD *)a4 != *a5 || *(_QWORD *)(a4 + 16) > *((_QWORD *)a5 + 2) )
  {
    gsl::details::terminate(v8);
    JUMPOUT(0x1800CEA4ELL);
  }
  v9 = *(_BYTE **)(a1 + 8);
  v10 = a3 - v6;
  v11 = *((_QWORD *)a5 + 2) - *(_QWORD *)(a4 + 16);
  if ( v11 )
  {
    if ( v11 > *(_QWORD *)(a1 + 16) - (_QWORD)v9 )
    {
      v15 = v9 - v6;
      if ( v11 > 0x7FFFFFFFFFFFFFFFLL - (v9 - v6) )
        std::vector<KernelTap>::_Xlength(v8);
      v23 = std::vector<char>::_Calculate_growth((_QWORD *)a1, v15 + v11);
      v16 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(v23);
      memmove_0(&v16[v10], *(const void **)(a4 + 16), v11);
      if ( v11 == 1 && a3 == v9 )
      {
        v17 = v9 - v6;
        v18 = v6;
        v19 = v16;
      }
      else
      {
        memmove_0(v16, v6, a3 - v6);
        v19 = &v16[v10 + v11];
        v17 = v9 - a3;
        v18 = a3;
      }
      memmove_0(v19, v18, v17);
      std::vector<unsigned char>::_Change_array(a1, v16, v15 + v11, v23, v20);
    }
    else
    {
      v12 = &v9[v11];
      v13 = v9 - a3;
      if ( v11 < v9 - a3 )
      {
        memmove_0(*(void **)(a1 + 8), &v9[-v11], v11);
        *(_QWORD *)(a1 + 8) = v12;
        memmove_0(&v9[-(v13 - v11)], a3, v13 - v11);
      }
      else
      {
        memmove_0(&a3[v11], a3, v9 - a3);
        *(_QWORD *)(a1 + 8) = v12;
      }
      memmove_0(a3, *(const void **)(a4 + 16), v11);
    }
  }
  result = a2;
  *a2 = v10 + *(_QWORD *)a1;
  return result;
}
