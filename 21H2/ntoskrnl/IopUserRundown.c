/*
 * XREFs of IopUserRundown @ 0x1406E8220
 * Callers:
 *     <none>
 * Callees:
 *     IoFreeIrp @ 0x140348610 (IoFreeIrp.c)
 */

void __fastcall IopUserRundown(__int64 a1)
{
  IoFreeIrp((PIRP)(a1 - 120));
}
