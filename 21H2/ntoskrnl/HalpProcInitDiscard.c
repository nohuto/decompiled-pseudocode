/*
 * XREFs of HalpProcInitDiscard @ 0x140A394E4
 * Callers:
 *     HalpProcInitSystem @ 0x14099B4C0 (HalpProcInitSystem.c)
 * Callees:
 *     HalpProcGetFeatureBits @ 0x1403A803C (HalpProcGetFeatureBits.c)
 *     HalpMcUpdateInitialize @ 0x140790E20 (HalpMcUpdateInitialize.c)
 */

__int64 __fastcall HalpProcInitDiscard(__int64 a1)
{
  off_140C00650[0] = (__int64 (__fastcall *)())HalpLoadMicrocode;
  off_140C00658[0] = HalpUnloadMicrocode;
  off_140C00660[0] = HalpMcUpdatePostUpdate;
  HalpMcUpdateInitialize(a1, 0LL);
  off_140C00740[0] = HalpProcessorPrepareForIdle;
  off_140C00750 = (__int64 (__fastcall *)())HalpProcessorResumeFromIdle;
  HalpFeatureBits = HalpProcGetFeatureBits();
  return 0LL;
}
