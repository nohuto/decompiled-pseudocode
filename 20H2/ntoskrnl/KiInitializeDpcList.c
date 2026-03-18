/*
 * XREFs of KiInitializeDpcList @ 0x140331BA4
 * Callers:
 *     KiInitPrcb @ 0x14099EE68 (KiInitPrcb.c)
 *     KiInitializeProcessor @ 0x1409A1900 (KiInitializeProcessor.c)
 * Callees:
 *     <none>
 */

void __fastcall KiInitializeDpcList(_QWORD *a1)
{
  *a1 = 0LL;
  a1[1] = a1;
}
