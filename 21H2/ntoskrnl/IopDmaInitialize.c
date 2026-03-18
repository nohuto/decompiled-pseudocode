/*
 * XREFs of IopDmaInitialize @ 0x1408390A0
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140B0046C (IopInitializePlugPlayServices.c)
 * Callees:
 *     ArbInitializeArbiterInstance @ 0x14083A794 (ArbInitializeArbiterInstance.c)
 */

__int64 __fastcall IopDmaInitialize(__int64 a1, int a2)
{
  qword_140C45A58 = (__int64)IopIrqUnpackRequirement;
  qword_140C45A60 = (__int64)IopDmaPackResource;
  qword_140C45A68 = (__int64)IopDmaUnpackResource;
  qword_140C45A70 = (__int64)IopDmaScoreRequirement;
  qword_140C45AF0 = (__int64)IopDmaOverrideConflict;
  return ArbInitializeArbiterInstance((unsigned int)&IopRootDmaArbiter, a2, 4, (unsigned int)L"RootDMA");
}
