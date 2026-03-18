/*
 * XREFs of HalpProcInitDiscard @ 0x140AF8908
 * Callers:
 *     HalpProcInitSystem @ 0x140A54E70 (HalpProcInitSystem.c)
 * Callees:
 *     HalpProcGetFeatureBits @ 0x1403BAD80 (HalpProcGetFeatureBits.c)
 *     HalpMcUpdateInitialize @ 0x14082481C (HalpMcUpdateInitialize.c)
 */

__int64 __fastcall HalpProcInitDiscard(__int64 a1)
{
  off_140C01CA0[0] = (__int64 (__fastcall *)())HalpLoadMicrocode;
  off_140C01CA8[0] = HalpUnloadMicrocode;
  off_140C01CB0[0] = HalpMcUpdatePostUpdate;
  HalpMcUpdateInitialize(a1, 0LL);
  off_140C01D90[0] = HalpProcessorPrepareForIdle;
  off_140C01DA0 = (__int64 (__fastcall *)())HalpProcessorResumeFromIdle;
  HalpFeatureBits = HalpProcGetFeatureBits();
  return 0LL;
}
