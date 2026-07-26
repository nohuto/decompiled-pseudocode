/*
 * XREFs of ?ndisPktMonRegisterComponentsCallback@@YAXXZ @ 0x1C008F400
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisPktMonRegisterAllFilters@@YAXXZ @ 0x1C003EED0 (-ndisPktMonRegisterAllFilters@@YAXXZ.c)
 *     ?ndisPktMonRegisterAllMiniports@@YAXXZ @ 0x1C003F03C (-ndisPktMonRegisterAllMiniports@@YAXXZ.c)
 *     ?ndisPktMonRegisterAllOpens@@YAXXZ @ 0x1C003F1A8 (-ndisPktMonRegisterAllOpens@@YAXXZ.c)
 */

void ndisPktMonRegisterComponentsCallback(void)
{
  ndisPktMonRegisterAllMiniports();
  ndisPktMonRegisterAllFilters();
  ndisPktMonRegisterAllOpens();
}
