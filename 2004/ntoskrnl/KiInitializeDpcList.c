/*
 * XREFs of KiInitializeDpcList @ 0x140360DA4
 * Callers:
 *     KiInitPrcb @ 0x140998E28 (KiInitPrcb.c)
 *     KiInitializeProcessor @ 0x14099B800 (KiInitializeProcessor.c)
 * Callees:
 *     <none>
 */

void __fastcall KiInitializeDpcList(_QWORD *a1)
{
  *a1 = 0LL;
  a1[1] = a1;
}
