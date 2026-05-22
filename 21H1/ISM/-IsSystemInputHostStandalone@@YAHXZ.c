/*
 * XREFs of ?IsSystemInputHostStandalone@@YAHXZ @ 0x180065990
 * Callers:
 *     <none>
 * Callees:
 *     ?IsEdition@@YA_N_K@Z @ 0x180027FE0 (-IsEdition@@YA_N_K@Z.c)
 */

_BOOL8 IsSystemInputHostStandalone(void)
{
  return IsEdition(8778LL) == 0;
}
