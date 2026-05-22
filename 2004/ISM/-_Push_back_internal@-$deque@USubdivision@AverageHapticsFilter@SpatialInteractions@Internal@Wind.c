/*
 * XREFs of ?_Push_back_internal@?$deque@USubdivision@AverageHapticsFilter@SpatialInteractions@Internal@Windows@@V?$allocator@USubdivision@AverageHapticsFilter@SpatialInteractions@Internal@Windows@@@std@@@std@@AEAAX$$QEAUSubdivision@AverageHapticsFilter@SpatialInteractions@Internal@Windows@@@Z @ 0x180170270
 * Callers:
 *     ?EnsurePresent@AverageHapticsFilter@SpatialInteractions@Internal@Windows@@MEAAJ_JH@Z @ 0x18016C0B0 (-EnsurePresent@AverageHapticsFilter@SpatialInteractions@Internal@Windows@@MEAAJ_JH@Z.c)
 *     ?OnInit@AverageHapticsFilter@SpatialInteractions@Internal@Windows@@MEAAJ_J@Z @ 0x18016D1D0 (-OnInit@AverageHapticsFilter@SpatialInteractions@Internal@Windows@@MEAAJ_J@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800130C0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BI@@std@@YA_K_K@Z @ 0x1800130F0 (--$_Get_size_of_n@$0BI@@std@@YA_K_K@Z.c)
 *     ?_Growmap@?$deque@UGetInputReportResult@@V?$allocator@UGetInputReportResult@@@std@@@std@@AEAAX_K@Z @ 0x18009BED4 (-_Growmap@-$deque@UGetInputReportResult@@V-$allocator@UGetInputReportResult@@@std@@@std@@AEAAX_K.c)
 */

__int64 __fastcall std::deque<Windows::Internal::SpatialInteractions::AverageHapticsFilter::Subdivision>::_Push_back_internal(
        _QWORD *a1,
        __int64 a2)
{
  unsigned __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // rax
  size_t size_of; // rax
  __int64 result; // rax

  v4 = a1[2];
  if ( v4 <= a1[4] + 1LL )
  {
    std::deque<GetInputReportResult>::_Growmap(a1);
    v4 = a1[2];
  }
  a1[3] &= v4 - 1;
  v5 = (a1[2] - 1LL) & (a1[4] + a1[3]);
  v6 = a1[1];
  if ( !*(_QWORD *)(v6 + 8 * v5) )
  {
    size_of = std::_Get_size_of_n<24>(1uLL);
    *(_QWORD *)(a1[1] + 8 * v5) = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
    v6 = a1[1];
  }
  result = *(_QWORD *)(v6 + 8 * v5);
  *(_OWORD *)result = *(_OWORD *)a2;
  *(_QWORD *)(result + 16) = *(_QWORD *)(a2 + 16);
  ++a1[4];
  return result;
}
