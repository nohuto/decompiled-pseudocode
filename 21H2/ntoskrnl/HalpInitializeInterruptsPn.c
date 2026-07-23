/*
 * XREFs of HalpInitializeInterruptsPn @ 0x1403A9F48
 * Callers:
 *     HalpInterruptInitSystem @ 0x14099C890 (HalpInterruptInitSystem.c)
 * Callees:
 *     HalpInterruptSetIdtEntry @ 0x1403A27FC (HalpInterruptSetIdtEntry.c)
 *     HalpInterruptReinitializeThisProcessor @ 0x1403A3888 (HalpInterruptReinitializeThisProcessor.c)
 *     HalpInterruptInitializeIpis @ 0x1403AA05C (HalpInterruptInitializeIpis.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 */

__int64 __fastcall HalpInitializeInterruptsPn(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r9
  __int64 v5; // r9
  __int64 v6; // r9
  __int64 v7; // r9
  __int64 v8; // r9
  __int64 v9; // r9
  __int64 v10; // r9
  __int64 result; // rax

  *(_QWORD *)(HalpInterruptProcessorPcr + 8LL * KeGetPcr()->Prcb.Number) = KeGetPcr();
  HalpInterruptSetIdtEntry(0x35u, (int)HalpInterruptDeferredErrorService, 5, a4, -1LL);
  HalpInterruptSetIdtEntry(0x36u, (int)HalpInterruptDeferredErrorService, 5, v4, -1LL);
  HalpInterruptSetIdtEntry(0xDFu, (int)HalpInterruptSpuriousService, 15, v5, -2LL);
  HalpInterruptSetIdtEntry(0xD8u, (int)HalpInterruptStubService, 15, v6, -1LL);
  HalpInterruptSetIdtEntry(0xD7u, (int)HalpInterruptRebootService, 15, v7, -1LL);
  HalpInterruptSetIdtEntry(0xE2u, (int)HalpInterruptLocalErrorService, 15, v8, -1LL);
  HalpInterruptSetIdtEntry(0xFEu, (int)HalpPerfInterrupt, 15, v9, -3LL);
  HalpInterruptSetIdtEntry(0xE3u, (int)HalpInterruptDeferredRecoveryService, 14, v10, -1LL);
  HalpInterruptReinitializeThisProcessor();
  result = HalpInterruptInitializeIpis();
  if ( (int)result < 0 )
    KeBugCheckEx(0x5Cu, 0x200uLL, HalpInterruptLastProblem, 1uLL, (int)result);
  return result;
}
