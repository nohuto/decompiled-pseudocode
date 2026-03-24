/*
 * XREFs of KiInitializeDpcList @ 0x1402D3E44
 * Callers:
 *     KiInitPrcb @ 0x14099C788 (KiInitPrcb.c)
 *     KiInitializeProcessor @ 0x14099F1D4 (KiInitializeProcessor.c)
 * Callees:
 *     <none>
 */

void __fastcall KiInitializeDpcList(_QWORD *a1)
{
  *a1 = 0LL;
  a1[1] = a1;
}
