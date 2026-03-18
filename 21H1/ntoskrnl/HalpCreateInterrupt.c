/*
 * XREFs of HalpCreateInterrupt @ 0x14039F1C4
 * Callers:
 *     HalpInterruptSetIdtEntry @ 0x14039F18C (HalpInterruptSetIdtEntry.c)
 * Callees:
 *     KeConnectInterruptForHal @ 0x14039F280 (KeConnectInterruptForHal.c)
 *     KeInitializeInterrupt @ 0x14039F2F0 (KeInitializeInterrupt.c)
 *     HalpAllocateKInterrupt @ 0x14039F378 (HalpAllocateKInterrupt.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 */

__int64 __fastcall HalpCreateInterrupt(int a1, int a2, char a3, __int64 a4, __int64 a5)
{
  unsigned int Number; // ebp
  __int64 KInterrupt; // rbx

  Number = KeGetPcr()->Prcb.Number;
  KInterrupt = HalpAllocateKInterrupt(Number);
  if ( !KInterrupt )
    KeBugCheckEx(0xACu, 0x120uLL, 3uLL, (ULONG_PTR)"minkernel\\hals\\lib\\interrupts\\common\\kintrupt.c", 0x191uLL);
  KeInitializeInterrupt(KInterrupt, a1, 0, 0, 0, a5, a2, a3, a3, 1, 0, Number);
  KeConnectInterruptForHal(KInterrupt);
  return KInterrupt;
}
