/*
 * XREFs of KiInitializeDpcList @ 0x1402520B4
 * Callers:
 *     KiInitPrcb @ 0x14099D788 (KiInitPrcb.c)
 *     KiInitializeProcessor @ 0x1409A0104 (KiInitializeProcessor.c)
 * Callees:
 *     <none>
 */

void __fastcall KiInitializeDpcList(_QWORD *a1)
{
  *a1 = 0LL;
  a1[1] = a1;
}
