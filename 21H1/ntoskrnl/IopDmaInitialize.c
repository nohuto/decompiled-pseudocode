/*
 * XREFs of IopDmaInitialize @ 0x1407891E0
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140A4AB7C (IopInitializePlugPlayServices.c)
 * Callees:
 *     ArbInitializeArbiterInstance @ 0x140789728 (ArbInitializeArbiterInstance.c)
 */

__int64 __fastcall IopDmaInitialize(__int64 a1, int a2)
{
  qword_140C445D8 = (__int64)IopIrqUnpackRequirement;
  qword_140C445E0 = (__int64)IopDmaPackResource;
  qword_140C445E8 = (__int64)IopDmaUnpackResource;
  qword_140C445F0 = (__int64)IopDmaScoreRequirement;
  qword_140C44670 = (__int64)IopDmaOverrideConflict;
  return ArbInitializeArbiterInstance((unsigned int)&IopRootDmaArbiter, a2, 4, (unsigned int)L"RootDMA");
}
