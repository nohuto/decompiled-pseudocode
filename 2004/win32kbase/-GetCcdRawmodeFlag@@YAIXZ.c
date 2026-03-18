/*
 * XREFs of ?GetCcdRawmodeFlag@@YAIXZ @ 0x1C00B1640
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C00B1BD0 (DrvSetDisplayConfig.c)
 *     ?DrvFunctionalizeBaseVidMode@@YAJAEBU_RETRY_MODE@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0147D90 (-DrvFunctionalizeBaseVidMode@@YAJAEBU_RETRY_MODE@@PEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 GetCcdRawmodeFlag(void)
{
  return (unsigned __int8)((__int64 (*)(void))qword_1C024C968)() != 0 ? 0x20000 : 0;
}
