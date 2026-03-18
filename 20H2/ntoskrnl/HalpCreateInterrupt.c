/*
 * XREFs of HalpCreateInterrupt @ 0x1403A1E24
 * Callers:
 *     HalpInterruptSetIdtEntry @ 0x1403A1DEC (HalpInterruptSetIdtEntry.c)
 * Callees:
 *     KeConnectInterruptForHal @ 0x1403A1EE0 (KeConnectInterruptForHal.c)
 *     KeInitializeInterrupt @ 0x1403A1F50 (KeInitializeInterrupt.c)
 *     HalpAllocateKInterrupt @ 0x1403A1FD8 (HalpAllocateKInterrupt.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
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
