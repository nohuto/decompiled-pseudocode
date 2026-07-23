/*
 * XREFs of IopDmaInitialize @ 0x1407A1F18
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140A53280 (IopInitializePlugPlayServices.c)
 * Callees:
 *     ArbInitializeArbiterInstance @ 0x1407A2460 (ArbInitializeArbiterInstance.c)
 */

__int64 __fastcall IopDmaInitialize(__int64 a1, int a2)
{
  qword_140C445B8 = (__int64)IopIrqUnpackRequirement;
  qword_140C445C0 = (__int64)IopDmaPackResource;
  qword_140C445C8 = (__int64)IopDmaUnpackResource;
  qword_140C445D0 = (__int64)IopDmaScoreRequirement;
  qword_140C44650 = (__int64)IopDmaOverrideConflict;
  return ArbInitializeArbiterInstance((unsigned int)&IopRootDmaArbiter, a2, 4, (unsigned int)L"RootDMA");
}
