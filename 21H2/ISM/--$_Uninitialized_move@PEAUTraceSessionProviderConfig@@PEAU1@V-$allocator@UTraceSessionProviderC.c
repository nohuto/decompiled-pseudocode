/*
 * XREFs of ??$_Uninitialized_move@PEAUTraceSessionProviderConfig@@PEAU1@V?$allocator@UTraceSessionProviderConfig@@@std@@@std@@YAPEAUTraceSessionProviderConfig@@QEAU1@0PEAU1@AEAV?$allocator@UTraceSessionProviderConfig@@@0@@Z @ 0x180092060
 * Callers:
 *     ??$_Emplace_reallocate@AEAY0CH@$$CBGHHH@?$vector@UTraceSessionProviderConfig@@V?$allocator@UTraceSessionProviderConfig@@@std@@@std@@QEAAPEAUTraceSessionProviderConfig@@QEAU2@AEAY0CH@$$CBG$$QEAH22@Z @ 0x180091B38 (--$_Emplace_reallocate@AEAY0CH@$$CBGHHH@-$vector@UTraceSessionProviderConfig@@V-$allocator@UTrac.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Uninitialized_move<TraceSessionProviderConfig *,TraceSessionProviderConfig *,std::allocator<TraceSessionProviderConfig>>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  while ( a1 != a2 )
  {
    *(_OWORD *)a3 = *(_OWORD *)a1;
    *(_OWORD *)(a3 + 16) = *(_OWORD *)(a1 + 16);
    *(_QWORD *)(a3 + 32) = *(_QWORD *)(a1 + 32);
    a3 += 40LL;
    a1 += 40LL;
  }
  return a3;
}
