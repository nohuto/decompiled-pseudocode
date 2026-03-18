/*
 * XREFs of IopBusNumberInitialize @ 0x1407978D8
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140A50C78 (IopInitializePlugPlayServices.c)
 * Callees:
 *     ArbInitializeArbiterInstance @ 0x140797D40 (ArbInitializeArbiterInstance.c)
 */

__int64 __fastcall IopBusNumberInitialize(__int64 a1, int a2)
{
  qword_140C44158 = (__int64)IopBusNumberUnpackRequirement;
  qword_140C44160 = (__int64)IopBusNumberPackResource;
  qword_140C44168 = (__int64)IopBusNumberUnpackResource;
  qword_140C44170 = (__int64)IopBusNumberScoreRequirement;
  return ArbInitializeArbiterInstance((unsigned int)&IopRootBusNumberArbiter, a2, 6, (unsigned int)L"RootBusNumber");
}
