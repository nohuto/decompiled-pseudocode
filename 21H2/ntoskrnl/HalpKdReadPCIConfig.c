/*
 * XREFs of HalpKdReadPCIConfig @ 0x1403BD6F0
 * Callers:
 *     <none>
 * Callees:
 *     HaliPciInterfaceReadConfig @ 0x14022FC60 (HaliPciInterfaceReadConfig.c)
 */

__int64 __fastcall HalpKdReadPCIConfig(unsigned int a1, unsigned int a2, _WORD *a3, int a4, unsigned int a5)
{
  return HaliPciInterfaceReadConfig(0LL, a1, a2, a3, a4, a5);
}
