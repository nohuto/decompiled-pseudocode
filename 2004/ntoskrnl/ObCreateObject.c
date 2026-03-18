/*
 * XREFs of ObCreateObject @ 0x14060ECE0
 * Callers:
 *     SepCreateTokenEx @ 0x14026E3A0 (SepCreateTokenEx.c)
 *     VrpHandleIoctlInitializeJobForVreg @ 0x1405C9A44 (VrpHandleIoctlInitializeJobForVreg.c)
 *     NtCreateWorkerFactory @ 0x14060D350 (NtCreateWorkerFactory.c)
 *     PspAllocateProcess @ 0x140610840 (PspAllocateProcess.c)
 *     SepFilterToken @ 0x140632E90 (SepFilterToken.c)
 *     NtCreateJobObject @ 0x1406570F0 (NtCreateJobObject.c)
 *     IopLoadDriver @ 0x140729340 (IopLoadDriver.c)
 *     EtwpSetCoverageSamplerInformation @ 0x1409443AC (EtwpSetCoverageSamplerInformation.c)
 *     ExpProfileCreate @ 0x140956F1C (ExpProfileCreate.c)
 *     IopInitializeBuiltinDriver @ 0x140A4EB10 (IopInitializeBuiltinDriver.c)
 *     MiSectionInitialization @ 0x140A533EC (MiSectionInitialization.c)
 *     CmpCreateRegistryRoot @ 0x140A59228 (CmpCreateRegistryRoot.c)
 * Callees:
 *     ObCreateObjectEx @ 0x140679FF0 (ObCreateObjectEx.c)
 */

__int64 __fastcall ObCreateObject(int a1, int a2, int a3, int a4)
{
  return ObCreateObjectEx(a1, a2, a3, a4);
}
