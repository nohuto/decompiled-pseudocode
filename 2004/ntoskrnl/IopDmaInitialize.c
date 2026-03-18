/*
 * XREFs of IopDmaInitialize @ 0x1407A8F38
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140A505F8 (IopInitializePlugPlayServices.c)
 * Callees:
 *     ArbInitializeArbiterInstance @ 0x1407A9480 (ArbInitializeArbiterInstance.c)
 */

__int64 __fastcall IopDmaInitialize(__int64 a1, int a2)
{
  qword_140C443F8 = (__int64)IopIrqUnpackRequirement;
  qword_140C44400 = (__int64)IopDmaPackResource;
  qword_140C44408 = (__int64)IopDmaUnpackResource;
  qword_140C44410 = (__int64)IopDmaScoreRequirement;
  qword_140C44490 = (__int64)IopDmaOverrideConflict;
  return ArbInitializeArbiterInstance((unsigned int)&IopRootDmaArbiter, a2, 4, (unsigned int)L"RootDMA");
}
