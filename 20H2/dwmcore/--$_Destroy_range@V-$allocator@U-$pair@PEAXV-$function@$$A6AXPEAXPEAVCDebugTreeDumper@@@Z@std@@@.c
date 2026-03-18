/*
 * XREFs of ??$_Destroy_range@V?$allocator@U?$pair@PEAXV?$function@$$A6AXPEAXPEAVCDebugTreeDumper@@@Z@std@@@std@@@std@@@std@@YAXPEAU?$pair@PEAXV?$function@$$A6AXPEAXPEAVCDebugTreeDumper@@@Z@std@@@0@0AEAV?$allocator@U?$pair@PEAXV?$function@$$A6AXPEAXPEAVCDebugTreeDumper@@@Z@std@@@std@@@0@@Z @ 0x1801960BC
 * Callers:
 *     ??$_Emplace_reallocate@U?$pair@PEAXV?$function@$$A6AXPEAXPEAVCDebugTreeDumper@@@Z@std@@@std@@@?$vector@U?$pair@PEAXV?$function@$$A6AXPEAXPEAVCDebugTreeDumper@@@Z@std@@@std@@V?$allocator@U?$pair@PEAXV?$function@$$A6AXPEAXPEAVCDebugTreeDumper@@@Z@std@@@std@@@2@@std@@QEAAPEAU?$pair@PEAXV?$function@$$A6AXPEAXPEAVCDebugTreeDumper@@@Z@std@@@1@QEAU21@$$QEAU21@@Z @ 0x180196130 (--$_Emplace_reallocate@U-$pair@PEAXV-$function@$$A6AXPEAXPEAVCDebugTreeDumper@@@Z@std@@@std@@@-$.c)
 *     ?_Change_array@?$vector@U?$pair@PEAXV?$function@$$A6AXPEAXPEAVCDebugTreeDumper@@@Z@std@@@std@@V?$allocator@U?$pair@PEAXV?$function@$$A6AXPEAXPEAVCDebugTreeDumper@@@Z@std@@@std@@@2@@std@@AEAAXQEAU?$pair@PEAXV?$function@$$A6AXPEAXPEAVCDebugTreeDumper@@@Z@std@@@2@_K1@Z @ 0x180197728 (-_Change_array@-$vector@U-$pair@PEAXV-$function@$$A6AXPEAXPEAVCDebugTreeDumper@@@Z@std@@@std@@V-.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@XPEAXPEAVCDebugTreeDumper@@@std@@IEAAXXZ @ 0x180197B20 (-_Tidy@-$_Func_class@XPEAXPEAVCDebugTreeDumper@@@std@@IEAAXXZ.c)
 */

__int64 __fastcall std::_Destroy_range<std::allocator<std::pair<void *,std::function<void (void *,CDebugTreeDumper *)>>>>(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      result = std::_Func_class<void,void *,CDebugTreeDumper *>::_Tidy(v3 + 8);
      v3 += 72LL;
    }
    while ( v3 != a2 );
  }
  return result;
}
