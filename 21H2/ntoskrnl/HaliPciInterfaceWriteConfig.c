/*
 * XREFs of HaliPciInterfaceWriteConfig @ 0x1403B3DD0
 * Callers:
 *     <none>
 * Callees:
 *     HalpPCIConfig @ 0x14023AB60 (HalpPCIConfig.c)
 */

__int64 __fastcall HaliPciInterfaceWriteConfig(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        void *a4,
        unsigned int a5,
        unsigned int a6)
{
  HalpPCIConfig((unsigned int *)(a2 >> 8), a2, a3, a4, a5, a6, 1);
  return a6;
}
