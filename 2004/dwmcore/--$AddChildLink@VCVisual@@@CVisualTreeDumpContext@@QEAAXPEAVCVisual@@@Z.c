/*
 * XREFs of ??$AddChildLink@VCVisual@@@CVisualTreeDumpContext@@QEAAXPEAVCVisual@@@Z @ 0x1801ADD34
 * Callers:
 *     ?DebugDump@CVisual@@UEAAXPEAVCVisualTreeDumpContext@@@Z @ 0x1801AEBF0 (-DebugDump@CVisual@@UEAAXPEAVCVisualTreeDumpContext@@@Z.c)
 * Callees:
 *     ??$_Emplace_reallocate@PEBVCVisual@@@?$vector@PEBVCVisual@@V?$allocator@PEBVCVisual@@@std@@@std@@QEAAPEAPEBVCVisual@@QEAPEBV2@$$QEAPEBV2@@Z @ 0x180166108 (--$_Emplace_reallocate@PEBVCVisual@@@-$vector@PEBVCVisual@@V-$allocator@PEBVCVisual@@@std@@@std@.c)
 *     ??$RegisterNodeForVisit@VCVisual@@@CDebugTreeDumper@@QEAAXPEAVCVisual@@_N@Z @ 0x180197B94 (--$RegisterNodeForVisit@VCVisual@@@CDebugTreeDumper@@QEAAXPEAVCVisual@@_N@Z.c)
 */

__int64 __fastcall CVisualTreeDumpContext::AddChildLink<CVisual>(__int64 a1, __int64 a2)
{
  __int64 *v3; // rcx
  __int64 *v5; // rdx
  __int64 result; // rax
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  if ( a2 )
  {
    v7 = a2;
    v3 = (__int64 *)(a1 + 88);
    v5 = (__int64 *)v3[1];
    if ( (__int64 *)v3[2] == v5 )
    {
      std::vector<CVisual const *>::_Emplace_reallocate<CVisual const *>(v3, v5, &v7);
    }
    else
    {
      *v5 = a2;
      v3[1] += 8LL;
    }
    return CDebugTreeDumper::RegisterNodeForVisit<CVisual>(*(_QWORD **)(a1 + 112), a2);
  }
  return result;
}
