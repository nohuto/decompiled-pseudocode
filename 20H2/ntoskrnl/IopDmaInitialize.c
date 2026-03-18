/*
 * XREFs of IopDmaInitialize @ 0x1407977F8
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140A50C78 (IopInitializePlugPlayServices.c)
 * Callees:
 *     ArbInitializeArbiterInstance @ 0x140797D40 (ArbInitializeArbiterInstance.c)
 */

__int64 __fastcall IopDmaInitialize(__int64 a1, int a2)
{
  qword_140C44418 = (__int64)IopIrqUnpackRequirement;
  qword_140C44420 = (__int64)IopDmaPackResource;
  qword_140C44428 = (__int64)IopDmaUnpackResource;
  qword_140C44430 = (__int64)IopDmaScoreRequirement;
  qword_140C444B0 = (__int64)IopDmaOverrideConflict;
  return ArbInitializeArbiterInstance((unsigned int)&IopRootDmaArbiter, a2, 4, (unsigned int)L"RootDMA");
}
