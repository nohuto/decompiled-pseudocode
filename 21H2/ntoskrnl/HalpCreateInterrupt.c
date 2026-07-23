/*
 * XREFs of HalpCreateInterrupt @ 0x1403A2834
 * Callers:
 *     HalpInterruptSetIdtEntry @ 0x1403A27FC (HalpInterruptSetIdtEntry.c)
 * Callees:
 *     KeConnectInterruptForHal @ 0x1403A28F0 (KeConnectInterruptForHal.c)
 *     KeInitializeInterrupt @ 0x1403A2960 (KeInitializeInterrupt.c)
 *     HalpAllocateKInterrupt @ 0x1403A29E8 (HalpAllocateKInterrupt.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
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
