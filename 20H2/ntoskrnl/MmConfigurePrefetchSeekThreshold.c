/*
 * XREFs of MmConfigurePrefetchSeekThreshold @ 0x1406E432C
 * Callers:
 *     MiInitSystem @ 0x140A52854 (MiInitSystem.c)
 * Callees:
 *     <none>
 */

void __fastcall MmConfigurePrefetchSeekThreshold(int a1)
{
  dword_140C4EB3C = a1;
}
