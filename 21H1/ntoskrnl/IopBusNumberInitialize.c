/*
 * XREFs of IopBusNumberInitialize @ 0x1407892C0
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140A4AB7C (IopInitializePlugPlayServices.c)
 * Callees:
 *     ArbInitializeArbiterInstance @ 0x140789728 (ArbInitializeArbiterInstance.c)
 */

__int64 __fastcall IopBusNumberInitialize(__int64 a1, int a2)
{
  qword_140C44318 = (__int64)IopBusNumberUnpackRequirement;
  qword_140C44320 = (__int64)IopBusNumberPackResource;
  qword_140C44328 = (__int64)IopBusNumberUnpackResource;
  qword_140C44330 = (__int64)IopBusNumberScoreRequirement;
  return ArbInitializeArbiterInstance((unsigned int)&IopRootBusNumberArbiter, a2, 6, (unsigned int)L"RootBusNumber");
}
