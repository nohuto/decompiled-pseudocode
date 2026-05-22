/*
 * XREFs of ??$construct@UTraceSessionProviderConfig@@AEAY0CH@$$CBGHHH@?$_Default_allocator_traits@V?$allocator@UTraceSessionProviderConfig@@@std@@@std@@SAXAEAV?$allocator@UTraceSessionProviderConfig@@@1@QEAUTraceSessionProviderConfig@@AEAY0CH@$$CBG$$QEAH33@Z @ 0x180091CA8
 * Callers:
 *     ??$_Emplace_reallocate@AEAY0CH@$$CBGHHH@?$vector@UTraceSessionProviderConfig@@V?$allocator@UTraceSessionProviderConfig@@@std@@@std@@QEAAPEAUTraceSessionProviderConfig@@QEAU2@AEAY0CH@$$CBG$$QEAH22@Z @ 0x1800916D8 (--$_Emplace_reallocate@AEAY0CH@$$CBGHHH@-$vector@UTraceSessionProviderConfig@@V-$allocator@UTrac.c)
 *     ??$emplace_back@AEAY0CH@$$CBGHHH@?$vector@UTraceSessionProviderConfig@@V?$allocator@UTraceSessionProviderConfig@@@std@@@std@@QEAAAEAUTraceSessionProviderConfig@@AEAY0CH@$$CBG$$QEAH11@Z @ 0x180091DD4 (--$emplace_back@AEAY0CH@$$CBGHHH@-$vector@UTraceSessionProviderConfig@@V-$allocator@UTraceSessio.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003FA98 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall std::_Default_allocator_traits<std::allocator<TraceSessionProviderConfig>>::construct<TraceSessionProviderConfig,unsigned short const (&)[39],int,int,int>(
        __int64 a1,
        __int64 a2,
        const OLECHAR *a3,
        int *a4,
        int *a5,
        int *a6)
{
  __int64 v6; // r10
  int v7; // eax
  HRESULT v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v6 = *a6;
  v7 = *a4;
  *(_QWORD *)(a2 + 24) = *a5;
  *(_DWORD *)(a2 + 16) = v7;
  *(_QWORD *)(a2 + 32) = v6;
  v8 = CLSIDFromString(a3, (LPCLSID)a2);
  if ( v8 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      18LL,
      (__int64)"onecoreuap\\internal\\analog\\inc\\tracingsessionhelper.h",
      (const char *)(unsigned int)v8);
}
