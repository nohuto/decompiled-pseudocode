/*
 * XREFs of KeSetImportanceDpc @ 0x14037F530
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall KeSetImportanceDpc(PRKDPC Dpc, KDPC_IMPORTANCE Importance)
{
  Dpc->Importance = Importance;
}
