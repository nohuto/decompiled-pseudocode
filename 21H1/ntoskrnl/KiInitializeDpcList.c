/*
 * XREFs of KiInitializeDpcList @ 0x1403232D8
 * Callers:
 *     KiInitPrcb @ 0x140997DC8 (KiInitPrcb.c)
 *     KiInitializeProcessor @ 0x14099A064 (KiInitializeProcessor.c)
 * Callees:
 *     <none>
 */

void __fastcall KiInitializeDpcList(_QWORD *a1)
{
  *a1 = 0LL;
  a1[1] = a1;
}
