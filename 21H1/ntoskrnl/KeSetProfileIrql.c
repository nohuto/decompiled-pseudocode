/*
 * XREFs of KeSetProfileIrql @ 0x140A36600
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall KeSetProfileIrql(char a1)
{
  KiProfileIrql = a1;
}
