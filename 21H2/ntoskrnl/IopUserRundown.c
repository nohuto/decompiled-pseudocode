/*
 * XREFs of IopUserRundown @ 0x1406C09F0
 * Callers:
 *     <none>
 * Callees:
 *     IoFreeIrp @ 0x140353540 (IoFreeIrp.c)
 */

void __fastcall IopUserRundown(__int64 a1)
{
  IoFreeIrp((PIRP)(a1 - 120));
}
