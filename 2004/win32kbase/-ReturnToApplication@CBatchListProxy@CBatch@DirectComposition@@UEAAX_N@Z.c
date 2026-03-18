/*
 * XREFs of ?ReturnToApplication@CBatchListProxy@CBatch@DirectComposition@@UEAAX_N@Z @ 0x1C01D1800
 * Callers:
 *     <none>
 * Callees:
 *     ?ReturnToApplication@CBatch@DirectComposition@@QEAAX_N@Z @ 0x1C001CE4C (-ReturnToApplication@CBatch@DirectComposition@@QEAAX_N@Z.c)
 */

void __fastcall DirectComposition::CBatch::CBatchListProxy::ReturnToApplication(
        DirectComposition::CBatch **this,
        char a2)
{
  DirectComposition::CBatch::ReturnToApplication(this[1], a2);
}
