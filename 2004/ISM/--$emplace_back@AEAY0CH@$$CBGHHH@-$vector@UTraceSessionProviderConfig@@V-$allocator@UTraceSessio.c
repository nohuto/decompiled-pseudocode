/*
 * XREFs of ??$emplace_back@AEAY0CH@$$CBGHHH@?$vector@UTraceSessionProviderConfig@@V?$allocator@UTraceSessionProviderConfig@@@std@@@std@@QEAAAEAUTraceSessionProviderConfig@@AEAY0CH@$$CBG$$QEAH11@Z @ 0x180091E74
 * Callers:
 *     GetHolographicInputSession @ 0x180093248 (GetHolographicInputSession.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEAY0CH@$$CBGHHH@?$vector@UTraceSessionProviderConfig@@V?$allocator@UTraceSessionProviderConfig@@@std@@@std@@QEAAPEAUTraceSessionProviderConfig@@QEAU2@AEAY0CH@$$CBG$$QEAH22@Z @ 0x180091778 (--$_Emplace_reallocate@AEAY0CH@$$CBGHHH@-$vector@UTraceSessionProviderConfig@@V-$allocator@UTrac.c)
 *     ??$construct@UTraceSessionProviderConfig@@AEAY0CH@$$CBGHHH@?$_Default_allocator_traits@V?$allocator@UTraceSessionProviderConfig@@@std@@@std@@SAXAEAV?$allocator@UTraceSessionProviderConfig@@@1@QEAUTraceSessionProviderConfig@@AEAY0CH@$$CBG$$QEAH33@Z @ 0x180091D48 (--$construct@UTraceSessionProviderConfig@@AEAY0CH@$$CBGHHH@-$_Default_allocator_traits@V-$alloca.c)
 */

__int64 __fastcall std::vector<TraceSessionProviderConfig>::emplace_back<unsigned short const (&)[39],int,int,int>(
        __int64 *a1,
        const OLECHAR *a2,
        int *a3,
        int *a4,
        int *a5)
{
  __int64 v6; // rdx
  __int64 result; // rax

  v6 = a1[1];
  if ( a1[2] == v6 )
    return std::vector<TraceSessionProviderConfig>::_Emplace_reallocate<unsigned short const (&)[39],int,int,int>(
             a1,
             v6,
             (__int64)a2,
             (__int64)a3,
             (__int64)a4,
             (__int64)a5);
  std::_Default_allocator_traits<std::allocator<TraceSessionProviderConfig>>::construct<TraceSessionProviderConfig,unsigned short const (&)[39],int,int,int>(
    (__int64)a1,
    v6,
    a2,
    a3,
    a4,
    a5);
  result = a1[1];
  a1[1] = result + 40;
  return result;
}
