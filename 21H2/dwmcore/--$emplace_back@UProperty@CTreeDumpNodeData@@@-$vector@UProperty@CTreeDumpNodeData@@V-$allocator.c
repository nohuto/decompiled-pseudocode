/*
 * XREFs of ??$emplace_back@UProperty@CTreeDumpNodeData@@@?$vector@UProperty@CTreeDumpNodeData@@V?$allocator@UProperty@CTreeDumpNodeData@@@std@@@std@@QEAAAEAUProperty@CTreeDumpNodeData@@$$QEAU23@@Z @ 0x180154DD0
 * Callers:
 *     ??$AddProperty@M@CVisualTreeDumpContext@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@M@Z @ 0x180154814 (--$AddProperty@M@CVisualTreeDumpContext@@QEAAXAEBV-$basic_string@DU-$char_traits@D@std@@V-$alloc.c)
 *     ??$AddProperty@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@CVisualTreeDumpContext@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@Z @ 0x1801965BC (--$AddProperty@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@@CVisualTreeDumpCon.c)
 *     ??$AddProperty@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@CVisualTreeDumpContext@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x180196734 (--$AddProperty@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@CVisualTreeDumpCon.c)
 *     ??$AddProperty@_N@CVisualTreeDumpContext@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z @ 0x1801AC96C (--$AddProperty@_N@CVisualTreeDumpContext@@QEAAXAEBV-$basic_string@DU-$char_traits@D@std@@V-$allo.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall std::vector<CTreeDumpNodeData::Property>::emplace_back<CTreeDumpNodeData::Property>(
        __int64 *a1,
        __int64 a2)
{
  __int64 v3; // rdx
  unsigned __int64 result; // rax

  v3 = a1[1];
  if ( a1[2] == v3 )
    return std::vector<CTreeDumpNodeData::Property>::_Emplace_reallocate<CTreeDumpNodeData::Property>(a1, v3, a2);
  *(_QWORD *)(v3 + 16) = 0LL;
  *(_QWORD *)(v3 + 24) = 0LL;
  *(_OWORD *)v3 = *(_OWORD *)a2;
  *(_OWORD *)(v3 + 16) = *(_OWORD *)(a2 + 16);
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_BYTE *)a2 = 0;
  *(_QWORD *)(a2 + 24) = 15LL;
  *(_QWORD *)(v3 + 48) = 0LL;
  *(_QWORD *)(v3 + 56) = 0LL;
  *(_OWORD *)(v3 + 32) = *(_OWORD *)(a2 + 32);
  *(_OWORD *)(v3 + 48) = *(_OWORD *)(a2 + 48);
  *(_QWORD *)(a2 + 48) = 0LL;
  *(_BYTE *)(a2 + 32) = 0;
  *(_QWORD *)(a2 + 56) = 15LL;
  result = a1[1];
  a1[1] = result + 64;
  return result;
}
