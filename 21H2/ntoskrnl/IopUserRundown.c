/*
 * XREFs of IopUserRundown @ 0x14061F900
 * Callers:
 *     <none>
 * Callees:
 *     IoFreeIrp @ 0x14035E290 (IoFreeIrp.c)
 */

void __fastcall IopUserRundown(__int64 a1)
{
  IoFreeIrp((PIRP)(a1 - 120));
}
