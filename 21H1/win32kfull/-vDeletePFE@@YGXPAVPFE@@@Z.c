/*
 * XREFs of ?vDeletePFE@@YGXPAVPFE@@@Z @ 0x2294EE
 * Callers:
 *     <none>
 * Callees:
 *     ?vDelete@PFEOBJ@@QAEXXZ @ 0xCE12E (-vDelete@PFEOBJ@@QAEXXZ.c)
 */

void __stdcall vDeletePFE(struct PFE *a1)
{
  PFEOBJ::vDelete((PFEOBJ *)&a1);
}
