/*
 * XREFs of IopBusNumberInitialize @ 0x1407A1FF8
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140A53280 (IopInitializePlugPlayServices.c)
 * Callees:
 *     ArbInitializeArbiterInstance @ 0x1407A2460 (ArbInitializeArbiterInstance.c)
 */

__int64 __fastcall IopBusNumberInitialize(__int64 a1, int a2)
{
  qword_140C442F8 = (__int64)IopBusNumberUnpackRequirement;
  qword_140C44300 = (__int64)IopBusNumberPackResource;
  qword_140C44308 = (__int64)IopBusNumberUnpackResource;
  qword_140C44310 = (__int64)IopBusNumberScoreRequirement;
  return ArbInitializeArbiterInstance((unsigned int)&IopRootBusNumberArbiter, a2, 6, (unsigned int)L"RootBusNumber");
}
