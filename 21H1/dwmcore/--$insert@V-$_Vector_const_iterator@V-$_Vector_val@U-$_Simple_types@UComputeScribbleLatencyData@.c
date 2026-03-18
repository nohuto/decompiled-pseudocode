/*
 * XREFs of ??$insert@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UComputeScribbleLatencyData@@@std@@@std@@@std@@X@?$list@UComputeScribbleLatencyData@@V?$allocator@UComputeScribbleLatencyData@@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@UComputeScribbleLatencyData@@@std@@@std@@@1@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@UComputeScribbleLatencyData@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UComputeScribbleLatencyData@@@std@@@std@@@1@1@Z @ 0x180167720
 * Callers:
 *     ?AddLatencyData@CTelemetryComputeScribbleAggregator@@SAXAEBV?$vector@UComputeScribbleLatencyData@@V?$allocator@UComputeScribbleLatencyData@@@std@@@std@@@Z @ 0x180167840 (-AddLatencyData@CTelemetryComputeScribbleAggregator@@SAXAEBV-$vector@UComputeScribbleLatencyData.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180044B10 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800BE77C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

_QWORD *__fastcall std::list<ComputeScribbleLatencyData>::insert<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<ComputeScribbleLatencyData>>>,void>(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v5; // rdi
  __int64 v8; // r10
  __int64 v9; // xmm1_8
  __int64 v10; // rax
  _QWORD *v11; // rcx
  __int64 *v13; // [rsp+28h] [rbp-58h]
  __int64 v14; // [rsp+30h] [rbp-50h]
  __int64 v15; // [rsp+38h] [rbp-48h] BYREF

  v5 = a4;
  v13 = &v15;
  v14 = 0LL;
  if ( a4 != a5 )
  {
    do
    {
      v8 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x48uLL);
      *(_OWORD *)(v8 + 16) = *(_OWORD *)v5;
      *(_OWORD *)(v8 + 32) = *(_OWORD *)(v5 + 16);
      *(_OWORD *)(v8 + 48) = *(_OWORD *)(v5 + 32);
      v9 = *(_QWORD *)(v5 + 48);
      v5 += 56LL;
      *(_QWORD *)(v8 + 64) = v9;
      *v13 = v8;
      *(_QWORD *)(v8 + 8) = v13;
      v13 = (__int64 *)v8;
      v10 = ++v14;
    }
    while ( v5 != a5 );
    if ( v10 )
    {
      *((_QWORD *)&xmmword_18034D460 + 1) += v10;
      *(_QWORD *)v8 = a3;
      v11 = *(_QWORD **)(a3 + 8);
      *(_QWORD *)(a3 + 8) = v8;
      a3 = v15;
      *v11 = v15;
      *(_QWORD *)(a3 + 8) = v11;
    }
  }
  *a2 = a3;
  return a2;
}
