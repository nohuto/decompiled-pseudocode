/*
 * XREFs of ?SysMmCreateLiveDump@@YAJK_K000T_WD_LIVEREPORT_FLAGS@@@Z @ 0x1C007152C
 * Callers:
 *     ?SysMmDestroyAdapter@@YAXPEAUSYSMM_ADAPTER@@@Z @ 0x1C03C0EA4 (-SysMmDestroyAdapter@@YAXPEAUSYSMM_ADAPTER@@@Z.c)
 * Callees:
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000T_WD_LIVEREPORT_FLAGS@@@Z @ 0x1C02CEAA0 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000T_WD_LIVEREPORT_FLAGS@@@Z.c)
 */

__int64 SysMmCreateLiveDump()
{
  return DxgCreateLiveDumpWithWdLogs(403LL, 2074LL);
}
