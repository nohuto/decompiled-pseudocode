/*
 * XREFs of ?DebugDump@CBrush@@UEAAXPEAVCVisualTreeDumpContext@@@Z @ 0x1801551E0
 * Callers:
 *     ?DebugDump@CColorBrush@@UEAAXPEAVCVisualTreeDumpContext@@@Z @ 0x180155260 (-DebugDump@CColorBrush@@UEAAXPEAVCVisualTreeDumpContext@@@Z.c)
 *     ?DebugDump@CWindowBackdropBrush@@UEAAXPEAVCVisualTreeDumpContext@@@Z @ 0x18016DFA0 (-DebugDump@CWindowBackdropBrush@@UEAAXPEAVCVisualTreeDumpContext@@@Z.c)
 *     ?DebugDump@CBackdropBrush@@UEAAXPEAVCVisualTreeDumpContext@@@Z @ 0x1801B61F0 (-DebugDump@CBackdropBrush@@UEAAXPEAVCVisualTreeDumpContext@@@Z.c)
 *     ?DebugDump@CClipBrush@@UEAAXPEAVCVisualTreeDumpContext@@@Z @ 0x1801B71E0 (-DebugDump@CClipBrush@@UEAAXPEAVCVisualTreeDumpContext@@@Z.c)
 *     ?DebugDump@CEffectBrush@@UEAAXPEAVCVisualTreeDumpContext@@@Z @ 0x1801BF2A0 (-DebugDump@CEffectBrush@@UEAAXPEAVCVisualTreeDumpContext@@@Z.c)
 *     ?DebugDump@CMaskBrush@@UEAAXPEAVCVisualTreeDumpContext@@@Z @ 0x1801D58A0 (-DebugDump@CMaskBrush@@UEAAXPEAVCVisualTreeDumpContext@@@Z.c)
 *     ?DebugDump@CNineGridBrush@@UEAAXPEAVCVisualTreeDumpContext@@@Z @ 0x1801D9D90 (-DebugDump@CNineGridBrush@@UEAAXPEAVCVisualTreeDumpContext@@@Z.c)
 *     ?DebugDump@CSurfaceBrush@@UEAAXPEAVCVisualTreeDumpContext@@@Z @ 0x1801ED800 (-DebugDump@CSurfaceBrush@@UEAAXPEAVCVisualTreeDumpContext@@@Z.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x1800D421C (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x1800E259C (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x1800E25D8 (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 */

void __fastcall CBrush::DebugDump(CBrush *this, void **a2)
{
  _QWORD *v3; // rdx
  _QWORD v4[4]; // [rsp+20h] [rbp-38h] BYREF

  std::string::string(v4, (__int64)"CBrush");
  if ( a2 != v4 )
  {
    v3 = v4;
    if ( v4[3] >= 0x10uLL )
      v3 = (_QWORD *)v4[0];
    std::string::assign(a2, v3, v4[2]);
  }
  std::string::_Tidy_deallocate((__int64)v4);
}
