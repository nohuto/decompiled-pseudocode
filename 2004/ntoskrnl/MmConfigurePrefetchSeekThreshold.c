/*
 * XREFs of MmConfigurePrefetchSeekThreshold @ 0x1407117E4
 * Callers:
 *     MiInitSystem @ 0x140A521D4 (MiInitSystem.c)
 * Callees:
 *     <none>
 */

void __fastcall MmConfigurePrefetchSeekThreshold(int a1)
{
  dword_140C4EABC = a1;
}
