/*
 * XREFs of MmConfigurePrefetchSeekThreshold @ 0x1406EBCBC
 * Callers:
 *     MiInitSystem @ 0x140B07C00 (MiInitSystem.c)
 * Callees:
 *     <none>
 */

void __fastcall MmConfigurePrefetchSeekThreshold(int a1)
{
  dword_140C531D4 = a1;
}
