/*
 * XREFs of ObCreateObject @ 0x1406D4AE0
 * Callers:
 *     SepCreateTokenEx @ 0x140201AA0 (SepCreateTokenEx.c)
 *     VrpHandleIoctlInitializeJobForVreg @ 0x1405D268C (VrpHandleIoctlInitializeJobForVreg.c)
 *     SepFilterToken @ 0x1405DB0FC (SepFilterToken.c)
 *     NtCreateWorkerFactory @ 0x1406D3E40 (NtCreateWorkerFactory.c)
 *     PspAllocateProcess @ 0x1406D6638 (PspAllocateProcess.c)
 *     NtCreateJobObject @ 0x14071EF90 (NtCreateJobObject.c)
 *     IopLoadDriver @ 0x140740868 (IopLoadDriver.c)
 *     EtwpSetCoverageSamplerInformation @ 0x14094793C (EtwpSetCoverageSamplerInformation.c)
 *     ExpProfileCreate @ 0x14095A55C (ExpProfileCreate.c)
 *     MiSectionInitialization @ 0x140A55074 (MiSectionInitialization.c)
 *     CmpCreateRegistryRoot @ 0x140A5AED4 (CmpCreateRegistryRoot.c)
 *     IopInitializeBuiltinDriver @ 0x140A5E618 (IopInitializeBuiltinDriver.c)
 * Callees:
 *     ObCreateObjectEx @ 0x140704810 (ObCreateObjectEx.c)
 */

__int64 __fastcall ObCreateObject(int a1, int a2, int a3, char a4)
{
  return ObCreateObjectEx(a1, a2, a3, a4);
}
