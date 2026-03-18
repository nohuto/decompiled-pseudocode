/*
 * XREFs of MmConfigurePrefetchSeekThreshold @ 0x1406EDE54
 * Callers:
 *     MiInitSystem @ 0x140A4C4D4 (MiInitSystem.c)
 * Callees:
 *     <none>
 */

void __fastcall MmConfigurePrefetchSeekThreshold(int a1)
{
  dword_140C4EBFC = a1;
}
