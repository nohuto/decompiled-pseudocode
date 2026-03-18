/*
 * XREFs of IopUserRundown @ 0x14070E260
 * Callers:
 *     <none>
 * Callees:
 *     IoFreeIrp @ 0x140290A30 (IoFreeIrp.c)
 */

void __fastcall IopUserRundown(__int64 a1)
{
  IoFreeIrp((PIRP)(a1 - 120));
}
