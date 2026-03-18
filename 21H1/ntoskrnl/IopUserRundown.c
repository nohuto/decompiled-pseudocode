/*
 * XREFs of IopUserRundown @ 0x1406EA5D0
 * Callers:
 *     <none>
 * Callees:
 *     IoFreeIrp @ 0x1402541B0 (IoFreeIrp.c)
 */

void __fastcall IopUserRundown(__int64 a1)
{
  IoFreeIrp((PIRP)(a1 - 120));
}
