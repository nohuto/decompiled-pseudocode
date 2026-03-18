/*
 * XREFs of IopBusNumberInitialize @ 0x1407A9018
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140A505F8 (IopInitializePlugPlayServices.c)
 * Callees:
 *     ArbInitializeArbiterInstance @ 0x1407A9480 (ArbInitializeArbiterInstance.c)
 */

__int64 __fastcall IopBusNumberInitialize(__int64 a1, int a2)
{
  qword_140C44138 = (__int64)IopBusNumberUnpackRequirement;
  qword_140C44140 = (__int64)IopBusNumberPackResource;
  qword_140C44148 = (__int64)IopBusNumberUnpackResource;
  qword_140C44150 = (__int64)IopBusNumberScoreRequirement;
  return ArbInitializeArbiterInstance((unsigned int)&IopRootBusNumberArbiter, a2, 6, (unsigned int)L"RootBusNumber");
}
