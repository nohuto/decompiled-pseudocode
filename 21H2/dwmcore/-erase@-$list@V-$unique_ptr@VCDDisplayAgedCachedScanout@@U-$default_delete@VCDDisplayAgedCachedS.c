/*
 * XREFs of ?erase@?$list@V?$unique_ptr@VCDDisplayAgedCachedScanout@@U?$default_delete@VCDDisplayAgedCachedScanout@@@std@@@std@@V?$allocator@V?$unique_ptr@VCDDisplayAgedCachedScanout@@U?$default_delete@VCDDisplayAgedCachedScanout@@@std@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@V?$unique_ptr@VCDDisplayAgedCachedScanout@@U?$default_delete@VCDDisplayAgedCachedScanout@@@std@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@V?$unique_ptr@VCDDisplayAgedCachedScanout@@U?$default_delete@VCDDisplayAgedCachedScanout@@@std@@@std@@@std@@@std@@@2@@Z @ 0x18027C6B0
 * Callers:
 *     ?FindCachedDesktopScanout@CDDisplaySwapChain@@IEAAJ_NAEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@PEAPEAUIDisplayScanout@Core@Display@Devices@Windows@@@Z @ 0x18027ADB4 (-FindCachedDesktopScanout@CDDisplaySwapChain@@IEAAJ_NAEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@PEAPE.c)
 *     ?FindCachedGeneralScanout@CDDisplaySwapChain@@IEAAJ_NIPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@PEAPEAUIDisplayScanout@Core@Display@Devices@Windows@@@Z @ 0x18027AF28 (-FindCachedGeneralScanout@CDDisplaySwapChain@@IEAAJ_NIPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@PEAP.c)
 *     ?NotifyRealizationBitmapReleased@CDDisplaySwapChain@@UEAAXPEAUIDisplaySurface@Core@Display@Devices@Windows@@@Z @ 0x18027BC80 (-NotifyRealizationBitmapReleased@CDDisplaySwapChain@@UEAAXPEAUIDisplaySurface@Core@Display@Devic.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800D7338 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??_GCDDisplayAgedCachedScanout@@QEAAPEAXI@Z @ 0x180279FE0 (--_GCDDisplayAgedCachedScanout@@QEAAPEAXI@Z.c)
 */

_QWORD *__fastcall std::list<std::unique_ptr<CDDisplayAgedCachedScanout>>::erase(__int64 a1, _QWORD *a2, void *a3)
{
  _QWORD *v4; // rsi
  CDDisplayAgedCachedScanout *v6; // rcx
  _QWORD *result; // rax

  v4 = *(_QWORD **)a3;
  **((_QWORD **)a3 + 1) = *(_QWORD *)a3;
  *(_QWORD *)(*(_QWORD *)a3 + 8LL) = *((_QWORD *)a3 + 1);
  --*(_QWORD *)(a1 + 8);
  v6 = (CDDisplayAgedCachedScanout *)*((_QWORD *)a3 + 2);
  if ( v6 )
    CDDisplayAgedCachedScanout::`scalar deleting destructor'(v6);
  std::_Deallocate<16,0>(a3, 0x18uLL);
  result = a2;
  *a2 = v4;
  return result;
}
