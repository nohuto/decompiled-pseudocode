/*
 * XREFs of ?_Change_array@?$vector@UTraceSessionProviderConfig@@V?$allocator@UTraceSessionProviderConfig@@@std@@@std@@AEAAXQEAUTraceSessionProviderConfig@@_K1@Z @ 0x1800965CC
 * Callers:
 *     ??$_Emplace_reallocate@AEAY0CH@$$CBGHHH@?$vector@UTraceSessionProviderConfig@@V?$allocator@UTraceSessionProviderConfig@@@std@@@std@@QEAAPEAUTraceSessionProviderConfig@@QEAU2@AEAY0CH@$$CBG$$QEAH22@Z @ 0x180091778 (--$_Emplace_reallocate@AEAY0CH@$$CBGHHH@-$vector@UTraceSessionProviderConfig@@V-$allocator@UTrac.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800117B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<TraceSessionProviderConfig>::_Change_array(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  void *v6; // rcx
  __int64 result; // rax

  v6 = *(void **)a1;
  if ( v6 )
    std::_Deallocate<16,0>(v6, (const struct std::nothrow_t *)(40 * ((*(_QWORD *)(a1 + 16) - (_QWORD)v6) / 40LL)));
  *(_QWORD *)a1 = a2;
  result = 5 * a4;
  *(_QWORD *)(a1 + 8) = a2 + 40 * a3;
  *(_QWORD *)(a1 + 16) = a2 + 40 * a4;
  return result;
}
