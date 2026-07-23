/*
 * XREFs of MmConfigurePrefetchSeekThreshold @ 0x140622BCC
 * Callers:
 *     MiInitSystem @ 0x140A54E5C (MiInitSystem.c)
 * Callees:
 *     <none>
 */

void __fastcall MmConfigurePrefetchSeekThreshold(int a1)
{
  dword_140C4ECFC = a1;
}
