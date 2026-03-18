/*
 * XREFs of IopUserRundown @ 0x1406E0650
 * Callers:
 *     <none>
 * Callees:
 *     IoFreeIrp @ 0x140218F40 (IoFreeIrp.c)
 */

void __fastcall IopUserRundown(__int64 a1)
{
  IoFreeIrp((PIRP)(a1 - 120));
}
